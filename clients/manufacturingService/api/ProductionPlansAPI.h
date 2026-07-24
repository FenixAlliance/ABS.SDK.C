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
#include "../model/production_plan_create_dto.h"
#include "../model/production_plan_dto.h"
#include "../model/production_plan_dto_list_envelope.h"
#include "../model/production_plan_update_dto.h"


// Create a new production plan
//
// Creates a new production plan for the specified tenant.
//
void
ProductionPlansAPI_createProductionPlanAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, production_plan_create_dto_t *production_plan_create_dto);


// Delete a production plan
//
// Deletes a production plan for the specified tenant.
//
void
ProductionPlansAPI_deleteProductionPlanAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get production plan by ID
//
// Retrieves a specific production plan by its identifier.
//
production_plan_dto_t*
ProductionPlansAPI_getProductionPlanByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all production plans
//
// Retrieves all production plans for the specified tenant.
//
production_plan_dto_list_envelope_t*
ProductionPlansAPI_getProductionPlansAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get production plans count
//
// Returns the count of production plans for the specified tenant.
//
int32_envelope_t*
ProductionPlansAPI_getProductionPlansCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a production plan
//
// Patch a production plan
//
empty_envelope_t*
ProductionPlansAPI_patchProductionPlanAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);


// Update a production plan
//
// Updates an existing production plan for the specified tenant.
//
void
ProductionPlansAPI_updateProductionPlanAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, production_plan_update_dto_t *production_plan_update_dto);


