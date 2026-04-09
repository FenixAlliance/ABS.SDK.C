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
#include "../model/social_post_attachment_create_dto.h"
#include "../model/social_post_attachment_dto_envelope.h"
#include "../model/social_post_attachment_dto_list_envelope.h"
#include "../model/social_post_attachment_update_dto.h"
#include "../model/social_post_comment_create_dto.h"
#include "../model/social_post_comment_dto_envelope.h"
#include "../model/social_post_comment_dto_list_envelope.h"
#include "../model/social_post_comment_update_dto.h"
#include "../model/social_post_create_dto.h"
#include "../model/social_post_dto_envelope.h"
#include "../model/social_post_dto_list_envelope.h"
#include "../model/social_post_update_dto.h"
#include "../model/social_reaction_create_dto.h"
#include "../model/social_reaction_dto_envelope.h"
#include "../model/social_reaction_dto_list_envelope.h"
#include "../model/social_reaction_update_dto.h"


// Create a social post
//
// Creates a new social post for the specified social profile.
//
social_post_dto_envelope_t*
SocialPostsAPI_createSocialPostAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version, social_post_create_dto_t *social_post_create_dto);


// Create a social post attachment
//
// Creates a new attachment for a specific social post.
//
social_post_attachment_dto_envelope_t*
SocialPostsAPI_createSocialPostAttachmentAsync(apiClient_t *apiClient, char *socialPostId, char *socialProfileId, char *api_version, char *x_api_version, social_post_attachment_create_dto_t *social_post_attachment_create_dto);


// Create a social post comment
//
// Creates a new comment on a specific social post.
//
empty_envelope_t*
SocialPostsAPI_createSocialPostCommentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version, social_post_comment_create_dto_t *social_post_comment_create_dto);


// Create a social post reaction
//
// Creates a new reaction on a specific social post.
//
social_reaction_dto_envelope_t*
SocialPostsAPI_createSocialPostReactionAsync(apiClient_t *apiClient, char *socialPostId, char *socialProfileId, char *api_version, char *x_api_version, social_reaction_create_dto_t *social_reaction_create_dto);


// Delete a social post
//
// Deletes a social post by its ID.
//
empty_envelope_t*
SocialPostsAPI_deleteSocialPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version);


// Delete a social post attachment
//
// Deletes an attachment from a specific social post.
//
empty_envelope_t*
SocialPostsAPI_deleteSocialPostAttachmentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *attachmentId, char *api_version, char *x_api_version);


// Delete a social post comment
//
// Deletes a comment from a specific social post.
//
empty_envelope_t*
SocialPostsAPI_deleteSocialPostCommentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *commentId, char *api_version, char *x_api_version);


// Delete a social post reaction
//
// Deletes a reaction from a specific social post.
//
empty_envelope_t*
SocialPostsAPI_deleteSocialPostReactionAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *reactionId, char *api_version, char *x_api_version);


// Get social post by ID
//
// Retrieves a specific social post by its ID.
//
social_post_dto_envelope_t*
SocialPostsAPI_getSocialPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version);


// Get social post attachment by ID
//
// Retrieves a specific attachment from a social post by its ID.
//
empty_envelope_t*
SocialPostsAPI_getSocialPostAttachmentAsync(apiClient_t *apiClient, char *socialPostId, char *attachmentId, char *api_version, char *x_api_version);


// Get social post attachments
//
// Retrieves a list of attachments for a specific social post.
//
social_post_attachment_dto_list_envelope_t*
SocialPostsAPI_getSocialPostAttachmentsAsync(apiClient_t *apiClient, char *socialPostId, char *api_version, char *x_api_version);


// Count social post attachments
//
// Returns the count of attachments for a specific social post.
//
int32_envelope_t*
SocialPostsAPI_getSocialPostAttachmentsCountAsync(apiClient_t *apiClient, char *socialPostId, char *api_version, char *x_api_version);


// Get social post comment by ID
//
// Retrieves a specific comment from a social post by its ID.
//
social_post_comment_dto_envelope_t*
SocialPostsAPI_getSocialPostCommentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *commentId, char *api_version, char *x_api_version);


// Get social post comments
//
// Retrieves a list of comments for a specific social post.
//
social_post_comment_dto_list_envelope_t*
SocialPostsAPI_getSocialPostCommentsAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version);


// Count social post comments
//
// Returns the count of comments for a specific social post.
//
int32_envelope_t*
SocialPostsAPI_getSocialPostCommentsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version);


// Get social post reaction by ID
//
// Retrieves a specific reaction from a social post by its ID.
//
social_reaction_dto_envelope_t*
SocialPostsAPI_getSocialPostReactionAsync(apiClient_t *apiClient, char *socialPostId, char *reactionId, char *api_version, char *x_api_version);


// Get social post reactions
//
// Retrieves a list of reactions for a specific social post.
//
social_reaction_dto_list_envelope_t*
SocialPostsAPI_getSocialPostReactionsAsync(apiClient_t *apiClient, char *socialPostId, char *socialProfileId, char *api_version, char *x_api_version);


// Count social post reactions
//
// Returns the count of reactions for a specific social post.
//
int32_envelope_t*
SocialPostsAPI_getSocialPostReactionsCountAsync(apiClient_t *apiClient, char *socialPostId, char *socialProfileId, char *api_version, char *x_api_version);


// Get social posts
//
// Retrieves a list of social posts for the specified social profile.
//
social_post_dto_list_envelope_t*
SocialPostsAPI_getSocialPostsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Count social posts
//
// Returns the count of social posts for the specified social profile.
//
int32_envelope_t*
SocialPostsAPI_getSocialPostsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Update a social post
//
// Updates an existing social post by its ID.
//
empty_envelope_t*
SocialPostsAPI_updateSocialPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version, social_post_update_dto_t *social_post_update_dto);


// Update a social post attachment
//
// Updates an existing attachment on a specific social post.
//
empty_envelope_t*
SocialPostsAPI_updateSocialPostAttachmentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *attachmentId, char *api_version, char *x_api_version, social_post_attachment_update_dto_t *social_post_attachment_update_dto);


// Update a social post comment
//
// Updates an existing comment on a specific social post.
//
empty_envelope_t*
SocialPostsAPI_updateSocialPostCommentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *commentId, char *api_version, char *x_api_version, social_post_comment_update_dto_t *social_post_comment_update_dto);


// Update a social post reaction
//
// Updates an existing reaction on a specific social post.
//
empty_envelope_t*
SocialPostsAPI_updateSocialPostReactionAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *reactionId, char *api_version, char *x_api_version, social_reaction_update_dto_t *social_reaction_update_dto);


