# ShipmentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ShipmentsAPI_getShipmentsAsync**](ShipmentsAPI.md#ShipmentsAPI_getShipmentsAsync) | **GET** /api/v2/ShipmentsService/Shipments | Retrieve a list of shipments


# **ShipmentsAPI_getShipmentsAsync**
```c
// Retrieve a list of shipments
//
// Retrieves a list of shipments for the specified tenant.
//
shipment_dto_list_envelope_t* ShipmentsAPI_getShipmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shipment_dto_list_envelope_t](shipment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

