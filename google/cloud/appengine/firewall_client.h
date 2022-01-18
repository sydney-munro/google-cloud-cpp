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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_FIREWALL_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_FIREWALL_CLIENT_H

#include "google/cloud/appengine/firewall_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Firewall resources are used to define a collection of access control rules
/// for an Application. Each rule is defined with a position which specifies
/// the rule's order in the sequence of rules, an IP range to be matched against
/// requests, and an action to take upon matching requests.
///
/// Every request is evaluated against the Firewall rules in priority order.
/// Processesing stops at the first rule which matches the request's IP address.
/// A final rule always specifies an action that applies to all remaining
/// IP addresses. The default final rule for a newly-created application will be
/// set to "allow" if not otherwise specified by the user.
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
class FirewallClient {
 public:
  explicit FirewallClient(std::shared_ptr<FirewallConnection> connection,
                          Options options = {});
  ~FirewallClient();

  //@{
  // @name Copy and move support
  FirewallClient(FirewallClient const&) = default;
  FirewallClient& operator=(FirewallClient const&) = default;
  FirewallClient(FirewallClient&&) = default;
  FirewallClient& operator=(FirewallClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(FirewallClient const& a, FirewallClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(FirewallClient const& a, FirewallClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Lists the firewall rules of an application.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::ListIngressRulesRequest,google/appengine/v1/appengine.proto#L475}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::appengine::v1::FirewallRule,google/appengine/v1/firewall.proto#L31}
  ///
  /// [google.appengine.v1.ListIngressRulesRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L475}
  /// [google.appengine.v1.FirewallRule]:
  /// @googleapis_reference_link{google/appengine/v1/firewall.proto#L31}
  ///
  StreamRange<google::appengine::v1::FirewallRule> ListIngressRules(
      google::appengine::v1::ListIngressRulesRequest request,
      Options options = {});

  ///
  /// Replaces the entire firewall ruleset in one bulk operation. This overrides
  /// and replaces the rules of an existing firewall with the new rules.
  ///
  /// If the final rule does not match traffic with the '*' wildcard IP range,
  /// then an "allow all" rule is explicitly added to the end of the list.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::BatchUpdateIngressRulesRequest,google/appengine/v1/appengine.proto#L569}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::appengine::v1::BatchUpdateIngressRulesResponse,google/appengine/v1/appengine.proto#L579}
  ///
  /// [google.appengine.v1.BatchUpdateIngressRulesRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L569}
  /// [google.appengine.v1.BatchUpdateIngressRulesResponse]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L579}
  ///
  StatusOr<google::appengine::v1::BatchUpdateIngressRulesResponse>
  BatchUpdateIngressRules(
      google::appengine::v1::BatchUpdateIngressRulesRequest const& request,
      Options options = {});

  ///
  /// Creates a firewall rule for the application.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::CreateIngressRuleRequest,google/appengine/v1/appengine.proto#L585}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::appengine::v1::FirewallRule,google/appengine/v1/firewall.proto#L31}
  ///
  /// [google.appengine.v1.CreateIngressRuleRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L585}
  /// [google.appengine.v1.FirewallRule]:
  /// @googleapis_reference_link{google/appengine/v1/firewall.proto#L31}
  ///
  StatusOr<google::appengine::v1::FirewallRule> CreateIngressRule(
      google::appengine::v1::CreateIngressRuleRequest const& request,
      Options options = {});

  ///
  /// Gets the specified firewall rule.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::GetIngressRuleRequest,google/appengine/v1/appengine.proto#L604}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::appengine::v1::FirewallRule,google/appengine/v1/firewall.proto#L31}
  ///
  /// [google.appengine.v1.GetIngressRuleRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L604}
  /// [google.appengine.v1.FirewallRule]:
  /// @googleapis_reference_link{google/appengine/v1/firewall.proto#L31}
  ///
  StatusOr<google::appengine::v1::FirewallRule> GetIngressRule(
      google::appengine::v1::GetIngressRuleRequest const& request,
      Options options = {});

  ///
  /// Updates the specified firewall rule.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::UpdateIngressRuleRequest,google/appengine/v1/appengine.proto#L611}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::appengine::v1::FirewallRule,google/appengine/v1/firewall.proto#L31}
  ///
  /// [google.appengine.v1.UpdateIngressRuleRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L611}
  /// [google.appengine.v1.FirewallRule]:
  /// @googleapis_reference_link{google/appengine/v1/firewall.proto#L31}
  ///
  StatusOr<google::appengine::v1::FirewallRule> UpdateIngressRule(
      google::appengine::v1::UpdateIngressRuleRequest const& request,
      Options options = {});

  ///
  /// Deletes the specified firewall rule.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::DeleteIngressRuleRequest,google/appengine/v1/appengine.proto#L624}
  /// @param options  Optional. Operation options.
  ///
  /// [google.appengine.v1.DeleteIngressRuleRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L624}
  ///
  Status DeleteIngressRule(
      google::appengine::v1::DeleteIngressRuleRequest const& request,
      Options options = {});

 private:
  std::shared_ptr<FirewallConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_FIREWALL_CLIENT_H