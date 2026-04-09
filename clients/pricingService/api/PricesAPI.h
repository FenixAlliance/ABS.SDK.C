#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/item_price_calculation_envelope.h"
#include "../model/money_envelope.h"


// Gets the final price for an item
//
// Gets the final price for an item after all discounts and taxes in the specified currency.
//
money_envelope_t*
PricesAPI_getFinalPrice(apiClient_t *apiClient, char *itemId, char *currencyId, char *api_version, char *x_api_version);


// Gets the calculated price for an item
//
// Calculates the price for an item considering price list, discount list, quantity, and currency.
//
item_price_calculation_envelope_t*
PricesAPI_getPrice(apiClient_t *apiClient, char *itemId, char *priceListId, char *discountsListId, double quantity, char *currencyId, char *api_version, char *x_api_version);


// Gets total savings for an item
//
// Gets the total savings amount for an item in the specified currency.
//
money_envelope_t*
PricesAPI_getTotalSavingsInUsd(apiClient_t *apiClient, char *itemId, char *currencyId, char *api_version, char *x_api_version);


// Gets total taxes for an item
//
// Gets the total tax amount for an item in the specified currency.
//
money_envelope_t*
PricesAPI_getTotalTaxesInUsd(apiClient_t *apiClient, char *itemId, char *currencyId, char *api_version, char *x_api_version);


