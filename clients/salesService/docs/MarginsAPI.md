# MarginsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MarginsAPI_getQuoteAsync**](MarginsAPI.md#MarginsAPI_getQuoteAsync) | **GET** /api/v2/SalesService/Margins/{marginId}/Details | Get margin details by ID


# **MarginsAPI_getQuoteAsync**
```c
// Get margin details by ID
//
// Retrieves the details of a specific sales margin by its ID.
//
void MarginsAPI_getQuoteAsync(apiClient_t *apiClient, char *marginId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**marginId** | **char \*** |  | 
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

