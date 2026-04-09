#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/boolean_envelope.h"
#include "../model/cart_dto_envelope.h"
#include "../model/cart_update_request.h"
#include "../model/country_dto_envelope.h"
#include "../model/country_switch_request.h"
#include "../model/currency_dto_envelope.h"
#include "../model/currency_switch_request.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/item_cart_record_dto.h"
#include "../model/item_cart_record_dto_envelope.h"
#include "../model/item_cart_record_dto_list_envelope.h"
#include "../model/item_cart_record_update_dto.h"
#include "../model/item_to_compare_cart_record_dto.h"
#include "../model/item_to_compare_cart_record_dto_envelope.h"
#include "../model/item_to_compare_cart_record_dto_list_envelope.h"
#include "../model/new_wish_list_request.h"
#include "../model/product_to_wish_list_request.h"
#include "../model/wish_list_dto.h"
#include "../model/wish_list_dto_envelope.h"
#include "../model/wish_list_item_record_dto.h"
#include "../model/wish_list_update_dto.h"


// Add an Item to a cart
//
// Add an Item to a cart
//
empty_envelope_t*
CartsAPI_addItemToCartAsync(apiClient_t *apiClient, char *cartId, char *itemId, int *quantity, char *api_version, char *x_api_version);


// Add an item to the compare table
//
// Add an item to the compare table
//
item_cart_record_dto_t*
CartsAPI_addItemToCartCompareTable(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);


// Add a record to a wish list
//
// Add a record to a wish list
//
empty_envelope_t*
CartsAPI_addItemToWishList(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version, product_to_wish_list_request_t *product_to_wish_list_request);


// Assesses if a WishList exists
//
// Assesses if a WishList exists but does not return the content
//
empty_envelope_t*
CartsAPI_cartWishListExistsHead(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version);


// Clear all items from a cart
//
// Clear all items from a cart
//
empty_envelope_t*
CartsAPI_clearCartRecords(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);


// Create a new wish list
//
// Create a new wish list
//
empty_envelope_t*
CartsAPI_createWishListAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version, new_wish_list_request_t *new_wish_list_request);


// Decrease an Item in a cart
//
// Decrease an Item in a cart
//
empty_envelope_t*
CartsAPI_decreaseCartItemQuantity(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto);


// Decrease the quantity of a cart line
//
// Decrease the quantity of a cart line
//
empty_envelope_t*
CartsAPI_decreaseCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, double quantity, char *api_version, char *x_api_version);


// Delete a wish list
//
// Delete a wish list
//
empty_envelope_t*
CartsAPI_deleteCartWishList(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version);


// Remove a record from a wish list
//
// Remove a record from a wish list
//
empty_envelope_t*
CartsAPI_deleteCartWishListRecord(apiClient_t *apiClient, char *cartId, char *wishListId, char *recordId, char *api_version, char *x_api_version);


// Get the acting cart
//
// Get the acting cart
//
cart_dto_envelope_t*
CartsAPI_getActingCart(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get all business owned contacts
//
// Get all business owned contacts
//
cart_dto_envelope_t*
CartsAPI_getCartByIdAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);


// Get an item from the compare table
//
// Get an item from the compare table
//
item_to_compare_cart_record_dto_envelope_t*
CartsAPI_getCartCompareRecord(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);


// Get all items in the compare table
//
// Get all items in the compare table
//
item_to_compare_cart_record_dto_list_envelope_t*
CartsAPI_getCartCompareRecords(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);


// Get the country of a cart
//
// The country of a cart is used to calculate taxes and shipping costs
//
country_dto_envelope_t*
CartsAPI_getCartCountryAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);


// Get the currency of a cart
//
// The currency of a cart used for display purposes
//
currency_dto_envelope_t*
CartsAPI_getCartCurrencyAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);


// Get all cart lines
//
// Get all cart lines
//
item_cart_record_dto_list_envelope_t*
CartsAPI_getCartItems(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);


