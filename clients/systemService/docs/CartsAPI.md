# CartsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CartsAPI_deleteSystemCart**](CartsAPI.md#CartsAPI_deleteSystemCart) | **DELETE** /api/v2/SystemService/Carts/{cartId} | Delete a system cart
[**CartsAPI_getSystemCartById**](CartsAPI.md#CartsAPI_getSystemCartById) | **GET** /api/v2/SystemService/Carts/{cartId} | Retrieve a single system cart by its ID
[**CartsAPI_getSystemCarts**](CartsAPI.md#CartsAPI_getSystemCarts) | **GET** /api/v2/SystemService/Carts | Retrieve a list of system carts
[**CartsAPI_getSystemCartsCount**](CartsAPI.md#CartsAPI_getSystemCartsCount) | **GET** /api/v2/SystemService/Carts/Count | Get the count of system carts


# **CartsAPI_deleteSystemCart**
```c
// Delete a system cart
//
// Delete a system cart by its ID
//
empty_envelope_t* CartsAPI_deleteSystemCart(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);
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

# **CartsAPI_getSystemCartById**
```c
// Retrieve a single system cart by its ID
//
// Retrieve a single system cart by its ID
//
cart_dto_envelope_t* CartsAPI_getSystemCartById(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);
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

# **CartsAPI_getSystemCarts**
```c
// Retrieve a list of system carts
//
// Retrieve a list of all carts in the system
//
cart_dto_list_envelope_t* CartsAPI_getSystemCarts(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cart_dto_list_envelope_t](cart_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartsAPI_getSystemCartsCount**
```c
// Get the count of system carts
//
// Get the count of all carts in the system
//
int32_envelope_t* CartsAPI_getSystemCartsCount(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

