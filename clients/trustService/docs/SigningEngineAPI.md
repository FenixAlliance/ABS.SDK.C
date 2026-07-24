# SigningEngineAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SigningEngineAPI_getProvidersAsync**](SigningEngineAPI.md#SigningEngineAPI_getProvidersAsync) | **GET** /api/v2/TrustService/SigningEngine/Providers | List signing providers
[**SigningEngineAPI_getProvidersCountAsync**](SigningEngineAPI.md#SigningEngineAPI_getProvidersCountAsync) | **GET** /api/v2/TrustService/SigningEngine/Providers/Count | Count signing providers
[**SigningEngineAPI_previewAsync**](SigningEngineAPI.md#SigningEngineAPI_previewAsync) | **POST** /api/v2/TrustService/SigningEngine/Preview | Preview signing readiness


# **SigningEngineAPI_getProvidersAsync**
```c
// List signing providers
//
// Returns the registered alpha signing providers (Noop / Manual / External). OData-queryable.
//
trust_signing_provider_descriptor_dto_list_envelope_t* SigningEngineAPI_getProvidersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[trust_signing_provider_descriptor_dto_list_envelope_t](trust_signing_provider_descriptor_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningEngineAPI_getProvidersCountAsync**
```c
// Count signing providers
//
// Returns the count of registered alpha signing providers. OData-queryable.
//
int32_envelope_t* SigningEngineAPI_getProvidersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SigningEngineAPI_previewAsync**
```c
// Preview signing readiness
//
// Side-effect-free: validates a signing request and reports whether it can proceed and with what policy.
//
trust_signing_readiness_dto_envelope_t* SigningEngineAPI_previewAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, trust_signing_request_dto_t *trust_signing_request_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**trust_signing_request_dto** | **[trust_signing_request_dto_t](trust_signing_request_dto.md) \*** |  | [optional] 

### Return type

[trust_signing_readiness_dto_envelope_t](trust_signing_readiness_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

