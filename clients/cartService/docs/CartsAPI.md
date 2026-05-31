# CartsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CartsAPI_addItemToCartAsync**](CartsAPI.md#CartsAPI_addItemToCartAsync) | **POST** /api/v2/CartService/Carts/{cartId}/Items/{itemId} | Add an Item to a cart
[**CartsAPI_addItemToCartCompareTable**](CartsAPI.md#CartsAPI_addItemToCartCompareTable) | **POST** /api/v2/CartService/Carts/{cartId}/Compare/{itemId} | Add an item to the compare table
[**CartsAPI_addItemToWishList**](CartsAPI.md#CartsAPI_addItemToWishList) | **POST** /api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Records | Add a record to a wish list
[**CartsAPI_cartWishListExistsHead**](CartsAPI.md#CartsAPI_cartWishListExistsHead) | **HEAD** /api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Exists | Assesses if a WishList exists
[**CartsAPI_clearCartRecords**](CartsAPI.md#CartsAPI_clearCartRecords) | **DELETE** /api/v2/CartService/Carts/{cartId}/Items | Clear all items from a cart
[**CartsAPI_createWishListAsync**](CartsAPI.md#CartsAPI_createWishListAsync) | **POST** /api/v2/CartService/Carts/{cartId}/WishLists | Create a new wish list
[**CartsAPI_decreaseCartItemQuantity**](CartsAPI.md#CartsAPI_decreaseCartItemQuantity) | **PUT** /api/v2/CartService/Carts/{cartId}/Items/{itemId}/Decrease | Decrease an Item in a cart
[**CartsAPI_decreaseCartLineAsync**](CartsAPI.md#CartsAPI_decreaseCartLineAsync) | **PUT** /api/v2/CartService/Carts/{cartId}/Lines/{lineId}/Decrease | Decrease the quantity of a cart line
[**CartsAPI_deleteCartWishList**](CartsAPI.md#CartsAPI_deleteCartWishList) | **DELETE** /api/v2/CartService/Carts/{cartId}/WishLists/{wishListId} | Delete a wish list
[**CartsAPI_deleteCartWishListRecord**](CartsAPI.md#CartsAPI_deleteCartWishListRecord) | **DELETE** /api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Records/{recordId} | Remove a record from a wish list
[**CartsAPI_getActingCart**](CartsAPI.md#CartsAPI_getActingCart) | **GET** /api/v2/CartService/Carts/ActingCart | Get the acting cart
[**CartsAPI_getCartByIdAsync**](CartsAPI.md#CartsAPI_getCartByIdAsync) | **GET** /api/v2/CartService/Carts/{cartId} | Get all business owned contacts
[**CartsAPI_getCartCompareRecord**](CartsAPI.md#CartsAPI_getCartCompareRecord) | **GET** /api/v2/CartService/Carts/{cartId}/Compare/{itemId} | Get an item from the compare table
[**CartsAPI_getCartCompareRecords**](CartsAPI.md#CartsAPI_getCartCompareRecords) | **GET** /api/v2/CartService/Carts/{cartId}/Compare | Get all items in the compare table
[**CartsAPI_getCartCountryAsync**](CartsAPI.md#CartsAPI_getCartCountryAsync) | **GET** /api/v2/CartService/Carts/{cartId}/Country | Get the country of a cart
[**CartsAPI_getCartCurrencyAsync**](CartsAPI.md#CartsAPI_getCartCurrencyAsync) | **GET** /api/v2/CartService/Carts/{cartId}/Currency | Get the currency of a cart
[**CartsAPI_getCartItems**](CartsAPI.md#CartsAPI_getCartItems) | **GET** /api/v2/CartService/Carts/{cartId}/Items | Get all cart lines
[**CartsAPI_getCartLineAsync**](CartsAPI.md#CartsAPI_getCartLineAsync) | **GET** /api/v2/CartService/Carts/{cartId}/Lines/{lineId} | Get a cart line by ID
[**CartsAPI_getCartLinesAsync**](CartsAPI.md#CartsAPI_getCartLinesAsync) | **GET** /api/v2/CartService/Carts/{cartId}/Lines | Get all cart lines
[**CartsAPI_getCartWishList**](CartsAPI.md#CartsAPI_getCartWishList) | **GET** /api/v2/CartService/Carts/{cartId}/WishLists | Get all wishlists in a cart
[**CartsAPI_getCartWishListDetails**](CartsAPI.md#CartsAPI_getCartWishListDetails) | **GET** /api/v2/CartService/Carts/{cartId}/WishLists/{wishListId} | Get a wish list by ID
[**CartsAPI_getCartWishListItemAsync**](CartsAPI.md#CartsAPI_getCartWishListItemAsync) | **GET** /api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Records/{recordId} | Get a record in a wish list
[**CartsAPI_getCartWishListItems**](CartsAPI.md#CartsAPI_getCartWishListItems) | **GET** /api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Records | Get all records in a wish list
[**CartsAPI_getGuestCartAsync**](CartsAPI.md#CartsAPI_getGuestCartAsync) | **GET** /api/v2/CartService/Carts/GuestCart | Get the guest cart
[**CartsAPI_getTenantCartAsync**](CartsAPI.md#CartsAPI_getTenantCartAsync) | **GET** /api/v2/CartService/Carts/BusinessCart/{tenantId} | Get the business cart
[**CartsAPI_getUserCart**](CartsAPI.md#CartsAPI_getUserCart) | **GET** /api/v2/CartService/Carts/UserCart | Get the current user&#39;s cart
[**CartsAPI_increaseCartLineAsync**](CartsAPI.md#CartsAPI_increaseCartLineAsync) | **PUT** /api/v2/CartService/Carts/{cartId}/Lines/{lineId}/Increase | Increase the quantity of a cart line
[**CartsAPI_increaseItemCartRecordQuantityAsync**](CartsAPI.md#CartsAPI_increaseItemCartRecordQuantityAsync) | **PUT** /api/v2/CartService/Carts/{cartId}/Items/{itemId}/Increase | Increase an Item in a cart
[**CartsAPI_isItemAlreadyInCartAsync**](CartsAPI.md#CartsAPI_isItemAlreadyInCartAsync) | **GET** /api/v2/CartService/Carts/{cartId}/Contains/{itemId} | Assesses if an Item is already in a cart
[**CartsAPI_isItemInCompareTableAsync**](CartsAPI.md#CartsAPI_isItemInCompareTableAsync) | **GET** /api/v2/CartService/Carts/{cartId}/Compare/Contains/{itemId} | Assesses if an Item is already in the compare table
[**CartsAPI_isItemInWishLists**](CartsAPI.md#CartsAPI_isItemInWishLists) | **GET** /api/v2/CartService/Carts/{cartId}/WishLists/Contains/{itemId} | Assesses if an Item is already in any of the cart&#39;s wishlists
[**CartsAPI_removeCartLineAsync**](CartsAPI.md#CartsAPI_removeCartLineAsync) | **DELETE** /api/v2/CartService/Carts/{cartId}/Lines/{lineId} | Remove a cart line
[**CartsAPI_removeItemFromCartAsync**](CartsAPI.md#CartsAPI_removeItemFromCartAsync) | **DELETE** /api/v2/CartService/Carts/{cartId}/Items/{itemId} | Remove an Item from a cart
[**CartsAPI_removeItemFromCompareTableAsync**](CartsAPI.md#CartsAPI_removeItemFromCompareTableAsync) | **DELETE** /api/v2/CartService/Carts/{cartId}/Compare/{itemId} | Remove an item from the compare table
[**CartsAPI_setCartCountryAsync**](CartsAPI.md#CartsAPI_setCartCountryAsync) | **PUT** /api/v2/CartService/Carts/{cartId}/Country | Set the country of a cart
[**CartsAPI_setCartCurrencyAsync**](CartsAPI.md#CartsAPI_setCartCurrencyAsync) | **PUT** /api/v2/CartService/Carts/{cartId}/Currency | Set the currency of a cart
[**CartsAPI_submitCartAsync**](CartsAPI.md#CartsAPI_submitCartAsync) | **POST** /api/v2/CartService/Carts/{cartId}/Submit | Submit a cart for processing
[**CartsAPI_updateCartAsync**](CartsAPI.md#CartsAPI_updateCartAsync) | **PUT** /api/v2/CartService/Carts/{cartId} | Update a cart
[**CartsAPI_updateCartLineAsync**](CartsAPI.md#CartsAPI_updateCartLineAsync) | **PUT** /api/v2/CartService/Carts/{cartId}/Lines/{lineId} | Update a cart line
[**CartsAPI_updateItemCartRecordAsync**](CartsAPI.md#CartsAPI_updateItemCartRecordAsync) | **PUT** /api/v2/CartService/Carts/{cartId}/Items/{itemId} | Update an Item in a cart
[**CartsAPI_updateItemToWishList**](CartsAPI.md#CartsAPI_updateItemToWishList) | **PUT** /api/v2/CartService/Carts/{cartId}/WishLists/{wishListId} | Update a wish list
[**CartsAPI_wishListExistsAsync**](CartsAPI.md#CartsAPI_wishListExistsAsync) | **GET** /api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Exists | Assesses if a WishList exists


# **CartsAPI_addItemToCartAsync**
```c
// Add an Item to a cart
//
// Add an Item to a cart
//
empty_envelope_t* CartsAPI_addItemToCartAsync(apiClient_t *apiClient, char *cartId, char *itemId, int *quantity, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**quantity** | **int \*** |  | [optional] [default to 1]
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_addItemToCartCompareTable**
```c
// Add an item to the compare table
//
// Add an item to the compare table
//
item_cart_record_dto_t* CartsAPI_addItemToCartCompareTable(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_cart_record_dto_t](item_cart_record_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_addItemToWishList**
```c
// Add a record to a wish list
//
// Add a record to a wish list
//
empty_envelope_t* CartsAPI_addItemToWishList(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version, product_to_wish_list_request_t *product_to_wish_list_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**wishListId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**product_to_wish_list_request** | **[product_to_wish_list_request_t](product_to_wish_list_request.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_cartWishListExistsHead**
```c
// Assesses if a WishList exists
//
// Assesses if a WishList exists but does not return the content
//
empty_envelope_t* CartsAPI_cartWishListExistsHead(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**wishListId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_clearCartRecords**
```c
// Clear all items from a cart
//
// Clear all items from a cart
//
empty_envelope_t* CartsAPI_clearCartRecords(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_createWishListAsync**
```c
// Create a new wish list
//
// Create a new wish list
//
empty_envelope_t* CartsAPI_createWishListAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version, new_wish_list_request_t *new_wish_list_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**new_wish_list_request** | **[new_wish_list_request_t](new_wish_list_request.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_decreaseCartItemQuantity**
```c
// Decrease an Item in a cart
//
// Decrease an Item in a cart
//
empty_envelope_t* CartsAPI_decreaseCartItemQuantity(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_cart_record_update_dto** | **[item_cart_record_update_dto_t](item_cart_record_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_decreaseCartLineAsync**
```c
// Decrease the quantity of a cart line
//
// Decrease the quantity of a cart line
//
empty_envelope_t* CartsAPI_decreaseCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, double quantity, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**lineId** | **char \*** |  | 
**quantity** | **double** |  | [optional] [default to 1]
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_deleteCartWishList**
```c
// Delete a wish list
//
// Delete a wish list
//
empty_envelope_t* CartsAPI_deleteCartWishList(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**wishListId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_deleteCartWishListRecord**
```c
// Remove a record from a wish list
//
// Remove a record from a wish list
//
empty_envelope_t* CartsAPI_deleteCartWishListRecord(apiClient_t *apiClient, char *cartId, char *wishListId, char *recordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**wishListId** | **char \*** |  | 
**recordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getActingCart**
```c
// Get the acting cart
//
// Get the acting cart
//
cart_dto_envelope_t* CartsAPI_getActingCart(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cart_dto_envelope_t](cart_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getCartByIdAsync**
```c
// Get all business owned contacts
//
// Get all business owned contacts
//
cart_dto_envelope_t* CartsAPI_getCartByIdAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cart_dto_envelope_t](cart_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getCartCompareRecord**
```c
// Get an item from the compare table
//
// Get an item from the compare table
//
item_to_compare_cart_record_dto_envelope_t* CartsAPI_getCartCompareRecord(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_to_compare_cart_record_dto_envelope_t](item_to_compare_cart_record_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getCartCompareRecords**
```c
// Get all items in the compare table
//
// Get all items in the compare table
//
item_to_compare_cart_record_dto_list_envelope_t* CartsAPI_getCartCompareRecords(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_to_compare_cart_record_dto_list_envelope_t](item_to_compare_cart_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getCartCountryAsync**
```c
// Get the country of a cart
//
// The country of a cart is used to calculate taxes and shipping costs
//
country_dto_envelope_t* CartsAPI_getCartCountryAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[country_dto_envelope_t](country_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getCartCurrencyAsync**
```c
// Get the currency of a cart
//
// The currency of a cart used for display purposes
//
currency_dto_envelope_t* CartsAPI_getCartCurrencyAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[currency_dto_envelope_t](currency_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getCartItems**
```c
// Get all cart lines
//
// Get all cart lines
//
item_cart_record_dto_list_envelope_t* CartsAPI_getCartItems(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_cart_record_dto_list_envelope_t](item_cart_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getCartLineAsync**
```c
// Get a cart line by ID
//
// Get a cart line by ID
//
empty_envelope_t* CartsAPI_getCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**lineId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getCartLinesAsync**
```c
// Get all cart lines
//
// Get all cart lines
//
item_cart_record_dto_list_envelope_t* CartsAPI_getCartLinesAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_cart_record_dto_list_envelope_t](item_cart_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getCartWishList**
```c
// Get all wishlists in a cart
//
// Get all wishlists in a cart
//
list_t* CartsAPI_getCartWishList(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](wish_list_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getCartWishListDetails**
```c
// Get a wish list by ID
//
// Get a wish list by ID
//
wish_list_dto_envelope_t* CartsAPI_getCartWishListDetails(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**wishListId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[wish_list_dto_envelope_t](wish_list_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getCartWishListItemAsync**
```c
// Get a record in a wish list
//
// Get a record in a wish list
//
list_t* CartsAPI_getCartWishListItemAsync(apiClient_t *apiClient, char *cartId, char *wishListId, char *recordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**wishListId** | **char \*** |  | 
**recordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](wish_list_item_record_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getCartWishListItems**
```c
// Get all records in a wish list
//
// Get all records in a wish list
//
list_t* CartsAPI_getCartWishListItems(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**wishListId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](wish_list_item_record_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getGuestCartAsync**
```c
// Get the guest cart
//
// Get the guest cart
//
cart_dto_envelope_t* CartsAPI_getGuestCartAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cart_dto_envelope_t](cart_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getTenantCartAsync**
```c
// Get the business cart
//
// Get the business cart
//
cart_dto_envelope_t* CartsAPI_getTenantCartAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cart_dto_envelope_t](cart_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getUserCart**
```c
// Get the current user's cart
//
// Get the current user's cart
//
cart_dto_envelope_t* CartsAPI_getUserCart(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cart_dto_envelope_t](cart_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_increaseCartLineAsync**
```c
// Increase the quantity of a cart line
//
// Increase the quantity of a cart line
//
empty_envelope_t* CartsAPI_increaseCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, double quantity, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**lineId** | **char \*** |  | 
**quantity** | **double** |  | [optional] [default to 1]
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_increaseItemCartRecordQuantityAsync**
```c
// Increase an Item in a cart
//
// Increase an Item in a cart
//
empty_envelope_t* CartsAPI_increaseItemCartRecordQuantityAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_cart_record_update_dto** | **[item_cart_record_update_dto_t](item_cart_record_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_isItemAlreadyInCartAsync**
```c
// Assesses if an Item is already in a cart
//
// Assesses if an Item is already in a cart
//
boolean_envelope_t* CartsAPI_isItemAlreadyInCartAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[boolean_envelope_t](boolean_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_isItemInCompareTableAsync**
```c
// Assesses if an Item is already in the compare table
//
// Assesses if an Item is already in the compare table
//
boolean_envelope_t* CartsAPI_isItemInCompareTableAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[boolean_envelope_t](boolean_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_isItemInWishLists**
```c
// Assesses if an Item is already in any of the cart's wishlists
//
// Assesses if an Item is already in any of the cart's wishlists
//
boolean_envelope_t* CartsAPI_isItemInWishLists(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[boolean_envelope_t](boolean_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_removeCartLineAsync**
```c
// Remove a cart line
//
// Remove a cart line
//
empty_envelope_t* CartsAPI_removeCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**lineId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_removeItemFromCartAsync**
```c
// Remove an Item from a cart
//
// Remove an Item from a cart
//
empty_envelope_t* CartsAPI_removeItemFromCartAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_removeItemFromCompareTableAsync**
```c
// Remove an item from the compare table
//
// Remove an item from the compare table
//
item_to_compare_cart_record_dto_t* CartsAPI_removeItemFromCompareTableAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_to_compare_cart_record_dto_t](item_to_compare_cart_record_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_setCartCountryAsync**
```c
// Set the country of a cart
//
// Set the country of a cart
//
empty_envelope_t* CartsAPI_setCartCountryAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version, country_switch_request_t *country_switch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**country_switch_request** | **[country_switch_request_t](country_switch_request.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_setCartCurrencyAsync**
```c
// Set the currency of a cart
//
// Set the currency of a cart
//
empty_envelope_t* CartsAPI_setCartCurrencyAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version, currency_switch_request_t *currency_switch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**currency_switch_request** | **[currency_switch_request_t](currency_switch_request.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_submitCartAsync**
```c
// Submit a cart for processing
//
// Submit a cart for processing
//
empty_envelope_t* CartsAPI_submitCartAsync(apiClient_t *apiClient, char *cartId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_updateCartAsync**
```c
// Update a cart
//
// Update a cart
//
empty_envelope_t* CartsAPI_updateCartAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version, cart_update_request_t *cart_update_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cart_update_request** | **[cart_update_request_t](cart_update_request.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_updateCartLineAsync**
```c
// Update a cart line
//
// Update a cart line
//
empty_envelope_t* CartsAPI_updateCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**lineId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_cart_record_update_dto** | **[item_cart_record_update_dto_t](item_cart_record_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_updateItemCartRecordAsync**
```c
// Update an Item in a cart
//
// Update an Item in a cart
//
empty_envelope_t* CartsAPI_updateItemCartRecordAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_cart_record_update_dto** | **[item_cart_record_update_dto_t](item_cart_record_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_updateItemToWishList**
```c
// Update a wish list
//
// Update a wish list
//
empty_envelope_t* CartsAPI_updateItemToWishList(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version, wish_list_update_dto_t *wish_list_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**wishListId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**wish_list_update_dto** | **[wish_list_update_dto_t](wish_list_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_wishListExistsAsync**
```c
// Assesses if a WishList exists
//
// Assesses if a WishList exists
//
boolean_envelope_t* CartsAPI_wishListExistsAsync(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**wishListId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[boolean_envelope_t](boolean_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

