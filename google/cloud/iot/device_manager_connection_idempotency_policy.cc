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
// source: google/cloud/iot/v1/device_manager.proto

#include "google/cloud/iot/device_manager_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace iot {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::internal::Idempotency;

DeviceManagerConnectionIdempotencyPolicy::
    ~DeviceManagerConnectionIdempotencyPolicy() = default;

namespace {
class DefaultDeviceManagerConnectionIdempotencyPolicy
    : public DeviceManagerConnectionIdempotencyPolicy {
 public:
  ~DefaultDeviceManagerConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<DeviceManagerConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultDeviceManagerConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency CreateDeviceRegistry(
      google::cloud::iot::v1::CreateDeviceRegistryRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetDeviceRegistry(
      google::cloud::iot::v1::GetDeviceRegistryRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateDeviceRegistry(
      google::cloud::iot::v1::UpdateDeviceRegistryRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteDeviceRegistry(
      google::cloud::iot::v1::DeleteDeviceRegistryRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListDeviceRegistries(
      google::cloud::iot::v1::ListDeviceRegistriesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateDevice(
      google::cloud::iot::v1::CreateDeviceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetDevice(
      google::cloud::iot::v1::GetDeviceRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateDevice(
      google::cloud::iot::v1::UpdateDeviceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteDevice(
      google::cloud::iot::v1::DeleteDeviceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListDevices(google::cloud::iot::v1::ListDevicesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ModifyCloudToDeviceConfig(
      google::cloud::iot::v1::ModifyCloudToDeviceConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListDeviceConfigVersions(
      google::cloud::iot::v1::ListDeviceConfigVersionsRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListDeviceStates(
      google::cloud::iot::v1::ListDeviceStatesRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency SendCommandToDevice(
      google::cloud::iot::v1::SendCommandToDeviceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency BindDeviceToGateway(
      google::cloud::iot::v1::BindDeviceToGatewayRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UnbindDeviceFromGateway(
      google::cloud::iot::v1::UnbindDeviceFromGatewayRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<DeviceManagerConnectionIdempotencyPolicy>
MakeDefaultDeviceManagerConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultDeviceManagerConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iot
}  // namespace cloud
}  // namespace google