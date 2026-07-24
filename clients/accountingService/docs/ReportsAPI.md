# ReportsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReportsAPI_getTrialBalanceAsync**](ReportsAPI.md#ReportsAPI_getTrialBalanceAsync) | **GET** /api/v2/AccountingService/Reports/TrialBalance | Trial balance for a fiscal period


# **ReportsAPI_getTrialBalanceAsync**
```c
// Trial balance for a fiscal period
//
// Returns the per-account posted debit/credit totals for the given fiscal period (optionally scoped to a single financial book), plus grand totals and the Σdebits == Σcredits balanced flag. Amounts are normalized to the target currency (default USD) from the stored USD reporting amounts.
//
trial_balance_dto_envelope_t* ReportsAPI_getTrialBalanceAsync(apiClient_t *apiClient, char *tenantId, char *fiscalPeriodId, char *financialBookId, char *currencyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**fiscalPeriodId** | **char \*** |  | 
**financialBookId** | **char \*** |  | [optional] 
**currencyId** | **char \*** |  | [optional] [default to &#39;USD.USA&#39;]
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[trial_balance_dto_envelope_t](trial_balance_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

