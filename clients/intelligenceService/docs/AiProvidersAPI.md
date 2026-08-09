# AiProvidersAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AiProvidersAPI_getAiProvidersAsync**](AiProvidersAPI.md#AiProvidersAPI_getAiProvidersAsync) | **GET** /api/v2/IntelligenceService/AiProviders | Get the available AI providers


# **AiProvidersAPI_getAiProvidersAsync**
```c
// Get the available AI providers
//
// Returns every AI provider key this instance has a registered adapter for. The set is a property of the deployment, so it is not tenant-scoped; what varies per tenant is the credential for a provider, which is never returned here.
//
ai_provider_dto_list_envelope_t* AiProvidersAPI_getAiProvidersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[ai_provider_dto_list_envelope_t](ai_provider_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

