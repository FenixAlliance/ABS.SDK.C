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
#include "../model/o_auth_application_create_dto.h"
#include "../model/o_auth_application_dto_envelope.h"
#include "../model/o_auth_application_dto_list_envelope.h"
#include "../model/o_auth_application_update_dto.h"
#include "../model/o_auth_authorization_dto_envelope.h"
#include "../model/o_auth_authorization_dto_list_envelope.h"


// Create a new OAuth application
//
// Creates a new OAuth application for the specified tenant.
//
empty_envelope_t*
OAuthApplicationsAPI_createOAuthApplicationAsync(apiClient_t *apiClient, char *tenantId, o_auth_application_create_dto_t *o_auth_application_create_dto, char *api_version, char *x_api_version);


// Delete an OAuth application
//
// Deletes an existing OAuth application.
//
empty_envelope_t*
OAuthApplicationsAPI_deleteOAuthApplicationAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);


// Get OAuth application by ID
//
// Retrieves a specific OAuth application by its identifier.
//
o_auth_application_dto_envelope_t*
OAuthApplicationsAPI_getOAuthApplicationByIdAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);


// Get all OAuth applications
//
// Retrieves all OAuth applications for the specified tenant.
//
o_auth_application_dto_list_envelope_t*
OAuthApplicationsAPI_getOAuthApplicationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get OAuth applications count
//
// Retrieves the count of OAuth applications for the specified tenant.
//
int32_envelope_t*
OAuthApplicationsAPI_getOAuthApplicationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get OAuth authorization by ID
//
// Retrieves a specific OAuth authorization by its identifier.
//
o_auth_authorization_dto_envelope_t*
OAuthApplicationsAPI_getOAuthAuthorizationByIdAsync(apiClient_t *apiClient, char *tenantId, char *authorizationId, char *api_version, char *x_api_version);


// Get all OAuth authorizations
//
// Retrieves all OAuth authorizations for the specified user.
//
o_auth_authorization_dto_list_envelope_t*
OAuthApplicationsAPI_getOAuthAuthorizationsAsync(apiClient_t *apiClient, char *tenantId, char *userId, char *api_version, char *x_api_version);


// Get OAuth authorizations count
//
// Retrieves the count of OAuth authorizations for the specified user.
//
int32_envelope_t*
OAuthApplicationsAPI_getOAuthAuthorizationsCountAsync(apiClient_t *apiClient, char *tenantId, char *userId, char *api_version, char *x_api_version);


// Update an existing OAuth application
//
// Updates an existing OAuth application.
//
empty_envelope_t*
OAuthApplicationsAPI_updateOAuthApplicationAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, o_auth_application_update_dto_t *o_auth_application_update_dto, char *api_version, char *x_api_version);


