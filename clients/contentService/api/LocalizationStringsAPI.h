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
#include "../model/localization_string_create_dto.h"
#include "../model/localization_string_dto_collection_query_parameters.h"
#include "../model/localization_string_dto_envelope.h"
#include "../model/localization_string_dto_list_envelope.h"
#include "../model/localization_string_update_dto.h"


// Count localization strings
//
// Counts all localization strings for the specified tenant.
//
int32_envelope_t*
LocalizationStringsAPI_countLocalizationStringsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, localization_string_dto_collection_query_parameters_t *localization_string_dto_collection_query_parameters);


// Create a localization string
//
// Creates a new localization string for the specified tenant.
//
empty_envelope_t*
LocalizationStringsAPI_createLocalizationStringAsync(apiClient_t *apiClient, char *tenantId, localization_string_create_dto_t *localization_string_create_dto, char *api_version, char *x_api_version);


// Delete a localization string
//
// Deletes a localization string for the specified tenant.
//
empty_envelope_t*
LocalizationStringsAPI_deleteLocalizationStringAsync(apiClient_t *apiClient, char *tenantId, char *localizationStringId, char *api_version, char *x_api_version);


// Get localization string by ID
//
// Retrieves a specific localization string by its identifier.
//
localization_string_dto_envelope_t*
LocalizationStringsAPI_getLocalizationStringByIdAsync(apiClient_t *apiClient, char *tenantId, char *localizationStringId, char *api_version, char *x_api_version);


// Get localization strings
//
// Retrieves all localization strings for the specified tenant.
//
localization_string_dto_list_envelope_t*
LocalizationStringsAPI_getLocalizationStringsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, localization_string_dto_collection_query_parameters_t *localization_string_dto_collection_query_parameters);


// Update a localization string
//
// Updates an existing localization string for the specified tenant.
//
empty_envelope_t*
LocalizationStringsAPI_updateLocalizationStringAsync(apiClient_t *apiClient, char *tenantId, char *localizationStringId, localization_string_update_dto_t *localization_string_update_dto, char *api_version, char *x_api_version);


