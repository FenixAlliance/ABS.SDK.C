# FiscalResponsibilitiesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FiscalResponsibilitiesAPI_createFiscalResponsibility**](FiscalResponsibilitiesAPI.md#FiscalResponsibilitiesAPI_createFiscalResponsibility) | **POST** /api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilities | Create a fiscal responsibility
[**FiscalResponsibilitiesAPI_deleteFiscalResponsibility**](FiscalResponsibilitiesAPI.md#FiscalResponsibilitiesAPI_deleteFiscalResponsibility) | **DELETE** /api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilities/{fiscalResponsibilityId} | Delete a fiscal responsibility
[**FiscalResponsibilitiesAPI_getFiscalResponsibilities**](FiscalResponsibilitiesAPI.md#FiscalResponsibilitiesAPI_getFiscalResponsibilities) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{authorityId}/FiscalResponsibilities | Get fiscal responsibilities for an authority
[**FiscalResponsibilitiesAPI_getFiscalResponsibilitiesCount**](FiscalResponsibilitiesAPI.md#FiscalResponsibilitiesAPI_getFiscalResponsibilitiesCount) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/Count | Get fiscal responsibilities count
[**FiscalResponsibilitiesAPI_getFiscalResponsibility**](FiscalResponsibilitiesAPI.md#FiscalResponsibilitiesAPI_getFiscalResponsibility) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/{fiscalResponsibilityId} | Get fiscal responsibility by ID
[**FiscalResponsibilitiesAPI_updateFiscalResponsibility**](FiscalResponsibilitiesAPI.md#FiscalResponsibilitiesAPI_updateFiscalResponsibility) | **PUT** /api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilities/{fiscalResponsibilityId} | Update a fiscal responsibility


# **FiscalResponsibilitiesAPI_createFiscalResponsibility**
```c
// Create a fiscal responsibility
//
// Creates a new fiscal responsibility for a fiscal authority.
//
empty_envelope_t* FiscalResponsibilitiesAPI_createFiscalResponsibility(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, fiscal_responsibility_create_dto_t *fiscal_responsibility_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_responsibility_create_dto** | **[fiscal_responsibility_create_dto_t](fiscal_responsibility_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalResponsibilitiesAPI_deleteFiscalResponsibility**
```c
// Delete a fiscal responsibility
//
// Deletes a fiscal responsibility identified by its unique identifier.
//
empty_envelope_t* FiscalResponsibilitiesAPI_deleteFiscalResponsibility(apiClient_t *apiClient, tenantId, char *fiscalResponsibilityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalResponsibilityId** | **char \*** |  | 
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

# **FiscalResponsibilitiesAPI_getFiscalResponsibilities**
```c
// Get fiscal responsibilities for an authority
//
// Retrieves all fiscal responsibilities for the specified fiscal authority.
//
fiscal_responsibility_dto_list_envelope_t* FiscalResponsibilitiesAPI_getFiscalResponsibilities(apiClient_t *apiClient, char *fiscalAuthorityId, char *authorityId, char *api_version, char *x_api_version);
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

[fiscal_responsibility_dto_list_envelope_t](fiscal_responsibility_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalResponsibilitiesAPI_getFiscalResponsibilitiesCount**
```c
// Get fiscal responsibilities count
//
// Returns the total count of fiscal responsibilities for the specified fiscal authority.
//
int32_envelope_t* FiscalResponsibilitiesAPI_getFiscalResponsibilitiesCount(apiClient_t *apiClient, char *fiscalAuthorityId, char *api_version, char *x_api_version);
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

# **FiscalResponsibilitiesAPI_getFiscalResponsibility**
```c
// Get fiscal responsibility by ID
//
// Retrieves a specific fiscal responsibility by its unique identifier.
//
fiscal_responsibility_dto_envelope_t* FiscalResponsibilitiesAPI_getFiscalResponsibility(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalResponsibilityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalAuthorityId** | **char \*** |  | 
**fiscalResponsibilityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[fiscal_responsibility_dto_envelope_t](fiscal_responsibility_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalResponsibilitiesAPI_updateFiscalResponsibility**
```c
// Update a fiscal responsibility
//
// Updates an existing fiscal responsibility identified by its unique identifier.
//
empty_envelope_t* FiscalResponsibilitiesAPI_updateFiscalResponsibility(apiClient_t *apiClient, tenantId, char *fiscalResponsibilityId, char *api_version, char *x_api_version, fiscal_responsibility_update_dto_t *fiscal_responsibility_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalResponsibilityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_responsibility_update_dto** | **[fiscal_responsibility_update_dto_t](fiscal_responsibility_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

