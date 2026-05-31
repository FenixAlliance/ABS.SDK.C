#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/item_bundle_create_dto.h"
#include "../model/item_bundle_dto_envelope.h"
#include "../model/item_bundle_dto_list_envelope.h"
#include "../model/item_bundle_update_dto.h"


// Create a new item bundle
//
// Creates a new item bundle for the specified tenant.
//
item_bundle_dto_envelope_t*
ItemBundlesAPI_createItemBundleAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_bundle_create_dto_t *item_bundle_create_dto);


// Delete an item bundle
//
// Deletes an item bundle for the specified tenant.
//
void
ItemBundlesAPI_deleteItemBundleAsync(apiClient_t *apiClient, char *tenantId, char *itemBundleId, char *api_version, char *x_api_version);


// Get item bundle by ID
//
// Retrieves a specific item bundle by its ID.
//
item_bundle_dto_envelope_t*
ItemBundlesAPI_getItemBundleByIdAsync(apiClient_t *apiClient, char *itemBundleId, char *tenantId, char *api_version, char *x_api_version);


// Get all item bundles
//
// Retrieves all item bundles for the specified tenant using OData query options.
//
item_bundle_dto_list_envelope_t*
ItemBundlesAPI_getItemBundlesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get item bundles count
//
// Returns the count of item bundles for the specified tenant.
//
int32_envelope_t*
ItemBundlesAPI_getItemBundlesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an item bundle
//
// Updates an existing item bundle for the specified tenant.
//
item_bundle_dto_envelope_t*
ItemBundlesAPI_updateItemBundleAsync(apiClient_t *apiClient, char *tenantId, char *itemBundleId, char *api_version, char *x_api_version, item_bundle_update_dto_t *item_bundle_update_dto);


