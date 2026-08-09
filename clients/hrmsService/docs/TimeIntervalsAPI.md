# TimeIntervalsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TimeIntervalsAPI_createTimeIntervalAsync**](TimeIntervalsAPI.md#TimeIntervalsAPI_createTimeIntervalAsync) | **POST** /api/v2/HrmsService/TimeIntervals | Create a time interval
[**TimeIntervalsAPI_deleteTimeIntervalAsync**](TimeIntervalsAPI.md#TimeIntervalsAPI_deleteTimeIntervalAsync) | **DELETE** /api/v2/HrmsService/TimeIntervals/{timeIntervalId} | Delete a time interval
[**TimeIntervalsAPI_getTimeIntervalByIdAsync**](TimeIntervalsAPI.md#TimeIntervalsAPI_getTimeIntervalByIdAsync) | **GET** /api/v2/HrmsService/TimeIntervals/{timeIntervalId} | Get time interval by ID
[**TimeIntervalsAPI_getTimeIntervalsAsync**](TimeIntervalsAPI.md#TimeIntervalsAPI_getTimeIntervalsAsync) | **GET** /api/v2/HrmsService/TimeIntervals | Get time intervals
[**TimeIntervalsAPI_getTimeIntervalsCountAsync**](TimeIntervalsAPI.md#TimeIntervalsAPI_getTimeIntervalsCountAsync) | **GET** /api/v2/HrmsService/TimeIntervals/Count | Count time intervals
[**TimeIntervalsAPI_patchTimeIntervalAsync**](TimeIntervalsAPI.md#TimeIntervalsAPI_patchTimeIntervalAsync) | **PATCH** /api/v2/HrmsService/TimeIntervals/{timeIntervalId} | Patch a time interval
[**TimeIntervalsAPI_updateTimeIntervalAsync**](TimeIntervalsAPI.md#TimeIntervalsAPI_updateTimeIntervalAsync) | **PUT** /api/v2/HrmsService/TimeIntervals/{timeIntervalId} | Update a time interval


# **TimeIntervalsAPI_createTimeIntervalAsync**
```c
// Create a time interval
//
// Creates a new time interval for the specified tenant.
//
empty_envelope_t* TimeIntervalsAPI_createTimeIntervalAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, time_interval_create_dto_t *time_interval_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**time_interval_create_dto** | **[time_interval_create_dto_t](time_interval_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeIntervalsAPI_deleteTimeIntervalAsync**
```c
// Delete a time interval
//
// Deletes a time interval for the specified tenant.
//
empty_envelope_t* TimeIntervalsAPI_deleteTimeIntervalAsync(apiClient_t *apiClient, char *tenantId, char *timeIntervalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**timeIntervalId** | **char \*** |  | 
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

# **TimeIntervalsAPI_getTimeIntervalByIdAsync**
```c
// Get time interval by ID
//
// Retrieves a specific time interval by its identifier.
//
time_interval_dto_envelope_t* TimeIntervalsAPI_getTimeIntervalByIdAsync(apiClient_t *apiClient, char *tenantId, char *timeIntervalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**timeIntervalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[time_interval_dto_envelope_t](time_interval_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeIntervalsAPI_getTimeIntervalsAsync**
```c
// Get time intervals
//
// Retrieves time intervals for the specified tenant.
//
time_interval_dto_list_envelope_t* TimeIntervalsAPI_getTimeIntervalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, time_interval_dto_collection_query_parameters_t *time_interval_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**time_interval_dto_collection_query_parameters** | **[time_interval_dto_collection_query_parameters_t](time_interval_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[time_interval_dto_list_envelope_t](time_interval_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeIntervalsAPI_getTimeIntervalsCountAsync**
```c
// Count time intervals
//
// Counts time intervals for the specified tenant.
//
int32_envelope_t* TimeIntervalsAPI_getTimeIntervalsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, time_interval_dto_collection_query_parameters_t *time_interval_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**time_interval_dto_collection_query_parameters** | **[time_interval_dto_collection_query_parameters_t](time_interval_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeIntervalsAPI_patchTimeIntervalAsync**
```c
// Patch a time interval
//
// Partially updates an existing time interval for the specified tenant.
//
empty_envelope_t* TimeIntervalsAPI_patchTimeIntervalAsync(apiClient_t *apiClient, char *tenantId, char *timeIntervalId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**timeIntervalId** | **char \*** |  | 
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

# **TimeIntervalsAPI_updateTimeIntervalAsync**
```c
// Update a time interval
//
// Updates an existing time interval for the specified tenant.
//
empty_envelope_t* TimeIntervalsAPI_updateTimeIntervalAsync(apiClient_t *apiClient, char *tenantId, char *timeIntervalId, char *api_version, char *x_api_version, time_interval_update_dto_t *time_interval_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**timeIntervalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**time_interval_update_dto** | **[time_interval_update_dto_t](time_interval_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

