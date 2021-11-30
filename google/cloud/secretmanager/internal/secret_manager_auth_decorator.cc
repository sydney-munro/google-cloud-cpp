// Copyright 2021 Google LLC
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
// source: google/cloud/secretmanager/v1/service.proto

#include "google/cloud/secretmanager/internal/secret_manager_auth_decorator.h"
#include <google/cloud/secretmanager/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace secretmanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecretManagerServiceAuth::SecretManagerServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<SecretManagerServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::secretmanager::v1::ListSecretsResponse>
SecretManagerServiceAuth::ListSecrets(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::ListSecretsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSecrets(context, request);
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceAuth::CreateSecret(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::CreateSecretRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateSecret(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceAuth::AddSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::AddSecretVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AddSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceAuth::GetSecret(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::GetSecretRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSecret(context, request);
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceAuth::UpdateSecret(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::UpdateSecretRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateSecret(context, request);
}

Status SecretManagerServiceAuth::DeleteSecret(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::DeleteSecretRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteSecret(context, request);
}

StatusOr<google::cloud::secretmanager::v1::ListSecretVersionsResponse>
SecretManagerServiceAuth::ListSecretVersions(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::ListSecretVersionsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSecretVersions(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceAuth::GetSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::GetSecretVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::AccessSecretVersionResponse>
SecretManagerServiceAuth::AccessSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::AccessSecretVersionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AccessSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceAuth::DisableSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::DisableSecretVersionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DisableSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceAuth::EnableSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::EnableSecretVersionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->EnableSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceAuth::DestroySecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::DestroySecretVersionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DestroySecretVersion(context, request);
}

StatusOr<google::iam::v1::Policy> SecretManagerServiceAuth::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> SecretManagerServiceAuth::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecretManagerServiceAuth::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager_internal
}  // namespace cloud
}  // namespace google