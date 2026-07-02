# AccountingEntriesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AccountingEntriesAPI_getCreditsSumAsync**](AccountingEntriesAPI.md#AccountingEntriesAPI_getCreditsSumAsync) | **GET** /api/v2/AccountingService/AccountingEntries/Credits/Sum | Sum tenant accounting-entry credits
[**AccountingEntriesAPI_getDebitsSumAsync**](AccountingEntriesAPI.md#AccountingEntriesAPI_getDebitsSumAsync) | **GET** /api/v2/AccountingService/AccountingEntries/Debits/Sum | Sum tenant accounting-entry debits


# **AccountingEntriesAPI_getCreditsSumAsync**
```c
// Sum tenant accounting-entry credits
//
// Returns SUM(AccountingEntry.Credit) for the tenant, filtered by the supplied OData date range.
//
decimal_envelope_t* AccountingEntriesAPI_getCreditsSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **AccountingEntriesAPI_getDebitsSumAsync**
```c
// Sum tenant accounting-entry debits
//
// Returns SUM(AccountingEntry.Debit) for the tenant, filtered by the supplied OData date range.
//
decimal_envelope_t* AccountingEntriesAPI_getDebitsSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

