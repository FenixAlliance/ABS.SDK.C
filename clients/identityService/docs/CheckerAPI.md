# CheckerAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CheckerAPI_isAuthenticated**](CheckerAPI.md#CheckerAPI_isAuthenticated) | **GET** /api/v2/Auth/Checker/IsAuthenticated | Check if user is authenticated


# **CheckerAPI_isAuthenticated**
```c
// Check if user is authenticated
//
// Returns whether the current user is authenticated.
//
int* CheckerAPI_isAuthenticated(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

int*



### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

