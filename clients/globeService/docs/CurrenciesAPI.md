# CurrenciesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CurrenciesAPI_countCurrenciesAsync**](CurrenciesAPI.md#CurrenciesAPI_countCurrenciesAsync) | **GET** /api/v2/GlobeService/Currencies/Count | Count currencies
[**CurrenciesAPI_getCurrencyByIdAsync**](CurrenciesAPI.md#CurrenciesAPI_getCurrencyByIdAsync) | **GET** /api/v2/GlobeService/Currencies/{currencyId} | Get currency by ID
[**CurrenciesAPI_getEnabledCurrenciesAsync**](CurrenciesAPI.md#CurrenciesAPI_getEnabledCurrenciesAsync) | **GET** /api/v2/GlobeService/Currencies | Get all currencies


# **CurrenciesAPI_countCurrenciesAsync**
```c
// Count currencies
//
// Returns the total number of enabled currencies, with optional OData filtering.
//
int32_envelope_t* CurrenciesAPI_countCurrenciesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **CurrenciesAPI_getCurrencyByIdAsync**
```c
// Get currency by ID
//
// Retrieves a single currency by its unique identifier.
//
currency_dto_envelope_t* CurrenciesAPI_getCurrencyByIdAsync(apiClient_t *apiClient, char *currencyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**currencyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[currency_dto_envelope_t](currency_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CurrenciesAPI_getEnabledCurrenciesAsync**
```c
// Get all currencies
//
// Retrieves the list of all enabled currencies with optional OData pagination and filtering.
//
currency_dto_list_envelope_t* CurrenciesAPI_getEnabledCurrenciesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[currency_dto_list_envelope_t](currency_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

