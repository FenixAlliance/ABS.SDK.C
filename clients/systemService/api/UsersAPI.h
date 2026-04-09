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
#include "../model/extended_user_dto_envelope.h"
#include "../model/extended_user_dto_list_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/user_create_dto.h"
#include "../model/user_dto_envelope.h"
#include "../model/user_dto_list_envelope.h"
#include "../model/user_update_dto.h"


// Preview the rendered email for a user.
//
// This action is only available for users with the 'business_owner' role (global administrators).
//
void
UsersAPI_adminPreviewUserEmailTemplate(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);


// Send an email to a user.
//
// This action is only available for users with the 'business_owner' role (global administrators).
//
empty_envelope_t*
UsersAPI_adminSendUserEmail(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);


// Create a new user
//
// This action is only available for users with the 'business_owner' role (global administrators).
//
empty_envelope_t*
UsersAPI_createAccountHolderAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, user_create_dto_t *user_create_dto);


// Delete a user
//
// This action is only available for users with the 'business_owner' role (global administrators).
//
empty_envelope_t*
UsersAPI_deleteAccountHolderAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version);


// Retrieve an extended user by ID
//
// This action is only available for users with the 'business_owner' role (global administrators).
//
extended_user_dto_envelope_t*
UsersAPI_getExtendedAccountHolderAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version);


// Retrieve a list of extended users
//
// This action is only available for users with the 'business_owner' role (global administrators).
//
extended_user_dto_list_envelope_t*
UsersAPI_getExtendedUsersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the count of extended users
//
// This action is only available for users with the 'business_owner' role (global administrators).
//
int32_envelope_t*
UsersAPI_getExtendedUsersCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Retrieve a user by ID
//
// This action is only available for users with the 'business_owner' role (global administrators).
//
user_dto_envelope_t*
UsersAPI_getUserAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version);


// Retrieve a list of users
//
// This action is only available for users with the 'business_owner' role (global administrators).
//
user_dto_list_envelope_t*
UsersAPI_getUsersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the count of users
//
// This action is only available for users with the 'business_owner' role (global administrators).
//
int32_envelope_t*
UsersAPI_getUsersCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Update a user
//
// This action is only available for users with the 'business_owner' role (global administrators).
//
empty_envelope_t*
UsersAPI_updateAccountHolderAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, user_update_dto_t *user_update_dto);


