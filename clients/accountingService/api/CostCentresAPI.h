#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cost_centre_budget_create_dto.h"
#include "../model/cost_centre_budget_dto_envelope.h"
#include "../model/cost_centre_budget_dto_list_envelope.h"
#include "../model/cost_centre_budget_update_dto.h"
#include "../model/cost_centre_create_dto.h"
#include "../model/cost_centre_dto_envelope.h"
#include "../model/cost_centre_dto_list_envelope.h"
#include "../model/cost_centre_group_create_dto.h"
#include "../model/cost_centre_group_dto_envelope.h"
#include "../model/cost_centre_group_dto_list_envelope.h"
#include "../model/cost_centre_group_update_dto.h"
#include "../model/cost_centre_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create a cost centre
//
// Creates a new cost centre.
//
empty_envelope_t*
CostCentresAPI_createCostCentre(apiClient_t *apiClient, char *tenantId, cost_centre_create_dto_t *cost_centre_create_dto, char *api_version, char *x_api_version);


// Create a cost centre budget
//
// Creates a new cost centre budget.
//
empty_envelope_t*
CostCentresAPI_createCostCentreBudget(apiClient_t *apiClient, char *tenantId, cost_centre_budget_create_dto_t *cost_centre_budget_create_dto, char *api_version, char *x_api_version);


// Create a cost centre group
//
// Creates a new cost centre group.
//
empty_envelope_t*
CostCentresAPI_createCostCentreGroup(apiClient_t *apiClient, char *tenantId, cost_centre_group_create_dto_t *cost_centre_group_create_dto, char *api_version, char *x_api_version);


// Delete a cost centre
//
// Deletes a cost centre.
//
empty_envelope_t*
CostCentresAPI_deleteCostCentre(apiClient_t *apiClient, char *tenantId, char *costCentreId, char *api_version, char *x_api_version);


// Delete a cost centre budget
//
// Deletes a cost centre budget.
//
empty_envelope_t*
CostCentresAPI_deleteCostCentreBudget(apiClient_t *apiClient, char *tenantId, char *budgetId, char *api_version, char *x_api_version);


// Delete a cost centre group
//
// Deletes a cost centre group.
//
empty_envelope_t*
CostCentresAPI_deleteCostCentreGroup(apiClient_t *apiClient, char *tenantId, char *groupId, char *api_version, char *x_api_version);


// Get a cost centre by id
//
// Retrieves a cost centre by its identifier.
//
cost_centre_dto_envelope_t*
CostCentresAPI_getCostCentre(apiClient_t *apiClient, char *tenantId, char *costCentreId, char *api_version, char *x_api_version);


// Get a cost centre budget by id
//
// Retrieves a cost centre budget by its identifier.
//
cost_centre_budget_dto_envelope_t*
CostCentresAPI_getCostCentreBudget(apiClient_t *apiClient, char *tenantId, char *budgetId, char *api_version, char *x_api_version);


// Get all cost centre budgets for a tenant
//
// Retrieves all cost centre budgets for the specified tenant using OData query options.
//
cost_centre_budget_dto_list_envelope_t*
CostCentresAPI_getCostCentreBudgets(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get a cost centre group by id
//
// Retrieves a cost centre group by its identifier.
//
cost_centre_group_dto_envelope_t*
CostCentresAPI_getCostCentreGroup(apiClient_t *apiClient, char *tenantId, char *groupId, char *api_version, char *x_api_version);


// Get all cost centre groups for a tenant
//
// Retrieves all cost centre groups for the specified tenant using OData query options.
//
cost_centre_group_dto_list_envelope_t*
CostCentresAPI_getCostCentreGroups(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of cost centre groups for a tenant
//
// Retrieves the count of cost centre groups for the specified tenant using OData query options.
//
int32_envelope_t*
CostCentresAPI_getCostCentreGroupsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get all cost centres for a tenant
//
// Retrieves all cost centres for the specified tenant using OData query options.
//
cost_centre_dto_list_envelope_t*
CostCentresAPI_getCostCentres(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of cost centres for a tenant
//
// Retrieves the count of cost centres for the specified tenant using OData query options.
//
int32_envelope_t*
CostCentresAPI_getCostCentresCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a cost centre
//
// Updates an existing cost centre.
//
empty_envelope_t*
CostCentresAPI_updateCostCentre(apiClient_t *apiClient, char *tenantId, char *costCentreId, cost_centre_update_dto_t *cost_centre_update_dto, char *api_version, char *x_api_version);


// Update a cost centre budget
//
// Updates an existing cost centre budget.
//
empty_envelope_t*
CostCentresAPI_updateCostCentreBudget(apiClient_t *apiClient, char *tenantId, char *budgetId, cost_centre_budget_update_dto_t *cost_centre_budget_update_dto, char *api_version, char *x_api_version);


// Update a cost centre group
//
// Updates an existing cost centre group.
//
empty_envelope_t*
CostCentresAPI_updateCostCentreGroup(apiClient_t *apiClient, char *tenantId, char *groupId, cost_centre_group_update_dto_t *cost_centre_group_update_dto, char *api_version, char *x_api_version);


