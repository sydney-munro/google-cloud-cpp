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
// source: google/cloud/talent/v4/event_service.proto

#include "google/cloud/talent/internal/event_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/talent/v4/event_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace talent_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EventServiceMetadata::EventServiceMetadata(
    std::shared_ptr<EventServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::talent::v4::ClientEvent>
EventServiceMetadata::CreateClientEvent(
    grpc::ClientContext& context,
    google::cloud::talent::v4::CreateClientEventRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateClientEvent(context, request);
}

void EventServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void EventServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_internal
}  // namespace cloud
}  // namespace google
