# SecurityLogsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SecurityLogsAPI_getSecurityLogsAsync**](SecurityLogsAPI.md#SecurityLogsAPI_getSecurityLogsAsync) | **GET** /api/v2/SecurityService/SecurityLogs | Get business security logs
[**SecurityLogsAPI_getSecurityLogsCountAsync**](SecurityLogsAPI.md#SecurityLogsAPI_getSecurityLogsCountAsync) | **GET** /api/v2/SecurityService/SecurityLogs/Count | Get business security logs count


# **SecurityLogsAPI_getSecurityLogsAsync**
```c
// Get business security logs
//
// Retrieves security logs for the specified tenant.
//
business_security_log_dto_list_envelope_t* SecurityLogsAPI_getSecurityLogsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[business_security_log_dto_list_envelope_t](business_security_log_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SecurityLogsAPI_getSecurityLogsCountAsync**
```c
// Get business security logs count
//
// Retrieves the count of security logs for the specified tenant.
//
int32_envelope_t* SecurityLogsAPI_getSecurityLogsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

