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
#include "../model/item_price_create_dto.h"
#include "../model/item_price_dto_envelope.h"
#include "../model/item_price_dto_list_envelope.h"
#include "../model/item_price_update_dto.h"
#include "../model/price_list_create_dto.h"
#include "../model/price_list_dto_envelope.h"
#include "../model/price_list_dto_list_envelope.h"
#include "../model/price_list_update_dto.h"


// Creates a new price list
//
// Creates a new price list for the current tenant.
//
empty_envelope_t*
PriceListsAPI_createPriceListAsync(apiClient_t *apiClient, char *tenantId, price_list_create_dto_t *price_list_create_dto);


// Creates a price list entry
//
// Creates a new price entry in the specified price list.
//
empty_envelope_t*
PriceListsAPI_createPriceListPricesAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, item_price_create_dto_t *item_price_create_dto);


// Deletes a price list
//
// Deletes the specified price list.
//
empty_envelope_t*
PriceListsAPI_deletePriceListAsync(apiClient_t *apiClient, char *tenantId, char *priceListId);


// Deletes a price list entry
//
// Deletes the specified price entry from a price list.
//
empty_envelope_t*
PriceListsAPI_deletePriceListPriceAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, char *priceId);


// Gets a price list by ID
//
// Retrieves the details of a price list using its unique identifier.
//
price_list_dto_envelope_t*
PriceListsAPI_getPriceListAsync(apiClient_t *apiClient, char *tenantId, char *priceListId);


// Gets a price list entry by ID
//
// Retrieves a specific price entry from a price list.
//
item_price_dto_envelope_t*
PriceListsAPI_getPriceListPriceAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, char *priceId);


// Retrieves prices in a price list
//
// Gets all price entries for a specific price list with OData support.
//
item_price_dto_list_envelope_t*
PriceListsAPI_getPriceListPricesAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, char *itemId);


// Retrieves all price lists
//
// Gets all price lists for the current tenant with OData support.
//
price_list_dto_list_envelope_t*
PriceListsAPI_getPriceListsAsync(apiClient_t *apiClient, char *tenantId);


// Counts price lists
//
// Gets the count of price lists for the current tenant.
//
int32_envelope_t*
PriceListsAPI_getPriceListsCountAsync(apiClient_t *apiClient, char *tenantId);


// Updates a price list
//
// Updates the specified price list.
//
empty_envelope_t*
PriceListsAPI_updatePriceListAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, price_list_update_dto_t *price_list_update_dto);


// Updates a price list entry
//
// Updates the specified price entry in a price list.
//
empty_envelope_t*
PriceListsAPI_updatePriceListPriceAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, char *priceId, item_price_update_dto_t *item_price_update_dto);


