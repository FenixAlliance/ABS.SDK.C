# ItemRestocksAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemRestocksAPI_createItemRestockAsync**](ItemRestocksAPI.md#ItemRestocksAPI_createItemRestockAsync) | **POST** /api/v2/LogisticsService/ItemRestocks | Create an item restock
[**ItemRestocksAPI_createItemRestockEntryAsync**](ItemRestocksAPI.md#ItemRestocksAPI_createItemRestockEntryAsync) | **POST** /api/v2/LogisticsService/ItemRestocks/{restockId}/Entries | Create a restock entry
[**ItemRestocksAPI_deleteItemRestockAsync**](ItemRestocksAPI.md#ItemRestocksAPI_deleteItemRestockAsync) | **DELETE** /api/v2/LogisticsService/ItemRestocks/{restockId} | Delete an item restock
[**ItemRestocksAPI_deleteItemRestockEntryAsync**](ItemRestocksAPI.md#ItemRestocksAPI_deleteItemRestockEntryAsync) | **DELETE** /api/v2/LogisticsService/ItemRestocks/{restockId}/Entries/{entryId} | Delete a restock entry
[**ItemRestocksAPI_getItemRestockByIdAsync**](ItemRestocksAPI.md#ItemRestocksAPI_getItemRestockByIdAsync) | **GET** /api/v2/LogisticsService/ItemRestocks/{restockId} | Get item restock by ID
[**ItemRestocksAPI_getItemRestockEntriesAsync**](ItemRestocksAPI.md#ItemRestocksAPI_getItemRestockEntriesAsync) | **GET** /api/v2/LogisticsService/ItemRestocks/{restockId}/Entries | Get restock entries
[**ItemRestocksAPI_getItemRestockEntriesCountAsync**](ItemRestocksAPI.md#ItemRestocksAPI_getItemRestockEntriesCountAsync) | **GET** /api/v2/LogisticsService/ItemRestocks/{restockId}/Entries/Count | Get restock entries count
[**ItemRestocksAPI_getItemRestockEntryByIdAsync**](ItemRestocksAPI.md#ItemRestocksAPI_getItemRestockEntryByIdAsync) | **GET** /api/v2/LogisticsService/ItemRestocks/{restockId}/Entries/{entryId} | Get restock entry by ID
[**ItemRestocksAPI_getItemRestocksAsync**](ItemRestocksAPI.md#ItemRestocksAPI_getItemRestocksAsync) | **GET** /api/v2/LogisticsService/ItemRestocks | Get all item restocks
[**ItemRestocksAPI_getItemRestocksCountAsync**](ItemRestocksAPI.md#ItemRestocksAPI_getItemRestocksCountAsync) | **GET** /api/v2/LogisticsService/ItemRestocks/Count | Get item restocks count
[**ItemRestocksAPI_patchItemRestockAsync**](ItemRestocksAPI.md#ItemRestocksAPI_patchItemRestockAsync) | **PATCH** /api/v2/LogisticsService/ItemRestocks/{restockId} | Patch an item restock
[**ItemRestocksAPI_patchItemRestockEntryAsync**](ItemRestocksAPI.md#ItemRestocksAPI_patchItemRestockEntryAsync) | **PATCH** /api/v2/LogisticsService/ItemRestocks/{restockId}/Entries/{entryId} | Patch a restock entry
[**ItemRestocksAPI_updateItemRestockAsync**](ItemRestocksAPI.md#ItemRestocksAPI_updateItemRestockAsync) | **PUT** /api/v2/LogisticsService/ItemRestocks/{restockId} | Update an item restock
[**ItemRestocksAPI_updateItemRestockEntryAsync**](ItemRestocksAPI.md#ItemRestocksAPI_updateItemRestockEntryAsync) | **PUT** /api/v2/LogisticsService/ItemRestocks/{restockId}/Entries/{entryId} | Update a restock entry


# **ItemRestocksAPI_createItemRestockAsync**
```c
// Create an item restock
//
// Creates a new item restock.
//
empty_envelope_t* ItemRestocksAPI_createItemRestockAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_restock_create_dto_t *item_restock_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_restock_create_dto** | **[item_restock_create_dto_t](item_restock_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemRestocksAPI_createItemRestockEntryAsync**
```c
// Create a restock entry
//
// Creates a new restock entry.
//
empty_envelope_t* ItemRestocksAPI_createItemRestockEntryAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version, item_restock_entry_create_dto_t *item_restock_entry_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**restockId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_restock_entry_create_dto** | **[item_restock_entry_create_dto_t](item_restock_entry_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemRestocksAPI_deleteItemRestockAsync**
```c
// Delete an item restock
//
// Deletes an item restock.
//
empty_envelope_t* ItemRestocksAPI_deleteItemRestockAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**restockId** | **char \*** |  | 
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

# **ItemRestocksAPI_deleteItemRestockEntryAsync**
```c
// Delete a restock entry
//
// Deletes a restock entry.
//
empty_envelope_t* ItemRestocksAPI_deleteItemRestockEntryAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *entryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**restockId** | **char \*** |  | 
**entryId** | **char \*** |  | 
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

# **ItemRestocksAPI_getItemRestockByIdAsync**
```c
// Get item restock by ID
//
// Retrieves a specific item restock.
//
item_restock_dto_envelope_t* ItemRestocksAPI_getItemRestockByIdAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**restockId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_restock_dto_envelope_t](item_restock_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemRestocksAPI_getItemRestockEntriesAsync**
```c
// Get restock entries
//
// Retrieves all entries for the specified restock.
//
item_restock_entry_dto_list_envelope_t* ItemRestocksAPI_getItemRestockEntriesAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version, item_restock_entry_dto_collection_query_parameters_t *item_restock_entry_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**restockId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_restock_entry_dto_collection_query_parameters** | **[item_restock_entry_dto_collection_query_parameters_t](item_restock_entry_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[item_restock_entry_dto_list_envelope_t](item_restock_entry_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemRestocksAPI_getItemRestockEntriesCountAsync**
```c
// Get restock entries count
//
// Returns the count of restock entries.
//
int32_envelope_t* ItemRestocksAPI_getItemRestockEntriesCountAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version, item_restock_entry_dto_collection_query_parameters_t *item_restock_entry_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**restockId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_restock_entry_dto_collection_query_parameters** | **[item_restock_entry_dto_collection_query_parameters_t](item_restock_entry_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemRestocksAPI_getItemRestockEntryByIdAsync**
```c
// Get restock entry by ID
//
// Retrieves a specific restock entry.
//
item_restock_entry_dto_envelope_t* ItemRestocksAPI_getItemRestockEntryByIdAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *entryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**restockId** | **char \*** |  | 
**entryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_restock_entry_dto_envelope_t](item_restock_entry_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemRestocksAPI_getItemRestocksAsync**
```c
// Get all item restocks
//
// Retrieves all item restocks for the specified tenant.
//
item_restock_dto_list_envelope_t* ItemRestocksAPI_getItemRestocksAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_restock_dto_collection_query_parameters_t *item_restock_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_restock_dto_collection_query_parameters** | **[item_restock_dto_collection_query_parameters_t](item_restock_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[item_restock_dto_list_envelope_t](item_restock_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemRestocksAPI_getItemRestocksCountAsync**
```c
// Get item restocks count
//
// Returns the count of item restocks.
//
int32_envelope_t* ItemRestocksAPI_getItemRestocksCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_restock_dto_collection_query_parameters_t *item_restock_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_restock_dto_collection_query_parameters** | **[item_restock_dto_collection_query_parameters_t](item_restock_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemRestocksAPI_patchItemRestockAsync**
```c
// Patch an item restock
//
// Applies a JSON Patch document to an item restock.
//
empty_envelope_t* ItemRestocksAPI_patchItemRestockAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**restockId** | **char \*** |  | 
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

# **ItemRestocksAPI_patchItemRestockEntryAsync**
```c
// Patch a restock entry
//
// Applies a JSON Patch document to a restock entry.
//
empty_envelope_t* ItemRestocksAPI_patchItemRestockEntryAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *entryId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**restockId** | **char \*** |  | 
**entryId** | **char \*** |  | 
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

# **ItemRestocksAPI_updateItemRestockAsync**
```c
// Update an item restock
//
// Updates an existing item restock.
//
empty_envelope_t* ItemRestocksAPI_updateItemRestockAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *api_version, char *x_api_version, item_restock_update_dto_t *item_restock_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**restockId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_restock_update_dto** | **[item_restock_update_dto_t](item_restock_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemRestocksAPI_updateItemRestockEntryAsync**
```c
// Update a restock entry
//
// Updates an existing restock entry.
//
empty_envelope_t* ItemRestocksAPI_updateItemRestockEntryAsync(apiClient_t *apiClient, char *tenantId, char *restockId, char *entryId, char *api_version, char *x_api_version, item_restock_entry_update_dto_t *item_restock_entry_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**restockId** | **char \*** |  | 
**entryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_restock_entry_update_dto** | **[item_restock_entry_update_dto_t](item_restock_entry_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

