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
#include "../model/operation.h"
#include "../model/store_create_dto.h"
#include "../model/store_dto_envelope.h"
#include "../model/store_dto_list_envelope.h"
#include "../model/store_update_dto.h"


// Get stores count
//
// Returns the total count of stores for the specified tenant with OData filter support.
//
int32_envelope_t*
StoresAPI_countStoresAsync(apiClient_t *apiClient, char *tenantId);


// Create a store
//
// Creates a new store for the specified tenant.
//
empty_envelope_t*
StoresAPI_createStoreAsync(apiClient_t *apiClient, char *tenantId, store_create_dto_t *store_create_dto);


// Delete a store
//
// Deletes an existing store by its unique identifier.
//
empty_envelope_t*
StoresAPI_deleteStoreAsync(apiClient_t *apiClient, char *tenantId, char *storeId);


// Get store by ID
//
// Retrieves a single store by its unique identifier.
//
store_dto_envelope_t*
StoresAPI_getStoreAsync(apiClient_t *apiClient, char *tenantId, char *storeId);


// Get stores
//
// Retrieves a list of stores for the specified tenant with OData query support.
//
store_dto_list_envelope_t*
StoresAPI_getStoresAsync(apiClient_t *apiClient, char *tenantId);


// Patch a store
//
// Partially updates an existing store using a JSON Patch document.
//
empty_envelope_t*
StoresAPI_patchStoreAsync(apiClient_t *apiClient, char *tenantId, char *storeId, list_t *operation);


// Update a store
//
// Updates an existing store by its unique identifier.
//
empty_envelope_t*
StoresAPI_updateStoreAsync(apiClient_t *apiClient, char *tenantId, char *storeId, store_update_dto_t *store_update_dto);


