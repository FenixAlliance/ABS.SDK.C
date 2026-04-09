#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/authorization_result_envelope.h"
#include "../model/error_envelope.h"
#include "../model/json_web_key_set_envelope.h"
#include "../model/json_web_token_envelope.h"
#include "../model/o_auth_token_request.h"
#include "../model/open_id_configuration_envelope.h"
#include "../model/signin_model.h"
#include "../model/string_list_envelope.h"
#include "../model/user_create_dto_envelope.h"


// Check password sign-in
//
// Verifies sign-in credentials and returns user details without creating a session.
//
user_create_dto_envelope_t*
OAuthAPI_checkPasswordSignInAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user identity
//
// Returns the authorization result for the authenticated user, including identity and tenant context.
//
authorization_result_envelope_t*
OAuthAPI_get(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get JSON Web Key Set
//
// Retrieves the signing keys (JWKS) for a specific application.
//
json_web_key_set_envelope_t*
OAuthAPI_getJwKs(apiClient_t *apiClient, char *applicationId, char *api_version, char *x_api_version);


// Get OpenID configuration
//
// Retrieves the OpenID Connect discovery document for a specific application within a tenant.
//
open_id_configuration_envelope_t*
OAuthAPI_getOpenIdConfiguration(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);


// Get user permissions
//
// Retrieves the list of permission identifiers for a specific user within a tenant context.
//
string_list_envelope_t*
OAuthAPI_getPermissions(apiClient_t *apiClient, char *tenantId, char *userId, char *api_version, char *x_api_version);


// Sign in with password
//
// Authenticates a user using email and password credentials.
//
json_web_token_envelope_t*
OAuthAPI_passwordSignInAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, signin_model_t *signin_model);


// Get OAuth token
//
// Generates an OAuth token based on the provided credentials or grant type.
//
json_web_token_envelope_t*
OAuthAPI_token(apiClient_t *apiClient, char *api_version, char *x_api_version, o_auth_token_request_t *o_auth_token_request);


