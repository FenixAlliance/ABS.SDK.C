#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/item_family_create_dto.h"
#include "../model/item_family_dto_envelope.h"
#include "../model/item_family_dto_list_envelope.h"
#include "../model/item_family_update_dto.h"


// Create a new item family
//
// Creates a new item family for the specified tenant.
//
item_family_dto_envelope_t*
ItemFamiliesAPI_createItemFamilyAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_family_create_dto_t *item_family_create_dto);


// Delete an item family
//
// Deletes an item family for the specified tenant.
//
void
ItemFamiliesAPI_deleteItemFamilyAsync(apiClient_t *apiClient, char *tenantId, char *itemFamilyId, char *api_version, char *x_api_version);


// Get all item families
//
// Retrieves all item families for the specified tenant using OData query options.
//
item_family_dto_list_envelope_t*
ItemFamiliesAPI_getItemFamiliesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get item families count
//
// Returns the count of item families for the specified tenant.
//
int32_envelope_t*
ItemFamiliesAPI_getItemFamiliesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get item family by ID
//
// Retrieves a specific item family by its ID.
//
item_family_dto_envelope_t*
ItemFamiliesAPI_getItemFamilyByIdAsync(apiClient_t *apiClient, char *itemFamilyId, char *tenantId, char *api_version, char *x_api_version);


// Update an item family
//
// Updates an existing item family for the specified tenant.
//
item_family_dto_envelope_t*
ItemFamiliesAPI_updateItemFamilyAsync(apiClient_t *apiClient, char *tenantId, char *itemFamilyId, char *api_version, char *x_api_version, item_family_update_dto_t *item_family_update_dto);


