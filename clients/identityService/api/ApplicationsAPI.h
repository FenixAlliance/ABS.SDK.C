#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"


// Get application by ID
//
// Retrieves an application by its unique identifier.
//
void
ApplicationsAPI_getApplication(apiClient_t *apiClient, char *appId, char *api_version, char *x_api_version);


// Get granted permissions for an application role
//
// Retrieves the list of permissions granted through a specific security role for the specified application.
//
void
ApplicationsAPI_getGrantedEnrollmentPermissions(apiClient_t *apiClient, char *appId, char *securityRoleId, char *enrollmentId, char *api_version, char *x_api_version);


// Get granted tenant permissions for an application
//
// Retrieves the list of permissions granted to the specified application within a tenant context.
//
void
ApplicationsAPI_getGrantedTenantPermissions(apiClient_t *apiClient, char *appId, char *tenantId, char *api_version, char *x_api_version);


// Get granted tenant roles for an application
//
// Retrieves the list of security roles granted to the specified application within a tenant context.
//
void
ApplicationsAPI_getGrantedTenantRoles(apiClient_t *apiClient, char *appId, char *tenantId, char *api_version, char *x_api_version);


// Get required permissions for an application
//
// Retrieves the list of permissions required by the specified application.
//
void
ApplicationsAPI_getRequiredPermissions(apiClient_t *apiClient, char *appId, char *api_version, char *x_api_version);


