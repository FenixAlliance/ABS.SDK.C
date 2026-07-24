# SignaturesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SignaturesAPI_getSignatureByIdAsync**](SignaturesAPI.md#SignaturesAPI_getSignatureByIdAsync) | **GET** /api/v2/TrustService/Signatures/{id} | Get signature by ID
[**SignaturesAPI_getSignaturesAsync**](SignaturesAPI.md#SignaturesAPI_getSignaturesAsync) | **GET** /api/v2/TrustService/Signatures | Get all signatures
[**SignaturesAPI_getSignaturesCountAsync**](SignaturesAPI.md#SignaturesAPI_getSignaturesCountAsync) | **GET** /api/v2/TrustService/Signatures/Count | Get signatures count


# **SignaturesAPI_getSignatureByIdAsync**
```c
// Get signature by ID
//
// Retrieves a specific signature by its identifier.
//
signature_dto_t* SignaturesAPI_getSignatureByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[signature_dto_t](signature_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignaturesAPI_getSignaturesAsync**
```c
// Get all signatures
//
// Retrieves all signatures for the specified tenant.
//
signature_dto_list_envelope_t* SignaturesAPI_getSignaturesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[signature_dto_list_envelope_t](signature_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignaturesAPI_getSignaturesCountAsync**
```c
// Get signatures count
//
// Returns the count of signatures for the specified tenant.
//
int32_envelope_t* SignaturesAPI_getSignaturesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

