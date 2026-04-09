#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/country_language_dto_envelope.h"
#include "../model/country_language_dto_list_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Count languages
//
// Returns the total number of supported languages, with optional OData filtering.
//
int32_envelope_t*
LanguagesAPI_countLanguagesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get language by ID
//
// Retrieves a single language by its unique identifier.
//
country_language_dto_envelope_t*
LanguagesAPI_getLanguageByIdAsync(apiClient_t *apiClient, char *languageId, char *api_version, char *x_api_version);


// Get all languages
//
// Retrieves the list of all supported languages with optional OData pagination and filtering.
//
country_language_dto_list_envelope_t*
LanguagesAPI_getLanguagesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


