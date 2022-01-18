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
// source: google/cloud/vision/v1/product_search_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_PRODUCT_SEARCH_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_PRODUCT_SEARCH_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/vision/v1/product_search_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vision {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ProductSearchConnectionIdempotencyPolicy {
 public:
  virtual ~ProductSearchConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<ProductSearchConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::internal::Idempotency CreateProductSet(
      google::cloud::vision::v1::CreateProductSetRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency ListProductSets(
      google::cloud::vision::v1::ListProductSetsRequest request) = 0;

  virtual google::cloud::internal::Idempotency GetProductSet(
      google::cloud::vision::v1::GetProductSetRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency UpdateProductSet(
      google::cloud::vision::v1::UpdateProductSetRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency DeleteProductSet(
      google::cloud::vision::v1::DeleteProductSetRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency CreateProduct(
      google::cloud::vision::v1::CreateProductRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency ListProducts(
      google::cloud::vision::v1::ListProductsRequest request) = 0;

  virtual google::cloud::internal::Idempotency GetProduct(
      google::cloud::vision::v1::GetProductRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency UpdateProduct(
      google::cloud::vision::v1::UpdateProductRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency DeleteProduct(
      google::cloud::vision::v1::DeleteProductRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency CreateReferenceImage(
      google::cloud::vision::v1::CreateReferenceImageRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency DeleteReferenceImage(
      google::cloud::vision::v1::DeleteReferenceImageRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency ListReferenceImages(
      google::cloud::vision::v1::ListReferenceImagesRequest request) = 0;

  virtual google::cloud::internal::Idempotency GetReferenceImage(
      google::cloud::vision::v1::GetReferenceImageRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency AddProductToProductSet(
      google::cloud::vision::v1::AddProductToProductSetRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency RemoveProductFromProductSet(
      google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency ListProductsInProductSet(
      google::cloud::vision::v1::ListProductsInProductSetRequest request) = 0;

  virtual google::cloud::internal::Idempotency ImportProductSets(
      google::cloud::vision::v1::ImportProductSetsRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency PurgeProducts(
      google::cloud::vision::v1::PurgeProductsRequest const& request) = 0;
};

std::unique_ptr<ProductSearchConnectionIdempotencyPolicy>
MakeDefaultProductSearchConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_PRODUCT_SEARCH_CONNECTION_IDEMPOTENCY_POLICY_H