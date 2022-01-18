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
// source: google/cloud/shell/v1/cloudshell.proto

#include "google/cloud/shell/cloud_shell_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace shell {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::internal::Idempotency;

CloudShellServiceConnectionIdempotencyPolicy::
    ~CloudShellServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultCloudShellServiceConnectionIdempotencyPolicy
    : public CloudShellServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultCloudShellServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<CloudShellServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultCloudShellServiceConnectionIdempotencyPolicy>(*this);
  }

  Idempotency GetEnvironment(
      google::cloud::shell::v1::GetEnvironmentRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency StartEnvironment(
      google::cloud::shell::v1::StartEnvironmentRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency AuthorizeEnvironment(
      google::cloud::shell::v1::AuthorizeEnvironmentRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency AddPublicKey(
      google::cloud::shell::v1::AddPublicKeyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency RemovePublicKey(
      google::cloud::shell::v1::RemovePublicKeyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<CloudShellServiceConnectionIdempotencyPolicy>
MakeDefaultCloudShellServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultCloudShellServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell
}  // namespace cloud
}  // namespace google