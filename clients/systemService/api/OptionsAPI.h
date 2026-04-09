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


// Create a new system option
//
// Create a new system option
//
empty_envelope_t*
OptionsAPI_createSystemOption(apiClient_t *apiClient, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);


// Delete a system option
//
// Delete a system option
//
empty_envelope_t*
OptionsAPI_deleteSystemOption(apiClient_t *apiClient, char *optionId, char *api_version, char *x_api_version);


// Retrieve a single system option by its ID
//
// Retrieve a single system option by its ID
//
option_dto_envelope_t*
OptionsAPI_getSystemOptionById(apiClient_t *apiClient, char *optionId, char *api_version, char *x_api_version);


// Retrieve a single system option by its key
//
// Retrieve a single system option by its key
//
option_dto_envelope_t*
OptionsAPI_getSystemOptionByKey(apiClient_t *apiClient, char *portalId, char *key, char *api_version, char *x_api_version);


// Retrieve a list of system options
//
// Retrieve a list of system options for a portal
//
option_dto_list_envelope_t*
OptionsAPI_getSystemOptions(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);


// Get the count of system options
//
// Get the count of system options for a portal
//
int32_envelope_t*
OptionsAPI_getSystemOptionsCount(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);


// Update a system option
//
// Update a system option
//
empty_envelope_t*
OptionsAPI_updateSystemOption(apiClient_t *apiClient, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);


// Create or update a system option by key
//
// Create or update a system option by key
//
empty_envelope_t*
OptionsAPI_upsertSystemOption(apiClient_t *apiClient, char *key, char *portalId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);


