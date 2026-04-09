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
#include "../model/tenant_unit_create_dto.h"
#include "../model/tenant_unit_dto_envelope.h"
#include "../model/tenant_unit_dto_list_envelope.h"
#include "../model/tenant_unit_update_dto.h"


// Create a new tenant unit
//
// Create a new tenant unit
//
empty_envelope_t*
UnitsAPI_createTenantUnit(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_unit_create_dto_t *tenant_unit_create_dto);


// Delete a tenant unit
//
// Delete a tenant unit
//
empty_envelope_t*
UnitsAPI_deleteTenantUnit(apiClient_t *apiClient, char *tenantId, char *tenantUnitId, char *api_version, char *x_api_version);


// Retrieve a single tenant unit by its ID
//
// Retrieve a single tenant unit by its ID
//
tenant_unit_dto_envelope_t*
UnitsAPI_getTenantUnitById(apiClient_t *apiClient, char *tenantId, char *tenantUnitId, char *api_version, char *x_api_version);


// Retrieve a list of tenant units
//
// Retrieve a list of tenant units
//
tenant_unit_dto_list_envelope_t*
UnitsAPI_getTenantUnits(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant units
//
// Get the count of tenant units
//
int32_envelope_t*
UnitsAPI_getTenantUnitsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tenant unit
//
// Update a tenant unit
//
empty_envelope_t*
UnitsAPI_updateTenantUnit(apiClient_t *apiClient, char *tenantId, char *tenantUnitId, char *api_version, char *x_api_version, tenant_unit_update_dto_t *tenant_unit_update_dto);


