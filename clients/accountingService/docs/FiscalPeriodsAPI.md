# FiscalPeriodsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FiscalPeriodsAPI_closeFiscalPeriod**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_closeFiscalPeriod) | **POST** /api/v2/AccountingService/Fiscals/Authorities/FiscalPeriods/{fiscalPeriodId}/Close | Close a fiscal period
[**FiscalPeriodsAPI_createFiscalPeriod**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_createFiscalPeriod) | **POST** /api/v2/AccountingService/Fiscals/Authorities/FiscalPeriods | Create a fiscal period
[**FiscalPeriodsAPI_deleteFiscalPeriod**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_deleteFiscalPeriod) | **DELETE** /api/v2/AccountingService/Fiscals/Authorities/FiscalPeriods/{fiscalPeriodId} | Delete a fiscal period
[**FiscalPeriodsAPI_getFiscalPeriod**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_getFiscalPeriod) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalYears/{fiscalYearId}/FiscalPeriods/{fiscalPeriodId} | Get fiscal period by ID
[**FiscalPeriodsAPI_getFiscalPeriods**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_getFiscalPeriods) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{authorityId}/FiscalYears/{fiscalYearId}/FiscalPeriods | Get fiscal periods for a fiscal year
[**FiscalPeriodsAPI_getFiscalPeriodsCount**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_getFiscalPeriodsCount) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalYears/{fiscalYearId}/FiscalPeriods/Count | Get fiscal periods count
[**FiscalPeriodsAPI_openFiscalPeriod**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_openFiscalPeriod) | **POST** /api/v2/AccountingService/Fiscals/Authorities/FiscalPeriods/{fiscalPeriodId}/Open | Open a fiscal period
[**FiscalPeriodsAPI_patchFiscalPeriodAsync**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_patchFiscalPeriodAsync) | **PATCH** /api/v2/AccountingService/Fiscals/Authorities/FiscalPeriods/{fiscalPeriodId} | Patch a fiscal period
[**FiscalPeriodsAPI_updateFiscalPeriod**](FiscalPeriodsAPI.md#FiscalPeriodsAPI_updateFiscalPeriod) | **PUT** /api/v2/AccountingService/Fiscals/Authorities/FiscalPeriods/{fiscalPeriodId} | Update a fiscal period


# **FiscalPeriodsAPI_closeFiscalPeriod**
```c
// Close a fiscal period
//
// Closes a fiscal period so no further journal entries can post into it. Rejects closing a locked (hard-sealed) period.
//
empty_envelope_t* FiscalPeriodsAPI_closeFiscalPeriod(apiClient_t *apiClient, char *tenantId, char *fiscalPeriodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **FiscalPeriodsAPI_createFiscalPeriod**
```c
// Create a fiscal period
//
// Creates a new fiscal period associated with a fiscal year.
//
empty_envelope_t* FiscalPeriodsAPI_createFiscalPeriod(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, fiscal_period_create_dto_t *fiscal_period_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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
empty_envelope_t* FiscalPeriodsAPI_deleteFiscalPeriod(apiClient_t *apiClient, char *tenantId, char *fiscalPeriodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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
fiscal_period_dto_envelope_t* FiscalPeriodsAPI_getFiscalPeriod(apiClient_t *apiClient, char *tenantId, char *fiscalAuthorityId, char *fiscalYearId, char *fiscalPeriodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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
fiscal_period_dto_list_envelope_t* FiscalPeriodsAPI_getFiscalPeriods(apiClient_t *apiClient, char *tenantId, char *fiscalAuthorityId, char *fiscalYearId, char *authorityId, char *api_version, char *x_api_version, fiscal_period_dto_collection_query_parameters_t *fiscal_period_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**fiscalAuthorityId** | **char \*** |  | 
**fiscalYearId** | **char \*** |  | 
**authorityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_period_dto_collection_query_parameters** | **[fiscal_period_dto_collection_query_parameters_t](fiscal_period_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[fiscal_period_dto_list_envelope_t](fiscal_period_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalPeriodsAPI_getFiscalPeriodsCount**
```c
// Get fiscal periods count
//
// Returns the total count of fiscal periods for the specified fiscal year.
//
int32_envelope_t* FiscalPeriodsAPI_getFiscalPeriodsCount(apiClient_t *apiClient, char *tenantId, char *fiscalAuthorityId, char *fiscalYearId, char *api_version, char *x_api_version, fiscal_period_dto_collection_query_parameters_t *fiscal_period_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**fiscalAuthorityId** | **char \*** |  | 
**fiscalYearId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_period_dto_collection_query_parameters** | **[fiscal_period_dto_collection_query_parameters_t](fiscal_period_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalPeriodsAPI_openFiscalPeriod**
```c
// Open a fiscal period
//
// Opens a closed fiscal period so journal entries can post into it. Rejects reopening a locked or an already-open period.
//
empty_envelope_t* FiscalPeriodsAPI_openFiscalPeriod(apiClient_t *apiClient, char *tenantId, char *fiscalPeriodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **FiscalPeriodsAPI_patchFiscalPeriodAsync**
```c
// Patch a fiscal period
//
// Partially updates a fiscal period.
//
empty_envelope_t* FiscalPeriodsAPI_patchFiscalPeriodAsync(apiClient_t *apiClient, char *tenantId, char *fiscalPeriodId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**fiscalPeriodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalPeriodsAPI_updateFiscalPeriod**
```c
// Update a fiscal period
//
// Updates an existing fiscal period identified by its unique identifier.
//
empty_envelope_t* FiscalPeriodsAPI_updateFiscalPeriod(apiClient_t *apiClient, char *tenantId, char *fiscalPeriodId, char *api_version, char *x_api_version, fiscal_period_update_dto_t *fiscal_period_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

