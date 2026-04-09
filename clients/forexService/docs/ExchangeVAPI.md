# ExchangeVAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExchangeVAPI_exchangeAmountHistoricalV3Async**](ExchangeVAPI.md#ExchangeVAPI_exchangeAmountHistoricalV3Async) | **GET** /api/v3/ForexService/Exchange/History | Exchange currency at historical rates (v3)
[**ExchangeVAPI_exchangeAmountV3Async**](ExchangeVAPI.md#ExchangeVAPI_exchangeAmountV3Async) | **GET** /api/v3/ForexService/Exchange/Latest | Exchange currency at latest rates (v3)


# **ExchangeVAPI_exchangeAmountHistoricalV3Async**
```c
// Exchange currency at historical rates (v3)
//
// Exchange an amount of money from one currency to another using exchange rates from a specific historical date. Returns the full ExchangeRate details.
//
exchange_rate_envelope_t* ExchangeVAPI_exchangeAmountHistoricalV3Async(apiClient_t *apiClient, double amount, char *sourceCurrencyId, char *targetCurrencyId, char date);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**amount** | **double** |  | 
**sourceCurrencyId** | **char \*** |  | 
**targetCurrencyId** | **char \*** |  | 
**date** | **char** |  | 

### Return type

[exchange_rate_envelope_t](exchange_rate_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ExchangeVAPI_exchangeAmountV3Async**
```c
// Exchange currency at latest rates (v3)
//
// Exchange an amount of money from one currency to another using the latest available exchange rates. Returns the full ExchangeRate details.
//
exchange_rate_envelope_t* ExchangeVAPI_exchangeAmountV3Async(apiClient_t *apiClient, double amount, char *sourceCurrencyId, char *targetCurrencyId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**amount** | **double** |  | 
**sourceCurrencyId** | **char \*** |  | 
**targetCurrencyId** | **char \*** |  | 

### Return type

[exchange_rate_envelope_t](exchange_rate_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

