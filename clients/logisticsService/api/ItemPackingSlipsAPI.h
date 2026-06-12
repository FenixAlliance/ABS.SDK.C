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
#include "../model/item_packing_slip_create_dto.h"
#include "../model/item_packing_slip_dto_envelope.h"
#include "../model/item_packing_slip_dto_list_envelope.h"
#include "../model/item_packing_slip_entry_create_dto.h"
#include "../model/item_packing_slip_entry_dto_envelope.h"
#include "../model/item_packing_slip_entry_dto_list_envelope.h"
#include "../model/item_packing_slip_entry_update_dto.h"
#include "../model/item_packing_slip_update_dto.h"
#include "../model/operation.h"


// Create an item packing slip
//
// Creates a new item packing slip.
//
empty_envelope_t*
ItemPackingSlipsAPI_createItemPackingSlipAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_packing_slip_create_dto_t *item_packing_slip_create_dto);


// Create a packing slip entry
//
// Creates a new packing slip entry.
//
empty_envelope_t*
ItemPackingSlipsAPI_createItemPackingSlipEntryAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version, item_packing_slip_entry_create_dto_t *item_packing_slip_entry_create_dto);


// Delete an item packing slip
//
// Deletes an item packing slip.
//
empty_envelope_t*
ItemPackingSlipsAPI_deleteItemPackingSlipAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version);


// Delete a packing slip entry
//
// Deletes a packing slip entry.
//
empty_envelope_t*
ItemPackingSlipsAPI_deleteItemPackingSlipEntryAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *entryId, char *api_version, char *x_api_version);


// Get item packing slip by ID
//
// Retrieves a specific item packing slip.
//
item_packing_slip_dto_envelope_t*
ItemPackingSlipsAPI_getItemPackingSlipByIdAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version);


// Get packing slip entries
//
// Retrieves all entries for the specified packing slip.
//
item_packing_slip_entry_dto_list_envelope_t*
ItemPackingSlipsAPI_getItemPackingSlipEntriesAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version);


// Get packing slip entries count
//
// Returns the count of packing slip entries.
//
int32_envelope_t*
ItemPackingSlipsAPI_getItemPackingSlipEntriesCountAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version);


// Get packing slip entry by ID
//
// Retrieves a specific packing slip entry.
//
item_packing_slip_entry_dto_envelope_t*
ItemPackingSlipsAPI_getItemPackingSlipEntryByIdAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *entryId, char *api_version, char *x_api_version);


// Get all item packing slips
//
// Retrieves all item packing slips for the specified tenant.
//
item_packing_slip_dto_list_envelope_t*
ItemPackingSlipsAPI_getItemPackingSlipsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get item packing slips count
//
// Returns the count of item packing slips.
//
int32_envelope_t*
ItemPackingSlipsAPI_getItemPackingSlipsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch an item packing slip
//
// Applies a JSON Patch document to an item packing slip.
//
empty_envelope_t*
ItemPackingSlipsAPI_patchItemPackingSlipAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version, list_t *operation);


// Patch a packing slip entry
//
// Applies a JSON Patch document to a packing slip entry.
//
empty_envelope_t*
ItemPackingSlipsAPI_patchItemPackingSlipEntryAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *entryId, char *api_version, char *x_api_version, list_t *operation);


// Update an item packing slip
//
// Updates an existing item packing slip.
//
empty_envelope_t*
ItemPackingSlipsAPI_updateItemPackingSlipAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version, item_packing_slip_update_dto_t *item_packing_slip_update_dto);


// Update a packing slip entry
//
// Updates an existing packing slip entry.
//
empty_envelope_t*
ItemPackingSlipsAPI_updateItemPackingSlipEntryAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *entryId, char *api_version, char *x_api_version, item_packing_slip_entry_update_dto_t *item_packing_slip_entry_update_dto);


