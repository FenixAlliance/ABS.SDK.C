# AccountingPeriodsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AccountingPeriodsAPI_createAccountingPeriod**](AccountingPeriodsAPI.md#AccountingPeriodsAPI_createAccountingPeriod) | **POST** /api/v2/AccountingService/AccountingPeriods | Creates a new accounting period
[**AccountingPeriodsAPI_deleteAccountingPeriod**](AccountingPeriodsAPI.md#AccountingPeriodsAPI_deleteAccountingPeriod) | **DELETE** /api/v2/AccountingService/AccountingPeriods/{accountingPeriodId} | Deletes an existing accounting period
[**AccountingPeriodsAPI_getAccountingPeriod**](AccountingPeriodsAPI.md#AccountingPeriodsAPI_getAccountingPeriod) | **GET** /api/v2/AccountingService/AccountingPeriods/{accountingPeriodId} | Gets the current tenant accounting period
[**AccountingPeriodsAPI_getAccountingPeriods**](AccountingPeriodsAPI.md#AccountingPeriodsAPI_getAccountingPeriods) | **GET** /api/v2/AccountingService/AccountingPeriods | Get all accounting periods for a tenant
[**AccountingPeriodsAPI_getAccountingPeriodsCountAsync**](AccountingPeriodsAPI.md#AccountingPeriodsAPI_getAccountingPeriodsCountAsync) | **GET** /api/v2/AccountingService/AccountingPeriods/Count | Gets the current tenant accounting periods count
[**AccountingPeriodsAPI_updateAccountingPeriod**](AccountingPeriodsAPI.md#AccountingPeriodsAPI_updateAccountingPeriod) | **PUT** /api/v2/AccountingService/AccountingPeriods/{accountingPeriodId} | Updates an existing accounting period


# **AccountingPeriodsAPI_createAccountingPeriod**
```c
// Creates a new accounting period
//
// Creates a new accounting period.
//
empty_envelope_t* AccountingPeriodsAPI_createAccountingPeriod(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, accounting_period_create_dto_t *accounting_period_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**accounting_period_create_dto** | **[accounting_period_create_dto_t](accounting_period_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountingPeriodsAPI_deleteAccountingPeriod**
```c
// Deletes an existing accounting period
//
// Deletes an existing accounting period.
//
empty_envelope_t* AccountingPeriodsAPI_deleteAccountingPeriod(apiClient_t *apiClient, char *tenantId, char *accountingPeriodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountingPeriodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountingPeriodsAPI_getAccountingPeriod**
```c
// Gets the current tenant accounting period
//
// Get the currently acting tenant accounting period.
//
accounting_period_dto_envelope_t* AccountingPeriodsAPI_getAccountingPeriod(apiClient_t *apiClient, char *tenantId, char *accountingPeriodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountingPeriodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[accounting_period_dto_envelope_t](accounting_period_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountingPeriodsAPI_getAccountingPeriods**
```c
// Get all accounting periods for a tenant
//
// Retrieves all accounting periods for the specified tenant using OData query options.
//
accounting_period_dto_list_envelope_t* AccountingPeriodsAPI_getAccountingPeriods(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[accounting_period_dto_list_envelope_t](accounting_period_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountingPeriodsAPI_getAccountingPeriodsCountAsync**
```c
// Gets the current tenant accounting periods count
//
// Get the currently acting tenant accounting periods count.
//
int32_envelope_t* AccountingPeriodsAPI_getAccountingPeriodsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **AccountingPeriodsAPI_updateAccountingPeriod**
```c
// Updates an existing accounting period
//
// Updates an existing accounting period.
//
empty_envelope_t* AccountingPeriodsAPI_updateAccountingPeriod(apiClient_t *apiClient, char *tenantId, char *accountingPeriodId, char *api_version, char *x_api_version, accounting_period_update_dto_t *accounting_period_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountingPeriodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**accounting_period_update_dto** | **[accounting_period_update_dto_t](accounting_period_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

