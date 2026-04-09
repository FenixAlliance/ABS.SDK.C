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
#include "../model/tenant_territory_create_dto.h"
#include "../model/tenant_territory_dto_envelope.h"
#include "../model/tenant_territory_dto_list_envelope.h"
#include "../model/tenant_territory_update_dto.h"


// Create a new tenant territory
//
// Create a new tenant territory
//
empty_envelope_t*
TerritoriesAPI_createTenantTerritory(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_territory_create_dto_t *tenant_territory_create_dto);


// Delete a tenant territory
//
// Delete a tenant territory
//
empty_envelope_t*
TerritoriesAPI_deleteTenantTerritory(apiClient_t *apiClient, char *tenantId, char *tenantTerritoryId, char *api_version, char *x_api_version);


// Retrieve a list of tenant territories
//
// Retrieve a list of tenant territories
//
tenant_territory_dto_list_envelope_t*
TerritoriesAPI_getTenantTerritories(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant territories
//
// Get the count of tenant territories
//
int32_envelope_t*
TerritoriesAPI_getTenantTerritoriesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Retrieve a single tenant territory by its ID
//
// Retrieve a single tenant territory by its ID
//
tenant_territory_dto_envelope_t*
TerritoriesAPI_getTenantTerritoryById(apiClient_t *apiClient, char *tenantId, char *tenantTerritoryId, char *api_version, char *x_api_version);


// Update a tenant territory
//
// Update a tenant territory
//
empty_envelope_t*
TerritoriesAPI_updateTenantTerritory(apiClient_t *apiClient, char *tenantId, char *tenantTerritoryId, char *api_version, char *x_api_version, tenant_territory_update_dto_t *tenant_territory_update_dto);


