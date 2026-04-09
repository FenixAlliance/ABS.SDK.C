#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/item_category_create_dto.h"
#include "../model/item_category_dto_envelope.h"
#include "../model/item_category_dto_list_envelope.h"
#include "../model/item_category_update_dto.h"


// Count item categories
//
// Counts all item categories for the specified tenant.
//
int32_envelope_t*
ItemCategoriesAPI_countItemCategoriesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a new item category
//
// Creates a new item category for the specified tenant.
//
item_category_dto_envelope_t*
ItemCategoriesAPI_createItemCategoryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_category_create_dto_t *item_category_create_dto);


// Delete an item category
//
// Deletes an item category for the specified tenant.
//
void
ItemCategoriesAPI_deleteItemCategoryAsync(apiClient_t *apiClient, char *tenantId, char *itemCategoryId, char *api_version, char *x_api_version);


// Get all item categories
//
// Retrieves all item categories for the specified tenant using OData query options.
//
item_category_dto_list_envelope_t*
ItemCategoriesAPI_getItemCategoriesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get item category by ID
//
// Retrieves a specific item category by its ID.
//
item_category_dto_envelope_t*
ItemCategoriesAPI_getItemCategoryByIdAsync(apiClient_t *apiClient, char *itemCategoryId, char *api_version, char *x_api_version);


// Update an item category
//
// Updates an existing item category for the specified tenant.
//
void
ItemCategoriesAPI_updateItemCategoryAsync(apiClient_t *apiClient, char *tenantId, char *itemCategoryId, char *api_version, char *x_api_version, item_category_update_dto_t *item_category_update_dto);


