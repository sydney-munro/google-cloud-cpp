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
// source: google/cloud/security/privateca/v1/service.proto

#include "google/cloud/privateca/certificate_authority_client.h"
#include "google/cloud/privateca/internal/certificate_authority_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace privateca {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CertificateAuthorityServiceClient::CertificateAuthorityServiceClient(
    std::shared_ptr<CertificateAuthorityServiceConnection> connection,
    Options options)
    : connection_(std::move(connection)),
      options_(privateca_internal::CertificateAuthorityServiceDefaultOptions(
          std::move(options))) {}
CertificateAuthorityServiceClient::~CertificateAuthorityServiceClient() =
    default;

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceClient::CreateCertificate(
    std::string const& parent,
    google::cloud::security::privateca::v1::Certificate const& certificate,
    std::string const& certificate_id, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::CreateCertificateRequest request;
  request.set_parent(parent);
  *request.mutable_certificate() = certificate;
  request.set_certificate_id(certificate_id);
  return connection_->CreateCertificate(request);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceClient::CreateCertificate(
    google::cloud::security::privateca::v1::CreateCertificateRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateCertificate(request);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceClient::GetCertificate(std::string const& name,
                                                  Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::GetCertificateRequest request;
  request.set_name(name);
  return connection_->GetCertificate(request);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceClient::GetCertificate(
    google::cloud::security::privateca::v1::GetCertificateRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetCertificate(request);
}

StreamRange<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceClient::ListCertificates(std::string const& parent,
                                                    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::ListCertificatesRequest request;
  request.set_parent(parent);
  return connection_->ListCertificates(request);
}

StreamRange<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceClient::ListCertificates(
    google::cloud::security::privateca::v1::ListCertificatesRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListCertificates(std::move(request));
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceClient::RevokeCertificate(std::string const& name,
                                                     Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::RevokeCertificateRequest request;
  request.set_name(name);
  return connection_->RevokeCertificate(request);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceClient::RevokeCertificate(
    google::cloud::security::privateca::v1::RevokeCertificateRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->RevokeCertificate(request);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceClient::UpdateCertificate(
    google::cloud::security::privateca::v1::Certificate const& certificate,
    google::protobuf::FieldMask const& update_mask, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::UpdateCertificateRequest request;
  *request.mutable_certificate() = certificate;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCertificate(request);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceClient::UpdateCertificate(
    google::cloud::security::privateca::v1::UpdateCertificateRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateCertificate(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::ActivateCertificateAuthority(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::ActivateCertificateAuthorityRequest
      request;
  request.set_name(name);
  return connection_->ActivateCertificateAuthority(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::ActivateCertificateAuthority(
    google::cloud::security::privateca::v1::
        ActivateCertificateAuthorityRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ActivateCertificateAuthority(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::CreateCertificateAuthority(
    std::string const& parent,
    google::cloud::security::privateca::v1::CertificateAuthority const&
        certificate_authority,
    std::string const& certificate_authority_id, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::CreateCertificateAuthorityRequest
      request;
  request.set_parent(parent);
  *request.mutable_certificate_authority() = certificate_authority;
  request.set_certificate_authority_id(certificate_authority_id);
  return connection_->CreateCertificateAuthority(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::CreateCertificateAuthority(
    google::cloud::security::privateca::v1::
        CreateCertificateAuthorityRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateCertificateAuthority(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::DisableCertificateAuthority(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::DisableCertificateAuthorityRequest
      request;
  request.set_name(name);
  return connection_->DisableCertificateAuthority(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::DisableCertificateAuthority(
    google::cloud::security::privateca::v1::
        DisableCertificateAuthorityRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DisableCertificateAuthority(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::EnableCertificateAuthority(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::EnableCertificateAuthorityRequest
      request;
  request.set_name(name);
  return connection_->EnableCertificateAuthority(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::EnableCertificateAuthority(
    google::cloud::security::privateca::v1::
        EnableCertificateAuthorityRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->EnableCertificateAuthority(request);
}

StatusOr<google::cloud::security::privateca::v1::
             FetchCertificateAuthorityCsrResponse>
CertificateAuthorityServiceClient::FetchCertificateAuthorityCsr(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::FetchCertificateAuthorityCsrRequest
      request;
  request.set_name(name);
  return connection_->FetchCertificateAuthorityCsr(request);
}

StatusOr<google::cloud::security::privateca::v1::
             FetchCertificateAuthorityCsrResponse>
CertificateAuthorityServiceClient::FetchCertificateAuthorityCsr(
    google::cloud::security::privateca::v1::
        FetchCertificateAuthorityCsrRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->FetchCertificateAuthorityCsr(request);
}

StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>
CertificateAuthorityServiceClient::GetCertificateAuthority(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::GetCertificateAuthorityRequest
      request;
  request.set_name(name);
  return connection_->GetCertificateAuthority(request);
}

StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>
CertificateAuthorityServiceClient::GetCertificateAuthority(
    google::cloud::security::privateca::v1::
        GetCertificateAuthorityRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetCertificateAuthority(request);
}

StreamRange<google::cloud::security::privateca::v1::CertificateAuthority>
CertificateAuthorityServiceClient::ListCertificateAuthorities(
    std::string const& parent, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::ListCertificateAuthoritiesRequest
      request;
  request.set_parent(parent);
  return connection_->ListCertificateAuthorities(request);
}

StreamRange<google::cloud::security::privateca::v1::CertificateAuthority>
CertificateAuthorityServiceClient::ListCertificateAuthorities(
    google::cloud::security::privateca::v1::ListCertificateAuthoritiesRequest
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListCertificateAuthorities(std::move(request));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::UndeleteCertificateAuthority(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::UndeleteCertificateAuthorityRequest
      request;
  request.set_name(name);
  return connection_->UndeleteCertificateAuthority(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::UndeleteCertificateAuthority(
    google::cloud::security::privateca::v1::
        UndeleteCertificateAuthorityRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UndeleteCertificateAuthority(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::DeleteCertificateAuthority(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::DeleteCertificateAuthorityRequest
      request;
  request.set_name(name);
  return connection_->DeleteCertificateAuthority(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::DeleteCertificateAuthority(
    google::cloud::security::privateca::v1::
        DeleteCertificateAuthorityRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DeleteCertificateAuthority(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::UpdateCertificateAuthority(
    google::cloud::security::privateca::v1::CertificateAuthority const&
        certificate_authority,
    google::protobuf::FieldMask const& update_mask, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::UpdateCertificateAuthorityRequest
      request;
  *request.mutable_certificate_authority() = certificate_authority;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCertificateAuthority(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceClient::UpdateCertificateAuthority(
    google::cloud::security::privateca::v1::
        UpdateCertificateAuthorityRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateCertificateAuthority(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
CertificateAuthorityServiceClient::CreateCaPool(
    std::string const& parent,
    google::cloud::security::privateca::v1::CaPool const& ca_pool,
    std::string const& ca_pool_id, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::CreateCaPoolRequest request;
  request.set_parent(parent);
  *request.mutable_ca_pool() = ca_pool;
  request.set_ca_pool_id(ca_pool_id);
  return connection_->CreateCaPool(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
CertificateAuthorityServiceClient::CreateCaPool(
    google::cloud::security::privateca::v1::CreateCaPoolRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateCaPool(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
CertificateAuthorityServiceClient::UpdateCaPool(
    google::cloud::security::privateca::v1::CaPool const& ca_pool,
    google::protobuf::FieldMask const& update_mask, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::UpdateCaPoolRequest request;
  *request.mutable_ca_pool() = ca_pool;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCaPool(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
CertificateAuthorityServiceClient::UpdateCaPool(
    google::cloud::security::privateca::v1::UpdateCaPoolRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateCaPool(request);
}

StatusOr<google::cloud::security::privateca::v1::CaPool>
CertificateAuthorityServiceClient::GetCaPool(std::string const& name,
                                             Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::GetCaPoolRequest request;
  request.set_name(name);
  return connection_->GetCaPool(request);
}

StatusOr<google::cloud::security::privateca::v1::CaPool>
CertificateAuthorityServiceClient::GetCaPool(
    google::cloud::security::privateca::v1::GetCaPoolRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetCaPool(request);
}

StreamRange<google::cloud::security::privateca::v1::CaPool>
CertificateAuthorityServiceClient::ListCaPools(std::string const& parent,
                                               Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::ListCaPoolsRequest request;
  request.set_parent(parent);
  return connection_->ListCaPools(request);
}

StreamRange<google::cloud::security::privateca::v1::CaPool>
CertificateAuthorityServiceClient::ListCaPools(
    google::cloud::security::privateca::v1::ListCaPoolsRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListCaPools(std::move(request));
}

future<StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
CertificateAuthorityServiceClient::DeleteCaPool(std::string const& name,
                                                Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::DeleteCaPoolRequest request;
  request.set_name(name);
  return connection_->DeleteCaPool(request);
}

future<StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
CertificateAuthorityServiceClient::DeleteCaPool(
    google::cloud::security::privateca::v1::DeleteCaPoolRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DeleteCaPool(request);
}

StatusOr<google::cloud::security::privateca::v1::FetchCaCertsResponse>
CertificateAuthorityServiceClient::FetchCaCerts(std::string const& ca_pool,
                                                Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::FetchCaCertsRequest request;
  request.set_ca_pool(ca_pool);
  return connection_->FetchCaCerts(request);
}

StatusOr<google::cloud::security::privateca::v1::FetchCaCertsResponse>
CertificateAuthorityServiceClient::FetchCaCerts(
    google::cloud::security::privateca::v1::FetchCaCertsRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->FetchCaCerts(request);
}

StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>
CertificateAuthorityServiceClient::GetCertificateRevocationList(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::GetCertificateRevocationListRequest
      request;
  request.set_name(name);
  return connection_->GetCertificateRevocationList(request);
}

StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>
CertificateAuthorityServiceClient::GetCertificateRevocationList(
    google::cloud::security::privateca::v1::
        GetCertificateRevocationListRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetCertificateRevocationList(request);
}

StreamRange<google::cloud::security::privateca::v1::CertificateRevocationList>
CertificateAuthorityServiceClient::ListCertificateRevocationLists(
    std::string const& parent, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::ListCertificateRevocationListsRequest
      request;
  request.set_parent(parent);
  return connection_->ListCertificateRevocationLists(request);
}

StreamRange<google::cloud::security::privateca::v1::CertificateRevocationList>
CertificateAuthorityServiceClient::ListCertificateRevocationLists(
    google::cloud::security::privateca::v1::
        ListCertificateRevocationListsRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListCertificateRevocationLists(std::move(request));
}

future<
    StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>>
CertificateAuthorityServiceClient::UpdateCertificateRevocationList(
    google::cloud::security::privateca::v1::CertificateRevocationList const&
        certificate_revocation_list,
    google::protobuf::FieldMask const& update_mask, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::UpdateCertificateRevocationListRequest
      request;
  *request.mutable_certificate_revocation_list() = certificate_revocation_list;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCertificateRevocationList(request);
}

future<
    StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>>
CertificateAuthorityServiceClient::UpdateCertificateRevocationList(
    google::cloud::security::privateca::v1::
        UpdateCertificateRevocationListRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateCertificateRevocationList(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
CertificateAuthorityServiceClient::CreateCertificateTemplate(
    std::string const& parent,
    google::cloud::security::privateca::v1::CertificateTemplate const&
        certificate_template,
    std::string const& certificate_template_id, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::CreateCertificateTemplateRequest
      request;
  request.set_parent(parent);
  *request.mutable_certificate_template() = certificate_template;
  request.set_certificate_template_id(certificate_template_id);
  return connection_->CreateCertificateTemplate(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
CertificateAuthorityServiceClient::CreateCertificateTemplate(
    google::cloud::security::privateca::v1::
        CreateCertificateTemplateRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateCertificateTemplate(request);
}

future<StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
CertificateAuthorityServiceClient::DeleteCertificateTemplate(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::DeleteCertificateTemplateRequest
      request;
  request.set_name(name);
  return connection_->DeleteCertificateTemplate(request);
}

future<StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
CertificateAuthorityServiceClient::DeleteCertificateTemplate(
    google::cloud::security::privateca::v1::
        DeleteCertificateTemplateRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DeleteCertificateTemplate(request);
}

StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>
CertificateAuthorityServiceClient::GetCertificateTemplate(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::GetCertificateTemplateRequest request;
  request.set_name(name);
  return connection_->GetCertificateTemplate(request);
}

StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>
CertificateAuthorityServiceClient::GetCertificateTemplate(
    google::cloud::security::privateca::v1::GetCertificateTemplateRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetCertificateTemplate(request);
}

StreamRange<google::cloud::security::privateca::v1::CertificateTemplate>
CertificateAuthorityServiceClient::ListCertificateTemplates(
    std::string const& parent, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::ListCertificateTemplatesRequest
      request;
  request.set_parent(parent);
  return connection_->ListCertificateTemplates(request);
}

StreamRange<google::cloud::security::privateca::v1::CertificateTemplate>
CertificateAuthorityServiceClient::ListCertificateTemplates(
    google::cloud::security::privateca::v1::ListCertificateTemplatesRequest
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListCertificateTemplates(std::move(request));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
CertificateAuthorityServiceClient::UpdateCertificateTemplate(
    google::cloud::security::privateca::v1::CertificateTemplate const&
        certificate_template,
    google::protobuf::FieldMask const& update_mask, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::security::privateca::v1::UpdateCertificateTemplateRequest
      request;
  *request.mutable_certificate_template() = certificate_template;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCertificateTemplate(request);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
CertificateAuthorityServiceClient::UpdateCertificateTemplate(
    google::cloud::security::privateca::v1::
        UpdateCertificateTemplateRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateCertificateTemplate(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privateca
}  // namespace cloud
}  // namespace google