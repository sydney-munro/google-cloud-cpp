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
// source: google/api/servicemanagement/v1/servicemanager.proto

#include "google/cloud/servicemanagement/internal/service_manager_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/api/servicemanagement/v1/servicemanager.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace servicemanagement_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceManagerMetadata::ServiceManagerMetadata(
    std::shared_ptr<ServiceManagerStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::api::servicemanagement::v1::ListServicesResponse>
ServiceManagerMetadata::ListServices(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::ListServicesRequest const& request) {
  SetMetadata(context, {});
  return child_->ListServices(context, request);
}

StatusOr<google::api::servicemanagement::v1::ManagedService>
ServiceManagerMetadata::GetService(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GetServiceRequest const& request) {
  SetMetadata(context, {});
  return child_->GetService(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerMetadata::AsyncCreateService(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::api::servicemanagement::v1::CreateServiceRequest const& request) {
  SetMetadata(*context, {});
  return child_->AsyncCreateService(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerMetadata::AsyncDeleteService(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::api::servicemanagement::v1::DeleteServiceRequest const& request) {
  SetMetadata(*context, {});
  return child_->AsyncDeleteService(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerMetadata::AsyncUndeleteService(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::api::servicemanagement::v1::UndeleteServiceRequest const& request) {
  SetMetadata(*context, {});
  return child_->AsyncUndeleteService(cq, std::move(context), request);
}

StatusOr<google::api::servicemanagement::v1::ListServiceConfigsResponse>
ServiceManagerMetadata::ListServiceConfigs(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::ListServiceConfigsRequest const&
        request) {
  SetMetadata(context, {});
  return child_->ListServiceConfigs(context, request);
}

StatusOr<google::api::Service> ServiceManagerMetadata::GetServiceConfig(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GetServiceConfigRequest const&
        request) {
  SetMetadata(context, {});
  return child_->GetServiceConfig(context, request);
}

StatusOr<google::api::Service> ServiceManagerMetadata::CreateServiceConfig(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::CreateServiceConfigRequest const&
        request) {
  SetMetadata(context, {});
  return child_->CreateServiceConfig(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerMetadata::AsyncSubmitConfigSource(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
        request) {
  SetMetadata(*context, {});
  return child_->AsyncSubmitConfigSource(cq, std::move(context), request);
}

StatusOr<google::api::servicemanagement::v1::ListServiceRolloutsResponse>
ServiceManagerMetadata::ListServiceRollouts(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::ListServiceRolloutsRequest const&
        request) {
  SetMetadata(context, {});
  return child_->ListServiceRollouts(context, request);
}

StatusOr<google::api::servicemanagement::v1::Rollout>
ServiceManagerMetadata::GetServiceRollout(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GetServiceRolloutRequest const&
        request) {
  SetMetadata(context, {});
  return child_->GetServiceRollout(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerMetadata::AsyncCreateServiceRollout(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
        request) {
  SetMetadata(*context, {});
  return child_->AsyncCreateServiceRollout(cq, std::move(context), request);
}

StatusOr<google::api::servicemanagement::v1::GenerateConfigReportResponse>
ServiceManagerMetadata::GenerateConfigReport(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GenerateConfigReportRequest const&
        request) {
  SetMetadata(context, {});
  return child_->GenerateConfigReport(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerMetadata::AsyncEnableService(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::api::servicemanagement::v1::EnableServiceRequest const& request) {
  SetMetadata(*context, {});
  return child_->AsyncEnableService(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerMetadata::AsyncDisableService(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::api::servicemanagement::v1::DisableServiceRequest const& request) {
  SetMetadata(*context, {});
  return child_->AsyncDisableService(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ServiceManagerMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void ServiceManagerMetadata::SetMetadata(grpc::ClientContext& context,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ServiceManagerMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicemanagement_internal
}  // namespace cloud
}  // namespace google