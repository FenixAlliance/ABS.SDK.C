#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/blog_post_tag_create_dto.h"
#include "../model/blog_post_tag_dto_envelope.h"
#include "../model/blog_post_tag_dto_list_envelope.h"
#include "../model/blog_post_tag_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Count blog post tags
//
// Counts all blog post tags for the specified tenant.
//
int32_envelope_t*
BlogPostTagsAPI_countBlogPostTagsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a blog post tag
//
// Creates a new blog post tag for the specified tenant.
//
empty_envelope_t*
BlogPostTagsAPI_createBlogPostTagAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, blog_post_tag_create_dto_t *blog_post_tag_create_dto);


// Delete a blog post tag
//
// Deletes a blog post tag for the specified tenant.
//
empty_envelope_t*
BlogPostTagsAPI_deleteBlogPostTagAsync(apiClient_t *apiClient, char *tenantId, char *blogPostTagId, char *api_version, char *x_api_version);


// Get blog post tag by ID
//
// Retrieves a specific blog post tag by its ID.
//
blog_post_tag_dto_envelope_t*
BlogPostTagsAPI_getBlogPostTagByIdAsync(apiClient_t *apiClient, char *tenantId, char *blogPostTagId, char *api_version, char *x_api_version);


// Get blog post tags
//
// Retrieves all blog post tags for the specified tenant.
//
blog_post_tag_dto_list_envelope_t*
BlogPostTagsAPI_getBlogPostTagsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a blog post tag
//
// Updates an existing blog post tag for the specified tenant.
//
empty_envelope_t*
BlogPostTagsAPI_updateBlogPostTagAsync(apiClient_t *apiClient, char *tenantId, char *blogPostTagId, char *api_version, char *x_api_version, blog_post_tag_update_dto_t *blog_post_tag_update_dto);


