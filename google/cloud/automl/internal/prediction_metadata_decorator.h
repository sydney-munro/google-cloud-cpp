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
// source: google/cloud/automl/v1/prediction_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_INTERNAL_PREDICTION_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_INTERNAL_PREDICTION_METADATA_DECORATOR_H

#include "google/cloud/automl/internal/prediction_stub.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace automl_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PredictionServiceMetadata : public PredictionServiceStub {
 public:
  ~PredictionServiceMetadata() override = default;
  explicit PredictionServiceMetadata(
      std::shared_ptr<PredictionServiceStub> child);

  StatusOr<google::cloud::automl::v1::PredictResponse> Predict(
      grpc::ClientContext& context,
      google::cloud::automl::v1::PredictRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchPredict(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::automl::v1::BatchPredictRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<PredictionServiceStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_INTERNAL_PREDICTION_METADATA_DECORATOR_H
