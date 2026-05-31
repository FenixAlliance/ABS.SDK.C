# RatesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RatesAPI_getHistoricalCurrencyRateAsync**](RatesAPI.md#RatesAPI_getHistoricalCurrencyRateAsync) | **GET** /api/v2/ForexService/Rates/History/{currencyId} | Get historical rate for a currency
[**RatesAPI_getHistoricalCurrencyRatesAsync**](RatesAPI.md#RatesAPI_getHistoricalCurrencyRatesAsync) | **GET** /api/v2/ForexService/Rates/History | Get historical currency rates
[**RatesAPI_getLatestCurrencyRateAsync**](RatesAPI.md#RatesAPI_getLatestCurrencyRateAsync) | **GET** /api/v2/ForexService/Rates/Latest/{currencyId} | Get latest rate for a currency
[**RatesAPI_getLatestCurrencyRatesModelAsync**](RatesAPI.md#RatesAPI_getLatestCurrencyRatesModelAsync) | **GET** /api/v2/ForexService/Rates/Latest | Get latest currency rates


# **RatesAPI_getHistoricalCurrencyRateAsync**
```c
// Get historical rate for a currency
//
// Retrieves the exchange rate for a specific currency as of a specific historical date.
//
exchange_rate_envelope_t* RatesAPI_getHistoricalCurrencyRateAsync(apiClient_t *apiClient, char *currencyId, char date, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**currencyId** | **char \*** |  | 
**date** | **char** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[exchange_rate_envelope_t](exchange_rate_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RatesAPI_getHistoricalCurrencyRatesAsync**
```c
// Get historical currency rates
//
// Retrieves exchange rates for all supported currencies as of a specific historical date.
//
forex_rates_dto_envelope_t* RatesAPI_getHistoricalCurrencyRatesAsync(apiClient_t *apiClient, char date, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**date** | **char** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[forex_rates_dto_envelope_t](forex_rates_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RatesAPI_getLatestCurrencyRateAsync**
```c
// Get latest rate for a currency
//
// Retrieves the latest exchange rate for a specific currency by its identifier.
//
exchange_rate_envelope_t* RatesAPI_getLatestCurrencyRateAsync(apiClient_t *apiClient, char *currencyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**currencyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[exchange_rate_envelope_t](exchange_rate_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RatesAPI_getLatestCurrencyRatesModelAsync**
```c
// Get latest currency rates
//
// Retrieves the latest exchange rates for all supported currencies.
//
forex_rates_dto_envelope_t* RatesAPI_getLatestCurrencyRatesModelAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[forex_rates_dto_envelope_t](forex_rates_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

