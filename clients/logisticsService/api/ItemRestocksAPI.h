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
#include "../model/item_restock_create_dto.h"
#include "../model/item_restock_dto_collection_query_parameters.h"
#include "../model/item_restock_dto_envelope.h"
#include "../model/item_restock_dto_list_envelope.h"
#include "../model/item_restock_entry_create_dto.h"
#include "../model/item_restock_entry_dto_collection_query_parameters.h"
#include "../model/item_restock_entry_dto_envelope.h"
#include "../model/item_restock_entry_dto_list_envelope.h"
#include "../model/item_restock_entry_update_dto.h"
#include "../model/item_restock_update_dto.h"
#include "../model/patch_operation.h"


// Create an item restock
//
// Creates a new item restock.
//
empty_envelope_t*
ItemRestocksAPI_createItemRestockAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_restock_create_dto_t *item_restock_create_dto);


// Create a restock entry
//
// Creates a new restock entry.
//
empty_envelope_t*
ItemRestocksAPI_createItemRestockEntryAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version, item_restock_entry_create_dto_t *item_restock_entry_create_dto);


// Delete an item restock
//
// Deletes an item restock.
//
empty_envelope_t*
ItemRestocksAPI_deleteItemRestockAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version);


// Delete a restock entry
//
// Deletes a restock entry.
//
empty_envelope_t*
ItemRestocksAPI_deleteItemRestockEntryAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *entryId, char *api_version, char *x_api_version);


// Get item restock by ID
//
// Retrieves a specific item restock.
//
item_restock_dto_envelope_t*
ItemRestocksAPI_getItemRestockByIdAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version);


// Get restock entries
//
// Retrieves all entries for the specified restock.
//
item_restock_entry_dto_list_envelope_t*
ItemRestocksAPI_getItemRestockEntriesAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version, item_restock_entry_dto_collection_query_parameters_t *item_restock_entry_dto_collection_query_parameters);


// Get restock entries count
//
// Returns the count of restock entries.
//
int32_envelope_t*
ItemRestocksAPI_getItemRestockEntriesCountAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version, item_restock_entry_dto_collection_query_parameters_t *item_restock_entry_dto_collection_query_parameters);


// Get restock entry by ID
//
// Retrieves a specific restock entry.
//
item_restock_entry_dto_envelope_t*
ItemRestocksAPI_getItemRestockEntryByIdAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *entryId, char *api_version, char *x_api_version);


// Get all item restocks
//
// Retrieves all item restocks for the specified tenant.
//
item_restock_dto_list_envelope_t*
ItemRestocksAPI_getItemRestocksAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_restock_dto_collection_query_parameters_t *item_restock_dto_collection_query_parameters);


// Get item restocks count
//
// Returns the count of item restocks.
//
int32_envelope_t*
ItemRestocksAPI_getItemRestocksCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_restock_dto_collection_query_parameters_t *item_restock_dto_collection_query_parameters);


// Patch an item restock
//
// Applies a JSON Patch document to an item restock.
//
empty_envelope_t*
ItemRestocksAPI_patchItemRestockAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version, list_t *patch_operation);


// Patch a restock entry
//
// Applies a JSON Patch document to a restock entry.
//
empty_envelope_t*
ItemRestocksAPI_patchItemRestockEntryAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *entryId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update an item restock
//
// Updates an existing item restock.
//
empty_envelope_t*
ItemRestocksAPI_updateItemRestockAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version, item_restock_update_dto_t *item_restock_update_dto);


// Update a restock entry
//
// Updates an existing restock entry.
//
empty_envelope_t*
ItemRestocksAPI_updateItemRestockEntryAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *entryId, char *api_version, char *x_api_version, item_restock_entry_update_dto_t *item_restock_entry_update_dto);


