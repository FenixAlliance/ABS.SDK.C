#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cart_dto_collection_query_parameters.h"
#include "../model/cart_dto_envelope.h"
#include "../model/cart_dto_list_envelope.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/guest_cart_purge_result_dto_envelope.h"
#include "../model/int32_envelope.h"


// Delete a system cart
//
// Delete a system cart by its ID
//
empty_envelope_t*
CartsAPI_deleteSystemCart(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);


// Retrieve a single system cart by its ID
//
// Retrieve a single system cart by its ID
//
cart_dto_envelope_t*
CartsAPI_getSystemCartById(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);


// Retrieve a list of system carts
//
// Retrieve a list of all carts in the system
//
cart_dto_list_envelope_t*
CartsAPI_getSystemCarts(apiClient_t *apiClient, char *api_version, char *x_api_version, cart_dto_collection_query_parameters_t *cart_dto_collection_query_parameters);


// Get the count of system carts
//
// Get the count of all carts in the system
//
int32_envelope_t*
CartsAPI_getSystemCartsCount(apiClient_t *apiClient, char *api_version, char *x_api_version, cart_dto_collection_query_parameters_t *cart_dto_collection_query_parameters);


// Purge all guest carts
//
// Deletes every guest cart, cascading its item cart records, compare records and wish lists, and returns the removed-row counts. Idempotent.
//
guest_cart_purge_result_dto_envelope_t*
CartsAPI_purgeSystemGuestCarts(apiClient_t *apiClient, char *api_version, char *x_api_version);


