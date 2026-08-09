# AccountingSummaryAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AccountingSummaryAPI_getCreditsSumAsync**](AccountingSummaryAPI.md#AccountingSummaryAPI_getCreditsSumAsync) | **GET** /api/v2/AccountingService/Summary/Credits/Sum | Sum tenant accounting-entry credits
[**AccountingSummaryAPI_getDebitsSumAsync**](AccountingSummaryAPI.md#AccountingSummaryAPI_getDebitsSumAsync) | **GET** /api/v2/AccountingService/Summary/Debits/Sum | Sum tenant accounting-entry debits
[**AccountingSummaryAPI_getExpensesSumAsync**](AccountingSummaryAPI.md#AccountingSummaryAPI_getExpensesSumAsync) | **GET** /api/v2/AccountingService/Summary/Expenses/Sum | Sum tenant expenses
[**AccountingSummaryAPI_getIncomesSumAsync**](AccountingSummaryAPI.md#AccountingSummaryAPI_getIncomesSumAsync) | **GET** /api/v2/AccountingService/Summary/Incomes/Sum | Sum tenant incomes


# **AccountingSummaryAPI_getCreditsSumAsync**
```c
// Sum tenant accounting-entry credits
//
// Returns SUM(AccountingEntry.Credit) for the tenant, filtered by the supplied OData date range.
//
decimal_envelope_t* AccountingSummaryAPI_getCreditsSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, accounting_entry_dto_collection_query_parameters_t *accounting_entry_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**accounting_entry_dto_collection_query_parameters** | **[accounting_entry_dto_collection_query_parameters_t](accounting_entry_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[decimal_envelope_t](decimal_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountingSummaryAPI_getDebitsSumAsync**
```c
// Sum tenant accounting-entry debits
//
// Returns SUM(AccountingEntry.Debit) for the tenant, filtered by the supplied OData date range.
//
decimal_envelope_t* AccountingSummaryAPI_getDebitsSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, accounting_entry_dto_collection_query_parameters_t *accounting_entry_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**accounting_entry_dto_collection_query_parameters** | **[accounting_entry_dto_collection_query_parameters_t](accounting_entry_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[decimal_envelope_t](decimal_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountingSummaryAPI_getExpensesSumAsync**
```c
// Sum tenant expenses
//
// Returns SUM(JournalEntry.Debit) for Debit-direction journal entries in the tenant, filtered by the supplied OData date range.
//
money_envelope_t* AccountingSummaryAPI_getExpensesSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, journal_entry_dto_collection_query_parameters_t *journal_entry_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**journal_entry_dto_collection_query_parameters** | **[journal_entry_dto_collection_query_parameters_t](journal_entry_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountingSummaryAPI_getIncomesSumAsync**
```c
// Sum tenant incomes
//
// Returns SUM(JournalEntry.Credit) for Credit-direction journal entries in the tenant, filtered by the supplied OData date range.
//
money_envelope_t* AccountingSummaryAPI_getIncomesSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, journal_entry_dto_collection_query_parameters_t *journal_entry_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**journal_entry_dto_collection_query_parameters** | **[journal_entry_dto_collection_query_parameters_t](journal_entry_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

