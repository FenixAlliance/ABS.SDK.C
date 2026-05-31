# ExchangeAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExchangeAPI_exchangeAmountAsync**](ExchangeAPI.md#ExchangeAPI_exchangeAmountAsync) | **GET** /api/v2/ForexService/Exchange/Latest | Exchange currency at latest rates
[**ExchangeAPI_exchangeAmountHistoricalAsync**](ExchangeAPI.md#ExchangeAPI_exchangeAmountHistoricalAsync) | **GET** /api/v2/ForexService/Exchange/History | Exchange currency at historical rates


# **ExchangeAPI_exchangeAmountAsync**
```c
// Exchange currency at latest rates
//
// Exchange an amount of money from one currency to another using the latest available exchange rates.
//
money_envelope_t* ExchangeAPI_exchangeAmountAsync(apiClient_t *apiClient, double amount, char *sourceCurrencyId, char *targetCurrencyId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**amount** | **double** |  | 
**sourceCurrencyId** | **char \*** |  | 
**targetCurrencyId** | **char \*** |  | 

### Return type

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ExchangeAPI_exchangeAmountHistoricalAsync**
```c
// Exchange currency at historical rates
//
// Exchange an amount of money from one currency to another using exchange rates from a specific historical date.
//
money_envelope_t* ExchangeAPI_exchangeAmountHistoricalAsync(apiClient_t *apiClient, double amount, char *sourceCurrencyId, char *targetCurrencyId, char date);
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

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

