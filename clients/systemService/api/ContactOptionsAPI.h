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


// Create a new contact option (admin)
//
// Admin endpoint to create an option for any contact
//
empty_envelope_t*
ContactOptionsAPI_createSystemContactOption(apiClient_t *apiClient, char *contactId, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);


// Delete a contact option (admin)
//
// Admin endpoint to delete an option for any contact
//
empty_envelope_t*
ContactOptionsAPI_deleteSystemContactOption(apiClient_t *apiClient, char *contactId, char *optionId, char *api_version, char *x_api_version);


// Retrieve a single contact option by its ID (admin)
//
// Admin endpoint to retrieve a single option for any contact
//
option_dto_envelope_t*
ContactOptionsAPI_getSystemContactOptionById(apiClient_t *apiClient, char *contactId, char *optionId, char *api_version, char *x_api_version);


// Retrieve a list of contact options (admin)
//
// Admin endpoint to retrieve options for any contact
//
option_dto_list_envelope_t*
ContactOptionsAPI_getSystemContactOptions(apiClient_t *apiClient, char *contactId, char *portalId, char *api_version, char *x_api_version);


// Get the count of contact options (admin)
//
// Admin endpoint to get the count of options for any contact
//
int32_envelope_t*
ContactOptionsAPI_getSystemContactOptionsCount(apiClient_t *apiClient, char *contactId, char *portalId, char *api_version, char *x_api_version);


// Update a contact option (admin)
//
// Admin endpoint to update an option for any contact
//
empty_envelope_t*
ContactOptionsAPI_updateSystemContactOption(apiClient_t *apiClient, char *contactId, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);


