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
// source: google/cloud/language/v1/language_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_LANGUAGE_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_LANGUAGE_CLIENT_H

#include "google/cloud/language/language_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace language {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Provides text analysis operations such as sentiment analysis and entity
/// recognition.
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
class LanguageServiceClient {
 public:
  explicit LanguageServiceClient(
      std::shared_ptr<LanguageServiceConnection> connection,
      Options options = {});
  ~LanguageServiceClient();

  //@{
  // @name Copy and move support
  LanguageServiceClient(LanguageServiceClient const&) = default;
  LanguageServiceClient& operator=(LanguageServiceClient const&) = default;
  LanguageServiceClient(LanguageServiceClient&&) = default;
  LanguageServiceClient& operator=(LanguageServiceClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(LanguageServiceClient const& a,
                         LanguageServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(LanguageServiceClient const& a,
                         LanguageServiceClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Analyzes the sentiment of the provided text.
  ///
  /// @param document  Input document.
  /// @param encoding_type  The encoding type used by the API to calculate
  /// sentence offsets.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSentimentResponse,google/cloud/language/v1/language_service.proto#L975}
  ///
  /// [google.cloud.language.v1.AnalyzeSentimentRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L966}
  /// [google.cloud.language.v1.AnalyzeSentimentResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L975}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>
  AnalyzeSentiment(google::cloud::language::v1::Document const& document,
                   google::cloud::language::v1::EncodingType encoding_type,
                   Options options = {});

  ///
  /// Analyzes the sentiment of the provided text.
  ///
  /// @param document  Input document.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSentimentResponse,google/cloud/language/v1/language_service.proto#L975}
  ///
  /// [google.cloud.language.v1.AnalyzeSentimentRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L966}
  /// [google.cloud.language.v1.AnalyzeSentimentResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L975}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>
  AnalyzeSentiment(google::cloud::language::v1::Document const& document,
                   Options options = {});

  ///
  /// Analyzes the sentiment of the provided text.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSentimentRequest,google/cloud/language/v1/language_service.proto#L966}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSentimentResponse,google/cloud/language/v1/language_service.proto#L975}
  ///
  /// [google.cloud.language.v1.AnalyzeSentimentRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L966}
  /// [google.cloud.language.v1.AnalyzeSentimentResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L975}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>
  AnalyzeSentiment(
      google::cloud::language::v1::AnalyzeSentimentRequest const& request,
      Options options = {});

  ///
  /// Finds named entities (currently proper names and common nouns) in the text
  /// along with entity types, salience, mentions for each entity, and
  /// other properties.
  ///
  /// @param document  Input document.
  /// @param encoding_type  The encoding type used by the API to calculate
  /// offsets.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitiesResponse,google/cloud/language/v1/language_service.proto#L1018}
  ///
  /// [google.cloud.language.v1.AnalyzeEntitiesRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1009}
  /// [google.cloud.language.v1.AnalyzeEntitiesResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1018}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>
  AnalyzeEntities(google::cloud::language::v1::Document const& document,
                  google::cloud::language::v1::EncodingType encoding_type,
                  Options options = {});

  ///
  /// Finds named entities (currently proper names and common nouns) in the text
  /// along with entity types, salience, mentions for each entity, and
  /// other properties.
  ///
  /// @param document  Input document.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitiesResponse,google/cloud/language/v1/language_service.proto#L1018}
  ///
  /// [google.cloud.language.v1.AnalyzeEntitiesRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1009}
  /// [google.cloud.language.v1.AnalyzeEntitiesResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1018}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>
  AnalyzeEntities(google::cloud::language::v1::Document const& document,
                  Options options = {});

  ///
  /// Finds named entities (currently proper names and common nouns) in the text
  /// along with entity types, salience, mentions for each entity, and
  /// other properties.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitiesRequest,google/cloud/language/v1/language_service.proto#L1009}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitiesResponse,google/cloud/language/v1/language_service.proto#L1018}
  ///
  /// [google.cloud.language.v1.AnalyzeEntitiesRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1009}
  /// [google.cloud.language.v1.AnalyzeEntitiesResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1018}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>
  AnalyzeEntities(
      google::cloud::language::v1::AnalyzeEntitiesRequest const& request,
      Options options = {});

  ///
  /// Finds entities, similar to
  /// [AnalyzeEntities][google.cloud.language.v1.LanguageService.AnalyzeEntities]
  /// in the text and analyzes sentiment associated with each entity and its
  /// mentions.
  ///
  /// @param document  Input document.
  /// @param encoding_type  The encoding type used by the API to calculate
  /// offsets.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitySentimentResponse,google/cloud/language/v1/language_service.proto#L998}
  ///
  /// [google.cloud.language.v1.AnalyzeEntitySentimentRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L989}
  /// [google.cloud.language.v1.AnalyzeEntitySentimentResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L998}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>
  AnalyzeEntitySentiment(
      google::cloud::language::v1::Document const& document,
      google::cloud::language::v1::EncodingType encoding_type,
      Options options = {});

  ///
  /// Finds entities, similar to
  /// [AnalyzeEntities][google.cloud.language.v1.LanguageService.AnalyzeEntities]
  /// in the text and analyzes sentiment associated with each entity and its
  /// mentions.
  ///
  /// @param document  Input document.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitySentimentResponse,google/cloud/language/v1/language_service.proto#L998}
  ///
  /// [google.cloud.language.v1.AnalyzeEntitySentimentRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L989}
  /// [google.cloud.language.v1.AnalyzeEntitySentimentResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L998}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>
  AnalyzeEntitySentiment(google::cloud::language::v1::Document const& document,
                         Options options = {});

  ///
  /// Finds entities, similar to
  /// [AnalyzeEntities][google.cloud.language.v1.LanguageService.AnalyzeEntities]
  /// in the text and analyzes sentiment associated with each entity and its
  /// mentions.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitySentimentRequest,google/cloud/language/v1/language_service.proto#L989}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitySentimentResponse,google/cloud/language/v1/language_service.proto#L998}
  ///
  /// [google.cloud.language.v1.AnalyzeEntitySentimentRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L989}
  /// [google.cloud.language.v1.AnalyzeEntitySentimentResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L998}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>
  AnalyzeEntitySentiment(
      google::cloud::language::v1::AnalyzeEntitySentimentRequest const& request,
      Options options = {});

  ///
  /// Analyzes the syntax of the text and provides sentence boundaries and
  /// tokenization along with part of speech tags, dependency trees, and other
  /// properties.
  ///
  /// @param document  Input document.
  /// @param encoding_type  The encoding type used by the API to calculate
  /// offsets.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSyntaxResponse,google/cloud/language/v1/language_service.proto#L1038}
  ///
  /// [google.cloud.language.v1.AnalyzeSyntaxRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1029}
  /// [google.cloud.language.v1.AnalyzeSyntaxResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1038}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse> AnalyzeSyntax(
      google::cloud::language::v1::Document const& document,
      google::cloud::language::v1::EncodingType encoding_type,
      Options options = {});

  ///
  /// Analyzes the syntax of the text and provides sentence boundaries and
  /// tokenization along with part of speech tags, dependency trees, and other
  /// properties.
  ///
  /// @param document  Input document.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSyntaxResponse,google/cloud/language/v1/language_service.proto#L1038}
  ///
  /// [google.cloud.language.v1.AnalyzeSyntaxRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1029}
  /// [google.cloud.language.v1.AnalyzeSyntaxResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1038}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse> AnalyzeSyntax(
      google::cloud::language::v1::Document const& document,
      Options options = {});

  ///
  /// Analyzes the syntax of the text and provides sentence boundaries and
  /// tokenization along with part of speech tags, dependency trees, and other
  /// properties.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSyntaxRequest,google/cloud/language/v1/language_service.proto#L1029}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSyntaxResponse,google/cloud/language/v1/language_service.proto#L1038}
  ///
  /// [google.cloud.language.v1.AnalyzeSyntaxRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1029}
  /// [google.cloud.language.v1.AnalyzeSyntaxResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1038}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse> AnalyzeSyntax(
      google::cloud::language::v1::AnalyzeSyntaxRequest const& request,
      Options options = {});

