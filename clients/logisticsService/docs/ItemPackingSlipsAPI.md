# ItemPackingSlipsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemPackingSlipsAPI_createItemPackingSlipAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_createItemPackingSlipAsync) | **POST** /api/v2/LogisticsService/ItemPackingSlips | Create an item packing slip
[**ItemPackingSlipsAPI_createItemPackingSlipEntryAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_createItemPackingSlipEntryAsync) | **POST** /api/v2/LogisticsService/ItemPackingSlips/{packingSlipId}/Entries | Create a packing slip entry
[**ItemPackingSlipsAPI_deleteItemPackingSlipAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_deleteItemPackingSlipAsync) | **DELETE** /api/v2/LogisticsService/ItemPackingSlips/{packingSlipId} | Delete an item packing slip
[**ItemPackingSlipsAPI_deleteItemPackingSlipEntryAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_deleteItemPackingSlipEntryAsync) | **DELETE** /api/v2/LogisticsService/ItemPackingSlips/{packingSlipId}/Entries/{entryId} | Delete a packing slip entry
[**ItemPackingSlipsAPI_getItemPackingSlipByIdAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_getItemPackingSlipByIdAsync) | **GET** /api/v2/LogisticsService/ItemPackingSlips/{packingSlipId} | Get item packing slip by ID
[**ItemPackingSlipsAPI_getItemPackingSlipEntriesAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_getItemPackingSlipEntriesAsync) | **GET** /api/v2/LogisticsService/ItemPackingSlips/{packingSlipId}/Entries | Get packing slip entries
[**ItemPackingSlipsAPI_getItemPackingSlipEntriesCountAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_getItemPackingSlipEntriesCountAsync) | **GET** /api/v2/LogisticsService/ItemPackingSlips/{packingSlipId}/Entries/Count | Get packing slip entries count
[**ItemPackingSlipsAPI_getItemPackingSlipEntryByIdAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_getItemPackingSlipEntryByIdAsync) | **GET** /api/v2/LogisticsService/ItemPackingSlips/{packingSlipId}/Entries/{entryId} | Get packing slip entry by ID
[**ItemPackingSlipsAPI_getItemPackingSlipsAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_getItemPackingSlipsAsync) | **GET** /api/v2/LogisticsService/ItemPackingSlips | Get all item packing slips
[**ItemPackingSlipsAPI_getItemPackingSlipsCountAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_getItemPackingSlipsCountAsync) | **GET** /api/v2/LogisticsService/ItemPackingSlips/Count | Get item packing slips count
[**ItemPackingSlipsAPI_patchItemPackingSlipAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_patchItemPackingSlipAsync) | **PATCH** /api/v2/LogisticsService/ItemPackingSlips/{packingSlipId} | Patch an item packing slip
[**ItemPackingSlipsAPI_patchItemPackingSlipEntryAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_patchItemPackingSlipEntryAsync) | **PATCH** /api/v2/LogisticsService/ItemPackingSlips/{packingSlipId}/Entries/{entryId} | Patch a packing slip entry
[**ItemPackingSlipsAPI_updateItemPackingSlipAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_updateItemPackingSlipAsync) | **PUT** /api/v2/LogisticsService/ItemPackingSlips/{packingSlipId} | Update an item packing slip
[**ItemPackingSlipsAPI_updateItemPackingSlipEntryAsync**](ItemPackingSlipsAPI.md#ItemPackingSlipsAPI_updateItemPackingSlipEntryAsync) | **PUT** /api/v2/LogisticsService/ItemPackingSlips/{packingSlipId}/Entries/{entryId} | Update a packing slip entry


# **ItemPackingSlipsAPI_createItemPackingSlipAsync**
```c
// Create an item packing slip
//
// Creates a new item packing slip.
//
empty_envelope_t* ItemPackingSlipsAPI_createItemPackingSlipAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_packing_slip_create_dto_t *item_packing_slip_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_packing_slip_create_dto** | **[item_packing_slip_create_dto_t](item_packing_slip_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPackingSlipsAPI_createItemPackingSlipEntryAsync**
```c
// Create a packing slip entry
//
// Creates a new packing slip entry.
//
empty_envelope_t* ItemPackingSlipsAPI_createItemPackingSlipEntryAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version, item_packing_slip_entry_create_dto_t *item_packing_slip_entry_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**packingSlipId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_packing_slip_entry_create_dto** | **[item_packing_slip_entry_create_dto_t](item_packing_slip_entry_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPackingSlipsAPI_deleteItemPackingSlipAsync**
```c
// Delete an item packing slip
//
// Deletes an item packing slip.
//
empty_envelope_t* ItemPackingSlipsAPI_deleteItemPackingSlipAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**packingSlipId** | **char \*** |  | 
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

# **ItemPackingSlipsAPI_deleteItemPackingSlipEntryAsync**
```c
// Delete a packing slip entry
//
// Deletes a packing slip entry.
//
empty_envelope_t* ItemPackingSlipsAPI_deleteItemPackingSlipEntryAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *entryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**packingSlipId** | **char \*** |  | 
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

# **ItemPackingSlipsAPI_getItemPackingSlipByIdAsync**
```c
// Get item packing slip by ID
//
// Retrieves a specific item packing slip.
//
item_packing_slip_dto_envelope_t* ItemPackingSlipsAPI_getItemPackingSlipByIdAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**packingSlipId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_packing_slip_dto_envelope_t](item_packing_slip_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPackingSlipsAPI_getItemPackingSlipEntriesAsync**
```c
// Get packing slip entries
//
// Retrieves all entries for the specified packing slip.
//
item_packing_slip_entry_dto_list_envelope_t* ItemPackingSlipsAPI_getItemPackingSlipEntriesAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**packingSlipId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_packing_slip_entry_dto_list_envelope_t](item_packing_slip_entry_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPackingSlipsAPI_getItemPackingSlipEntriesCountAsync**
```c
// Get packing slip entries count
//
// Returns the count of packing slip entries.
//
int32_envelope_t* ItemPackingSlipsAPI_getItemPackingSlipEntriesCountAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**packingSlipId** | **char \*** |  | 
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

# **ItemPackingSlipsAPI_getItemPackingSlipEntryByIdAsync**
```c
// Get packing slip entry by ID
//
// Retrieves a specific packing slip entry.
//
item_packing_slip_entry_dto_envelope_t* ItemPackingSlipsAPI_getItemPackingSlipEntryByIdAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *entryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**packingSlipId** | **char \*** |  | 
**entryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_packing_slip_entry_dto_envelope_t](item_packing_slip_entry_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPackingSlipsAPI_getItemPackingSlipsAsync**
```c
// Get all item packing slips
//
// Retrieves all item packing slips for the specified tenant.
//
item_packing_slip_dto_list_envelope_t* ItemPackingSlipsAPI_getItemPackingSlipsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_packing_slip_dto_list_envelope_t](item_packing_slip_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPackingSlipsAPI_getItemPackingSlipsCountAsync**
```c
// Get item packing slips count
//
// Returns the count of item packing slips.
//
int32_envelope_t* ItemPackingSlipsAPI_getItemPackingSlipsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **ItemPackingSlipsAPI_patchItemPackingSlipAsync**
```c
// Patch an item packing slip
//
// Applies a JSON Patch document to an item packing slip.
//
empty_envelope_t* ItemPackingSlipsAPI_patchItemPackingSlipAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**packingSlipId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPackingSlipsAPI_patchItemPackingSlipEntryAsync**
```c
// Patch a packing slip entry
//
// Applies a JSON Patch document to a packing slip entry.
//
empty_envelope_t* ItemPackingSlipsAPI_patchItemPackingSlipEntryAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *entryId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**packingSlipId** | **char \*** |  | 
**entryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPackingSlipsAPI_updateItemPackingSlipAsync**
```c
// Update an item packing slip
//
// Updates an existing item packing slip.
//
empty_envelope_t* ItemPackingSlipsAPI_updateItemPackingSlipAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *api_version, char *x_api_version, item_packing_slip_update_dto_t *item_packing_slip_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**packingSlipId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_packing_slip_update_dto** | **[item_packing_slip_update_dto_t](item_packing_slip_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPackingSlipsAPI_updateItemPackingSlipEntryAsync**
```c
// Update a packing slip entry
//
// Updates an existing packing slip entry.
//
empty_envelope_t* ItemPackingSlipsAPI_updateItemPackingSlipEntryAsync(apiClient_t *apiClient, char *tenantId, char *packingSlipId, char *entryId, char *api_version, char *x_api_version, item_packing_slip_entry_update_dto_t *item_packing_slip_entry_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**packingSlipId** | **char \*** |  | 
**entryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_packing_slip_entry_update_dto** | **[item_packing_slip_entry_update_dto_t](item_packing_slip_entry_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

