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
#include "../model/security_permission_dto_list_envelope.h"
#include "../model/security_role_create_dto.h"
#include "../model/security_role_dto_envelope.h"
#include "../model/security_role_dto_list_envelope.h"
#include "../model/security_role_update_dto.h"
#include "../model/tenant_enrollment_dto_list_envelope.h"


// Assign a permission to a role
//
// Assigns a security permission to a security role.
//
empty_envelope_t*
RolesAPI_assignPermissionToRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *securityPermissionId, char *api_version, char *x_api_version);


// Assign a role to a business application
//
// Assigns a security role to a business application.
//
empty_envelope_t*
RolesAPI_assignRoleToBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *applicationId, char *api_version, char *x_api_version);


// Assign a role to an enrollment
//
// Assigns a security role to a tenant enrollment.
//
empty_envelope_t*
RolesAPI_assignRoleToEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *enrollmentId, char *api_version, char *x_api_version);


// Create a new role
//
// Creates a new security role for the specified tenant.
//
empty_envelope_t*
RolesAPI_createRoleAsync(apiClient_t *apiClient, char *tenantId, security_role_create_dto_t *security_role_create_dto, char *api_version, char *x_api_version);


// Delete an existing role
//
// Deletes an existing security role for the specified tenant.
//
empty_envelope_t*
RolesAPI_deleteRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *api_version, char *x_api_version);


// Get applications by role
//
// Retrieves all business applications that have a specific role granted.
//
business_application_simple_dto_list_envelope_t*
RolesAPI_getApplicationsByRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *api_version, char *x_api_version);


// Get enrollments by role
//
// Retrieves all tenant enrollments that have a specific role.
//
tenant_enrollment_dto_list_envelope_t*
RolesAPI_getEnrollmentsByRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *api_version, char *x_api_version);


// Get role by ID
//
// Retrieves a specific security role by its ID.
//
security_role_dto_envelope_t*
RolesAPI_getRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *api_version, char *x_api_version);


// Get permissions by role
//
// Retrieves all security permissions assigned to a specific role.
//
security_permission_dto_list_envelope_t*
RolesAPI_getRolePermissionsAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *api_version, char *x_api_version);


// Get all roles
//
// Retrieves all security roles for the specified tenant.
//
security_role_dto_list_envelope_t*
RolesAPI_getRolesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get roles by enrollment
//
// Retrieves all security roles granted to a specific enrollment.
//
security_role_dto_list_envelope_t*
RolesAPI_getRolesByEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);


// Get roles count
//
// Retrieves the count of security roles for the specified tenant.
//
int32_envelope_t*
RolesAPI_getRolesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Revoke a permission from a role
//
// Revokes a security permission from a security role.
//
empty_envelope_t*
RolesAPI_revokePermissionFromRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *securityPermissionId, char *api_version, char *x_api_version);


// Revoke a role from a business application
//
// Revokes a security role from a business application.
//
empty_envelope_t*
RolesAPI_revokeRoleFromBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *applicationId, char *api_version, char *x_api_version);


// Revoke a role from an enrollment
//
// Revokes a security role from a tenant enrollment.
//
empty_envelope_t*
RolesAPI_revokeRoleFromEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *enrollmentId, char *api_version, char *x_api_version);


// Update an existing role
//
// Updates an existing security role for the specified tenant.
//
empty_envelope_t*
RolesAPI_updateRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, security_role_update_dto_t *security_role_update_dto, char *api_version, char *x_api_version);


