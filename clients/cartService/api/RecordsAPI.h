#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/boolean_envelope.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/item_cart_record_create_dto.h"
#include "../model/item_cart_record_dto_envelope.h"
#include "../model/item_cart_record_dto_list_envelope.h"
#include "../model/item_cart_record_update_dto.h"


// Add an item to a cart
//
// Adds an item with the specified quantity to the given cart.
//
empty_envelope_t*
RecordsAPI_addItemToCart(apiClient_t *apiClient, char *cartId, char *itemId, int *quantity, char *api_version, char *x_api_version);


// Add a product to a cart with tracking
//
// Adds a product to the cart using a request body with cart ID, product ID, and quantity.
//
empty_envelope_t*
RecordsAPI_addProductToCartAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, item_cart_record_create_dto_t *item_cart_record_create_dto);


// Clear all items from a cart
//
// Removes all item records from the specified cart.
//
empty_envelope_t*
RecordsAPI_clearCartAsync(apiClient_t *apiClient, char *cartID, char *api_version, char *x_api_version);


// Decrease cart record quantity
//
// Decreases the quantity of the specified item cart record by the given amount.
//
empty_envelope_t*
RecordsAPI_decreaseItemCartRecord(apiClient_t *apiClient, char *recordId, double quantity, char *api_version, char *x_api_version);


// Get a cart record by ID
//
// Retrieves the details of a specific item cart record.
//
empty_envelope_t*
RecordsAPI_getItemCartRecord(apiClient_t *apiClient, char *recordId, char *api_version, char *x_api_version);


// Get all items in a cart
//
// Retrieves all item cart records for the specified cart.
//
item_cart_record_dto_list_envelope_t*
RecordsAPI_getItemsInCartAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);


// Increase cart record quantity
//
// Increases the quantity of the specified item cart record by the given amount.
//
empty_envelope_t*
RecordsAPI_increaseItemCartRecord(apiClient_t *apiClient, char *recordId, double quantity, char *api_version, char *x_api_version);


// Check if an item is in a cart
//
// Returns a boolean indicating whether the specified item is already in the given cart.
//
boolean_envelope_t*
RecordsAPI_isItemAlreadyInCart(apiClient_t *apiClient, char *itemID, char *cartID, char *api_version, char *x_api_version);


// Remove a product from a cart
//
// Removes a product from the cart using cart ID and product ID query parameters.
//
empty_envelope_t*
RecordsAPI_removeProductFromCartByParams(apiClient_t *apiClient, char *cartId, char *productId, char *api_version, char *x_api_version);


// Remove a product from a cart by record ID
//
// Removes a specific item record from the cart by its record ID.
//
empty_envelope_t*
RecordsAPI_removeProductFromCartByRecordId(apiClient_t *apiClient, char *recordId, char *api_version, char *x_api_version);


// Update a cart record
//
// Updates the specified item cart record with the provided data.
//
empty_envelope_t*
RecordsAPI_updateItemCartRecord(apiClient_t *apiClient, char *recordId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto);


