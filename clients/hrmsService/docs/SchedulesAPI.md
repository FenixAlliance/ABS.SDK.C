# SchedulesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SchedulesAPI_createScheduleAsync**](SchedulesAPI.md#SchedulesAPI_createScheduleAsync) | **POST** /api/v2/HrmsService/Schedules | Create a schedule
[**SchedulesAPI_deleteScheduleAsync**](SchedulesAPI.md#SchedulesAPI_deleteScheduleAsync) | **DELETE** /api/v2/HrmsService/Schedules/{scheduleId} | Delete a schedule
[**SchedulesAPI_getScheduleByIdAsync**](SchedulesAPI.md#SchedulesAPI_getScheduleByIdAsync) | **GET** /api/v2/HrmsService/Schedules/{scheduleId} | Get schedule by ID
[**SchedulesAPI_getSchedulesAsync**](SchedulesAPI.md#SchedulesAPI_getSchedulesAsync) | **GET** /api/v2/HrmsService/Schedules | Get schedules
[**SchedulesAPI_getSchedulesCountAsync**](SchedulesAPI.md#SchedulesAPI_getSchedulesCountAsync) | **GET** /api/v2/HrmsService/Schedules/Count | Count schedules
[**SchedulesAPI_patchScheduleAsync**](SchedulesAPI.md#SchedulesAPI_patchScheduleAsync) | **PATCH** /api/v2/HrmsService/Schedules/{scheduleId} | Patch a schedule
[**SchedulesAPI_updateScheduleAsync**](SchedulesAPI.md#SchedulesAPI_updateScheduleAsync) | **PUT** /api/v2/HrmsService/Schedules/{scheduleId} | Update a schedule


# **SchedulesAPI_createScheduleAsync**
```c
// Create a schedule
//
// Creates a new schedule for the specified tenant.
//
empty_envelope_t* SchedulesAPI_createScheduleAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, schedule_create_dto_t *schedule_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**schedule_create_dto** | **[schedule_create_dto_t](schedule_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SchedulesAPI_deleteScheduleAsync**
```c
// Delete a schedule
//
// Deletes a schedule for the specified tenant.
//
empty_envelope_t* SchedulesAPI_deleteScheduleAsync(apiClient_t *apiClient, char *tenantId, char *scheduleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**scheduleId** | **char \*** |  | 
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

# **SchedulesAPI_getScheduleByIdAsync**
```c
// Get schedule by ID
//
// Retrieves a specific schedule by its identifier.
//
schedule_dto_envelope_t* SchedulesAPI_getScheduleByIdAsync(apiClient_t *apiClient, char *tenantId, char *scheduleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**scheduleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[schedule_dto_envelope_t](schedule_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SchedulesAPI_getSchedulesAsync**
```c
// Get schedules
//
// Retrieves schedules for the specified tenant.
//
schedule_dto_list_envelope_t* SchedulesAPI_getSchedulesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, schedule_dto_collection_query_parameters_t *schedule_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**schedule_dto_collection_query_parameters** | **[schedule_dto_collection_query_parameters_t](schedule_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[schedule_dto_list_envelope_t](schedule_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SchedulesAPI_getSchedulesCountAsync**
```c
// Count schedules
//
// Counts schedules for the specified tenant.
//
int32_envelope_t* SchedulesAPI_getSchedulesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, schedule_dto_collection_query_parameters_t *schedule_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**schedule_dto_collection_query_parameters** | **[schedule_dto_collection_query_parameters_t](schedule_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SchedulesAPI_patchScheduleAsync**
```c
// Patch a schedule
//
// Partially updates an existing schedule for the specified tenant.
//
empty_envelope_t* SchedulesAPI_patchScheduleAsync(apiClient_t *apiClient, char *tenantId, char *scheduleId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**scheduleId** | **char \*** |  | 
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

# **SchedulesAPI_updateScheduleAsync**
```c
// Update a schedule
//
// Updates an existing schedule for the specified tenant.
//
empty_envelope_t* SchedulesAPI_updateScheduleAsync(apiClient_t *apiClient, char *tenantId, char *scheduleId, char *api_version, char *x_api_version, schedule_update_dto_t *schedule_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**scheduleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**schedule_update_dto** | **[schedule_update_dto_t](schedule_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

