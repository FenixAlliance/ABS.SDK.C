#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/boolean_envelope.h"
#include "../model/empty_envelope.h"
#include "../model/new_wish_list_request.h"
#include "../model/product_to_wish_list_request.h"
#include "../model/wish_list_dto.h"
#include "../model/wish_list_item_record_dto.h"
#include "../model/wish_list_update_dto.h"


// Add a product to a wish list
//
// Adds the specified product to the given wish list.
//
empty_envelope_t*
WishListsAPI_addProductToWishList(apiClient_t *apiClient, char *api_version, char *x_api_version, product_to_wish_list_request_t *product_to_wish_list_request);


// Create a wish list
//
// Creates a new wish list from the provided request data.
//
empty_envelope_t*
WishListsAPI_createWishList(apiClient_t *apiClient, char *api_version, char *x_api_version, new_wish_list_request_t *new_wish_list_request);


// Delete a wish list
//
// Deletes the specified wish list.
//
empty_envelope_t*
WishListsAPI_deleteWishList(apiClient_t *apiClient, char *wishListId, char *api_version, char *x_api_version);


// Delete a wish list record
//
// Removes a specific item record from a wish list by its record ID.
//
void
WishListsAPI_deleteWishListRecord(apiClient_t *apiClient, char *recordId, char *api_version, char *x_api_version);


// Get wish list details
//
// Retrieves the full details of the specified wish list.
//
wish_list_dto_t*
WishListsAPI_getCartWishListDetailsAsync(apiClient_t *apiClient, char *wishListId, char *api_version, char *x_api_version);


// Get wish list item records
//
// Retrieves all item records in the specified wish list.
//
list_t*
WishListsAPI_getCartWishListItemsAsync(apiClient_t *apiClient, char *wishListId, char *api_version, char *x_api_version);


// Get wish lists for a cart
//
// Retrieves all wish lists associated with the specified cart.
//
list_t*
WishListsAPI_getWishListAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);


// Check if a product is in any wish list
//
// Returns a boolean indicating whether the specified product exists in any wish list of the given cart.
//
boolean_envelope_t*
WishListsAPI_isProductInWishLists(apiClient_t *apiClient, char *cartId, char *productId, char *api_version, char *x_api_version);


// Update a wish list
//
// Updates the specified wish list with the provided data.
//
empty_envelope_t*
WishListsAPI_updateProductToWishList(apiClient_t *apiClient, char *wishListId, char *api_version, char *x_api_version, wish_list_update_dto_t *wish_list_update_dto);


// Check if a wish list exists
//
// Returns a boolean indicating whether the specified wish list exists.
//
boolean_envelope_t*
WishListsAPI_wishListExists(apiClient_t *apiClient, char *wishListId, char *api_version, char *x_api_version);


// Check if a wish list exists (HEAD)
//
// HEAD request to check whether the specified wish list exists without returning a response body.
//
empty_envelope_t*
WishListsAPI_wishListExistsHeadAsync(apiClient_t *apiClient, char *wishListId, char *api_version, char *x_api_version);


