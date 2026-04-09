# FiscalEnumerationRangesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FiscalEnumerationRangesAPI_createInvoiceEnumerationRange**](FiscalEnumerationRangesAPI.md#FiscalEnumerationRangesAPI_createInvoiceEnumerationRange) | **POST** /api/v2/AccountingService/Fiscals/Authorities/EnumerationRanges | Create an invoice enumeration range
[**FiscalEnumerationRangesAPI_deleteInvoiceEnumerationRange**](FiscalEnumerationRangesAPI.md#FiscalEnumerationRangesAPI_deleteInvoiceEnumerationRange) | **DELETE** /api/v2/AccountingService/Fiscals/Authorities/EnumerationRanges/{enumerationRangeId} | Delete an invoice enumeration range
[**FiscalEnumerationRangesAPI_getInvoiceEnumerationRange**](FiscalEnumerationRangesAPI.md#FiscalEnumerationRangesAPI_getInvoiceEnumerationRange) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/EnumerationRanges/{enumerationRangeId} | Get invoice enumeration range by ID
[**FiscalEnumerationRangesAPI_getInvoiceEnumerationRanges**](FiscalEnumerationRangesAPI.md#FiscalEnumerationRangesAPI_getInvoiceEnumerationRanges) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{authorityId}/EnumerationRanges | Get invoice enumeration ranges for an authority
[**FiscalEnumerationRangesAPI_getInvoiceEnumerationRangesCount**](FiscalEnumerationRangesAPI.md#FiscalEnumerationRangesAPI_getInvoiceEnumerationRangesCount) | **GET** /api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/EnumerationRanges/Count | Get invoice enumeration ranges count
[**FiscalEnumerationRangesAPI_updateInvoiceEnumerationRange**](FiscalEnumerationRangesAPI.md#FiscalEnumerationRangesAPI_updateInvoiceEnumerationRange) | **PUT** /api/v2/AccountingService/Fiscals/Authorities/EnumerationRanges/{enumerationRangeId} | Update an invoice enumeration range


# **FiscalEnumerationRangesAPI_createInvoiceEnumerationRange**
```c
// Create an invoice enumeration range
//
// Creates a new invoice enumeration range for a fiscal authority.
//
empty_envelope_t* FiscalEnumerationRangesAPI_createInvoiceEnumerationRange(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, invoice_enumeration_range_create_dto_t *invoice_enumeration_range_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**invoice_enumeration_range_create_dto** | **[invoice_enumeration_range_create_dto_t](invoice_enumeration_range_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalEnumerationRangesAPI_deleteInvoiceEnumerationRange**
```c
// Delete an invoice enumeration range
//
// Deletes an invoice enumeration range identified by its unique identifier.
//
empty_envelope_t* FiscalEnumerationRangesAPI_deleteInvoiceEnumerationRange(apiClient_t *apiClient, tenantId, char *enumerationRangeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**enumerationRangeId** | **char \*** |  | 
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

# **FiscalEnumerationRangesAPI_getInvoiceEnumerationRange**
```c
// Get invoice enumeration range by ID
//
// Retrieves a specific invoice enumeration range by its unique identifier.
//
invoice_enumeration_range_dto_envelope_t* FiscalEnumerationRangesAPI_getInvoiceEnumerationRange(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *enumerationRangeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**fiscalAuthorityId** | **char \*** |  | 
**enumerationRangeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[invoice_enumeration_range_dto_envelope_t](invoice_enumeration_range_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalEnumerationRangesAPI_getInvoiceEnumerationRanges**
```c
// Get invoice enumeration ranges for an authority
//
// Retrieves all invoice enumeration ranges for the specified fiscal authority.
//
invoice_enumeration_range_dto_list_envelope_t* FiscalEnumerationRangesAPI_getInvoiceEnumerationRanges(apiClient_t *apiClient, char *fiscalAuthorityId, char *authorityId, char *api_version, char *x_api_version);
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

[invoice_enumeration_range_dto_list_envelope_t](invoice_enumeration_range_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FiscalEnumerationRangesAPI_getInvoiceEnumerationRangesCount**
```c
// Get invoice enumeration ranges count
//
// Returns the total count of invoice enumeration ranges for the specified fiscal authority.
//
int32_envelope_t* FiscalEnumerationRangesAPI_getInvoiceEnumerationRangesCount(apiClient_t *apiClient, char *fiscalAuthorityId, char *api_version, char *x_api_version);
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

# **FiscalEnumerationRangesAPI_updateInvoiceEnumerationRange**
```c
// Update an invoice enumeration range
//
// Updates an existing invoice enumeration range identified by its unique identifier.
//
empty_envelope_t* FiscalEnumerationRangesAPI_updateInvoiceEnumerationRange(apiClient_t *apiClient, tenantId, char *enumerationRangeId, char *api_version, char *x_api_version, invoice_enumeration_range_update_dto_t *invoice_enumeration_range_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** |  |  | 
**enumerationRangeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**invoice_enumeration_range_update_dto** | **[invoice_enumeration_range_update_dto_t](invoice_enumeration_range_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

