#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/application_principal_detail_dto_envelope.h"
#include "../model/application_principal_dto_collection_query_parameters.h"
#include "../model/application_principal_dto_i_read_only_list_envelope.h"
#include "../model/application_principal_permission_request_dto.h"
#include "../model/application_principal_provision_request_dto.h"
#include "../model/application_principal_provisioning_result_dto_envelope.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Disable an application principal (global)
//
// Disables the application principal; dependent unattended execution fails closed (applies to system-locked principals here). tenantId scopes the action to a tenant the principal is enrolled in (required). Global-administrator only.
//
empty_envelope_t*
ApplicationPrincipalsAPI_disableGlobalApplicationPrincipal(apiClient_t *apiClient, char *principalId, char *tenantId, char *api_version, char *x_api_version);


// Enable an application principal (global)
//
// Reinstates the application principal to the Active lifecycle state (applies to system-locked principals here). tenantId scopes the action to a tenant the principal is enrolled in (required). Global-administrator only.
//
empty_envelope_t*
ApplicationPrincipalsAPI_enableGlobalApplicationPrincipal(apiClient_t *apiClient, char *principalId, char *tenantId, char *api_version, char *x_api_version);


// Get one application principal (any tenant)
//
// Returns one application principal's detail by id: owning application, an enrollment, the system-locked flag, lifecycle status, and that enrollment's explicit least-privilege grants. Pass tenantId to select the enrollment for a multi-tenant principal; when omitted the principal's first enrollment is used. Global-administrator only.
//
application_principal_detail_dto_envelope_t*
ApplicationPrincipalsAPI_getGlobalApplicationPrincipal(apiClient_t *apiClient, char *principalId, char *tenantId, char *api_version, char *x_api_version);


// List application principals across all tenants
//
// Lists every non-human application principal enrollment across ALL tenants (payload-safe fields only), including the platform-managed (system-locked) connectors. Use OData to scope — e.g. $filter=SystemLocked eq true for the platform connectors or TenantId eq '{guid}' for one tenant — and to page/order. Global-administrator only.
//
application_principal_dto_i_read_only_list_envelope_t*
ApplicationPrincipalsAPI_getGlobalApplicationPrincipals(apiClient_t *apiClient, char *api_version, char *x_api_version, application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters);


// Count application principals across all tenants
//
// Returns the count of application principal enrollments across ALL tenants under the same OData shaping as the list read (e.g. $filter=SystemLocked eq true). Global-administrator only.
//
int32_envelope_t*
ApplicationPrincipalsAPI_getGlobalApplicationPrincipalsCount(apiClient_t *apiClient, char *api_version, char *x_api_version, application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters);


// Grant a permission to an application principal (any tenant)
//
// Grants a single least-privilege permission to the application principal's enrollment in the tenantId tenant (grants are per-tenant, so tenantId is required). Owner/admin/wildcard/*_manage permissions are rejected even for a global admin (least-privilege by construction). Global-administrator only.
//
empty_envelope_t*
ApplicationPrincipalsAPI_grantGlobalApplicationPrincipalPermission(apiClient_t *apiClient, char *principalId, char *tenantId, application_principal_permission_request_dto_t *application_principal_permission_request_dto, char *api_version, char *x_api_version);


// Provision an application principal (any tenant, incl. system-locked)
//
// Idempotently provisions the application principal (and its own least-privilege enrollment) for a governed business application. tenantId selects the target tenant (defaults to the platform/root tenant). Unlike the per-tenant lane, a system-locked platform application is provisionable here. Global-administrator only.
//
application_principal_provisioning_result_dto_envelope_t*
ApplicationPrincipalsAPI_provisionGlobalApplicationPrincipal(apiClient_t *apiClient, application_principal_provision_request_dto_t *application_principal_provision_request_dto, char *tenantId, char *api_version, char *x_api_version);


// Provision the platform payments-connector identity
//
// Idempotently stands up the platform payments-connector identity — its well-known business application, its application principal, and its own least-privilege enrollment (payments_create/payments_update/journals_post). tenantId selects the target tenant (defaults to the platform/root tenant). The provisioned connector then appears in this global list and (for its tenant) the per-tenant list. Global-administrator only.
//
application_principal_provisioning_result_dto_envelope_t*
ApplicationPrincipalsAPI_provisionPaymentsConnector(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Revoke a permission from an application principal (any tenant)
//
// Revokes a direct permission grant from the application principal's enrollment in the tenantId tenant (required). Idempotent. Global-administrator only.
//
empty_envelope_t*
ApplicationPrincipalsAPI_revokeGlobalApplicationPrincipalPermission(apiClient_t *apiClient, char *principalId, char *permission, char *tenantId, char *api_version, char *x_api_version);


// Suspend an application principal (global)
//
// Temporarily suspends the application principal; its identity is retained but it cannot act until reinstated (applies to system-locked principals here). tenantId scopes the action to a tenant the principal is enrolled in (required). Global-administrator only.
//
empty_envelope_t*
ApplicationPrincipalsAPI_suspendGlobalApplicationPrincipal(apiClient_t *apiClient, char *principalId, char *tenantId, char *api_version, char *x_api_version);


