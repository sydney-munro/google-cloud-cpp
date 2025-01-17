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
// source: google/cloud/servicedirectory/v1/lookup_service.proto

#include "google/cloud/servicedirectory/lookup_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace servicedirectory {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

LookupServiceConnectionIdempotencyPolicy::
    ~LookupServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultLookupServiceConnectionIdempotencyPolicy
    : public LookupServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultLookupServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<LookupServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultLookupServiceConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency ResolveService(
      google::cloud::servicedirectory::v1::ResolveServiceRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<LookupServiceConnectionIdempotencyPolicy>
MakeDefaultLookupServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultLookupServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicedirectory
}  // namespace cloud
}  // namespace google
