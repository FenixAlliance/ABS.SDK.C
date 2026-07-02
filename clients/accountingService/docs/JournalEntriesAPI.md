# JournalEntriesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**JournalEntriesAPI_getExpensesSumAsync**](JournalEntriesAPI.md#JournalEntriesAPI_getExpensesSumAsync) | **GET** /api/v2/AccountingService/JournalEntries/Expenses/Sum | Sum tenant expenses
[**JournalEntriesAPI_getIncomesSumAsync**](JournalEntriesAPI.md#JournalEntriesAPI_getIncomesSumAsync) | **GET** /api/v2/AccountingService/JournalEntries/Incomes/Sum | Sum tenant incomes


# **JournalEntriesAPI_getExpensesSumAsync**
```c
// Sum tenant expenses
//
// Returns SUM(JournalEntry.Debit) for Debit-direction journal entries in the tenant, filtered by the supplied OData date range.
//
decimal_envelope_t* JournalEntriesAPI_getExpensesSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[decimal_envelope_t](decimal_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JournalEntriesAPI_getIncomesSumAsync**
```c
// Sum tenant incomes
//
// Returns SUM(JournalEntry.Credit) for Credit-direction journal entries in the tenant, filtered by the supplied OData date range.
//
decimal_envelope_t* JournalEntriesAPI_getIncomesSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[decimal_envelope_t](decimal_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

