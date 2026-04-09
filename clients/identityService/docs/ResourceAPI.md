# ResourceAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ResourceAPI_getMessage**](ResourceAPI.md#ResourceAPI_getMessage) | **GET** /api/v2/IdentityService/Resource/message | Get authenticated resource message


# **ResourceAPI_getMessage**
```c
// Get authenticated resource message
//
// Returns a message confirming the authenticated user's identity. Requires the 'abs_api' scope.
//
void ResourceAPI_getMessage(apiClient_t *apiClient, char *api_version, char *x_api_version);
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

