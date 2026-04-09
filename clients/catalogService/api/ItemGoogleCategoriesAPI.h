#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/item_google_category_dto_envelope.h"
#include "../model/item_google_category_dto_list_envelope.h"


// Get all Google item categories (all)
//
// Retrieves all Google item categories (all) without OData query options.
//
item_google_category_dto_list_envelope_t*
ItemGoogleCategoriesAPI_getAllItemGoogleCategoriesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get children Google item categories by ID
//
// Retrieves children Google item categories for a given ID.
//
item_google_category_dto_list_envelope_t*
ItemGoogleCategoriesAPI_getChildrenItemGoogleCategoriesByIdAsync(apiClient_t *apiClient, char *itemCategoryId, char *api_version, char *x_api_version);


// Get all Google item categories
//
// Retrieves all Google item categories using OData query options.
//
item_google_category_dto_list_envelope_t*
ItemGoogleCategoriesAPI_getItemGoogleCategoriesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get Google item categories count
//
// Retrieves the count of Google item categories using OData query options.
//
int32_envelope_t*
ItemGoogleCategoriesAPI_getItemGoogleCategoriesCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get Google item categories tree
//
// Retrieves the Google item categories tree.
//
item_google_category_dto_list_envelope_t*
ItemGoogleCategoriesAPI_getItemGoogleCategoriesTreeAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get Google item category by ID
//
// Retrieves a specific Google item category by its ID.
//
item_google_category_dto_envelope_t*
ItemGoogleCategoriesAPI_getItemGoogleCategoryByIdAsync(apiClient_t *apiClient, char *itemCategoryId, char *api_version, char *x_api_version);


// Get root Google item categories
//
// Retrieves root Google item categories.
//
item_google_category_dto_list_envelope_t*
ItemGoogleCategoriesAPI_getRootItemGoogleCategoriesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Map Google item categories tree
//
// Maps the Google item categories tree.
//
item_google_category_dto_list_envelope_t*
ItemGoogleCategoriesAPI_mapItemGoogleCategoriesTreeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


