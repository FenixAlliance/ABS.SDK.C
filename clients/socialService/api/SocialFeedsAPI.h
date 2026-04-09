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
#include "../model/social_feed_dto_envelope.h"
#include "../model/social_feed_dto_list_envelope.h"
#include "../model/social_feed_post_create_dto.h"
#include "../model/social_feed_post_dto_envelope.h"
#include "../model/social_feed_post_dto_list_envelope.h"
#include "../model/social_feed_post_update_dto.h"


// Create a social feed post
//
// Creates a new post in a specific social feed.
//
social_feed_post_dto_envelope_t*
SocialFeedsAPI_createFeedPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *api_version, char *x_api_version, social_feed_post_create_dto_t *social_feed_post_create_dto);


// Delete a social feed post
//
// Deletes a post from a specific social feed.
//
empty_envelope_t*
SocialFeedsAPI_deleteFeedPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *feedPostId, char *api_version, char *x_api_version);


// Get social feeds
//
// Retrieves a list of social feeds for the specified social profile.
//
social_feed_dto_list_envelope_t*
SocialFeedsAPI_getFeedNotifications(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Get social feed post by ID
//
// Retrieves a specific post from a social feed by its ID.
//
social_feed_post_dto_envelope_t*
SocialFeedsAPI_getFeedPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *feedPostId, char *api_version, char *x_api_version);


// Get social feed posts
//
// Retrieves a list of posts for a specific social feed.
//
social_feed_post_dto_list_envelope_t*
SocialFeedsAPI_getFeedPostsAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *api_version, char *x_api_version);


// Count social feed posts
//
// Returns the count of posts for a specific social feed.
//
int32_envelope_t*
SocialFeedsAPI_getFeedPostsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *api_version, char *x_api_version);


// Get social feed by ID
//
// Retrieves a specific social feed by its ID.
//
social_feed_dto_envelope_t*
SocialFeedsAPI_getNotificationAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *api_version, char *x_api_version);


// Count social feeds
//
// Returns the count of social feeds for the specified social profile.
//
int32_envelope_t*
SocialFeedsAPI_getNotificationsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Update a social feed post
//
// Updates an existing post in a specific social feed.
//
social_feed_post_dto_envelope_t*
SocialFeedsAPI_updateFeedPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *feedPostId, char *api_version, char *x_api_version, social_feed_post_update_dto_t *social_feed_post_update_dto);


