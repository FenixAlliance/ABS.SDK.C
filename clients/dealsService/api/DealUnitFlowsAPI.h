#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/deal_unit_flow_create_dto.h"
#include "../model/deal_unit_flow_dto_envelope.h"
#include "../model/deal_unit_flow_dto_list_envelope.h"
#include "../model/deal_unit_flow_stage_create_dto.h"
#include "../model/deal_unit_flow_stage_dto_envelope.h"
#include "../model/deal_unit_flow_stage_dto_list_envelope.h"
#include "../model/deal_unit_flow_stage_update_dto.h"
#include "../model/deal_unit_flow_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create a deal unit flow
//
// Creates a new deal unit flow for the specified tenant.
//
empty_envelope_t*
DealUnitFlowsAPI_createDealUnitFlowAsync(apiClient_t *apiClient, char *tenantId, deal_unit_flow_create_dto_t *deal_unit_flow_create_dto);


// Create a deal unit flow stage
//
// Creates a new stage within a specific deal unit flow.
//
empty_envelope_t*
DealUnitFlowsAPI_createDealUnitFlowStageAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, deal_unit_flow_stage_create_dto_t *deal_unit_flow_stage_create_dto);


// Delete a deal unit flow
//
// Deletes an existing deal unit flow by its unique identifier.
//
empty_envelope_t*
DealUnitFlowsAPI_deleteDealUnitFlowAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId);


// Delete a deal unit flow stage
//
// Deletes an existing stage from a specific deal unit flow.
//
empty_envelope_t*
DealUnitFlowsAPI_deleteDealUnitFlowStageAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, char *dealUnitFlowStageId);


// Get deal unit flow by ID
//
// Retrieves a single deal unit flow by its unique identifier.
//
deal_unit_flow_dto_envelope_t*
DealUnitFlowsAPI_getDealUnitFlowAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId);


// Get a deal unit flow stage by ID
//
// Retrieves a single stage for a specific deal unit flow by its unique identifier.
//
deal_unit_flow_stage_dto_envelope_t*
DealUnitFlowsAPI_getDealUnitFlowStageAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, char *dealUnitFlowStageId);


// Get stages for a deal unit flow
//
// Retrieves a list of stages for a specific deal unit flow with OData query support.
//
deal_unit_flow_stage_dto_list_envelope_t*
DealUnitFlowsAPI_getDealUnitFlowStagesAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId);


// Get stages count for a deal unit flow
//
// Returns the total count of stages for a specific deal unit flow with OData filter support.
//
int32_envelope_t*
DealUnitFlowsAPI_getDealUnitFlowStagesCountAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId);


// Get deal unit flows
//
// Retrieves a list of deal unit flows for the specified tenant with OData query support.
//
deal_unit_flow_dto_list_envelope_t*
DealUnitFlowsAPI_getDealUnitFlowsAsync(apiClient_t *apiClient, char *tenantId);


// Get deal unit flows count
//
// Returns the total count of deal unit flows for the specified tenant with OData filter support.
//
int32_envelope_t*
DealUnitFlowsAPI_getDealUnitFlowsCountAsync(apiClient_t *apiClient, char *tenantId);


// Update a deal unit flow
//
// Updates an existing deal unit flow by its unique identifier.
//
empty_envelope_t*
DealUnitFlowsAPI_updateDealUnitFlowAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, deal_unit_flow_update_dto_t *deal_unit_flow_update_dto);


// Update a deal unit flow stage
//
// Updates an existing stage within a specific deal unit flow.
//
empty_envelope_t*
DealUnitFlowsAPI_updateDealUnitFlowStageAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, char *dealUnitFlowStageId, deal_unit_flow_stage_update_dto_t *deal_unit_flow_stage_update_dto);


