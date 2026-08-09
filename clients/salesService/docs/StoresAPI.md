# StoresAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**StoresAPI_countStoresAsync**](StoresAPI.md#StoresAPI_countStoresAsync) | **GET** /api/v2/SalesService/Stores/Count | Get stores count
[**StoresAPI_createStoreAsync**](StoresAPI.md#StoresAPI_createStoreAsync) | **POST** /api/v2/SalesService/Stores | Create a store
[**StoresAPI_deleteStoreAsync**](StoresAPI.md#StoresAPI_deleteStoreAsync) | **DELETE** /api/v2/SalesService/Stores/{storeId} | Delete a store
[**StoresAPI_getStoreAsync**](StoresAPI.md#StoresAPI_getStoreAsync) | **GET** /api/v2/SalesService/Stores/{storeId} | Get store by ID
[**StoresAPI_getStoresAsync**](StoresAPI.md#StoresAPI_getStoresAsync) | **GET** /api/v2/SalesService/Stores | Get stores
[**StoresAPI_patchStoreAsync**](StoresAPI.md#StoresAPI_patchStoreAsync) | **PATCH** /api/v2/SalesService/Stores/{storeId} | Patch a store
[**StoresAPI_updateStoreAsync**](StoresAPI.md#StoresAPI_updateStoreAsync) | **PUT** /api/v2/SalesService/Stores/{storeId} | Update a store


# **StoresAPI_countStoresAsync**
```c
// Get stores count
//
// Returns the total count of stores for the specified tenant with OData filter support.
//
int32_envelope_t* StoresAPI_countStoresAsync(apiClient_t *apiClient, char *tenantId, store_dto_collection_query_parameters_t *store_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**store_dto_collection_query_parameters** | **[store_dto_collection_query_parameters_t](store_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StoresAPI_createStoreAsync**
```c
// Create a store
//
// Creates a new store for the specified tenant.
//
empty_envelope_t* StoresAPI_createStoreAsync(apiClient_t *apiClient, char *tenantId, store_create_dto_t *store_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**store_create_dto** | **[store_create_dto_t](store_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StoresAPI_deleteStoreAsync**
```c
// Delete a store
//
// Deletes an existing store by its unique identifier.
//
empty_envelope_t* StoresAPI_deleteStoreAsync(apiClient_t *apiClient, char *tenantId, char *storeId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**storeId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StoresAPI_getStoreAsync**
```c
// Get store by ID
//
// Retrieves a single store by its unique identifier.
//
store_dto_envelope_t* StoresAPI_getStoreAsync(apiClient_t *apiClient, char *tenantId, char *storeId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**storeId** | **char \*** |  | 

### Return type

[store_dto_envelope_t](store_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StoresAPI_getStoresAsync**
```c
// Get stores
//
// Retrieves a list of stores for the specified tenant with OData query support.
//
store_dto_list_envelope_t* StoresAPI_getStoresAsync(apiClient_t *apiClient, char *tenantId, store_dto_collection_query_parameters_t *store_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**store_dto_collection_query_parameters** | **[store_dto_collection_query_parameters_t](store_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[store_dto_list_envelope_t](store_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StoresAPI_patchStoreAsync**
```c
// Patch a store
//
// Partially updates an existing store using a JSON Patch document.
//
empty_envelope_t* StoresAPI_patchStoreAsync(apiClient_t *apiClient, char *tenantId, char *storeId, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**storeId** | **char \*** |  | 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StoresAPI_updateStoreAsync**
```c
// Update a store
//
// Updates an existing store by its unique identifier.
//
empty_envelope_t* StoresAPI_updateStoreAsync(apiClient_t *apiClient, char *tenantId, char *storeId, store_update_dto_t *store_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**storeId** | **char \*** |  | 
**store_update_dto** | **[store_update_dto_t](store_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

