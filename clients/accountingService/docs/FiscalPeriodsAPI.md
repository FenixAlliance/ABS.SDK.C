# FiscalPeriodsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FiscalPeriodsAPI_createFiscalPeriod**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_createFiscalPeriod) | **POST** /api/v2/AccountingService/Fiscals/Authorities/FiscalPeriods | Create a fiscal period
[**FiscalPeriodsAPI_deleteFiscalPeriod**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_deleteFiscalPeriod) | **DELETE** /api/v2/AccountingService/Fiscals/Authorities/FiscalPeriods/{fiscalPeriodId} | Delete a fiscal period
[**FiscalPeriodsAPI_getFiscalPeriod**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_getFiscalPeriod) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalYears/{fiscalYearId}/FiscalPeriods/{fiscalPeriodId} | Get fiscal period by ID
[**FiscalPeriodsAPI_getFiscalPeriods**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_getFiscalPeriods) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{authorityId}/FiscalYears/{fiscalYearId}/FiscalPeriods | Get fiscal periods for a fiscal year
[**FiscalPeriodsAPI_getFiscalPeriodsCount**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_getFiscalPeriodsCount) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalYears/{fiscalYearId}/FiscalPeriods/Count | Get fiscal periods count
[**FiscalPeriodsAPI_updateFiscalPeriod**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_updateFiscalPeriod) | **PUT** /api/v2/AccountingService/Fiscals/Authorities/FiscalPeriods/{fiscalPeriodId} | Update a fiscal period


# **FiscalPeriodsAPI_createFiscalPeriod**
```c
// Create a fiscal period
//
// Creates a new fiscal period associated with a fiscal year.
//
empty_envelope_t* FiscalPeriodsAPI_createFiscalPeriod(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, fiscal_period_create_dto_t *fiscal_period_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_period_create_dto** | **[fiscal_period_create_dto_t](fiscal_period_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalPeriodsAPI_deleteFiscalPeriod**
```c
// Delete a fiscal period
//
// Deletes a fiscal period identified by its unique identifier.
//
empty_envelope_t* FiscalPeriodsAPI_deleteFiscalPeriod(apiClient_t *apiClient, tenantId, char *fiscalPeriodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalPeriodId** | **char \*** |  | 
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

# **FiscalPeriodsAPI_getFiscalPeriod**
```c
// Get fiscal period by ID
//
// Retrieves a specific fiscal period by its unique identifier within a fiscal year.
//
fiscal_period_dto_envelope_t* FiscalPeriodsAPI_getFiscalPeriod(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalYearId, char *fiscalPeriodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalAuthorityId** | **char \*** |  | 
**fiscalYearId** | **char \*** |  | 
**fiscalPeriodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[fiscal_period_dto_envelope_t](fiscal_period_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalPeriodsAPI_getFiscalPeriods**
```c
// Get fiscal periods for a fiscal year
//
// Retrieves all fiscal periods for the specified fiscal year within a fiscal authority.
//
fiscal_period_dto_list_envelope_t* FiscalPeriodsAPI_getFiscalPeriods(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalYearId, char *authorityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalAuthorityId** | **char \*** |  | 
**fiscalYearId** | **char \*** |  | 
**authorityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[fiscal_period_dto_list_envelope_t](fiscal_period_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalPeriodsAPI_getFiscalPeriodsCount**
```c
// Get fiscal periods count
//
// Returns the total count of fiscal periods for the specified fiscal year.
//
int32_envelope_t* FiscalPeriodsAPI_getFiscalPeriodsCount(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalYearId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalAuthorityId** | **char \*** |  | 
**fiscalYearId** | **char \*** |  | 
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

# **FiscalPeriodsAPI_updateFiscalPeriod**
```c
// Update a fiscal period
//
// Updates an existing fiscal period identified by its unique identifier.
//
empty_envelope_t* FiscalPeriodsAPI_updateFiscalPeriod(apiClient_t *apiClient, tenantId, char *fiscalPeriodId, char *api_version, char *x_api_version, fiscal_period_update_dto_t *fiscal_period_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalPeriodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_period_update_dto** | **[fiscal_period_update_dto_t](fiscal_period_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