// Get a cart line by ID
//
// Get a cart line by ID
//
empty_envelope_t*
CartsAPI_getCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, char *api_version, char *x_api_version);


// Get all cart lines
//
// Get all cart lines
//
item_cart_record_dto_list_envelope_t*
CartsAPI_getCartLinesAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);


// Get all wishlists in a cart
//
// Get all wishlists in a cart
//
list_t*
CartsAPI_getCartWishList(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);


// Get a wish list by ID
//
// Get a wish list by ID
//
wish_list_dto_envelope_t*
CartsAPI_getCartWishListDetails(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version);


// Get a record in a wish list
//
// Get a record in a wish list
//
list_t*
CartsAPI_getCartWishListItemAsync(apiClient_t *apiClient, char *cartId, char *wishListId, char *recordId, char *api_version, char *x_api_version);


// Get all records in a wish list
//
// Get all records in a wish list
//
list_t*
CartsAPI_getCartWishListItems(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version);


// Get the guest cart
//
// Get the guest cart
//
cart_dto_envelope_t*
CartsAPI_getGuestCartAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the business cart
//
// Get the business cart
//
cart_dto_envelope_t*
CartsAPI_getTenantCartAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the current user's cart
//
// Get the current user's cart
//
cart_dto_envelope_t*
CartsAPI_getUserCart(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Increase the quantity of a cart line
//
// Increase the quantity of a cart line
//
empty_envelope_t*
CartsAPI_increaseCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, double quantity, char *api_version, char *x_api_version);


// Increase an Item in a cart
//
// Increase an Item in a cart
//
empty_envelope_t*
CartsAPI_increaseItemCartRecordQuantityAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto);


// Assesses if an Item is already in a cart
//
// Assesses if an Item is already in a cart
//
boolean_envelope_t*
CartsAPI_isItemAlreadyInCartAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);


// Assesses if an Item is already in the compare table
//
// Assesses if an Item is already in the compare table
//
boolean_envelope_t*
CartsAPI_isItemInCompareTableAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);


// Assesses if an Item is already in any of the cart's wishlists
//
// Assesses if an Item is already in any of the cart's wishlists
//
boolean_envelope_t*
CartsAPI_isItemInWishLists(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);


// Remove a cart line
//
// Remove a cart line
//
empty_envelope_t*
CartsAPI_removeCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, char *api_version, char *x_api_version);


// Remove an Item from a cart
//
// Remove an Item from a cart
//
empty_envelope_t*
CartsAPI_removeItemFromCartAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);


// Remove an item from the compare table
//
// Remove an item from the compare table
//
item_to_compare_cart_record_dto_t*
CartsAPI_removeItemFromCompareTableAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);


// Set the country of a cart
//
// Set the country of a cart
//
empty_envelope_t*
CartsAPI_setCartCountryAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version, country_switch_request_t *country_switch_request);


// Set the currency of a cart
//
// Set the currency of a cart
//
empty_envelope_t*
CartsAPI_setCartCurrencyAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version, currency_switch_request_t *currency_switch_request);


// Submit a cart for processing
//
// Submit a cart for processing
//
empty_envelope_t*
CartsAPI_submitCartAsync(apiClient_t *apiClient, char *cartId, char *tenantId, char *api_version, char *x_api_version);


// Update a cart
//
// Update a cart
//
empty_envelope_t*
CartsAPI_updateCartAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version, cart_update_request_t *cart_update_request);


// Update a cart line
//
// Update a cart line
//
empty_envelope_t*
CartsAPI_updateCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto);


// Update an Item in a cart
//
// Update an Item in a cart
//
empty_envelope_t*
CartsAPI_updateItemCartRecordAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto);


// Update a wish list
//
// Update a wish list
//
empty_envelope_t*
CartsAPI_updateItemToWishList(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version, wish_list_update_dto_t *wish_list_update_dto);


// Assesses if a WishList exists
//
// Assesses if a WishList exists
//
boolean_envelope_t*
CartsAPI_wishListExistsAsync(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version);


