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
#include "../model/tenant_position_create_dto.h"
#include "../model/tenant_position_dto_envelope.h"
#include "../model/tenant_position_dto_list_envelope.h"
#include "../model/tenant_position_update_dto.h"


// Create a new tenant position
//
// Create a new tenant position
//
empty_envelope_t*
PositionsAPI_createTenantPosition(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_position_create_dto_t *tenant_position_create_dto);


// Delete a tenant position
//
// Delete a tenant position
//
empty_envelope_t*
PositionsAPI_deleteTenantPosition(apiClient_t *apiClient, char *tenantId, char *tenantPositionId, char *api_version, char *x_api_version);


// Retrieve a single tenant position by its ID
//
// Retrieve a single tenant position by its ID
//
tenant_position_dto_envelope_t*
PositionsAPI_getTenantPositionById(apiClient_t *apiClient, char *tenantId, char *tenantPositionId, char *api_version, char *x_api_version);


// Retrieve a list of tenant positions
//
// Retrieve a list of tenant positions
//
tenant_position_dto_list_envelope_t*
PositionsAPI_getTenantPositions(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant positions
//
// Get the count of tenant positions
//
int32_envelope_t*
PositionsAPI_getTenantPositionsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tenant position
//
// Update a tenant position
//
empty_envelope_t*
PositionsAPI_updateTenantPosition(apiClient_t *apiClient, char *tenantId, char *tenantPositionId, char *api_version, char *x_api_version, tenant_position_update_dto_t *tenant_position_update_dto);


