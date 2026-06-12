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
#include "../model/operation.h"
#include "../model/option_create_dto.h"
#include "../model/option_dto_envelope.h"
#include "../model/option_dto_list_envelope.h"
#include "../model/option_update_dto.h"


// Create a new user option (admin)
//
// Admin endpoint to create an option for any user
//
empty_envelope_t*
UserOptionsAPI_createSystemUserOption(apiClient_t *apiClient, char *userId, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);


// Delete a user option (admin)
//
// Admin endpoint to delete an option for any user
//
empty_envelope_t*
UserOptionsAPI_deleteSystemUserOption(apiClient_t *apiClient, char *userId, char *optionId, char *api_version, char *x_api_version);


// Retrieve a single user option by its ID (admin)
//
// Admin endpoint to retrieve a single option for any user
//
option_dto_envelope_t*
UserOptionsAPI_getSystemUserOptionById(apiClient_t *apiClient, char *userId, char *optionId, char *api_version, char *x_api_version);


// Retrieve a list of user options (admin)
//
// Admin endpoint to retrieve options for any user
//
option_dto_list_envelope_t*
UserOptionsAPI_getSystemUserOptions(apiClient_t *apiClient, char *userId, char *portalId, char *api_version, char *x_api_version);


// Get the count of user options (admin)
//
// Admin endpoint to get the count of options for any user
//
int32_envelope_t*
UserOptionsAPI_getSystemUserOptionsCount(apiClient_t *apiClient, char *userId, char *portalId, char *api_version, char *x_api_version);


// Partially update a user option (admin)
//
// Admin endpoint to partially update an option for any user using a JSON Patch document
//
empty_envelope_t*
UserOptionsAPI_patchSystemUserOption(apiClient_t *apiClient, char *userId, char *optionId, char *api_version, char *x_api_version, list_t *operation);


// Update a user option (admin)
//
// Admin endpoint to update an option for any user
//
empty_envelope_t*
UserOptionsAPI_updateSystemUserOption(apiClient_t *apiClient, char *userId, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);


