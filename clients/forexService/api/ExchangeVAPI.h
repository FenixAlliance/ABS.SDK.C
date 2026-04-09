#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/exchange_rate_envelope.h"


// Exchange currency at historical rates (v3)
//
// Exchange an amount of money from one currency to another using exchange rates from a specific historical date. Returns the full ExchangeRate details.
//
exchange_rate_envelope_t*
ExchangeVAPI_exchangeAmountHistoricalV3Async(apiClient_t *apiClient, double amount, char *sourceCurrencyId, char *targetCurrencyId, char date);


// Exchange currency at latest rates (v3)
//
// Exchange an amount of money from one currency to another using the latest available exchange rates. Returns the full ExchangeRate details.
//
exchange_rate_envelope_t*
ExchangeVAPI_exchangeAmountV3Async(apiClient_t *apiClient, double amount, char *sourceCurrencyId, char *targetCurrencyId);


