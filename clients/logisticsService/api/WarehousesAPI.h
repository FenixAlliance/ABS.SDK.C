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
#include "../model/patch_operation.h"
#include "../model/warehouse_create_dto.h"
#include "../model/warehouse_dto_collection_query_parameters.h"
#include "../model/warehouse_dto_envelope.h"
#include "../model/warehouse_dto_list_envelope.h"
#include "../model/warehouse_update_dto.h"


// Create a warehouse
//
// Creates a new warehouse.
//
empty_envelope_t*
WarehousesAPI_createWarehouseAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, warehouse_create_dto_t *warehouse_create_dto);


// Delete a warehouse
//
// Deletes a warehouse.
//
empty_envelope_t*
WarehousesAPI_deleteWarehouseAsync(apiClient_t *apiClient, char *tenantId, char *warehouseId, char *api_version, char *x_api_version);


// Get warehouse by ID
//
// Retrieves a specific warehouse.
//
warehouse_dto_envelope_t*
WarehousesAPI_getWarehouseByIdAsync(apiClient_t *apiClient, char *tenantId, char *warehouseId, char *api_version, char *x_api_version);


// Get all warehouses
//
// Retrieves all warehouses for the specified tenant.
//
warehouse_dto_list_envelope_t*
WarehousesAPI_getWarehousesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, warehouse_dto_collection_query_parameters_t *warehouse_dto_collection_query_parameters);


// Get warehouses count
//
// Returns the count of warehouses.
//
int32_envelope_t*
WarehousesAPI_getWarehousesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, warehouse_dto_collection_query_parameters_t *warehouse_dto_collection_query_parameters);


// Patch a warehouse
//
// Partially updates an existing warehouse using JSON Patch.
//
empty_envelope_t*
WarehousesAPI_patchWarehouseAsync(apiClient_t *apiClient, char *tenantId, char *warehouseId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a warehouse
//
// Updates an existing warehouse.
//
empty_envelope_t*
WarehousesAPI_updateWarehouseAsync(apiClient_t *apiClient, char *tenantId, char *warehouseId, char *api_version, char *x_api_version, warehouse_update_dto_t *warehouse_update_dto);


