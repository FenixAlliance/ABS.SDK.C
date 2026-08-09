#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/application_principal_detail_dto_envelope.h"
#include "../model/application_principal_dto_collection_query_parameters.h"
#include "../model/application_principal_dto_list_envelope.h"
#include "../model/application_principal_permission_request_dto.h"
#include "../model/application_principal_provision_request_dto.h"
#include "../model/application_principal_provisioning_result_dto_envelope.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Disable an application principal
//
// Disables the application principal; dependent unattended execution fails closed.
//
empty_envelope_t*
ApplicationPrincipalsAPI_disableApplicationPrincipalAsync(apiClient_t *apiClient, char *tenantId, char *principalId, char *api_version, char *x_api_version);


// Enable an application principal
//
// Reinstates the application principal to the Active lifecycle state.
//
empty_envelope_t*
ApplicationPrincipalsAPI_enableApplicationPrincipalAsync(apiClient_t *apiClient, char *tenantId, char *principalId, char *api_version, char *x_api_version);


// Get application principal by ID
//
// Retrieves a specific application principal: owning application, tenant enrollment, lifecycle status, system-locked flag, and its explicit least-privilege permission grants.
//
application_principal_detail_dto_envelope_t*
ApplicationPrincipalsAPI_getApplicationPrincipalAsync(apiClient_t *apiClient, char *tenantId, char *principalId, char *api_version, char *x_api_version);


// Get all application principals
//
// Retrieves the non-human application principals enrolled in the specified tenant (including read-only system-locked platform principals).
//
application_principal_dto_list_envelope_t*
ApplicationPrincipalsAPI_getApplicationPrincipalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters);


// Get application principals count
//
// Retrieves the count of application principals enrolled in the specified tenant.
//
int32_envelope_t*
ApplicationPrincipalsAPI_getApplicationPrincipalsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters);


// Grant a permission to an application principal
//
// Grants a single least-privilege permission to the application principal's enrollment. Owner/admin/wildcard/*_manage permissions are rejected; system-locked principals require a platform administrator.
//
empty_envelope_t*
ApplicationPrincipalsAPI_grantPermissionAsync(apiClient_t *apiClient, char *tenantId, char *principalId, application_principal_permission_request_dto_t *application_principal_permission_request_dto, char *api_version, char *x_api_version);


// Provision an application principal
//
// Idempotently provisions the application principal (and its own least-privilege enrollment) for a governed business application in the specified tenant. System-locked platform applications require a platform administrator.
//
application_principal_provisioning_result_dto_envelope_t*
ApplicationPrincipalsAPI_provisionApplicationPrincipalAsync(apiClient_t *apiClient, char *tenantId, application_principal_provision_request_dto_t *application_principal_provision_request_dto, char *api_version, char *x_api_version);


// Revoke a permission from an application principal
//
// Revokes a direct permission grant from the application principal's enrollment. System-locked principals require a platform administrator.
//
empty_envelope_t*
ApplicationPrincipalsAPI_revokePermissionAsync(apiClient_t *apiClient, char *tenantId, char *principalId, char *permission, char *api_version, char *x_api_version);


// Suspend an application principal
//
// Temporarily suspends the application principal; its identity is retained but it cannot act until reinstated.
//
empty_envelope_t*
ApplicationPrincipalsAPI_suspendApplicationPrincipalAsync(apiClient_t *apiClient, char *tenantId, char *principalId, char *api_version, char *x_api_version);


