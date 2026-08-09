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
#include "../model/extended_user_dto_collection_query_parameters.h"
#include "../model/extended_user_dto_envelope.h"
#include "../model/extended_user_dto_list_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/patch_operation.h"
#include "../model/set_user_password_dto.h"
#include "../model/user_admin_detail_dto_envelope.h"
#include "../model/user_admin_update_dto.h"
#include "../model/user_create_dto.h"
#include "../model/user_dto_collection_query_parameters.h"
#include "../model/user_dto_envelope.h"
#include "../model/user_dto_list_envelope.h"
#include "../model/user_update_dto.h"


// Preview the rendered email for a user.
//
// This action is only available for global administrators.
//
void
UsersAPI_adminPreviewUserEmailTemplate(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);


// Send an email to a user.
//
// This action is only available for global administrators.
//
empty_envelope_t*
UsersAPI_adminSendUserEmail(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);


// Create a new user
//
// This action is only available for global administrators.
//
empty_envelope_t*
UsersAPI_createAccountHolderAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, user_create_dto_t *user_create_dto);


// Delete a user
//
// This action is only available for global administrators.
//
empty_envelope_t*
UsersAPI_deleteAccountHolderAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version);


// Retrieve an extended user by ID
//
// This action is only available for global administrators.
//
extended_user_dto_envelope_t*
UsersAPI_getExtendedAccountHolderAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version);


// Retrieve a list of extended users
//
// This action is only available for global administrators.
//
extended_user_dto_list_envelope_t*
UsersAPI_getExtendedUsersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, extended_user_dto_collection_query_parameters_t *extended_user_dto_collection_query_parameters);


// Get the count of extended users
//
// This action is only available for global administrators.
//
int32_envelope_t*
UsersAPI_getExtendedUsersCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, extended_user_dto_collection_query_parameters_t *extended_user_dto_collection_query_parameters);


// Retrieve the admin detail aggregate for a user
//
// Returns the user's orders, external logins, and — for the supplied tenant — the enrollment with its granted roles/permissions and the tenant role/permission catalogs. Global administrators only.
//
user_admin_detail_dto_envelope_t*
UsersAPI_getUserAdminDetailAsync(apiClient_t *apiClient, char *userId, char *tenantId, char *api_version, char *x_api_version);


// Retrieve a user by ID
//
// This action is only available for global administrators.
//
user_dto_envelope_t*
UsersAPI_getUserAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version);


// Retrieve a list of users
//
// This action is only available for global administrators.
//
user_dto_list_envelope_t*
UsersAPI_getUsersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, user_dto_collection_query_parameters_t *user_dto_collection_query_parameters);


// Get the count of users
//
// This action is only available for global administrators.
//
int32_envelope_t*
UsersAPI_getUsersCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, user_dto_collection_query_parameters_t *user_dto_collection_query_parameters);


// Partially update a user
//
// This action is only available for global administrators.
//
empty_envelope_t*
UsersAPI_patchAccountHolderAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, list_t *patch_operation);


// Set a user's password
//
// Replaces the user's password with the supplied value. Global administrators only.
//
empty_envelope_t*
UsersAPI_setUserPasswordAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, set_user_password_dto_t *set_user_password_dto);


// Update a user's admin-managed profile
//
// Updates the identity fields (email/username, re-normalized by Identity) and display fields a global administrator may change on a user, and toggles two-factor and lockout. Normalized email/username and the access-failed count are never accepted. This action is only available for global administrators.
//
empty_envelope_t*
UsersAPI_updateAccountHolderAdminProfileAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, user_admin_update_dto_t *user_admin_update_dto);


// Update a user
//
// This action is only available for global administrators.
//
empty_envelope_t*
UsersAPI_updateAccountHolderAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, user_update_dto_t *user_update_dto);