  ///
  /// Classifies a document into categories.
  ///
  /// @param document  Input document.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::ClassifyTextResponse,google/cloud/language/v1/language_service.proto#L1058}
  ///
  /// [google.cloud.language.v1.ClassifyTextRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1052}
  /// [google.cloud.language.v1.ClassifyTextResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1058}
  ///
  StatusOr<google::cloud::language::v1::ClassifyTextResponse> ClassifyText(
      google::cloud::language::v1::Document const& document,
      Options options = {});

  ///
  /// Classifies a document into categories.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::language::v1::ClassifyTextRequest,google/cloud/language/v1/language_service.proto#L1052}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::ClassifyTextResponse,google/cloud/language/v1/language_service.proto#L1058}
  ///
  /// [google.cloud.language.v1.ClassifyTextRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1052}
  /// [google.cloud.language.v1.ClassifyTextResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1058}
  ///
  StatusOr<google::cloud::language::v1::ClassifyTextResponse> ClassifyText(
      google::cloud::language::v1::ClassifyTextRequest const& request,
      Options options = {});

  ///
  /// A convenience method that provides all the features that analyzeSentiment,
  /// analyzeEntities, and analyzeSyntax provide in one call.
  ///
  /// @param document  Input document.
  /// @param features  The enabled features.
  /// @param encoding_type  The encoding type used by the API to calculate
  /// offsets.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnnotateTextResponse,google/cloud/language/v1/language_service.proto#L1096}
  ///
  /// [google.cloud.language.v1.AnnotateTextRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1065}
  /// [google.cloud.language.v1.AnnotateTextResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1096}
  ///
  StatusOr<google::cloud::language::v1::AnnotateTextResponse> AnnotateText(
      google::cloud::language::v1::Document const& document,
      google::cloud::language::v1::AnnotateTextRequest::Features const&
          features,
      google::cloud::language::v1::EncodingType encoding_type,
      Options options = {});

