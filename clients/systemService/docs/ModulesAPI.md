# ModulesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ModulesAPI_getAllModules**](ModulesAPI.md#ModulesAPI_getAllModules) | **GET** /api/v2/StudioService/Modules | Get all modules available on this suite server instance.
[**ModulesAPI_getAvailableModules**](ModulesAPI.md#ModulesAPI_getAvailableModules) | **GET** /api/v2/StudioService/Modules/Data | Get all modules available to a tenant user.


# **ModulesAPI_getAllModules**
```c
// Get all modules available on this suite server instance.
//
studio_module_list_envelope_t* ModulesAPI_getAllModules(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[studio_module_list_envelope_t](studio_module_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ModulesAPI_getAvailableModules**
```c
// Get all modules available to a tenant user.
//
module_list_envelope_t* ModulesAPI_getAvailableModules(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[module_list_envelope_t](module_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

