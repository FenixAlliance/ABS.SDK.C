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
#include "../model/tenant_type_create_dto.h"
#include "../model/tenant_type_dto_envelope.h"
#include "../model/tenant_type_dto_list_envelope.h"
#include "../model/tenant_type_update_dto.h"


// Create a new tenant type
//
// Create a new tenant type
//
empty_envelope_t*
TypesAPI_createTenantType(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_type_create_dto_t *tenant_type_create_dto);


// Delete a tenant type
//
// Delete a tenant type
//
empty_envelope_t*
TypesAPI_deleteTenantType(apiClient_t *apiClient, char *tenantId, char *tenantTypeId, char *api_version, char *x_api_version);


// Retrieve a single tenant type by its ID
//
// Retrieve a single tenant type by its ID
//
tenant_type_dto_envelope_t*
TypesAPI_getTenantTypeById(apiClient_t *apiClient, char *tenantId, char *tenantTypeId, char *api_version, char *x_api_version);


// Retrieve a list of tenant types
//
// Retrieve a list of tenant types
//
tenant_type_dto_list_envelope_t*
TypesAPI_getTenantTypes(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant types
//
// Get the count of tenant types
//
int32_envelope_t*
TypesAPI_getTenantTypesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tenant type
//
// Update a tenant type
//
empty_envelope_t*
TypesAPI_updateTenantType(apiClient_t *apiClient, char *tenantId, char *tenantTypeId, char *api_version, char *x_api_version, tenant_type_update_dto_t *tenant_type_update_dto);


