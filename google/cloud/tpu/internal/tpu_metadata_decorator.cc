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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#include "google/cloud/tpu/internal/tpu_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/tpu/v1/cloud_tpu.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace tpu_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TpuMetadata::TpuMetadata(std::shared_ptr<TpuStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::tpu::v1::ListNodesResponse> TpuMetadata::ListNodes(
    grpc::ClientContext& context,
    google::cloud::tpu::v1::ListNodesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListNodes(context, request);
}

StatusOr<google::cloud::tpu::v1::Node> TpuMetadata::GetNode(
    grpc::ClientContext& context,
    google::cloud::tpu::v1::GetNodeRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetNode(context, request);
}

future<StatusOr<google::longrunning::Operation>> TpuMetadata::AsyncCreateNode(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v1::CreateNodeRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateNode(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>> TpuMetadata::AsyncDeleteNode(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v1::DeleteNodeRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteNode(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>> TpuMetadata::AsyncReimageNode(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v1::ReimageNodeRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncReimageNode(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>> TpuMetadata::AsyncStopNode(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v1::StopNodeRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncStopNode(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>> TpuMetadata::AsyncStartNode(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v1::StartNodeRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncStartNode(cq, std::move(context), request);
}

StatusOr<google::cloud::tpu::v1::ListTensorFlowVersionsResponse>
TpuMetadata::ListTensorFlowVersions(
    grpc::ClientContext& context,
    google::cloud::tpu::v1::ListTensorFlowVersionsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListTensorFlowVersions(context, request);
}

StatusOr<google::cloud::tpu::v1::TensorFlowVersion>
TpuMetadata::GetTensorFlowVersion(
    grpc::ClientContext& context,
    google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetTensorFlowVersion(context, request);
}

StatusOr<google::cloud::tpu::v1::ListAcceleratorTypesResponse>
TpuMetadata::ListAcceleratorTypes(
    grpc::ClientContext& context,
    google::cloud::tpu::v1::ListAcceleratorTypesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListAcceleratorTypes(context, request);
}

StatusOr<google::cloud::tpu::v1::AcceleratorType>
TpuMetadata::GetAcceleratorType(
    grpc::ClientContext& context,
    google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetAcceleratorType(context, request);
}

future<StatusOr<google::longrunning::Operation>> TpuMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> TpuMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void TpuMetadata::SetMetadata(grpc::ClientContext& context,
                              std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void TpuMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_internal
}  // namespace cloud
}  // namespace google
