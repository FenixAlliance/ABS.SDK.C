# FiscalAuthoritiesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FiscalAuthoritiesAPI_createFiscalAuthority**](FiscalAuthoritiesAPI.md#FiscalAuthoritiesAPI_createFiscalAuthority) | **POST** /api/v2/AccountingService/Fiscals/Authorities | Create a fiscal authority
[**FiscalAuthoritiesAPI_deleteFiscalAuthority**](FiscalAuthoritiesAPI.md#FiscalAuthoritiesAPI_deleteFiscalAuthority) | **DELETE** /api/v2/AccountingService/Fiscals/Authorities/{authorityId} | Delete a fiscal authority
[**FiscalAuthoritiesAPI_getFiscalAuthorities**](FiscalAuthoritiesAPI.md#FiscalAuthoritiesAPI_getFiscalAuthorities) | **GET** /api/v2/AccountingService/Fiscals/Authorities | Get fiscal authorities
[**FiscalAuthoritiesAPI_getFiscalAuthoritiesCount**](FiscalAuthoritiesAPI.md#FiscalAuthoritiesAPI_getFiscalAuthoritiesCount) | **GET** /api/v2/AccountingService/Fiscals/Authorities/Count | Get fiscal authorities count
[**FiscalAuthoritiesAPI_getFiscalAuthority**](FiscalAuthoritiesAPI.md#FiscalAuthoritiesAPI_getFiscalAuthority) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{authorityId} | Get fiscal authority by ID
[**FiscalAuthoritiesAPI_updateFiscalAuthority**](FiscalAuthoritiesAPI.md#FiscalAuthoritiesAPI_updateFiscalAuthority) | **PUT** /api/v2/AccountingService/Fiscals/Authorities/{authorityId} | Update a fiscal authority


# **FiscalAuthoritiesAPI_createFiscalAuthority**
```c
// Create a fiscal authority
//
// Creates a new fiscal authority for the specified tenant.
//
empty_envelope_t* FiscalAuthoritiesAPI_createFiscalAuthority(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, fiscal_authority_create_dto_t *fiscal_authority_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_authority_create_dto** | **[fiscal_authority_create_dto_t](fiscal_authority_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalAuthoritiesAPI_deleteFiscalAuthority**
```c
// Delete a fiscal authority
//
// Deletes a fiscal authority identified by its unique identifier.
//
empty_envelope_t* FiscalAuthoritiesAPI_deleteFiscalAuthority(apiClient_t *apiClient, char *tenantId, char *authorityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**authorityId** | **char \*** |  | 
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

# **FiscalAuthoritiesAPI_getFiscalAuthorities**
```c
// Get fiscal authorities
//
// Retrieves all fiscal authorities for the specified tenant using OData query options.
//
fiscal_authority_dto_list_envelope_t* FiscalAuthoritiesAPI_getFiscalAuthorities(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[fiscal_authority_dto_list_envelope_t](fiscal_authority_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalAuthoritiesAPI_getFiscalAuthoritiesCount**
```c
// Get fiscal authorities count
//
// Returns the total count of fiscal authorities for the specified tenant.
//
int32_envelope_t* FiscalAuthoritiesAPI_getFiscalAuthoritiesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **FiscalAuthoritiesAPI_getFiscalAuthority**
```c
// Get fiscal authority by ID
//
// Retrieves a specific fiscal authority by its unique identifier.
//
fiscal_authority_dto_envelope_t* FiscalAuthoritiesAPI_getFiscalAuthority(apiClient_t *apiClient, char *tenantId, char *authorityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**authorityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[fiscal_authority_dto_envelope_t](fiscal_authority_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalAuthoritiesAPI_updateFiscalAuthority**
```c
// Update a fiscal authority
//
// Updates an existing fiscal authority identified by its unique identifier.
//
empty_envelope_t* FiscalAuthoritiesAPI_updateFiscalAuthority(apiClient_t *apiClient, char *tenantId, char *authorityId, char *api_version, char *x_api_version, fiscal_authority_update_dto_t *fiscal_authority_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**authorityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_authority_update_dto** | **[fiscal_authority_update_dto_t](fiscal_authority_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

