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


// Create a new tenant option
//
// Create a new tenant option
//
empty_envelope_t*
OptionsAPI_createTenantOption(apiClient_t *apiClient, char *tenantId, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);


// Delete a tenant option
//
// Delete a tenant option
//
empty_envelope_t*
OptionsAPI_deleteTenantOption(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version);


// Retrieve a single tenant option by its ID
//
// Retrieve a single tenant option by its ID
//
option_dto_envelope_t*
OptionsAPI_getTenantOptionById(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version);


// Retrieve a single tenant option by its key
//
// Retrieve a single tenant option by its key
//
option_dto_envelope_t*
OptionsAPI_getTenantOptionByKey(apiClient_t *apiClient, char *tenantId, char *key, char *portalId, char *api_version, char *x_api_version);


// Retrieve a list of tenant options
//
// Retrieve a list of tenant options
//
option_dto_list_envelope_t*
OptionsAPI_getTenantOptions(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version);


// Get the count of tenant options
//
// Get the count of tenant options
//
int32_envelope_t*
OptionsAPI_getTenantOptionsCount(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version);


// Update a tenant option
//
// Update a tenant option
//
empty_envelope_t*
OptionsAPI_updateTenantOption(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);


// Create or update a tenant option by key
//
// Create or update a tenant option by key
//
empty_envelope_t*
OptionsAPI_upsertTenantOption(apiClient_t *apiClient, char *tenantId, char *key, char *portalId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);


