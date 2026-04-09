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


// Create a new contact option
//
// Create a new option for a contact
//
empty_envelope_t*
OptionsAPI_createContactOption(apiClient_t *apiClient, char *tenantId, char *contactId, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);


// Delete a contact option
//
// Delete a contact option
//
empty_envelope_t*
OptionsAPI_deleteContactOption(apiClient_t *apiClient, char *tenantId, char *contactId, char *optionId, char *api_version, char *x_api_version);


// Retrieve a single contact option by its ID
//
// Retrieve a single contact option by its ID
//
option_dto_envelope_t*
OptionsAPI_getContactOptionById(apiClient_t *apiClient, char *tenantId, char *contactId, char *optionId, char *api_version, char *x_api_version);


// Retrieve a single contact option by its key
//
// Retrieve a single contact option by its key
//
option_dto_envelope_t*
OptionsAPI_getContactOptionByKey(apiClient_t *apiClient, char *tenantId, char *contactId, char *key, char *portalId, char *api_version, char *x_api_version);


// Retrieve a list of contact options
//
// Retrieve a list of options for a contact
//
option_dto_list_envelope_t*
OptionsAPI_getContactOptions(apiClient_t *apiClient, char *tenantId, char *contactId, char *portalId, char *api_version, char *x_api_version);


// Get the count of contact options
//
// Get the count of options for a contact
//
int32_envelope_t*
OptionsAPI_getContactOptionsCount(apiClient_t *apiClient, char *tenantId, char *contactId, char *portalId, char *api_version, char *x_api_version);


// Update a contact option
//
// Update a contact option
//
empty_envelope_t*
OptionsAPI_updateContactOption(apiClient_t *apiClient, char *tenantId, char *contactId, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);


// Create or update a contact option by key
//
// Create or update a contact option by key
//
empty_envelope_t*
OptionsAPI_upsertContactOption(apiClient_t *apiClient, char *tenantId, char *contactId, char *key, char *portalId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);


