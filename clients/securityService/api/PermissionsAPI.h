#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/business_application_simple_dto_list_envelope.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/security_permission_create_dto.h"
#include "../model/security_permission_dto_envelope.h"
#include "../model/security_permission_dto_list_envelope.h"
#include "../model/security_permission_update_dto.h"
#include "../model/security_role_dto_list_envelope.h"
#include "../model/tenant_enrollment_dto_list_envelope.h"


// Assign a permission to a business application
//
// Assigns a security permission to a business application.
//
empty_envelope_t*
PermissionsAPI_assignPermissionToBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *applicationId, char *api_version, char *x_api_version);


// Assign a permission to an enrollment
//
// Assigns a security permission to a tenant enrollment.
//
empty_envelope_t*
PermissionsAPI_assignPermissionToEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *enrollmentId, char *api_version, char *x_api_version);


// Assign a role to a permission
//
// Assigns a security role to a security permission.
//
empty_envelope_t*
PermissionsAPI_assignRoleToPermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *securityRoleId, char *api_version, char *x_api_version);


// Create a new permission
//
// Creates a new security permission for the specified tenant.
//
empty_envelope_t*
PermissionsAPI_createPermissionAsync(apiClient_t *apiClient, char *tenantId, security_permission_create_dto_t *security_permission_create_dto, char *api_version, char *x_api_version);


// Delete an existing permission
//
// Deletes an existing security permission for the specified tenant.
//
empty_envelope_t*
PermissionsAPI_deletePermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *api_version, char *x_api_version);


// Get applications by permission
//
// Retrieves all business applications that have a specific permission granted.
//
business_application_simple_dto_list_envelope_t*
PermissionsAPI_getApplicationsByPermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *api_version, char *x_api_version);


// Get enrollments by permission
//
// Retrieves all tenant enrollments that have a specific permission.
//
tenant_enrollment_dto_list_envelope_t*
PermissionsAPI_getEnrollmentsByPermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *api_version, char *x_api_version);


// Get permission by ID
//
// Retrieves a specific security permission by its ID.
//
security_permission_dto_envelope_t*
PermissionsAPI_getPermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *api_version, char *x_api_version);


// Get all permissions
//
// Retrieves all security permissions for the specified tenant.
//
security_permission_dto_list_envelope_t*
PermissionsAPI_getPermissionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get permissions by enrollment
//
// Retrieves all security permissions granted to a specific enrollment.
//
security_permission_dto_list_envelope_t*
PermissionsAPI_getPermissionsByEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);


// Get permissions count
//
// Retrieves the count of security permissions for the specified tenant.
//
int32_envelope_t*
PermissionsAPI_getPermissionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get roles by permission
//
// Retrieves all security roles that have a specific permission granted.
//
security_role_dto_list_envelope_t*
PermissionsAPI_getRolesByPermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *api_version, char *x_api_version);


// Revoke a permission from a business application
//
// Revokes a security permission from a business application.
//
empty_envelope_t*
PermissionsAPI_revokePermissionFromBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *applicationId, char *api_version, char *x_api_version);


// Revoke a permission from an enrollment
//
// Revokes a security permission from a tenant enrollment.
//
empty_envelope_t*
PermissionsAPI_revokePermissionFromEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *enrollmentId, char *api_version, char *x_api_version);


// Revoke a role from a permission
//
// Revokes a security role from a security permission.
//
empty_envelope_t*
PermissionsAPI_revokeRoleFromPermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *securityRoleId, char *api_version, char *x_api_version);


// Update an existing permission
//
// Updates an existing security permission for the specified tenant.
//
empty_envelope_t*
PermissionsAPI_updatePermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, security_permission_update_dto_t *security_permission_update_dto, char *api_version, char *x_api_version);


