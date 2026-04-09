#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/timezone_dto_envelope.h"
#include "../model/timezone_dto_list_envelope.h"


// Count timezones
//
// Returns the total number of supported timezones, with optional OData filtering.
//
int32_envelope_t*
TimezonesAPI_countTimezonesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get timezone by ID
//
// Retrieves a single timezone by its unique identifier.
//
timezone_dto_envelope_t*
TimezonesAPI_getTimeZoneByIdAsync(apiClient_t *apiClient, char *timeZoneId, char *api_version, char *x_api_version);


// Get all timezones
//
// Retrieves the list of all supported timezones with optional OData pagination and filtering.
//
timezone_dto_list_envelope_t*
TimezonesAPI_getTimeZonesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


