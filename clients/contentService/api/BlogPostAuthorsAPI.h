#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/blog_author_dto_envelope.h"
#include "../model/blog_author_dto_list_envelope.h"
#include "../model/blog_post_dto_list_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Count blog posts by author
//
// Returns the count of blog posts written by a specific author.
//
int32_envelope_t*
BlogPostAuthorsAPI_countBlogPostsByAuthorAsync(apiClient_t *apiClient, char *authorId, char *api_version, char *x_api_version);


// Get blog author by ID
//
// Retrieves a specific blog author by their identifier.
//
blog_author_dto_envelope_t*
BlogPostAuthorsAPI_getBlogAuthorByIdAsync(apiClient_t *apiClient, char *authorId, char *api_version, char *x_api_version);


// Get blog authors
//
// Retrieves all blog authors, optionally filtered by tenant.
//
blog_author_dto_list_envelope_t*
BlogPostAuthorsAPI_getBlogAuthorsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get blog posts by author
//
// Retrieves all blog posts written by a specific author.
//
blog_post_dto_list_envelope_t*
BlogPostAuthorsAPI_getBlogPostsByAuthorAsync(apiClient_t *apiClient, char *authorId, char *api_version, char *x_api_version);


