#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/blog_post_category_create_dto.h"
#include "../model/blog_post_category_dto_envelope.h"
#include "../model/blog_post_category_dto_list_envelope.h"
#include "../model/blog_post_category_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Count blog post categories
//
// Counts all blog post categories for the specified tenant.
//
int32_envelope_t*
BlogPostCategoriesAPI_countBlogPostCategoriesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a blog post category
//
// Creates a new blog post category for the specified tenant.
//
empty_envelope_t*
BlogPostCategoriesAPI_createBlogPostCategoryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, blog_post_category_create_dto_t *blog_post_category_create_dto);


// Delete a blog post category
//
// Deletes a blog post category for the specified tenant.
//
empty_envelope_t*
BlogPostCategoriesAPI_deleteBlogPostCategoryAsync(apiClient_t *apiClient, char *tenantId, char *blogPostCategoryId, char *api_version, char *x_api_version);


// Get blog post categories
//
// Retrieves all blog post categories for the specified tenant.
//
blog_post_category_dto_list_envelope_t*
BlogPostCategoriesAPI_getBlogPostCategoriesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get blog post category by ID
//
// Retrieves a specific blog post category by its ID.
//
blog_post_category_dto_envelope_t*
BlogPostCategoriesAPI_getBlogPostCategoryByIdAsync(apiClient_t *apiClient, char *tenantId, char *blogPostCategoryId, char *api_version, char *x_api_version);


// Update a blog post category
//
// Updates an existing blog post category for the specified tenant.
//
empty_envelope_t*
BlogPostCategoriesAPI_updateBlogPostCategoryAsync(apiClient_t *apiClient, char *tenantId, char *blogPostCategoryId, char *api_version, char *x_api_version, blog_post_category_update_dto_t *blog_post_category_update_dto);


