# LogsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LogsAPI_getLogsAsync**](LogsAPI.md#LogsAPI_getLogsAsync) | **GET** /api/v2/SecurityService/Logs | Get tenant logs
[**LogsAPI_getLogsCountAsync**](LogsAPI.md#LogsAPI_getLogsCountAsync) | **GET** /api/v2/SecurityService/Logs/Count | Get tenant logs count


# **LogsAPI_getLogsAsync**
```c
// Get tenant logs
//
// Retrieves logs for the specified tenant.
//
log_dto_list_envelope_t* LogsAPI_getLogsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[log_dto_list_envelope_t](log_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LogsAPI_getLogsCountAsync**
```c
// Get tenant logs count
//
// Retrieves the count of logs for the specified tenant.
//
int32_envelope_t* LogsAPI_getLogsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

