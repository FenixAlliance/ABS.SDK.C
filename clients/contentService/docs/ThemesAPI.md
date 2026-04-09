# ThemesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ThemesAPI_getLatestCurrencyRatesModelAsync**](ThemesAPI.md#ThemesAPI_getLatestCurrencyRatesModelAsync) | **GET** /api/v2/ContentService/Themes/Update | Update base web content themes


# **ThemesAPI_getLatestCurrencyRatesModelAsync**
```c
// Update base web content themes
//
// Triggers an update of the base web content themes.
//
void ThemesAPI_getLatestCurrencyRatesModelAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

