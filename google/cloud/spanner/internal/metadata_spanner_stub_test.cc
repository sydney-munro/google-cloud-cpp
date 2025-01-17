// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/spanner/internal/metadata_spanner_stub.h"
#include "google/cloud/spanner/database.h"
#include "google/cloud/spanner/testing/mock_spanner_stub.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/testing_util/status_matchers.h"
#include "google/cloud/testing_util/validate_metadata.h"
#include <gmock/gmock.h>
#include <grpcpp/grpcpp.h>

namespace google {
namespace cloud {
namespace spanner_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

using ::google::cloud::testing_util::ValidateMetadataFixture;
using ::testing::Contains;
using ::testing::Not;
using ::testing::Pair;
namespace spanner_proto = ::google::spanner::v1;

// This ugly macro and the supporting template member function refactor most
// of this test to one-liners.
#define SESSION_TEST(X, Y) \
  ExpectSession(EXPECT_CALL(*mock_, X), Y(), #X, &MetadataSpannerStub::X)

class MetadataSpannerStubTest : public ::testing::Test {
 protected:
  void SetUp() override {
    mock_ = std::make_shared<spanner_testing::MockSpannerStub>();
  }

  void TearDown() override {}

  static Status TransientError() {
    return Status(StatusCode::kUnavailable, "try-again");
  }

  template <typename T>
  static void ExpectTransientError(StatusOr<T> const& status) {
    EXPECT_EQ(TransientError(), status.status());
  }

  static void ExpectTransientError(Status const& status) {
    EXPECT_EQ(TransientError(), status);
  }

  Status IsContextMDValid(grpc::ClientContext& context,
                          std::string const& method) {
    return validate_metadata_fixture_.IsContextMDValid(
        context, method, google::cloud::internal::ApiClientHeader(),
        db_.FullName());
  }

  std::multimap<std::string, std::string> GetMetadata(
      grpc::ClientContext& context) {
    return validate_metadata_fixture_.GetMetadata(context);
  }

  template <typename MockCall, typename Request, typename MemberFunction>
  void ExpectSession(MockCall& call, Request const&,
                     std::string const& rpc_name,
                     MemberFunction member_function) {
    call.WillOnce(
        [this, rpc_name](grpc::ClientContext& context, Request const&) {
          EXPECT_STATUS_OK(IsContextMDValid(
              context, "google.spanner.v1.Spanner." + rpc_name));
          return TransientError();
        });

    MetadataSpannerStub stub(mock_, db_.FullName());
    grpc::ClientContext context;
    Request request;
    request.set_session(
        google::cloud::spanner::Database(
            google::cloud::spanner::Instance(
                google::cloud::Project("test-project-id"), "test-instance-id"),
            "test-database-id")
            .FullName() +
        "/sessions/test-session-id");
    auto result = (stub.*member_function)(context, request);
    ExpectTransientError(result);
  }

  std::shared_ptr<spanner_testing::MockSpannerStub> mock_;
  spanner::Database db_{"test-project", "test-instance", "test-database"};

 private:
  ValidateMetadataFixture validate_metadata_fixture_;
};

TEST_F(MetadataSpannerStubTest, UserProject) {
  EXPECT_CALL(*mock_, CreateSession)
      .WillOnce([this](grpc::ClientContext& context,
                       spanner_proto::CreateSessionRequest const&) {
        auto metadata = GetMetadata(context);
        EXPECT_THAT(metadata,
                    Not(Contains(Pair("x-goog-user-project", ::testing::_))));
        return TransientError();
      })
      .WillOnce([this](grpc::ClientContext& context,
                       spanner_proto::CreateSessionRequest const&) {
        auto metadata = GetMetadata(context);
        EXPECT_THAT(metadata,
                    Contains(Pair("x-goog-user-project", "test-project")));
        return TransientError();
      });

  MetadataSpannerStub stub(mock_, db_.FullName());
  spanner_proto::CreateSessionRequest request;
  request.set_database(db_.FullName());
  {
    internal::OptionsSpan span(Options{});
    grpc::ClientContext context;
    auto status = stub.CreateSession(context, request);
    EXPECT_EQ(TransientError(), status.status());
  }

  {
    internal::OptionsSpan span(
        Options{}.set<UserProjectOption>("test-project"));
    grpc::ClientContext context;
    auto status = stub.CreateSession(context, request);
    EXPECT_EQ(TransientError(), status.status());
  }
}

TEST_F(MetadataSpannerStubTest, CreateSession) {
  EXPECT_CALL(*mock_, CreateSession)
      .WillOnce([this](grpc::ClientContext& context,
                       spanner_proto::CreateSessionRequest const&) {
        EXPECT_STATUS_OK(IsContextMDValid(
            context, "google.spanner.v1.Spanner.CreateSession"));
        return TransientError();
      });

  MetadataSpannerStub stub(mock_, db_.FullName());
  grpc::ClientContext context;
  spanner_proto::CreateSessionRequest request;
  request.set_database(db_.FullName());
  auto status = stub.CreateSession(context, request);
  EXPECT_EQ(TransientError(), status.status());
}

TEST_F(MetadataSpannerStubTest, BatchCreateSessions) {
  EXPECT_CALL(*mock_, BatchCreateSessions)
      .WillOnce([this](grpc::ClientContext& context,
                       spanner_proto::BatchCreateSessionsRequest const&) {
        EXPECT_STATUS_OK(IsContextMDValid(
            context, "google.spanner.v1.Spanner.BatchCreateSessions"));
        return TransientError();
      });

  MetadataSpannerStub stub(mock_, db_.FullName());
  grpc::ClientContext context;
  spanner_proto::BatchCreateSessionsRequest request;
  request.set_database(db_.FullName());
  request.set_session_count(3);
  auto status = stub.BatchCreateSessions(context, request);
  EXPECT_EQ(TransientError(), status.status());
}

TEST_F(MetadataSpannerStubTest, GetSession) {
  EXPECT_CALL(*mock_, GetSession)
      .WillOnce([this](grpc::ClientContext& context,
                       spanner_proto::GetSessionRequest const&) {
        EXPECT_STATUS_OK(
            IsContextMDValid(context, "google.spanner.v1.Spanner.GetSession"));
        return TransientError();
      });

  MetadataSpannerStub stub(mock_, db_.FullName());
  grpc::ClientContext context;
  spanner_proto::GetSessionRequest request;
  request.set_name(
      google::cloud::spanner::Database(
          google::cloud::spanner::Instance(
              google::cloud::Project("test-project-id"), "test-instance-id"),
          "test-database-id")
          .FullName() +
      "/sessions/test-session-id");
  auto status = stub.GetSession(context, request);
  EXPECT_EQ(TransientError(), status.status());
}

TEST_F(MetadataSpannerStubTest, ListSessions) {
  EXPECT_CALL(*mock_, ListSessions)
      .WillOnce([this](grpc::ClientContext& context,
                       spanner_proto::ListSessionsRequest const&) {
        EXPECT_STATUS_OK(IsContextMDValid(
            context, "google.spanner.v1.Spanner.ListSessions"));
        return TransientError();
      });

  MetadataSpannerStub stub(mock_, db_.FullName());
  grpc::ClientContext context;
  spanner_proto::ListSessionsRequest request;
  request.set_database(db_.FullName());
  auto status = stub.ListSessions(context, request);
  EXPECT_EQ(TransientError(), status.status());
}

TEST_F(MetadataSpannerStubTest, DeleteSession) {
  EXPECT_CALL(*mock_, DeleteSession)
      .WillOnce([this](grpc::ClientContext& context,
                       spanner_proto::DeleteSessionRequest const&) {
        EXPECT_STATUS_OK(IsContextMDValid(
            context, "google.spanner.v1.Spanner.DeleteSession"));
        return TransientError();
      });

  MetadataSpannerStub stub(mock_, db_.FullName());
  grpc::ClientContext context;
  spanner_proto::DeleteSessionRequest request;
  request.set_name(
      google::cloud::spanner::Database(
          google::cloud::spanner::Instance(
              google::cloud::Project("test-project-id"), "test-instance-id"),
          "test-database-id")
          .FullName() +
      "/sessions/test-session-id");
  auto status = stub.DeleteSession(context, request);
  EXPECT_EQ(TransientError(), status);
}

TEST_F(MetadataSpannerStubTest, ExecuteSql) {
  SESSION_TEST(ExecuteSql, spanner_proto::ExecuteSqlRequest);
}

TEST_F(MetadataSpannerStubTest, ExecuteStreamingSql) {
  EXPECT_CALL(*mock_, ExecuteStreamingSql)
      .WillOnce([this](grpc::ClientContext& context,
                       spanner_proto::ExecuteSqlRequest const&) {
        EXPECT_STATUS_OK(IsContextMDValid(
            context, "google.spanner.v1.Spanner.ExecuteStreamingSql"));
        return std::unique_ptr<
            grpc::ClientReaderInterface<spanner_proto::PartialResultSet>>{};
      });

  MetadataSpannerStub stub(mock_, db_.FullName());
  grpc::ClientContext context;
  spanner_proto::ExecuteSqlRequest request;
  request.set_session(
      google::cloud::spanner::Database(
          google::cloud::spanner::Instance(
              google::cloud::Project("test-project-id"), "test-instance-id"),
          "test-database-id")
          .FullName() +
      "/sessions/test-session-id");
  auto result = stub.ExecuteStreamingSql(context, request);
  EXPECT_FALSE(result);
}

TEST_F(MetadataSpannerStubTest, ExecuteBatchDml) {
  SESSION_TEST(ExecuteBatchDml, spanner_proto::ExecuteBatchDmlRequest);
}

TEST_F(MetadataSpannerStubTest, StreamingRead) {
  EXPECT_CALL(*mock_, StreamingRead)
      .WillOnce([this](grpc::ClientContext& context,
                       spanner_proto::ReadRequest const&) {
        EXPECT_STATUS_OK(IsContextMDValid(
            context, "google.spanner.v1.Spanner.StreamingRead"));
        return std::unique_ptr<
            grpc::ClientReaderInterface<spanner_proto::PartialResultSet>>{};
      });

  MetadataSpannerStub stub(mock_, db_.FullName());
  grpc::ClientContext context;
  spanner_proto::ReadRequest request;
  request.set_session(
      google::cloud::spanner::Database(
          google::cloud::spanner::Instance(
              google::cloud::Project("test-project-id"), "test-instance-id"),
          "test-database-id")
          .FullName() +
      "/sessions/test-session-id");
  auto result = stub.StreamingRead(context, request);
  EXPECT_FALSE(result);
}

TEST_F(MetadataSpannerStubTest, BeginTransaction) {
  SESSION_TEST(BeginTransaction, spanner_proto::BeginTransactionRequest);
}

TEST_F(MetadataSpannerStubTest, Commit) {
  SESSION_TEST(Commit, spanner_proto::CommitRequest);
}

TEST_F(MetadataSpannerStubTest, Rollback) {
  SESSION_TEST(Rollback, spanner_proto::RollbackRequest);
}

TEST_F(MetadataSpannerStubTest, PartitionQuery) {
  SESSION_TEST(PartitionQuery, spanner_proto::PartitionQueryRequest);
}

TEST_F(MetadataSpannerStubTest, PartitionRead) {
  SESSION_TEST(PartitionRead, spanner_proto::PartitionReadRequest);
}

}  // namespace
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_internal
}  // namespace cloud
}  // namespace google
