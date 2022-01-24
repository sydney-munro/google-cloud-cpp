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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/internal/domain_mappings_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/appengine/v1/appengine.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DomainMappingsMetadata::DomainMappingsMetadata(
    std::shared_ptr<DomainMappingsStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::appengine::v1::ListDomainMappingsResponse>
DomainMappingsMetadata::ListDomainMappings(
    grpc::ClientContext& context,
    google::appengine::v1::ListDomainMappingsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListDomainMappings(context, request);
}

StatusOr<google::appengine::v1::DomainMapping>
DomainMappingsMetadata::GetDomainMapping(
    grpc::ClientContext& context,
    google::appengine::v1::GetDomainMappingRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetDomainMapping(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DomainMappingsMetadata::AsyncCreateDomainMapping(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::appengine::v1::CreateDomainMappingRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateDomainMapping(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DomainMappingsMetadata::AsyncUpdateDomainMapping(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::appengine::v1::UpdateDomainMappingRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUpdateDomainMapping(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DomainMappingsMetadata::AsyncDeleteDomainMapping(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::appengine::v1::DeleteDomainMappingRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteDomainMapping(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DomainMappingsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> DomainMappingsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void DomainMappingsMetadata::SetMetadata(grpc::ClientContext& context,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void DomainMappingsMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google
