#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/money_envelope.h"


// Exchange currency at latest rates
//
// Exchange an amount of money from one currency to another using the latest available exchange rates.
//
money_envelope_t*
ExchangeAPI_exchangeAmountAsync(apiClient_t *apiClient, double amount, char *sourceCurrencyId, char *targetCurrencyId);


// Exchange currency at historical rates
//
// Exchange an amount of money from one currency to another using exchange rates from a specific historical date.
//
money_envelope_t*
ExchangeAPI_exchangeAmountHistoricalAsync(apiClient_t *apiClient, double amount, char *sourceCurrencyId, char *targetCurrencyId, char date);


