# BusinessRelationshipsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BusinessRelationshipsAPI_getBusinessRelationshipsCountAsync**](BusinessRelationshipsAPI.md#BusinessRelationshipsAPI_getBusinessRelationshipsCountAsync) | **GET** /api/v2/TenantsService/BusinessRelationships/Count | Get business relationships count


# **BusinessRelationshipsAPI_getBusinessRelationshipsCountAsync**
```c
// Get business relationships count
//
// Returns the count of child business relationships owned by the specified parent tenant.
//
int32_envelope_t* BusinessRelationshipsAPI_getBusinessRelationshipsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

