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
#include "../model/work_order_create_dto.h"
#include "../model/work_order_dto.h"
#include "../model/work_order_dto_collection_query_parameters.h"
#include "../model/work_order_dto_list_envelope.h"
#include "../model/work_order_update_dto.h"


// Create a new work order
//
// Creates a new work order for the specified tenant.
//
void
WorkOrdersAPI_createWorkOrderAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, work_order_create_dto_t *work_order_create_dto);


// Delete a work order
//
// Deletes a work order for the specified tenant.
//
void
WorkOrdersAPI_deleteWorkOrderAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get work order by ID
//
// Retrieves a specific work order by its identifier.
//
work_order_dto_t*
WorkOrdersAPI_getWorkOrderByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all work orders
//
// Retrieves all work orders for the specified tenant.
//
work_order_dto_list_envelope_t*
WorkOrdersAPI_getWorkOrdersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, work_order_dto_collection_query_parameters_t *work_order_dto_collection_query_parameters);


// Get work orders count
//
// Returns the count of work orders for the specified tenant.
//
int32_envelope_t*
WorkOrdersAPI_getWorkOrdersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, work_order_dto_collection_query_parameters_t *work_order_dto_collection_query_parameters);


// Patch a work order
//
// Patch a work order
//
empty_envelope_t*
WorkOrdersAPI_patchWorkOrderAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a work order
//
// Updates an existing work order for the specified tenant.
//
void
WorkOrdersAPI_updateWorkOrderAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, work_order_update_dto_t *work_order_update_dto);


