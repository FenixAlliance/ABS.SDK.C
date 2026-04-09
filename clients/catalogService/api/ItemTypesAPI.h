#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/item_type_create_dto.h"
#include "../model/item_type_dto_envelope.h"
#include "../model/item_type_dto_list_envelope.h"
#include "../model/item_type_update_dto.h"


// Count item types
//
// Counts all item types for the specified tenant.
//
int32_envelope_t*
ItemTypesAPI_countItemTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a new item type
//
// Creates a new item type for the specified tenant.
//
item_type_dto_envelope_t*
ItemTypesAPI_createItemTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_type_create_dto_t *item_type_create_dto);


// Delete an item type
//
// Deletes an item type for the specified tenant.
//
item_type_dto_envelope_t*
ItemTypesAPI_deleteItemTypeAsync(apiClient_t *apiClient, char *tenantId, char *itemTypeID, char *api_version, char *x_api_version);


// Get item type by ID
//
// Retrieves a specific item type by its ID.
//
item_type_dto_envelope_t*
ItemTypesAPI_getItemTypeByIdAsync(apiClient_t *apiClient, char *itemTypeID, char *api_version, char *x_api_version);


// Get all item types
//
// Retrieves all item types for the specified tenant using OData query options.
//
item_type_dto_list_envelope_t*
ItemTypesAPI_getItemTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an item type
//
// Updates an existing item type for the specified tenant.
//
void
ItemTypesAPI_updateItemTypeAsync(apiClient_t *apiClient, char *tenantId, char *itemTypeID, char *api_version, char *x_api_version, item_type_update_dto_t *item_type_update_dto);


