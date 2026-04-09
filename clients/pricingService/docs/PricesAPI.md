# PricesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PricesAPI_getFinalPrice**](PricesAPI.md#PricesAPI_getFinalPrice) | **GET** /api/v2/PricingService/Prices/{itemId}/FinalPrice | Gets the final price for an item
[**PricesAPI_getPrice**](PricesAPI.md#PricesAPI_getPrice) | **GET** /api/v2/PricingService/Prices/{itemId}/Price | Gets the calculated price for an item
[**PricesAPI_getTotalSavingsInUsd**](PricesAPI.md#PricesAPI_getTotalSavingsInUsd) | **GET** /api/v2/PricingService/Prices/{itemId}/TotalSavings | Gets total savings for an item
[**PricesAPI_getTotalTaxesInUsd**](PricesAPI.md#PricesAPI_getTotalTaxesInUsd) | **GET** /api/v2/PricingService/Prices/{itemId}/TotalTaxes | Gets total taxes for an item


# **PricesAPI_getFinalPrice**
```c
// Gets the final price for an item
//
// Gets the final price for an item after all discounts and taxes in the specified currency.
//
money_envelope_t* PricesAPI_getFinalPrice(apiClient_t *apiClient, char *itemId, char *currencyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**currencyId** | **char \*** |  | [optional] [default to &#39;USD.USA&#39;]
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PricesAPI_getPrice**
```c
// Gets the calculated price for an item
//
// Calculates the price for an item considering price list, discount list, quantity, and currency.
//
item_price_calculation_envelope_t* PricesAPI_getPrice(apiClient_t *apiClient, char *itemId, char *priceListId, char *discountsListId, double quantity, char *currencyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**priceListId** | **char \*** |  | [optional] 
**discountsListId** | **char \*** |  | [optional] 
**quantity** | **double** |  | [optional] [default to 1]
**currencyId** | **char \*** |  | [optional] [default to &#39;USD.USA&#39;]
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_price_calculation_envelope_t](item_price_calculation_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PricesAPI_getTotalSavingsInUsd**
```c
// Gets total savings for an item
//
// Gets the total savings amount for an item in the specified currency.
//
money_envelope_t* PricesAPI_getTotalSavingsInUsd(apiClient_t *apiClient, char *itemId, char *currencyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**currencyId** | **char \*** |  | [optional] [default to &#39;USD.USA&#39;]
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PricesAPI_getTotalTaxesInUsd**
```c
// Gets total taxes for an item
//
// Gets the total tax amount for an item in the specified currency.
//
money_envelope_t* PricesAPI_getTotalTaxesInUsd(apiClient_t *apiClient, char *itemId, char *currencyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**currencyId** | **char \*** |  | [optional] [default to &#39;USD.USA&#39;]
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

