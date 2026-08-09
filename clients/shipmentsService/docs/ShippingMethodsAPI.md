# ShippingMethodsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ShippingMethodsAPI_createShippingMethodAsync**](ShippingMethodsAPI.md#ShippingMethodsAPI_createShippingMethodAsync) | **POST** /api/v2/ShipmentsService/ShippingMethods | Create a shipping method
[**ShippingMethodsAPI_deleteShippingMethodAsync**](ShippingMethodsAPI.md#ShippingMethodsAPI_deleteShippingMethodAsync) | **DELETE** /api/v2/ShipmentsService/ShippingMethods/{methodId} | Delete a shipping method
[**ShippingMethodsAPI_getShippingMethodByIdAsync**](ShippingMethodsAPI.md#ShippingMethodsAPI_getShippingMethodByIdAsync) | **GET** /api/v2/ShipmentsService/ShippingMethods/{methodId} | Get shipping method by ID
[**ShippingMethodsAPI_getShippingMethodsAsync**](ShippingMethodsAPI.md#ShippingMethodsAPI_getShippingMethodsAsync) | **GET** /api/v2/ShipmentsService/ShippingMethods | Get all shipping methods
[**ShippingMethodsAPI_getShippingMethodsCountAsync**](ShippingMethodsAPI.md#ShippingMethodsAPI_getShippingMethodsCountAsync) | **GET** /api/v2/ShipmentsService/ShippingMethods/Count | Get shipping methods count
[**ShippingMethodsAPI_patchShippingMethodAsync**](ShippingMethodsAPI.md#ShippingMethodsAPI_patchShippingMethodAsync) | **PATCH** /api/v2/ShipmentsService/ShippingMethods/{methodId} | Patch a shipping method
[**ShippingMethodsAPI_updateShippingMethodAsync**](ShippingMethodsAPI.md#ShippingMethodsAPI_updateShippingMethodAsync) | **PUT** /api/v2/ShipmentsService/ShippingMethods/{methodId} | Update a shipping method


# **ShippingMethodsAPI_createShippingMethodAsync**
```c
// Create a shipping method
//
// Creates a new shipping method.
//
void ShippingMethodsAPI_createShippingMethodAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_method_create_dto_t *shipping_method_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_method_create_dto** | **[shipping_method_create_dto_t](shipping_method_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingMethodsAPI_deleteShippingMethodAsync**
```c
// Delete a shipping method
//
// Deletes a shipping method.
//
void ShippingMethodsAPI_deleteShippingMethodAsync(apiClient_t *apiClient, char *tenantId, char *methodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**methodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingMethodsAPI_getShippingMethodByIdAsync**
```c
// Get shipping method by ID
//
// Retrieves a specific shipping method.
//
shipping_method_dto_envelope_t* ShippingMethodsAPI_getShippingMethodByIdAsync(apiClient_t *apiClient, char *tenantId, char *methodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**methodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shipping_method_dto_envelope_t](shipping_method_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingMethodsAPI_getShippingMethodsAsync**
```c
// Get all shipping methods
//
// Retrieves all shipping methods for the specified tenant.
//
shipping_method_dto_list_envelope_t* ShippingMethodsAPI_getShippingMethodsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_method_dto_collection_query_parameters_t *shipping_method_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_method_dto_collection_query_parameters** | **[shipping_method_dto_collection_query_parameters_t](shipping_method_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[shipping_method_dto_list_envelope_t](shipping_method_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingMethodsAPI_getShippingMethodsCountAsync**
```c
// Get shipping methods count
//
// Returns the count of shipping methods.
//
int32_envelope_t* ShippingMethodsAPI_getShippingMethodsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_method_dto_collection_query_parameters_t *shipping_method_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_method_dto_collection_query_parameters** | **[shipping_method_dto_collection_query_parameters_t](shipping_method_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingMethodsAPI_patchShippingMethodAsync**
```c
// Patch a shipping method
//
// Partially updates an existing shipping method using JSON Patch.
//
empty_envelope_t* ShippingMethodsAPI_patchShippingMethodAsync(apiClient_t *apiClient, char *tenantId, char *methodId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**methodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingMethodsAPI_updateShippingMethodAsync**
```c
// Update a shipping method
//
// Updates an existing shipping method.
//
void ShippingMethodsAPI_updateShippingMethodAsync(apiClient_t *apiClient, char *tenantId, char *methodId, char *api_version, char *x_api_version, shipping_method_update_dto_t *shipping_method_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**methodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_method_update_dto** | **[shipping_method_update_dto_t](shipping_method_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