  ///
  /// A convenience method that provides all the features that analyzeSentiment,
  /// analyzeEntities, and analyzeSyntax provide in one call.
  ///
  /// @param document  Input document.
  /// @param features  The enabled features.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnnotateTextResponse,google/cloud/language/v1/language_service.proto#L1096}
  ///
  /// [google.cloud.language.v1.AnnotateTextRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1065}
  /// [google.cloud.language.v1.AnnotateTextResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1096}
  ///
  StatusOr<google::cloud::language::v1::AnnotateTextResponse> AnnotateText(
      google::cloud::language::v1::Document const& document,
      google::cloud::language::v1::AnnotateTextRequest::Features const&
          features,
      Options options = {});

  ///
  /// A convenience method that provides all the features that analyzeSentiment,
  /// analyzeEntities, and analyzeSyntax provide in one call.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::language::v1::AnnotateTextRequest,google/cloud/language/v1/language_service.proto#L1065}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnnotateTextResponse,google/cloud/language/v1/language_service.proto#L1096}
  ///
  /// [google.cloud.language.v1.AnnotateTextRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1065}
  /// [google.cloud.language.v1.AnnotateTextResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1096}
  ///
  StatusOr<google::cloud::language::v1::AnnotateTextResponse> AnnotateText(
      google::cloud::language::v1::AnnotateTextRequest const& request,
      Options options = {});

 private:
  std::shared_ptr<LanguageServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_LANGUAGE_CLIENT_H