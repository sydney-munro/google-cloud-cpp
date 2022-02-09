// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/bigquery/connection/v1/connection.proto

#include "google/cloud/bigquery/internal/connection_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/connection/v1/connection.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConnectionServiceLogging::ConnectionServiceLogging(
    std::shared_ptr<ConnectionServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceLogging::CreateConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::CreateConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::connection::v1::
                 CreateConnectionRequest const& request) {
        return child_->CreateConnection(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceLogging::GetConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::GetConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::bigquery::connection::v1::GetConnectionRequest const&
              request) { return child_->GetConnection(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::connection::v1::ListConnectionsResponse>
ConnectionServiceLogging::ListConnections(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::ListConnectionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::bigquery::connection::v1::ListConnectionsRequest const&
              request) { return child_->ListConnections(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceLogging::UpdateConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::UpdateConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::connection::v1::
                 UpdateConnectionRequest const& request) {
        return child_->UpdateConnection(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status ConnectionServiceLogging::DeleteConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::DeleteConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::connection::v1::
                 DeleteConnectionRequest const& request) {
        return child_->DeleteConnection(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> ConnectionServiceLogging::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> ConnectionServiceLogging::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ConnectionServiceLogging::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google