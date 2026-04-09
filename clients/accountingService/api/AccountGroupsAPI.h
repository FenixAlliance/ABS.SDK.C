#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/account_group_create_dto.h"
#include "../model/account_group_dto_envelope.h"
#include "../model/account_group_dto_list_envelope.h"
#include "../model/account_group_update_dto.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Creates a new account group
//
// Creates a new account group.
//
account_group_dto_envelope_t*
AccountGroupsAPI_createAccountGroup(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, account_group_create_dto_t *account_group_create_dto);


// Deletes an existing account group
//
// Deletes an existing account group.
//
void
AccountGroupsAPI_deleteAccountGroup(apiClient_t *apiClient, char *tenantId, char *accountGroupId, char *api_version, char *x_api_version);


// Gets the current tenant account group
//
// Get the currently acting tenant account group.
//
account_group_dto_envelope_t*
AccountGroupsAPI_getAccountGroup(apiClient_t *apiClient, char *tenantId, char *accountGroupId, char *api_version, char *x_api_version);


// Gets the current tenant account groups
//
// Get the currently acting tenant account groups.
//
account_group_dto_list_envelope_t*
AccountGroupsAPI_getAccountGroups(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Gets the current tenant accounts count
//
// Get the currently acting tenant accounts count.
//
int32_envelope_t*
AccountGroupsAPI_getAccountGroupsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates an existing account group
//
// Updates an existing account group.
//
account_group_dto_envelope_t*
AccountGroupsAPI_updateAccountGroup(apiClient_t *apiClient, char *tenantId, char *accountGroupId, char *api_version, char *x_api_version, account_group_update_dto_t *account_group_update_dto);


