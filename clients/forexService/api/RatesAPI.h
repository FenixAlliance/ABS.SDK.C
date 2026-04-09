#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/exchange_rate_envelope.h"
#include "../model/forex_rates_dto_envelope.h"


// Get historical rate for a currency
//
// Retrieves the exchange rate for a specific currency as of a specific historical date.
//
exchange_rate_envelope_t*
RatesAPI_getHistoricalCurrencyRateAsync(apiClient_t *apiClient, char *currencyId, char date, char *api_version, char *x_api_version);


// Get historical currency rates
//
// Retrieves exchange rates for all supported currencies as of a specific historical date.
//
forex_rates_dto_envelope_t*
RatesAPI_getHistoricalCurrencyRatesAsync(apiClient_t *apiClient, char date, char *api_version, char *x_api_version);


// Get latest rate for a currency
//
// Retrieves the latest exchange rate for a specific currency by its identifier.
//
exchange_rate_envelope_t*
RatesAPI_getLatestCurrencyRateAsync(apiClient_t *apiClient, char *currencyId, char *api_version, char *x_api_version);


// Get latest currency rates
//
// Retrieves the latest exchange rates for all supported currencies.
//
forex_rates_dto_envelope_t*
RatesAPI_getLatestCurrencyRatesModelAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


