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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_ASSURED_WORKLOADS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_ASSURED_WORKLOADS_CLIENT_H

#include "google/cloud/assuredworkloads/assured_workloads_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace assuredworkloads {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service to manage AssuredWorkloads.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class AssuredWorkloadsServiceClient {
 public:
  explicit AssuredWorkloadsServiceClient(
      std::shared_ptr<AssuredWorkloadsServiceConnection> connection,
      Options options = {});
  ~AssuredWorkloadsServiceClient();

  //@{
  // @name Copy and move support
  AssuredWorkloadsServiceClient(AssuredWorkloadsServiceClient const&) = default;
  AssuredWorkloadsServiceClient& operator=(
      AssuredWorkloadsServiceClient const&) = default;
  AssuredWorkloadsServiceClient(AssuredWorkloadsServiceClient&&) = default;
  AssuredWorkloadsServiceClient& operator=(AssuredWorkloadsServiceClient&&) =
      default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(AssuredWorkloadsServiceClient const& a,
                         AssuredWorkloadsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AssuredWorkloadsServiceClient const& a,
                         AssuredWorkloadsServiceClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Creates Assured Workload.
  ///
  /// @param parent  Required. The resource name of the new Workload's parent.
  ///  Must be of the form `organizations/{org_id}/locations/{location_id}`.
  /// @param workload  Required. Assured Workload to create
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  /// [google.cloud.assuredworkloads.v1.CreateWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L99}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
  CreateWorkload(std::string const& parent,
                 google::cloud::assuredworkloads::v1::Workload const& workload,
                 Options options = {});

  ///
  /// Creates Assured Workload.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::CreateWorkloadRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L99}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  /// [google.cloud.assuredworkloads.v1.CreateWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L99}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
  CreateWorkload(
      google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request,
      Options options = {});

  ///
  /// Updates an existing workload.
  /// Currently allows updating of workload display_name and labels.
  /// For force updates don't set etag field in the Workload.
  /// Only one update operation per workload can be in progress.
  ///
  /// @param workload  Required. The workload to update.
  ///  The workload’s `name` field is used to identify the workload to be
  ///  updated. Format:
  ///  organizations/{org_id}/locations/{location_id}/workloads/{workload_id}
  /// @param update_mask  Required. The list of fields to be updated.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  /// [google.cloud.assuredworkloads.v1.UpdateWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L120}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  StatusOr<google::cloud::assuredworkloads::v1::Workload> UpdateWorkload(
      google::cloud::assuredworkloads::v1::Workload const& workload,
      google::protobuf::FieldMask const& update_mask, Options options = {});

  ///
  /// Updates an existing workload.
  /// Currently allows updating of workload display_name and labels.
  /// For force updates don't set etag field in the Workload.
  /// Only one update operation per workload can be in progress.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::UpdateWorkloadRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L120}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  /// [google.cloud.assuredworkloads.v1.UpdateWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L120}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  StatusOr<google::cloud::assuredworkloads::v1::Workload> UpdateWorkload(
      google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request,
      Options options = {});

  ///
  /// Deletes the workload. Make sure that workload's direct children are
  /// already in a deleted state, otherwise the request will fail with a
  /// FAILED_PRECONDITION error.
  ///
  /// @param name  Required. The `name` field is used to identify the workload.
  ///  Format:
  ///  organizations/{org_id}/locations/{location_id}/workloads/{workload_id}
  /// @param options  Optional. Operation options.
  ///
  /// [google.cloud.assuredworkloads.v1.DeleteWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L132}
  ///
  Status DeleteWorkload(std::string const& name, Options options = {});

  ///
  /// Deletes the workload. Make sure that workload's direct children are
  /// already in a deleted state, otherwise the request will fail with a
  /// FAILED_PRECONDITION error.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::DeleteWorkloadRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L132}
  /// @param options  Optional. Operation options.
  ///
  /// [google.cloud.assuredworkloads.v1.DeleteWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L132}
  ///
  Status DeleteWorkload(
      google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request,
      Options options = {});

  ///
  /// Gets Assured Workload associated with a CRM Node
  ///
  /// @param name  Required. The resource name of the Workload to fetch. This is
  /// the workloads's
  ///  relative path in the API, formatted as
  ///  "organizations/{organization_id}/locations/{location_id}/workloads/{workload_id}".
  ///  For example,
  ///  "organizations/123/locations/us-east1/workloads/assured-workload-1".
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  /// [google.cloud.assuredworkloads.v1.GetWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L149}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  StatusOr<google::cloud::assuredworkloads::v1::Workload> GetWorkload(
      std::string const& name, Options options = {});

  ///
  /// Gets Assured Workload associated with a CRM Node
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::GetWorkloadRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L149}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  /// [google.cloud.assuredworkloads.v1.GetWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L149}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  StatusOr<google::cloud::assuredworkloads::v1::Workload> GetWorkload(
      google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request,
      Options options = {});

  ///
  /// Lists Assured Workloads under a CRM Node.
  ///
  /// @param parent  Required. Parent Resource to list workloads from.
  ///  Must be of the form `organizations/{org_id}/locations/{location}`.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  /// [google.cloud.assuredworkloads.v1.ListWorkloadsRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L164}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  StreamRange<google::cloud::assuredworkloads::v1::Workload> ListWorkloads(
      std::string const& parent, Options options = {});

  ///
  /// Lists Assured Workloads under a CRM Node.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::ListWorkloadsRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L164}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  /// [google.cloud.assuredworkloads.v1.ListWorkloadsRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L164}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  ///
  StreamRange<google::cloud::assuredworkloads::v1::Workload> ListWorkloads(
      google::cloud::assuredworkloads::v1::ListWorkloadsRequest request,
      Options options = {});

 private:
  std::shared_ptr<AssuredWorkloadsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_ASSURED_WORKLOADS_CLIENT_H