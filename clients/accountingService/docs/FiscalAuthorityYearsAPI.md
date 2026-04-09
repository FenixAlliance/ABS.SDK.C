# FiscalAuthorityYearsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FiscalAuthorityYearsAPI_createFiscalYear**](FiscalAuthorityYearsAPI.md#FiscalAuthorityYearsAPI_createFiscalYear) | **POST** /api/v2/AccountingService/Fiscals/Authorities/FiscalYears | Create a fiscal year
[**FiscalAuthorityYearsAPI_deleteFiscalYear**](FiscalAuthorityYearsAPI.md#FiscalAuthorityYearsAPI_deleteFiscalYear) | **DELETE** /api/v2/AccountingService/Fiscals/Authorities/FiscalYears/{fiscalYearId} | Delete a fiscal year
[**FiscalAuthorityYearsAPI_getFiscalYear**](FiscalAuthorityYearsAPI.md#FiscalAuthorityYearsAPI_getFiscalYear) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalYears/{fiscalYearId} | Get fiscal year by ID for an authority
[**FiscalAuthorityYearsAPI_getFiscalYears**](FiscalAuthorityYearsAPI.md#FiscalAuthorityYearsAPI_getFiscalYears) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{authorityId}/FiscalYears | Get fiscal years for an authority
[**FiscalAuthorityYearsAPI_getFiscalYearsCount**](FiscalAuthorityYearsAPI.md#FiscalAuthorityYearsAPI_getFiscalYearsCount) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalYears/Count | Get fiscal years count for an authority
[**FiscalAuthorityYearsAPI_updateFiscalYear**](FiscalAuthorityYearsAPI.md#FiscalAuthorityYearsAPI_updateFiscalYear) | **PUT** /api/v2/AccountingService/Fiscals/Authorities/FiscalYears/{fiscalYearId} | Update a fiscal year


# **FiscalAuthorityYearsAPI_createFiscalYear**
```c
// Create a fiscal year
//
// Creates a new fiscal year associated with a fiscal authority.
//
empty_envelope_t* FiscalAuthorityYearsAPI_createFiscalYear(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, fiscal_year_create_dto_t *fiscal_year_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_year_create_dto** | **[fiscal_year_create_dto_t](fiscal_year_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalAuthorityYearsAPI_deleteFiscalYear**
```c
// Delete a fiscal year
//
// Deletes a fiscal year identified by its unique identifier.
//
empty_envelope_t* FiscalAuthorityYearsAPI_deleteFiscalYear(apiClient_t *apiClient, tenantId, char *fiscalYearId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalYearId** | **char \*** |  | 
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

# **FiscalAuthorityYearsAPI_getFiscalYear**
```c
// Get fiscal year by ID for an authority
//
// Retrieves a specific fiscal year by its unique identifier within a fiscal authority.
//
fiscal_year_dto_envelope_t* FiscalAuthorityYearsAPI_getFiscalYear(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalYearId, char *api_version, char *x_api_version);
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

[fiscal_year_dto_envelope_t](fiscal_year_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalAuthorityYearsAPI_getFiscalYears**
```c
// Get fiscal years for an authority
//
// Retrieves all fiscal years associated with the specified fiscal authority.
//
fiscal_year_dto_list_envelope_t* FiscalAuthorityYearsAPI_getFiscalYears(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *authorityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalAuthorityId** | **char \*** |  | 
**authorityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[fiscal_year_dto_list_envelope_t](fiscal_year_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalAuthorityYearsAPI_getFiscalYearsCount**
```c
// Get fiscal years count for an authority
//
// Returns the total count of fiscal years for the specified fiscal authority.
//
int32_envelope_t* FiscalAuthorityYearsAPI_getFiscalYearsCount(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalAuthorityId** | **char \*** |  | 
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

# **FiscalAuthorityYearsAPI_updateFiscalYear**
```c
// Update a fiscal year
//
// Updates an existing fiscal year identified by its unique identifier.
//
empty_envelope_t* FiscalAuthorityYearsAPI_updateFiscalYear(apiClient_t *apiClient, tenantId, char *fiscalYearId, char *api_version, char *x_api_version, fiscal_year_update_dto_t *fiscal_year_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalYearId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_year_update_dto** | **[fiscal_year_update_dto_t](fiscal_year_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

