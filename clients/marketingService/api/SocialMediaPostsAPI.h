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
#include "../model/social_media_post_create_dto.h"
#include "../model/social_media_post_dto_envelope.h"
#include "../model/social_media_post_dto_list_envelope.h"
#include "../model/social_media_post_update_dto.h"


// Create a social media post
//
// Creates a new social media post for the specified tenant.
//
empty_envelope_t*
SocialMediaPostsAPI_createSocialMediaPostAsync(apiClient_t *apiClient, char *tenantId, social_media_post_create_dto_t *social_media_post_create_dto, char *api_version, char *x_api_version);


// Delete a social media post
//
// Deletes a social media post by its ID.
//
empty_envelope_t*
SocialMediaPostsAPI_deleteSocialMediaPostAsync(apiClient_t *apiClient, char *tenantId, char *socialmediapostId, char *api_version, char *x_api_version);


// Get social media post by ID
//
// Retrieves the details of a specific social media post by its ID.
//
social_media_post_dto_envelope_t*
SocialMediaPostsAPI_getSocialMediaPostDetailsAsync(apiClient_t *apiClient, char *tenantId, char *socialmediapostId, char *api_version, char *x_api_version);


// Get social media posts count
//
// Returns the count of social media posts for the specified tenant using OData query options.
//
int32_envelope_t*
SocialMediaPostsAPI_getSocialMediaPostsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get social media posts
//
// Retrieves a collection of social media posts for the specified tenant using OData query options.
//
social_media_post_dto_list_envelope_t*
SocialMediaPostsAPI_getSocialMediaPostsODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a social media post
//
// Updates an existing social media post by its ID.
//
empty_envelope_t*
SocialMediaPostsAPI_updateSocialMediaPostAsync(apiClient_t *apiClient, char *tenantId, char *socialmediapostId, social_media_post_update_dto_t *social_media_post_update_dto, char *api_version, char *x_api_version);


