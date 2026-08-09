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
#include "../model/work_order_type_create_dto.h"
#include "../model/work_order_type_dto.h"
#include "../model/work_order_type_dto_collection_query_parameters.h"
#include "../model/work_order_type_dto_list_envelope.h"
#include "../model/work_order_type_update_dto.h"


// Create a new work order type
//
// Creates a new work order type for the specified tenant.
//
void
WorkOrderTypesAPI_createWorkOrderTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, work_order_type_create_dto_t *work_order_type_create_dto);


// Delete a work order type
//
// Deletes a work order type for the specified tenant.
//
void
WorkOrderTypesAPI_deleteWorkOrderTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get work order type by ID
//
// Retrieves a specific work order type by its identifier.
//
work_order_type_dto_t*
WorkOrderTypesAPI_getWorkOrderTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all work order types
//
// Retrieves all work order types for the specified tenant.
//
work_order_type_dto_list_envelope_t*
WorkOrderTypesAPI_getWorkOrderTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, work_order_type_dto_collection_query_parameters_t *work_order_type_dto_collection_query_parameters);


// Get work order types count
//
// Returns the count of work order types for the specified tenant.
//
int32_envelope_t*
WorkOrderTypesAPI_getWorkOrderTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, work_order_type_dto_collection_query_parameters_t *work_order_type_dto_collection_query_parameters);


// Patch a work order type
//
// Patch a work order type
//
empty_envelope_t*
WorkOrderTypesAPI_patchWorkOrderTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a work order type
//
// Updates an existing work order type for the specified tenant.
//
void
WorkOrderTypesAPI_updateWorkOrderTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, work_order_type_update_dto_t *work_order_type_update_dto);


