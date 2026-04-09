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
#include "../model/option_create_dto.h"
#include "../model/option_dto_envelope.h"
#include "../model/option_dto_list_envelope.h"
#include "../model/option_update_dto.h"


// Create a new user option
//
// Create a new option for the current user
//
empty_envelope_t*
OptionsAPI_createUserOption(apiClient_t *apiClient, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);


// Delete a user option
//
// Delete a user option
//
empty_envelope_t*
OptionsAPI_deleteUserOption(apiClient_t *apiClient, char *optionId, char *api_version, char *x_api_version);


// Retrieve a single user option by its ID
//
// Retrieve a single user option by its ID
//
option_dto_envelope_t*
OptionsAPI_getUserOptionById(apiClient_t *apiClient, char *optionId, char *api_version, char *x_api_version);


// Retrieve a single user option by its key
//
// Retrieve a single user option by its key
//
option_dto_envelope_t*
OptionsAPI_getUserOptionByKey(apiClient_t *apiClient, char *key, char *portalId, char *api_version, char *x_api_version);


// Retrieve a list of user options
//
// Retrieve a list of options for the current user
//
option_dto_list_envelope_t*
OptionsAPI_getUserOptions(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);


// Get the count of user options
//
// Get the count of options for the current user
//
int32_envelope_t*
OptionsAPI_getUserOptionsCount(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);


// Update a user option
//
// Update a user option
//
empty_envelope_t*
OptionsAPI_updateUserOption(apiClient_t *apiClient, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);


// Create or update a user option by key
//
// Create or update a user option by key
//
empty_envelope_t*
OptionsAPI_upsertUserOption(apiClient_t *apiClient, char *key, char *portalId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);


