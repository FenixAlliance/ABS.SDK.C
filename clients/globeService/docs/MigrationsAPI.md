# MigrationsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MigrationsAPI_apiV2GlobalSystemMigratePost**](MigrationsAPI.md#MigrationsAPI_apiV2GlobalSystemMigratePost) | **POST** /api/v2/Global/System/Migrate | 


# **MigrationsAPI_apiV2GlobalSystemMigratePost**
```c
payment_response_t* MigrationsAPI_apiV2GlobalSystemMigratePost(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_response_t](payment_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

