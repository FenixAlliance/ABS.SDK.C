#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/currency_dto_envelope.h"
#include "../model/currency_dto_list_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Count currencies
//
// Returns the total number of enabled currencies, with optional OData filtering.
//
int32_envelope_t*
CurrenciesAPI_countCurrenciesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get currency by ID
//
// Retrieves a single currency by its unique identifier.
//
currency_dto_envelope_t*
CurrenciesAPI_getCurrencyByIdAsync(apiClient_t *apiClient, char *currencyId, char *api_version, char *x_api_version);


// Get all currencies
//
// Retrieves the list of all enabled currencies with optional OData pagination and filtering.
//
currency_dto_list_envelope_t*
CurrenciesAPI_getEnabledCurrenciesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


