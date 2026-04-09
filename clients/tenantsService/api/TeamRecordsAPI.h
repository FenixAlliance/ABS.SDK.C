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
#include "../model/tenant_team_record_create_dto.h"
#include "../model/tenant_team_record_dto_envelope.h"
#include "../model/tenant_team_record_dto_list_envelope.h"
#include "../model/tenant_team_record_update_dto.h"


// Create a new tenant team record
//
// Create a new tenant team record
//
empty_envelope_t*
TeamRecordsAPI_createTenantTeamRecord(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_team_record_create_dto_t *tenant_team_record_create_dto);


// Delete a tenant team record
//
// Delete a tenant team record
//
empty_envelope_t*
TeamRecordsAPI_deleteTenantTeamRecord(apiClient_t *apiClient, char *tenantId, char *tenantTeamRecordId, char *api_version, char *x_api_version);


// Retrieve a single tenant team record by its ID
//
// Retrieve a single tenant team record by its ID
//
tenant_team_record_dto_envelope_t*
TeamRecordsAPI_getTenantTeamRecordById(apiClient_t *apiClient, char *tenantId, char *tenantTeamRecordId, char *api_version, char *x_api_version);


// Retrieve a list of tenant team records
//
// Retrieve a list of tenant team records
//
tenant_team_record_dto_list_envelope_t*
TeamRecordsAPI_getTenantTeamRecords(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant team records
//
// Get the count of tenant team records
//
int32_envelope_t*
TeamRecordsAPI_getTenantTeamRecordsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tenant team record
//
// Update a tenant team record
//
empty_envelope_t*
TeamRecordsAPI_updateTenantTeamRecord(apiClient_t *apiClient, char *tenantId, char *tenantTeamRecordId, char *api_version, char *x_api_version, tenant_team_record_update_dto_t *tenant_team_record_update_dto);


