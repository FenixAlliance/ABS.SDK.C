# FiscalRegimesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FiscalRegimesAPI_createFiscalRegime**](FiscalRegimesAPI.md#FiscalRegimesAPI_createFiscalRegime) | **POST** /api/v2/AccountingService/Fiscals/Authorities/FiscalRegimes | Create a fiscal regime
[**FiscalRegimesAPI_deleteFiscalRegime**](FiscalRegimesAPI.md#FiscalRegimesAPI_deleteFiscalRegime) | **DELETE** /api/v2/AccountingService/Fiscals/Authorities/FiscalRegimes/{regimeId} | Delete a fiscal regime
[**FiscalRegimesAPI_getFiscalRegime**](FiscalRegimesAPI.md#FiscalRegimesAPI_getFiscalRegime) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalRegimes/{regimeId} | Get fiscal regime by ID
[**FiscalRegimesAPI_getFiscalRegimes**](FiscalRegimesAPI.md#FiscalRegimesAPI_getFiscalRegimes) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{authorityId}/FiscalRegimes | Get fiscal regimes for an authority
[**FiscalRegimesAPI_getFiscalRegimesCount**](FiscalRegimesAPI.md#FiscalRegimesAPI_getFiscalRegimesCount) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalRegimes/Count | Get fiscal regimes count
[**FiscalRegimesAPI_updateFiscalRegime**](FiscalRegimesAPI.md#FiscalRegimesAPI_updateFiscalRegime) | **PUT** /api/v2/AccountingService/Fiscals/Authorities/FiscalRegimes/{regimeId} | Update a fiscal regime


# **FiscalRegimesAPI_createFiscalRegime**
```c
// Create a fiscal regime
//
// Creates a new fiscal regime for a fiscal authority.
//
empty_envelope_t* FiscalRegimesAPI_createFiscalRegime(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, fiscal_regime_create_dto_t *fiscal_regime_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_regime_create_dto** | **[fiscal_regime_create_dto_t](fiscal_regime_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalRegimesAPI_deleteFiscalRegime**
```c
// Delete a fiscal regime
//
// Deletes a fiscal regime identified by its unique identifier.
//
empty_envelope_t* FiscalRegimesAPI_deleteFiscalRegime(apiClient_t *apiClient, tenantId, char *regimeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**regimeId** | **char \*** |  | 
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

# **FiscalRegimesAPI_getFiscalRegime**
```c
// Get fiscal regime by ID
//
// Retrieves a specific fiscal regime by its unique identifier.
//
fiscal_regime_dto_envelope_t* FiscalRegimesAPI_getFiscalRegime(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *regimeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalAuthorityId** | **char \*** |  | 
**regimeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[fiscal_regime_dto_envelope_t](fiscal_regime_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalRegimesAPI_getFiscalRegimes**
```c
// Get fiscal regimes for an authority
//
// Retrieves all fiscal regimes for the specified fiscal authority.
//
fiscal_regime_dto_list_envelope_t* FiscalRegimesAPI_getFiscalRegimes(apiClient_t *apiClient, char *fiscalAuthorityId, char *authorityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**fiscalAuthorityId** | **char \*** |  | 
**authorityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[fiscal_regime_dto_list_envelope_t](fiscal_regime_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalRegimesAPI_getFiscalRegimesCount**
```c
// Get fiscal regimes count
//
// Returns the total count of fiscal regimes for the specified fiscal authority.
//
int32_envelope_t* FiscalRegimesAPI_getFiscalRegimesCount(apiClient_t *apiClient, char *fiscalAuthorityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **FiscalRegimesAPI_updateFiscalRegime**
```c
// Update a fiscal regime
//
// Updates an existing fiscal regime identified by its unique identifier.
//
empty_envelope_t* FiscalRegimesAPI_updateFiscalRegime(apiClient_t *apiClient, tenantId, char *regimeId, char *api_version, char *x_api_version, fiscal_regime_update_dto_t *fiscal_regime_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**regimeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_regime_update_dto** | **[fiscal_regime_update_dto_t](fiscal_regime_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

