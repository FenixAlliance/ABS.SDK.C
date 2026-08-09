# SigningLogsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SigningLogsAPI_getSigningLogByIdAsync**](SigningLogsAPI.md#SigningLogsAPI_getSigningLogByIdAsync) | **GET** /api/v2/TrustService/SigningLogs/{id} | Get signing log by ID
[**SigningLogsAPI_getSigningLogsAsync**](SigningLogsAPI.md#SigningLogsAPI_getSigningLogsAsync) | **GET** /api/v2/TrustService/SigningLogs | Get all signing logs
[**SigningLogsAPI_getSigningLogsCountAsync**](SigningLogsAPI.md#SigningLogsAPI_getSigningLogsCountAsync) | **GET** /api/v2/TrustService/SigningLogs/Count | Get signing logs count


# **SigningLogsAPI_getSigningLogByIdAsync**
```c
// Get signing log by ID
//
// Retrieves a specific signing log by its identifier.
//
signing_log_dto_t* SigningLogsAPI_getSigningLogByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[signing_log_dto_t](signing_log_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningLogsAPI_getSigningLogsAsync**
```c
// Get all signing logs
//
// Retrieves all signing logs for the specified tenant.
//
signing_log_dto_list_envelope_t* SigningLogsAPI_getSigningLogsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_log_dto_collection_query_parameters_t *signing_log_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_log_dto_collection_query_parameters** | **[signing_log_dto_collection_query_parameters_t](signing_log_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[signing_log_dto_list_envelope_t](signing_log_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningLogsAPI_getSigningLogsCountAsync**
```c
// Get signing logs count
//
// Returns the count of signing logs for the specified tenant.
//
int32_envelope_t* SigningLogsAPI_getSigningLogsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_log_dto_collection_query_parameters_t *signing_log_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_log_dto_collection_query_parameters** | **[signing_log_dto_collection_query_parameters_t](signing_log_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

