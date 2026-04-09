#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/boolean_envelope.h"
#include "../model/conversation_create_dto.h"
#include "../model/conversation_dto_list_envelope.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/follow_record_dto_list_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/notification_dto_list_envelope.h"
#include "../model/private_message_create_dto.h"
#include "../model/private_message_dto_list_envelope.h"
#include "../model/private_message_update_dto.h"
#include "../model/social_profile_dto_envelope.h"
#include "../model/social_profile_dto_list_envelope.h"


// Count Conversations
//
// Count conversations for a social profile.
//
int32_envelope_t*
SocialProfilesAPI_countConversationsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Count Followed Profiles
//
// Count followed profiles for a social profile.
//
int32_envelope_t*
SocialProfilesAPI_countFollowedProfilesAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Count Follower Profiles
//
// Count follower profiles for a social profile.
//
int32_envelope_t*
SocialProfilesAPI_countFollowerProfilesAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Count Followers
//
// Count followers for a social profile.
//
int32_envelope_t*
SocialProfilesAPI_countFollowersAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Count Follows
//
// Count follows for a social profile.
//
int32_envelope_t*
SocialProfilesAPI_countFollowsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Count Messages
//
// Count messages for a conversation.
//
int32_envelope_t*
SocialProfilesAPI_countMessagesAsync(apiClient_t *apiClient, char *conversationId, char *api_version, char *x_api_version);


// Count Notifications
//
// Count notifications for a social profile.
//
int32_envelope_t*
SocialProfilesAPI_countNotificationsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Count Social Profiles
//
// Count social profiles.
//
int32_envelope_t*
SocialProfilesAPI_countSocialProfilesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Create Conversation
//
// Create a new conversation.
//
empty_envelope_t*
SocialProfilesAPI_createConversationAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version, conversation_create_dto_t *conversation_create_dto);


// Create Message
//
// Create a new message.
//
empty_envelope_t*
SocialProfilesAPI_createMessageAsync(apiClient_t *apiClient, char *socialProfileId, char *conversationId, char *api_version, char *x_api_version, private_message_create_dto_t *private_message_create_dto);


// Delete Message
//
// Delete a message.
//
empty_envelope_t*
SocialProfilesAPI_deleteMessageAsync(apiClient_t *apiClient, char *socialProfileId, char *conversationId, char *messageId, char *api_version, char *x_api_version);


// Follow
//
// Follow a social profile.
//
empty_envelope_t*
SocialProfilesAPI_followAsync(apiClient_t *apiClient, char *socialProfileId, char *followedSocialProfileId, char *api_version, char *x_api_version);


// Check if Follow Exists
//
// Check if a follow record exists between two social profiles.
//
boolean_envelope_t*
SocialProfilesAPI_followExistsAsync(apiClient_t *apiClient, char *socialProfileId, char *followedSocialProfileId, char *api_version, char *x_api_version);


// Get Conversations
//
// Get a list of conversations for a social profile.
//
conversation_dto_list_envelope_t*
SocialProfilesAPI_getConversationsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Get Followed Profiles
//
// Get a list of followed profiles for a social profile.
//
social_profile_dto_list_envelope_t*
SocialProfilesAPI_getFollowedProfilesAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Get Follower Profiles
//
// Get a list of follower profiles for a social profile.
//
social_profile_dto_list_envelope_t*
SocialProfilesAPI_getFollowerProfilesAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Get Followers
//
// Get a list of followers for a social profile.
//
follow_record_dto_list_envelope_t*
SocialProfilesAPI_getFollowersAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Get Follows
//
// Get a list of follows for a social profile.
//
follow_record_dto_list_envelope_t*
SocialProfilesAPI_getFollowsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Get Messages
//
// Get a list of messages for a conversation.
//
private_message_dto_list_envelope_t*
SocialProfilesAPI_getMessagesAsync(apiClient_t *apiClient, char *conversationId, char *api_version, char *x_api_version);


// Get Notifications
//
// Get a list of notifications for a social profile.
//
notification_dto_list_envelope_t*
SocialProfilesAPI_getNotificationsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Get Social Profile
//
// Get a social profile by ID.
//
social_profile_dto_envelope_t*
SocialProfilesAPI_getSocialProfileAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Get Social Profiles
//
// Get a list of social profiles.
//
social_profile_dto_list_envelope_t*
SocialProfilesAPI_getSocialProfilesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Unfollow
//
// Unfollow a social profile.
//
empty_envelope_t*
SocialProfilesAPI_unfollowAsync(apiClient_t *apiClient, char *socialProfileId, char *followedSocialProfileId, char *api_version, char *x_api_version);


// Update Message
//
// Update a message.
//
empty_envelope_t*
SocialProfilesAPI_updateMessageAsync(apiClient_t *apiClient, char *socialProfileId, char *conversationId, char *messageId, char *api_version, char *x_api_version, private_message_update_dto_t *private_message_update_dto);


