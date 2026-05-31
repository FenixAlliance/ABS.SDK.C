# WishListsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WishListsAPI_addProductToWishList**](WishListsAPI.md#WishListsAPI_addProductToWishList) | **POST** /api/v2/CartService/WishLists/Records | Add a product to a wish list
[**WishListsAPI_createWishList**](WishListsAPI.md#WishListsAPI_createWishList) | **POST** /api/v2/CartService/WishLists | Create a wish list
[**WishListsAPI_deleteWishList**](WishListsAPI.md#WishListsAPI_deleteWishList) | **DELETE** /api/v2/CartService/WishLists/{wishListId} | Delete a wish list
[**WishListsAPI_deleteWishListRecord**](WishListsAPI.md#WishListsAPI_deleteWishListRecord) | **DELETE** /api/v2/CartService/WishLists/Records/{recordId} | Delete a wish list record
[**WishListsAPI_getCartWishListDetailsAsync**](WishListsAPI.md#WishListsAPI_getCartWishListDetailsAsync) | **GET** /api/v2/CartService/WishLists/{wishListId}/Details | Get wish list details
[**WishListsAPI_getCartWishListItemsAsync**](WishListsAPI.md#WishListsAPI_getCartWishListItemsAsync) | **GET** /api/v2/CartService/WishLists/{wishListId}/Records | Get wish list item records
[**WishListsAPI_getWishListAsync**](WishListsAPI.md#WishListsAPI_getWishListAsync) | **GET** /api/v2/CartService/WishLists/{cartId} | Get wish lists for a cart
[**WishListsAPI_isProductInWishLists**](WishListsAPI.md#WishListsAPI_isProductInWishLists) | **GET** /api/v2/CartService/WishLists/Contains | Check if a product is in any wish list
[**WishListsAPI_updateProductToWishList**](WishListsAPI.md#WishListsAPI_updateProductToWishList) | **PUT** /api/v2/CartService/WishLists/{wishListId} | Update a wish list
[**WishListsAPI_wishListExists**](WishListsAPI.md#WishListsAPI_wishListExists) | **GET** /api/v2/CartService/WishLists/Exists | Check if a wish list exists
[**WishListsAPI_wishListExistsHeadAsync**](WishListsAPI.md#WishListsAPI_wishListExistsHeadAsync) | **HEAD** /api/v2/CartService/WishLists/Exists | Check if a wish list exists (HEAD)


# **WishListsAPI_addProductToWishList**
```c
// Add a product to a wish list
//
// Adds the specified product to the given wish list.
//
empty_envelope_t* WishListsAPI_addProductToWishList(apiClient_t *apiClient, char *api_version, char *x_api_version, product_to_wish_list_request_t *product_to_wish_list_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **WishListsAPI_createWishList**
```c
// Create a wish list
//
// Creates a new wish list from the provided request data.
//
empty_envelope_t* WishListsAPI_createWishList(apiClient_t *apiClient, char *api_version, char *x_api_version, new_wish_list_request_t *new_wish_list_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **WishListsAPI_deleteWishList**
```c
// Delete a wish list
//
// Deletes the specified wish list.
//
empty_envelope_t* WishListsAPI_deleteWishList(apiClient_t *apiClient, char *wishListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **WishListsAPI_deleteWishListRecord**
```c
// Delete a wish list record
//
// Removes a specific item record from a wish list by its record ID.
//
void WishListsAPI_deleteWishListRecord(apiClient_t *apiClient, char *recordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**recordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WishListsAPI_getCartWishListDetailsAsync**
```c
// Get wish list details
//
// Retrieves the full details of the specified wish list.
//
wish_list_dto_t* WishListsAPI_getCartWishListDetailsAsync(apiClient_t *apiClient, char *wishListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**wishListId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[wish_list_dto_t](wish_list_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WishListsAPI_getCartWishListItemsAsync**
```c
// Get wish list item records
//
// Retrieves all item records in the specified wish list.
//
list_t* WishListsAPI_getCartWishListItemsAsync(apiClient_t *apiClient, char *wishListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **WishListsAPI_getWishListAsync**
```c
// Get wish lists for a cart
//
// Retrieves all wish lists associated with the specified cart.
//
list_t* WishListsAPI_getWishListAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);
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

# **WishListsAPI_isProductInWishLists**
```c
// Check if a product is in any wish list
//
// Returns a boolean indicating whether the specified product exists in any wish list of the given cart.
//
boolean_envelope_t* WishListsAPI_isProductInWishLists(apiClient_t *apiClient, char *cartId, char *productId, char *api_version, char *x_api_version);
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

[boolean_envelope_t](boolean_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WishListsAPI_updateProductToWishList**
```c
// Update a wish list
//
// Updates the specified wish list with the provided data.
//
empty_envelope_t* WishListsAPI_updateProductToWishList(apiClient_t *apiClient, char *wishListId, char *api_version, char *x_api_version, wish_list_update_dto_t *wish_list_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **WishListsAPI_wishListExists**
```c
// Check if a wish list exists
//
// Returns a boolean indicating whether the specified wish list exists.
//
boolean_envelope_t* WishListsAPI_wishListExists(apiClient_t *apiClient, char *wishListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**wishListId** | **char \*** |  | [optional] 
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

# **WishListsAPI_wishListExistsHeadAsync**
```c
// Check if a wish list exists (HEAD)
//
// HEAD request to check whether the specified wish list exists without returning a response body.
//
empty_envelope_t* WishListsAPI_wishListExistsHeadAsync(apiClient_t *apiClient, char *wishListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**wishListId** | **char \*** |  | [optional] 
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

