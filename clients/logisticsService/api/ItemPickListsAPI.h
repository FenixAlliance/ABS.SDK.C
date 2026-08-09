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
#include "../model/item_pick_list_create_dto.h"
#include "../model/item_pick_list_dto_collection_query_parameters.h"
#include "../model/item_pick_list_dto_envelope.h"
#include "../model/item_pick_list_dto_list_envelope.h"
#include "../model/item_pick_list_entry_create_dto.h"
#include "../model/item_pick_list_entry_dto_collection_query_parameters.h"
#include "../model/item_pick_list_entry_dto_envelope.h"
#include "../model/item_pick_list_entry_dto_list_envelope.h"
#include "../model/item_pick_list_entry_update_dto.h"
#include "../model/item_pick_list_update_dto.h"
#include "../model/patch_operation.h"


// Create an item pick list
//
// Creates a new item pick list.
//
empty_envelope_t*
ItemPickListsAPI_createItemPickListAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_pick_list_create_dto_t *item_pick_list_create_dto);


// Create a pick list entry
//
// Creates a new pick list entry.
//
empty_envelope_t*
ItemPickListsAPI_createItemPickListEntryAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *api_version, char *x_api_version, item_pick_list_entry_create_dto_t *item_pick_list_entry_create_dto);


// Delete an item pick list
//
// Deletes an item pick list.
//
empty_envelope_t*
ItemPickListsAPI_deleteItemPickListAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *api_version, char *x_api_version);


// Delete a pick list entry
//
// Deletes a pick list entry.
//
empty_envelope_t*
ItemPickListsAPI_deleteItemPickListEntryAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *entryId, char *api_version, char *x_api_version);


// Get item pick list by ID
//
// Retrieves a specific item pick list.
//
item_pick_list_dto_envelope_t*
ItemPickListsAPI_getItemPickListByIdAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *api_version, char *x_api_version);


// Get pick list entries
//
// Retrieves all entries for the specified pick list.
//
item_pick_list_entry_dto_list_envelope_t*
ItemPickListsAPI_getItemPickListEntriesAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *api_version, char *x_api_version, item_pick_list_entry_dto_collection_query_parameters_t *item_pick_list_entry_dto_collection_query_parameters);


// Get pick list entries count
//
// Returns the count of pick list entries.
//
int32_envelope_t*
ItemPickListsAPI_getItemPickListEntriesCountAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *api_version, char *x_api_version, item_pick_list_entry_dto_collection_query_parameters_t *item_pick_list_entry_dto_collection_query_parameters);


// Get pick list entry by ID
//
// Retrieves a specific pick list entry.
//
item_pick_list_entry_dto_envelope_t*
ItemPickListsAPI_getItemPickListEntryByIdAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *entryId, char *api_version, char *x_api_version);


// Get all item pick lists
//
// Retrieves all item pick lists for the specified tenant.
//
item_pick_list_dto_list_envelope_t*
ItemPickListsAPI_getItemPickListsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_pick_list_dto_collection_query_parameters_t *item_pick_list_dto_collection_query_parameters);


// Get item pick lists count
//
// Returns the count of item pick lists.
//
int32_envelope_t*
ItemPickListsAPI_getItemPickListsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_pick_list_dto_collection_query_parameters_t *item_pick_list_dto_collection_query_parameters);


// Patch an item pick list
//
// Applies a JSON Patch document to an item pick list.
//
empty_envelope_t*
ItemPickListsAPI_patchItemPickListAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *api_version, char *x_api_version, list_t *patch_operation);


// Patch a pick list entry
//
// Applies a JSON Patch document to a pick list entry.
//
empty_envelope_t*
ItemPickListsAPI_patchItemPickListEntryAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *entryId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update an item pick list
//
// Updates an existing item pick list.
//
empty_envelope_t*
ItemPickListsAPI_updateItemPickListAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *api_version, char *x_api_version, item_pick_list_update_dto_t *item_pick_list_update_dto);


// Update a pick list entry
//
// Updates an existing pick list entry.
//
empty_envelope_t*
ItemPickListsAPI_updateItemPickListEntryAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *entryId, char *api_version, char *x_api_version, item_pick_list_entry_update_dto_t *item_pick_list_entry_update_dto);


