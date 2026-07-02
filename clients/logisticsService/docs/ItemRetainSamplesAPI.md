# ItemRetainSamplesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemRetainSamplesAPI_createItemRetainSampleAsync**](ItemRetainSamplesAPI.md#ItemRetainSamplesAPI_createItemRetainSampleAsync) | **POST** /api/v2/LogisticsService/ItemRetainSamples | Create an item retain sample
[**ItemRetainSamplesAPI_deleteItemRetainSampleAsync**](ItemRetainSamplesAPI.md#ItemRetainSamplesAPI_deleteItemRetainSampleAsync) | **DELETE** /api/v2/LogisticsService/ItemRetainSamples/{retainSampleId} | Delete an item retain sample
[**ItemRetainSamplesAPI_getItemRetainSampleByIdAsync**](ItemRetainSamplesAPI.md#ItemRetainSamplesAPI_getItemRetainSampleByIdAsync) | **GET** /api/v2/LogisticsService/ItemRetainSamples/{retainSampleId} | Get item retain sample by ID
[**ItemRetainSamplesAPI_getItemRetainSamplesAsync**](ItemRetainSamplesAPI.md#ItemRetainSamplesAPI_getItemRetainSamplesAsync) | **GET** /api/v2/LogisticsService/ItemRetainSamples | Get all item retain samples
[**ItemRetainSamplesAPI_getItemRetainSamplesCountAsync**](ItemRetainSamplesAPI.md#ItemRetainSamplesAPI_getItemRetainSamplesCountAsync) | **GET** /api/v2/LogisticsService/ItemRetainSamples/Count | Get item retain samples count
[**ItemRetainSamplesAPI_patchItemRetainSampleAsync**](ItemRetainSamplesAPI.md#ItemRetainSamplesAPI_patchItemRetainSampleAsync) | **PATCH** /api/v2/LogisticsService/ItemRetainSamples/{retainSampleId} | Patch an item retain sample
[**ItemRetainSamplesAPI_updateItemRetainSampleAsync**](ItemRetainSamplesAPI.md#ItemRetainSamplesAPI_updateItemRetainSampleAsync) | **PUT** /api/v2/LogisticsService/ItemRetainSamples/{retainSampleId} | Update an item retain sample


# **ItemRetainSamplesAPI_createItemRetainSampleAsync**
```c
// Create an item retain sample
//
// Creates a new item retain sample.
//
empty_envelope_t* ItemRetainSamplesAPI_createItemRetainSampleAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_retain_sample_create_dto_t *item_retain_sample_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_retain_sample_create_dto** | **[item_retain_sample_create_dto_t](item_retain_sample_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemRetainSamplesAPI_deleteItemRetainSampleAsync**
```c
// Delete an item retain sample
//
// Deletes an item retain sample.
//
empty_envelope_t* ItemRetainSamplesAPI_deleteItemRetainSampleAsync(apiClient_t *apiClient, char *tenantId, char *retainSampleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**retainSampleId** | **char \*** |  | 
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

# **ItemRetainSamplesAPI_getItemRetainSampleByIdAsync**
```c
// Get item retain sample by ID
//
// Retrieves a specific item retain sample.
//
item_retain_sample_dto_envelope_t* ItemRetainSamplesAPI_getItemRetainSampleByIdAsync(apiClient_t *apiClient, char *tenantId, char *retainSampleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**retainSampleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_retain_sample_dto_envelope_t](item_retain_sample_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemRetainSamplesAPI_getItemRetainSamplesAsync**
```c
// Get all item retain samples
//
// Retrieves all item retain samples for the specified tenant.
//
item_retain_sample_dto_list_envelope_t* ItemRetainSamplesAPI_getItemRetainSamplesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_retain_sample_dto_list_envelope_t](item_retain_sample_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemRetainSamplesAPI_getItemRetainSamplesCountAsync**
```c
// Get item retain samples count
//
// Returns the count of item retain samples.
//
int32_envelope_t* ItemRetainSamplesAPI_getItemRetainSamplesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ItemRetainSamplesAPI_patchItemRetainSampleAsync**
```c
// Patch an item retain sample
//
// Applies a JSON Patch document to an item retain sample.
//
empty_envelope_t* ItemRetainSamplesAPI_patchItemRetainSampleAsync(apiClient_t *apiClient, char *tenantId, char *retainSampleId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**retainSampleId** | **char \*** |  | 
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

# **ItemRetainSamplesAPI_updateItemRetainSampleAsync**
```c
// Update an item retain sample
//
// Updates an existing item retain sample.
//
empty_envelope_t* ItemRetainSamplesAPI_updateItemRetainSampleAsync(apiClient_t *apiClient, char *tenantId, char *retainSampleId, char *api_version, char *x_api_version, item_retain_sample_update_dto_t *item_retain_sample_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**retainSampleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_retain_sample_update_dto** | **[item_retain_sample_update_dto_t](item_retain_sample_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

