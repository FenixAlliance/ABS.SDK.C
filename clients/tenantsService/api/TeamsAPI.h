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
#include "../model/tenant_team_create_dto.h"
#include "../model/tenant_team_dto_envelope.h"
#include "../model/tenant_team_dto_list_envelope.h"
#include "../model/tenant_team_update_dto.h"


// Create a new tenant team
//
// Create a new tenant team
//
empty_envelope_t*
TeamsAPI_createTenantTeam(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_team_create_dto_t *tenant_team_create_dto);


// Delete a tenant team
//
// Delete a tenant team
//
empty_envelope_t*
TeamsAPI_deleteTenantTeam(apiClient_t *apiClient, char *tenantId, char *tenantTeamId, char *api_version, char *x_api_version);


// Retrieve a single tenant team by its ID
//
// Retrieve a single tenant team by its ID
//
tenant_team_dto_envelope_t*
TeamsAPI_getTenantTeamById(apiClient_t *apiClient, char *tenantId, char *tenantTeamId, char *api_version, char *x_api_version);


// Retrieve a list of tenant teams
//
// Retrieve a list of tenant teams
//
tenant_team_dto_list_envelope_t*
TeamsAPI_getTenantTeams(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant teams
//
// Get the count of tenant teams
//
int32_envelope_t*
TeamsAPI_getTenantTeamsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tenant team
//
// Update a tenant team
//
empty_envelope_t*
TeamsAPI_updateTenantTeam(apiClient_t *apiClient, char *tenantId, char *tenantTeamId, char *api_version, char *x_api_version, tenant_team_update_dto_t *tenant_team_update_dto);


