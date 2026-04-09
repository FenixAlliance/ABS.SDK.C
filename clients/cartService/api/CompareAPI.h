#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/add_product_to_compare_request.h"
#include "../model/error_envelope.h"
#include "../model/item_cart_record_dto.h"
#include "../model/item_to_compare_cart_record_dto.h"
#include "../model/item_to_compare_cart_record_dto_envelope.h"
#include "../model/item_to_compare_cart_record_dto_list_envelope.h"


// Add an item to the compare table
//
// Adds a product to the compare table for the specified cart with tracking.
//
item_cart_record_dto_t*
CompareAPI_addItemToCompareTableAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, add_product_to_compare_request_t *add_product_to_compare_request);


// Get compare record details
//
// Retrieves the details of a specific item-to-compare cart record.
//
item_to_compare_cart_record_dto_envelope_t*
CompareAPI_getItemToCompareRecord(apiClient_t *apiClient, char *recordId, char *api_version, char *x_api_version);


// Get items to compare in a cart
//
// Retrieves all items added to the compare table for the specified cart.
//
item_to_compare_cart_record_dto_list_envelope_t*
CompareAPI_getItemToCompareRecords(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);


// Remove an item from the compare table
//
// Removes a specific record from the compare table by its record ID.
//
item_to_compare_cart_record_dto_t*
CompareAPI_removeItemFromCompareTable(apiClient_t *apiClient, char *recordId, char *api_version, char *x_api_version);


