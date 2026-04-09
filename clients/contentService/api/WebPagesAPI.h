#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/web_page_category_create_dto.h"
#include "../model/web_page_category_dto_list_envelope.h"
#include "../model/web_page_create_dto.h"
#include "../model/web_page_dto_envelope.h"
#include "../model/web_page_dto_list_envelope.h"
#include "../model/web_page_tag_create_dto.h"
#include "../model/web_page_tag_dto_list_envelope.h"
#include "../model/web_page_update_dto.h"


// Count web pages
//
// Counts all web pages for the specified tenant.
//
int32_envelope_t*
WebPagesAPI_countWebPagesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a web page
//
// Creates a new web page for the specified tenant.
//
void
WebPagesAPI_createWebPageAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_page_create_dto_t *web_page_create_dto);


// Create a web page category relation
//
// Creates a new category and relates it to a web page.
//
void
WebPagesAPI_createWebPageCategoryRelationAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *api_version, char *x_api_version, web_page_category_create_dto_t *web_page_category_create_dto);


// Create a web page tag relation
//
// Creates a new tag and relates it to a web page.
//
void
WebPagesAPI_createWebPageTagRelationAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *api_version, char *x_api_version, web_page_tag_create_dto_t *web_page_tag_create_dto);


// Delete a web page
//
// Deletes a web page for the specified tenant.
//
void
WebPagesAPI_deleteWebPageAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *api_version, char *x_api_version);


// Get categories by web page
//
// Retrieves all categories related to a specific web page.
//
web_page_category_dto_list_envelope_t*
WebPagesAPI_getCategoriesByWebPageAsync(apiClient_t *apiClient, char *webPageId, char *api_version, char *x_api_version);


// Get tags by web page
//
// Retrieves all tags related to a specific web page.
//
web_page_tag_dto_list_envelope_t*
WebPagesAPI_getTagsByWebPageAsync(apiClient_t *apiClient, char *webPageId, char *api_version, char *x_api_version);


// Get web page by ID
//
// Retrieves a specific web page by its identifier.
//
web_page_dto_envelope_t*
WebPagesAPI_getWebPageByIdAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *api_version, char *x_api_version);


// Get web pages
//
// Retrieves all web pages for the specified tenant.
//
web_page_dto_list_envelope_t*
WebPagesAPI_getWebPagesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Relate web page to category
//
// Relates an existing category to a web page.
//
void
WebPagesAPI_relateWebPageToCategoryAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *categoryId, char *api_version, char *x_api_version);


// Relate web page to tag
//
// Relates an existing tag to a web page.
//
void
WebPagesAPI_relateWebPageToTagAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *tagId, char *api_version, char *x_api_version);


// Unrelate web page from category
//
// Removes the relationship between a web page and a category.
//
void
WebPagesAPI_unrelateWebPageCategoryAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *categoryId, char *api_version, char *x_api_version);


// Unrelate web page from tag
//
// Removes the relationship between a web page and a tag.
//
void
WebPagesAPI_unrelateWebPageTagAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *tagId, char *api_version, char *x_api_version);


// Update a web page
//
// Updates an existing web page for the specified tenant.
//
void
WebPagesAPI_updateWebPageAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *api_version, char *x_api_version, web_page_update_dto_t *web_page_update_dto);


