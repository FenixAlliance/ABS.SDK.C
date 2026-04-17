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
#include "../model/web_page_category_create_dto.h"
#include "../model/web_page_category_dto_envelope.h"
#include "../model/web_page_category_dto_list_envelope.h"
#include "../model/web_page_category_update_dto.h"


// Count web page categories
//
// Counts all web page categories for the specified tenant.
//
int32_envelope_t*
WebPageCategoriesAPI_countWebPageCategoriesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a web page category
//
// Creates a new web page category for the specified tenant.
//
empty_envelope_t*
WebPageCategoriesAPI_createWebPageCategoryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_page_category_create_dto_t *web_page_category_create_dto);


// Delete a web page category
//
// Deletes a web page category for the specified tenant.
//
empty_envelope_t*
WebPageCategoriesAPI_deleteWebPageCategoryAsync(apiClient_t *apiClient, char *tenantId, char *webPageCategoryId, char *api_version, char *x_api_version);


// Get web page categories
//
// Retrieves all web page categories for the specified tenant.
//
web_page_category_dto_list_envelope_t*
WebPageCategoriesAPI_getWebPageCategoriesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get web page category by ID
//
// Retrieves a specific web page category by its ID.
//
web_page_category_dto_envelope_t*
WebPageCategoriesAPI_getWebPageCategoryByIdAsync(apiClient_t *apiClient, char *tenantId, char *webPageCategoryId, char *api_version, char *x_api_version);


// Update a web page category
//
// Updates an existing web page category for the specified tenant.
//
empty_envelope_t*
WebPageCategoriesAPI_updateWebPageCategoryAsync(apiClient_t *apiClient, char *tenantId, char *webPageCategoryId, char *api_version, char *x_api_version, web_page_category_update_dto_t *web_page_category_update_dto);


