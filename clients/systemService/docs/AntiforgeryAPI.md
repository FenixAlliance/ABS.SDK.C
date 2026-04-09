# AntiforgeryAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AntiforgeryAPI_getAndStoreTokens**](AntiforgeryAPI.md#AntiforgeryAPI_getAndStoreTokens) | **GET** /api/v2/SystemService/Antiforgery/GetAndStoreTokens | Get and store antiforgery tokens
[**AntiforgeryAPI_isRequestValidAsync**](AntiforgeryAPI.md#AntiforgeryAPI_isRequestValidAsync) | **GET** /api/v2/SystemService/Antiforgery/IsRequestValid | Validate antiforgery request


# **AntiforgeryAPI_getAndStoreTokens**
```c
// Get and store antiforgery tokens
//
// Generates antiforgery tokens and stores them in the current HTTP context.
//
void AntiforgeryAPI_getAndStoreTokens(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AntiforgeryAPI_isRequestValidAsync**
```c
// Validate antiforgery request
//
// Validates whether the current HTTP request contains a valid antiforgery token.
//
void AntiforgeryAPI_isRequestValidAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

