# FiscalResponsibilityRecordsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FiscalResponsibilityRecordsAPI_createFiscalResponsibilityRecord**](FiscalResponsibilityRecordsAPI.md#FiscalResponsibilityRecordsAPI_createFiscalResponsibilityRecord) | **POST** /api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilityRecords | Create a fiscal responsibility record
[**FiscalResponsibilityRecordsAPI_deleteFiscalResponsibilityRecord**](FiscalResponsibilityRecordsAPI.md#FiscalResponsibilityRecordsAPI_deleteFiscalResponsibilityRecord) | **DELETE** /api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilityRecords/{fiscalResponsibilityRecordId} | Delete a fiscal responsibility record
[**FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecord**](FiscalResponsibilityRecordsAPI.md#FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecord) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/{fiscalResponsibilityId}/FiscalResponsibilityRecords/{fiscalResponsibilityRecordId} | Get fiscal responsibility record by ID
[**FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecords**](FiscalResponsibilityRecordsAPI.md#FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecords) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/{fiscalResponsibilityId}/FiscalResponsibilityRecords | Get fiscal responsibility records
[**FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecordsCount**](FiscalResponsibilityRecordsAPI.md#FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecordsCount) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/{fiscalResponsibilityId}/FiscalResponsibilityRecords/Count | Get fiscal responsibility records count
[**FiscalResponsibilityRecordsAPI_updateFiscalResponsibilityRecord**](FiscalResponsibilityRecordsAPI.md#FiscalResponsibilityRecordsAPI_updateFiscalResponsibilityRecord) | **PUT** /api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilityRecords/{fiscalResponsibilityRecordId} | Update a fiscal responsibility record


# **FiscalResponsibilityRecordsAPI_createFiscalResponsibilityRecord**
```c
// Create a fiscal responsibility record
//
// Creates a new fiscal responsibility record for a fiscal responsibility.
//
empty_envelope_t* FiscalResponsibilityRecordsAPI_createFiscalResponsibilityRecord(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, fiscal_responsibility_record_create_dto_t *fiscal_responsibility_record_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_responsibility_record_create_dto** | **[fiscal_responsibility_record_create_dto_t](fiscal_responsibility_record_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalResponsibilityRecordsAPI_deleteFiscalResponsibilityRecord**
```c
// Delete a fiscal responsibility record
//
// Deletes a fiscal responsibility record identified by its unique identifier.
//
empty_envelope_t* FiscalResponsibilityRecordsAPI_deleteFiscalResponsibilityRecord(apiClient_t *apiClient, tenantId, char *fiscalResponsibilityRecordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalResponsibilityRecordId** | **char \*** |  | 
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

# **FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecord**
```c
// Get fiscal responsibility record by ID
//
// Retrieves a specific fiscal responsibility record by its unique identifier.
//
fiscal_responsibility_record_dto_envelope_t* FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecord(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalResponsibilityId, char *fiscalResponsibilityRecordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalAuthorityId** | **char \*** |  | 
**fiscalResponsibilityId** | **char \*** |  | 
**fiscalResponsibilityRecordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[fiscal_responsibility_record_dto_envelope_t](fiscal_responsibility_record_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecords**
```c
// Get fiscal responsibility records
//
// Retrieves all fiscal responsibility records for the specified fiscal responsibility.
//
fiscal_responsibility_record_dto_list_envelope_t* FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecords(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalResponsibilityId, char *api_version, char *x_api_version);
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

[fiscal_responsibility_record_dto_list_envelope_t](fiscal_responsibility_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecordsCount**
```c
// Get fiscal responsibility records count
//
// Returns the total count of fiscal responsibility records for the specified fiscal responsibility.
//
int32_envelope_t* FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecordsCount(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalResponsibilityId, char *api_version, char *x_api_version);
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

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalResponsibilityRecordsAPI_updateFiscalResponsibilityRecord**
```c
// Update a fiscal responsibility record
//
// Updates an existing fiscal responsibility record identified by its unique identifier.
//
empty_envelope_t* FiscalResponsibilityRecordsAPI_updateFiscalResponsibilityRecord(apiClient_t *apiClient, tenantId, char *fiscalResponsibilityRecordId, char *api_version, char *x_api_version, fiscal_responsibility_record_update_dto_t *fiscal_responsibility_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalResponsibilityRecordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**fiscal_responsibility_record_update_dto** | **[fiscal_responsibility_record_update_dto_t](fiscal_responsibility_record_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

