# FiscalIdentificationTypesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FiscalIdentificationTypesAPI_createFiscalIdentificationType**](FiscalIdentificationTypesAPI.md#FiscalIdentificationTypesAPI_createFiscalIdentificationType) | **POST** /api/v2/AccountingService/Fiscals/Authorities/IdentificationTypes | Create a fiscal identification type
[**FiscalIdentificationTypesAPI_deleteFiscalIdentificationType**](FiscalIdentificationTypesAPI.md#FiscalIdentificationTypesAPI_deleteFiscalIdentificationType) | **DELETE** /api/v2/AccountingService/Fiscals/Authorities/IdentificationTypes/{identificationTypeId} | Delete a fiscal identification type
[**FiscalIdentificationTypesAPI_getFiscalIdentificationType**](FiscalIdentificationTypesAPI.md#FiscalIdentificationTypesAPI_getFiscalIdentificationType) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/IdentificationTypes/{identificationTypeId} | Get fiscal identification type by ID
[**FiscalIdentificationTypesAPI_getFiscalIdentificationTypes**](FiscalIdentificationTypesAPI.md#FiscalIdentificationTypesAPI_getFiscalIdentificationTypes) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{authorityId}/IdentificationTypes | Get fiscal identification types for an authority
[**FiscalIdentificationTypesAPI_getFiscalIdentificationTypesCount**](FiscalIdentificationTypesAPI.md#FiscalIdentificationTypesAPI_getFiscalIdentificationTypesCount) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{authorityId}/IdentificationTypes/Count | Get fiscal identification types count
[**FiscalIdentificationTypesAPI_updateFiscalIdentificationType**](FiscalIdentificationTypesAPI.md#FiscalIdentificationTypesAPI_updateFiscalIdentificationType) | **PUT** /api/v2/AccountingService/Fiscals/Authorities/IdentificationTypes/{identificationTypeId} | Update a fiscal identification type


# **FiscalIdentificationTypesAPI_createFiscalIdentificationType**
```c
// Create a fiscal identification type
//
// Creates a new fiscal identification type for a fiscal authority.
//
empty_envelope_t* FiscalIdentificationTypesAPI_createFiscalIdentificationType(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, fiscal_identification_type_create_dto_t *fiscal_identification_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_identification_type_create_dto** | **[fiscal_identification_type_create_dto_t](fiscal_identification_type_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalIdentificationTypesAPI_deleteFiscalIdentificationType**
```c
// Delete a fiscal identification type
//
// Deletes a fiscal identification type identified by its unique identifier.
//
empty_envelope_t* FiscalIdentificationTypesAPI_deleteFiscalIdentificationType(apiClient_t *apiClient, tenantId, char *identificationTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**identificationTypeId** | **char \*** |  | 
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

# **FiscalIdentificationTypesAPI_getFiscalIdentificationType**
```c
// Get fiscal identification type by ID
//
// Retrieves a specific fiscal identification type by its unique identifier.
//
fiscal_identification_type_dto_envelope_t* FiscalIdentificationTypesAPI_getFiscalIdentificationType(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *identificationTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalAuthorityId** | **char \*** |  | 
**identificationTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[fiscal_identification_type_dto_envelope_t](fiscal_identification_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalIdentificationTypesAPI_getFiscalIdentificationTypes**
```c
// Get fiscal identification types for an authority
//
// Retrieves all fiscal identification types for the specified fiscal authority.
//
fiscal_identification_type_dto_list_envelope_t* FiscalIdentificationTypesAPI_getFiscalIdentificationTypes(apiClient_t *apiClient, char *authorityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**authorityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[fiscal_identification_type_dto_list_envelope_t](fiscal_identification_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalIdentificationTypesAPI_getFiscalIdentificationTypesCount**
```c
// Get fiscal identification types count
//
// Returns the total count of fiscal identification types for the specified fiscal authority.
//
int32_envelope_t* FiscalIdentificationTypesAPI_getFiscalIdentificationTypesCount(apiClient_t *apiClient, char *authorityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**authorityId** | **char \*** |  | 
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

# **FiscalIdentificationTypesAPI_updateFiscalIdentificationType**
```c
// Update a fiscal identification type
//
// Updates an existing fiscal identification type identified by its unique identifier.
//
empty_envelope_t* FiscalIdentificationTypesAPI_updateFiscalIdentificationType(apiClient_t *apiClient, tenantId, char *identificationTypeId, char *api_version, char *x_api_version, fiscal_identification_type_update_dto_t *fiscal_identification_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**identificationTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_identification_type_update_dto** | **[fiscal_identification_type_update_dto_t](fiscal_identification_type_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

