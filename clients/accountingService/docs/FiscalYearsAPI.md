# FiscalYearsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FiscalYearsAPI_createFiscalYearAsync**](FiscalYearsAPI.md#FiscalYearsAPI_createFiscalYearAsync) | **POST** /api/v2/AccountingService/FiscalYears | Create fiscal year
[**FiscalYearsAPI_deleteFiscalYearAsync**](FiscalYearsAPI.md#FiscalYearsAPI_deleteFiscalYearAsync) | **DELETE** /api/v2/AccountingService/FiscalYears/{fiscalYearId} | Delete fiscal year
[**FiscalYearsAPI_getFiscalYearDetailsAsync**](FiscalYearsAPI.md#FiscalYearsAPI_getFiscalYearDetailsAsync) | **GET** /api/v2/AccountingService/FiscalYears/{fiscalYearId} | Get fiscal year by ID
[**FiscalYearsAPI_getFiscalYearsAsync**](FiscalYearsAPI.md#FiscalYearsAPI_getFiscalYearsAsync) | **GET** /api/v2/AccountingService/FiscalYears | Get all fiscal years
[**FiscalYearsAPI_getFiscalYearsCountAsync**](FiscalYearsAPI.md#FiscalYearsAPI_getFiscalYearsCountAsync) | **GET** /api/v2/AccountingService/FiscalYears/Count | Count fiscal years
[**FiscalYearsAPI_updateFiscalYearAsync**](FiscalYearsAPI.md#FiscalYearsAPI_updateFiscalYearAsync) | **PUT** /api/v2/AccountingService/FiscalYears/{fiscalYearId} | Update fiscal year


# **FiscalYearsAPI_createFiscalYearAsync**
```c
// Create fiscal year
//
// Creates a new fiscal year entry for a tenant.
//
empty_envelope_t* FiscalYearsAPI_createFiscalYearAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, fiscal_year_create_dto_t *fiscal_year_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **FiscalYearsAPI_deleteFiscalYearAsync**
```c
// Delete fiscal year
//
// Deletes a fiscal year identified by its ID.
//
empty_envelope_t* FiscalYearsAPI_deleteFiscalYearAsync(apiClient_t *apiClient, char *tenantId, char *fiscalYearId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **FiscalYearsAPI_getFiscalYearDetailsAsync**
```c
// Get fiscal year by ID
//
// Gets details for a specific fiscal year.
//
fiscal_year_dto_envelope_t* FiscalYearsAPI_getFiscalYearDetailsAsync(apiClient_t *apiClient, char *tenantId, char *fiscalYearId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **FiscalYearsAPI_getFiscalYearsAsync**
```c
// Get all fiscal years
//
// Retrieves a list of fiscal years for the specified tenant.
//
fiscal_year_dto_i_read_only_list_envelope_t* FiscalYearsAPI_getFiscalYearsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[fiscal_year_dto_i_read_only_list_envelope_t](fiscal_year_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalYearsAPI_getFiscalYearsCountAsync**
```c
// Count fiscal years
//
// Returns the number of fiscal years for a tenant.
//
int32_envelope_t* FiscalYearsAPI_getFiscalYearsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **FiscalYearsAPI_updateFiscalYearAsync**
```c
// Update fiscal year
//
// Updates an existing fiscal year identified by its ID.
//
empty_envelope_t* FiscalYearsAPI_updateFiscalYearAsync(apiClient_t *apiClient, char *tenantId, char *fiscalYearId, char *api_version, char *x_api_version, fiscal_year_update_dto_t *fiscal_year_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

