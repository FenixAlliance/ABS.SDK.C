#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/email_dispatch_request.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/extended_tenant_dto_collection_query_parameters.h"
#include "../model/extended_tenant_dto_list_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/module_grant_dto.h"
#include "../model/module_grant_dto_list_envelope.h"
#include "../model/patch_operation.h"
#include "../model/tenant_create_dto.h"
#include "../model/tenant_dto_collection_query_parameters.h"
#include "../model/tenant_dto_envelope.h"
#include "../model/tenant_dto_list_envelope.h"
#include "../model/tenant_update_dto.h"


// Preview the rendered email for a tenant.
//
// This action is only available for global administrators.
//
void
TenantsAPI_adminPreviewTenantEmail(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);


// Send an email to a tenant.
//
// This action is only available for global administrators.
//
void
TenantsAPI_adminSendTenantEmail(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);


// Create a new tenant.
//
// This action is only available for global administrators.
//
tenant_dto_envelope_t*
TenantsAPI_createTenant(apiClient_t *apiClient, char *api_version, char *x_api_version, tenant_create_dto_t *tenant_create_dto);


// Delete a specific tenant by ID.
//
// This action is only available for global administrators.
//
empty_envelope_t*
TenantsAPI_deleteTenant(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get all extended tenants available on this suite server instance.
//
// This action is only available for global administrators.
//
extended_tenant_dto_list_envelope_t*
TenantsAPI_getAllExtendedTenants(apiClient_t *apiClient, char *api_version, char *x_api_version, extended_tenant_dto_collection_query_parameters_t *extended_tenant_dto_collection_query_parameters);


// Get all tenants available on this suite server instance.
//
// This action is only available for global administrators.
//
tenant_dto_list_envelope_t*
TenantsAPI_getAllTenants(apiClient_t *apiClient, char *api_version, char *x_api_version, tenant_dto_collection_query_parameters_t *tenant_dto_collection_query_parameters);


// Get the total count of extended tenants available on this suite server instance.
//
// This action is only available for global administrators.
//
int32_envelope_t*
TenantsAPI_getExtendedTenantsCount(apiClient_t *apiClient, char *api_version, char *x_api_version, extended_tenant_dto_collection_query_parameters_t *extended_tenant_dto_collection_query_parameters);


// Get a specific tenant by ID.
//
// This action is only available for global administrators.
//
tenant_dto_envelope_t*
TenantsAPI_getTenant(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the per-tenant admin module grants for a specific tenant.
//
// This action is only available for global administrators.
//
module_grant_dto_list_envelope_t*
TenantsAPI_getTenantModuleGrants(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the total count of tenants available on this suite server instance.
//
// This action is only available for global administrators.
//
int32_envelope_t*
TenantsAPI_getTenantsCount(apiClient_t *apiClient, char *api_version, char *x_api_version, tenant_dto_collection_query_parameters_t *tenant_dto_collection_query_parameters);


// Partially update a specific tenant by ID.
//
// This action is only available for global administrators.
//
empty_envelope_t*
TenantsAPI_patchTenant(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, list_t *patch_operation);


// Replace the per-tenant admin module grants for a specific tenant.
//
// This action is only available for global administrators. Grants supplement licensing.
//
empty_envelope_t*
TenantsAPI_setTenantModuleGrants(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, list_t *module_grant_dto);


// Update a specific tenant by ID.
//
// This action is only available for global administrators.
//
tenant_dto_envelope_t*
TenantsAPI_updateTenant(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_update_dto_t *tenant_update_dto);


