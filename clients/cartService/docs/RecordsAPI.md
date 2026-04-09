# RecordsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RecordsAPI_addItemToCart**](RecordsAPI.md#RecordsAPI_addItemToCart) | **POST** /api/v2/CartService/Records/AddItem | Add an item to a cart
[**RecordsAPI_addProductToCartAsync**](RecordsAPI.md#RecordsAPI_addProductToCartAsync) | **POST** /api/v2/CartService/Records | Add a product to a cart with tracking
[**RecordsAPI_clearCartAsync**](RecordsAPI.md#RecordsAPI_clearCartAsync) | **POST** /api/v2/CartService/Records/ClearCart | Clear all items from a cart
[**RecordsAPI_decreaseItemCartRecord**](RecordsAPI.md#RecordsAPI_decreaseItemCartRecord) | **PUT** /api/v2/CartService/Records/{recordId}/Decrease | Decrease cart record quantity
[**RecordsAPI_getItemCartRecord**](RecordsAPI.md#RecordsAPI_getItemCartRecord) | **GET** /api/v2/CartService/Records/{recordId}/Details | Get a cart record by ID
[**RecordsAPI_getItemsInCartAsync**](RecordsAPI.md#RecordsAPI_getItemsInCartAsync) | **GET** /api/v2/CartService/Records/{cartId} | Get all items in a cart
[**RecordsAPI_increaseItemCartRecord**](RecordsAPI.md#RecordsAPI_increaseItemCartRecord) | **PUT** /api/v2/CartService/Records/{recordId}/Increase | Increase cart record quantity
[**RecordsAPI_isItemAlreadyInCart**](RecordsAPI.md#RecordsAPI_isItemAlreadyInCart) | **GET** /api/v2/CartService/Records/IsInCart | Check if an item is in a cart
[**RecordsAPI_removeProductFromCartByParams**](RecordsAPI.md#RecordsAPI_removeProductFromCartByParams) | **DELETE** /api/v2/CartService/Records | Remove a product from a cart
[**RecordsAPI_removeProductFromCartByRecordId**](RecordsAPI.md#RecordsAPI_removeProductFromCartByRecordId) | **DELETE** /api/v2/CartService/Records/{recordId} | Remove a product from a cart by record ID
[**RecordsAPI_updateItemCartRecord**](RecordsAPI.md#RecordsAPI_updateItemCartRecord) | **PUT** /api/v2/CartService/Records/{recordId} | Update a cart record


# **RecordsAPI_addItemToCart**
```c
// Add an item to a cart
//
// Adds an item with the specified quantity to the given cart.
//
empty_envelope_t* RecordsAPI_addItemToCart(apiClient_t *apiClient, char *cartId, char *itemId, int *quantity, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | [optional] 
**itemId** | **char \*** |  | [optional] 
**quantity** | **int \*** |  | [optional] 
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

# **RecordsAPI_addProductToCartAsync**
```c
// Add a product to a cart with tracking
//
// Adds a product to the cart using a request body with cart ID, product ID, and quantity.
//
empty_envelope_t* RecordsAPI_addProductToCartAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, item_cart_record_create_dto_t *item_cart_record_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_cart_record_create_dto** | **[item_cart_record_create_dto_t](item_cart_record_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RecordsAPI_clearCartAsync**
```c
// Clear all items from a cart
//
// Removes all item records from the specified cart.
//
empty_envelope_t* RecordsAPI_clearCartAsync(apiClient_t *apiClient, char *cartID, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartID** | **char \*** |  | 
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

# **RecordsAPI_decreaseItemCartRecord**
```c
// Decrease cart record quantity
//
// Decreases the quantity of the specified item cart record by the given amount.
//
empty_envelope_t* RecordsAPI_decreaseItemCartRecord(apiClient_t *apiClient, char *recordId, double quantity, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**recordId** | **char \*** |  | 
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

# **RecordsAPI_getItemCartRecord**
```c
// Get a cart record by ID
//
// Retrieves the details of a specific item cart record.
//
empty_envelope_t* RecordsAPI_getItemCartRecord(apiClient_t *apiClient, char *recordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **RecordsAPI_getItemsInCartAsync**
```c
// Get all items in a cart
//
// Retrieves all item cart records for the specified cart.
//
item_cart_record_dto_list_envelope_t* RecordsAPI_getItemsInCartAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);
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

# **RecordsAPI_increaseItemCartRecord**
```c
// Increase cart record quantity
//
// Increases the quantity of the specified item cart record by the given amount.
//
empty_envelope_t* RecordsAPI_increaseItemCartRecord(apiClient_t *apiClient, char *recordId, double quantity, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**recordId** | **char \*** |  | 
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

# **RecordsAPI_isItemAlreadyInCart**
```c
// Check if an item is in a cart
//
// Returns a boolean indicating whether the specified item is already in the given cart.
//
boolean_envelope_t* RecordsAPI_isItemAlreadyInCart(apiClient_t *apiClient, char *itemID, char *cartID, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemID** | **char \*** |  | 
**cartID** | **char \*** |  | 
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

# **RecordsAPI_removeProductFromCartByParams**
```c
// Remove a product from a cart
//
// Removes a product from the cart using cart ID and product ID query parameters.
//
empty_envelope_t* RecordsAPI_removeProductFromCartByParams(apiClient_t *apiClient, char *cartId, char *productId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | [optional] 
**productId** | **char \*** |  | [optional] 
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

# **RecordsAPI_removeProductFromCartByRecordId**
```c
// Remove a product from a cart by record ID
//
// Removes a specific item record from the cart by its record ID.
//
empty_envelope_t* RecordsAPI_removeProductFromCartByRecordId(apiClient_t *apiClient, char *recordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **RecordsAPI_updateItemCartRecord**
```c
// Update a cart record
//
// Updates the specified item cart record with the provided data.
//
empty_envelope_t* RecordsAPI_updateItemCartRecord(apiClient_t *apiClient, char *recordId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**recordId** | **char \*** |  | 
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

