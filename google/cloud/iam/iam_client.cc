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
// source: google/iam/admin/v1/iam.proto

#include "google/cloud/iam/iam_client.h"
#include "google/cloud/iam/iam_options.h"
#include "google/cloud/iam/internal/iam_option_defaults.h"
#include <memory>
#include <thread>

namespace google {
namespace cloud {
namespace iam {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IAMClient::IAMClient(std::shared_ptr<IAMConnection> connection, Options options)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(options),
          iam_internal::IAMDefaultOptions(connection_->options()))) {}
IAMClient::~IAMClient() = default;

StreamRange<google::iam::admin::v1::ServiceAccount>
IAMClient::ListServiceAccounts(std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::iam::admin::v1::ListServiceAccountsRequest request;
  request.set_name(name);
  return connection_->ListServiceAccounts(request);
}

StreamRange<google::iam::admin::v1::ServiceAccount>
IAMClient::ListServiceAccounts(
    google::iam::admin::v1::ListServiceAccountsRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListServiceAccounts(std::move(request));
}

StatusOr<google::iam::admin::v1::ServiceAccount> IAMClient::GetServiceAccount(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::iam::admin::v1::GetServiceAccountRequest request;
  request.set_name(name);
  return connection_->GetServiceAccount(request);
}

StatusOr<google::iam::admin::v1::ServiceAccount> IAMClient::GetServiceAccount(
    google::iam::admin::v1::GetServiceAccountRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetServiceAccount(request);
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMClient::CreateServiceAccount(
    std::string const& name, std::string const& account_id,
    google::iam::admin::v1::ServiceAccount const& service_account,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::iam::admin::v1::CreateServiceAccountRequest request;
  request.set_name(name);
  request.set_account_id(account_id);
  *request.mutable_service_account() = service_account;
  return connection_->CreateServiceAccount(request);
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMClient::CreateServiceAccount(
    google::iam::admin::v1::CreateServiceAccountRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateServiceAccount(request);
}

StatusOr<google::iam::admin::v1::ServiceAccount> IAMClient::PatchServiceAccount(
    google::iam::admin::v1::PatchServiceAccountRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->PatchServiceAccount(request);
}

Status IAMClient::DeleteServiceAccount(std::string const& name,
                                       Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::iam::admin::v1::DeleteServiceAccountRequest request;
  request.set_name(name);
  return connection_->DeleteServiceAccount(request);
}

Status IAMClient::DeleteServiceAccount(
    google::iam::admin::v1::DeleteServiceAccountRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DeleteServiceAccount(request);
}

StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
IAMClient::UndeleteServiceAccount(
    google::iam::admin::v1::UndeleteServiceAccountRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UndeleteServiceAccount(request);
}

Status IAMClient::EnableServiceAccount(
    google::iam::admin::v1::EnableServiceAccountRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->EnableServiceAccount(request);
}

Status IAMClient::DisableServiceAccount(
    google::iam::admin::v1::DisableServiceAccountRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DisableServiceAccount(request);
}

StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
IAMClient::ListServiceAccountKeys(
    std::string const& name,
    std::vector<
        google::iam::admin::v1::ListServiceAccountKeysRequest::KeyType> const&
        key_types,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::iam::admin::v1::ListServiceAccountKeysRequest request;
  request.set_name(name);
  *request.mutable_key_types() = {key_types.begin(), key_types.end()};
  return connection_->ListServiceAccountKeys(request);
}

StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
IAMClient::ListServiceAccountKeys(
    google::iam::admin::v1::ListServiceAccountKeysRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListServiceAccountKeys(request);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMClient::GetServiceAccountKey(
    std::string const& name,
    google::iam::admin::v1::ServiceAccountPublicKeyType public_key_type,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::iam::admin::v1::GetServiceAccountKeyRequest request;
  request.set_name(name);
  request.set_public_key_type(public_key_type);
  return connection_->GetServiceAccountKey(request);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMClient::GetServiceAccountKey(
    google::iam::admin::v1::GetServiceAccountKeyRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetServiceAccountKey(request);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMClient::CreateServiceAccountKey(
    std::string const& name,
    google::iam::admin::v1::ServiceAccountPrivateKeyType private_key_type,
    google::iam::admin::v1::ServiceAccountKeyAlgorithm key_algorithm,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::iam::admin::v1::CreateServiceAccountKeyRequest request;
  request.set_name(name);
  request.set_private_key_type(private_key_type);
  request.set_key_algorithm(key_algorithm);
  return connection_->CreateServiceAccountKey(request);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMClient::CreateServiceAccountKey(
    google::iam::admin::v1::CreateServiceAccountKeyRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateServiceAccountKey(request);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMClient::UploadServiceAccountKey(
    google::iam::admin::v1::UploadServiceAccountKeyRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UploadServiceAccountKey(request);
}

Status IAMClient::DeleteServiceAccountKey(std::string const& name,
                                          Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::iam::admin::v1::DeleteServiceAccountKeyRequest request;
  request.set_name(name);
  return connection_->DeleteServiceAccountKey(request);
}

Status IAMClient::DeleteServiceAccountKey(
    google::iam::admin::v1::DeleteServiceAccountKeyRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DeleteServiceAccountKey(request);
}

StatusOr<google::iam::v1::Policy> IAMClient::GetIamPolicy(
    std::string const& resource, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::iam::v1::GetIamPolicyRequest request;
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> IAMClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> IAMClient::SetIamPolicy(
    std::string const& resource, google::iam::v1::Policy const& policy,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::iam::v1::SetIamPolicyRequest request;
  request.set_resource(resource);
  *request.mutable_policy() = policy;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> IAMClient::SetIamPolicy(
    std::string const& resource, IamUpdater const& updater, Options options) {
  internal::CheckExpectedOptions<IAMBackoffPolicyOption>(options, __func__);
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::iam::v1::GetIamPolicyRequest get_request;
  get_request.set_resource(resource);
  google::iam::v1::SetIamPolicyRequest set_request;
  set_request.set_resource(resource);
  auto backoff_policy =
      internal::CurrentOptions().get<IAMBackoffPolicyOption>()->clone();
  for (;;) {
    auto recent = connection_->GetIamPolicy(get_request);
    if (!recent) {
      return recent.status();
    }
    auto policy = updater(*std::move(recent));
    if (!policy) {
      return Status(StatusCode::kCancelled, "updater did not yield a policy");
    }
    *set_request.mutable_policy() = *std::move(policy);
    auto result = connection_->SetIamPolicy(set_request);
    if (result || result.status().code() != StatusCode::kAborted) {
      return result;
    }
    std::this_thread::sleep_for(backoff_policy->OnCompletion());
  }
}

StatusOr<google::iam::v1::Policy> IAMClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IAMClient::TestIamPermissions(std::string const& resource,
                              std::vector<std::string> const& permissions,
                              Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::iam::v1::TestIamPermissionsRequest request;
  request.set_resource(resource);
  *request.mutable_permissions() = {permissions.begin(), permissions.end()};
  return connection_->TestIamPermissions(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IAMClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->TestIamPermissions(request);
}

StreamRange<google::iam::admin::v1::Role> IAMClient::QueryGrantableRoles(
    std::string const& full_resource_name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::iam::admin::v1::QueryGrantableRolesRequest request;
  request.set_full_resource_name(full_resource_name);
  return connection_->QueryGrantableRoles(request);
}

StreamRange<google::iam::admin::v1::Role> IAMClient::QueryGrantableRoles(
    google::iam::admin::v1::QueryGrantableRolesRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->QueryGrantableRoles(std::move(request));
}

StreamRange<google::iam::admin::v1::Role> IAMClient::ListRoles(
    google::iam::admin::v1::ListRolesRequest request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListRoles(std::move(request));
}

StatusOr<google::iam::admin::v1::Role> IAMClient::GetRole(
    google::iam::admin::v1::GetRoleRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetRole(request);
}

StatusOr<google::iam::admin::v1::Role> IAMClient::CreateRole(
    google::iam::admin::v1::CreateRoleRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateRole(request);
}

StatusOr<google::iam::admin::v1::Role> IAMClient::UpdateRole(
    google::iam::admin::v1::UpdateRoleRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateRole(request);
}

StatusOr<google::iam::admin::v1::Role> IAMClient::DeleteRole(
    google::iam::admin::v1::DeleteRoleRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DeleteRole(request);
}

StatusOr<google::iam::admin::v1::Role> IAMClient::UndeleteRole(
    google::iam::admin::v1::UndeleteRoleRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UndeleteRole(request);
}

StreamRange<google::iam::admin::v1::Permission>
IAMClient::QueryTestablePermissions(
    google::iam::admin::v1::QueryTestablePermissionsRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->QueryTestablePermissions(std::move(request));
}

StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
IAMClient::QueryAuditableServices(
    google::iam::admin::v1::QueryAuditableServicesRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->QueryAuditableServices(request);
}

StatusOr<google::iam::admin::v1::LintPolicyResponse> IAMClient::LintPolicy(
    google::iam::admin::v1::LintPolicyRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->LintPolicy(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam
}  // namespace cloud
}  // namespace google
