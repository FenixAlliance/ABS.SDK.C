#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/blog_post_category_create_dto.h"
#include "../model/blog_post_category_dto_list_envelope.h"
#include "../model/blog_post_comment_create_dto.h"
#include "../model/blog_post_comment_dto_list_envelope.h"
#include "../model/blog_post_create_dto.h"
#include "../model/blog_post_dto_envelope.h"
#include "../model/blog_post_dto_list_envelope.h"
#include "../model/blog_post_tag_create_dto.h"
#include "../model/blog_post_tag_dto_list_envelope.h"
#include "../model/blog_post_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create a new blog post
//
// Creates a new blog post for the specified tenant.
//
empty_envelope_t*
BlogPostsAPI_createBlogPostAsync(apiClient_t *apiClient, char *tenantId, blog_post_create_dto_t *blog_post_create_dto);


// Create a category for a blog post
//
// Creates a new category and relates it to a specific blog post.
//
empty_envelope_t*
BlogPostsAPI_createCategoryForBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, blog_post_category_create_dto_t *blog_post_category_create_dto);


// Create a comment for a blog post
//
// Creates a new comment on a specific blog post.
//
empty_envelope_t*
BlogPostsAPI_createCommentForBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, blog_post_comment_create_dto_t *blog_post_comment_create_dto);


// Create a tag for a blog post
//
// Creates a new tag and relates it to a specific blog post.
//
empty_envelope_t*
BlogPostsAPI_createTagForBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, blog_post_tag_create_dto_t *blog_post_tag_create_dto);


// Delete a blog post
//
// Deletes a blog post for the specified tenant.
//
empty_envelope_t*
BlogPostsAPI_deleteBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId);


// Delete a blog post comment
//
// Deletes a comment from a specific blog post.
//
empty_envelope_t*
BlogPostsAPI_deleteCommentFromBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *commentId);


// Get a blog post by ID
//
// Retrieves a single blog post by its unique identifier.
//
blog_post_dto_envelope_t*
BlogPostsAPI_getBlogPostByIdAsync(apiClient_t *apiClient, char *blogPostId);


// Retrieve a list of blog posts
//
// Retrieves all blog posts, optionally filtered by tenant using OData query options.
//
blog_post_dto_list_envelope_t*
BlogPostsAPI_getBlogPostsAsync(apiClient_t *apiClient, char *tenantId);


// Get the count of blog posts
//
// Returns the total count of blog posts, optionally filtered by tenant using OData query options.
//
int32_envelope_t*
BlogPostsAPI_getBlogPostsCountAsync(apiClient_t *apiClient, char *tenantId);


// Get categories for a blog post
//
// Retrieves all categories related to a specific blog post.
//
blog_post_category_dto_list_envelope_t*
BlogPostsAPI_getCategoriesForBlogPostAsync(apiClient_t *apiClient, char *blogPostId);


// Get comments for a blog post
//
// Retrieves all comments for a specific blog post.
//
blog_post_comment_dto_list_envelope_t*
BlogPostsAPI_getCommentsForBlogPostAsync(apiClient_t *apiClient, char *blogPostId);


// Get replies for a comment
//
// Retrieves all replies for a specific blog post comment.
//
blog_post_comment_dto_list_envelope_t*
BlogPostsAPI_getRepliesForCommentAsync(apiClient_t *apiClient, char *commentId, char *blogPostId);


// Get tags for a blog post
//
// Retrieves all tags related to a specific blog post.
//
blog_post_tag_dto_list_envelope_t*
BlogPostsAPI_getTagsForBlogPostAsync(apiClient_t *apiClient, char *blogPostId);


// Relate an existing category to a blog post
//
// Creates a relationship between an existing category and a blog post.
//
empty_envelope_t*
BlogPostsAPI_relateCategoryToBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *categoryId);


// Relate an existing tag to a blog post
//
// Creates a relationship between an existing tag and a blog post.
//
empty_envelope_t*
BlogPostsAPI_relateTagToBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *tagId);


// Reply to a blog post comment
//
// Creates a reply to an existing comment on a blog post.
//
empty_envelope_t*
BlogPostsAPI_replyToCommentAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *commentId, blog_post_comment_create_dto_t *blog_post_comment_create_dto);


// Remove a category from a blog post
//
// Removes the relationship between a category and a blog post.
//
empty_envelope_t*
BlogPostsAPI_unrelateCategoryFromBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *categoryId);


// Remove a tag from a blog post
//
// Removes the relationship between a tag and a blog post.
//
empty_envelope_t*
BlogPostsAPI_unrelateTagFromBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *tagId);


// Update a blog post
//
// Updates an existing blog post for the specified tenant.
//
empty_envelope_t*
BlogPostsAPI_updateBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, blog_post_update_dto_t *blog_post_update_dto);


