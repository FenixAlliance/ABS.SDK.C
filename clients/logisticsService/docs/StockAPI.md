# StockAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**StockAPI_getContactsAsync**](StockAPI.md#StockAPI_getContactsAsync) | **GET** /api/v2/LogisticsService/Stock | Get all stock-related contacts


# **StockAPI_getContactsAsync**
```c
// Get all stock-related contacts
//
// Retrieves all business-owned contacts related to stock and logistics for the specified tenant.
//
contact_dto_list_envelope_t* StockAPI_getContactsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[contact_dto_list_envelope_t](contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

