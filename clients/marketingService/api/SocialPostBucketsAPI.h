#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/social_post_bucket_create_dto.h"
#include "../model/social_post_bucket_dto_envelope.h"
#include "../model/social_post_bucket_dto_list_envelope.h"
#include "../model/social_post_bucket_update_dto.h"


// Create a social post bucket
//
// Creates a new social post bucket for the specified tenant.
//
empty_envelope_t*
SocialPostBucketsAPI_createSocialPostBucketAsync(apiClient_t *apiClient, char *tenantId, social_post_bucket_create_dto_t *social_post_bucket_create_dto, char *api_version, char *x_api_version);


// Delete a social post bucket
//
// Deletes a social post bucket by its ID.
//
empty_envelope_t*
SocialPostBucketsAPI_deleteSocialPostBucketAsync(apiClient_t *apiClient, char *tenantId, char *socialpostbucketId, char *api_version, char *x_api_version);


// Get social post bucket by ID
//
// Retrieves the details of a specific social post bucket by its ID.
//
social_post_bucket_dto_envelope_t*
SocialPostBucketsAPI_getSocialPostBucketDetailsAsync(apiClient_t *apiClient, char *tenantId, char *socialpostbucketId, char *api_version, char *x_api_version);


// Get social post buckets count
//
// Returns the count of social post buckets for the specified tenant using OData query options.
//
int32_envelope_t*
SocialPostBucketsAPI_getSocialPostBucketsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get social post buckets
//
// Retrieves a collection of social post buckets for the specified tenant using OData query options.
//
social_post_bucket_dto_list_envelope_t*
SocialPostBucketsAPI_getSocialPostBucketsODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a social post bucket
//
// Updates an existing social post bucket by its ID.
//
empty_envelope_t*
SocialPostBucketsAPI_updateSocialPostBucketAsync(apiClient_t *apiClient, char *tenantId, char *socialpostbucketId, social_post_bucket_update_dto_t *social_post_bucket_update_dto, char *api_version, char *x_api_version);


