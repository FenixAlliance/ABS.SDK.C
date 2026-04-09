#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/item_brand_create_dto.h"
#include "../model/item_brand_dto_envelope.h"
#include "../model/item_brand_dto_list_envelope.h"
#include "../model/item_brand_update_dto.h"


// Create a new item brand
//
// Creates a new item brand for the specified tenant.
//
item_brand_dto_envelope_t*
ItemBrandsAPI_createItemBrandAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_brand_create_dto_t *item_brand_create_dto);


// Delete an item brand
//
// Deletes an item brand for the specified tenant.
//
void
ItemBrandsAPI_deleteItemBrandAsync(apiClient_t *apiClient, char *tenantId, char *itemBrandId, char *api_version, char *x_api_version);


// Get item brand by ID
//
// Retrieves a specific item brand by its ID.
//
item_brand_dto_envelope_t*
ItemBrandsAPI_getItemBrandByIdAsync(apiClient_t *apiClient, char *itemBrandId, char *api_version, char *x_api_version);


// Get all item brands
//
// Retrieves all item brands for the specified tenant using OData query options.
//
item_brand_dto_list_envelope_t*
ItemBrandsAPI_getItemBrandsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an item brand
//
// Updates an existing item brand for the specified tenant.
//
item_brand_dto_envelope_t*
ItemBrandsAPI_updateItemBrandAsync(apiClient_t *apiClient, char *tenantId, char *itemBrandId, char *api_version, char *x_api_version, item_brand_update_dto_t *item_brand_update_dto);


