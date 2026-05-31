# InventoryAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**InventoryAPI_getInventoryDetailsAsync**](InventoryAPI.md#InventoryAPI_getInventoryDetailsAsync) | **GET** /api/v2/InventoryService/Inventory/{stockItemId}/Details | Get inventory details for a stock item


# **InventoryAPI_getInventoryDetailsAsync**
```c
// Get inventory details for a stock item
//
// Retrieves the inventory details for a specific stock item by its ID.
//
void InventoryAPI_getInventoryDetailsAsync(apiClient_t *apiClient, char *stockItemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**stockItemId** | **char \*** |  | 
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

