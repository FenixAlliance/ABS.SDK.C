# InvoiceEnumerationRangesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**InvoiceEnumerationRangesAPI_createInvoiceEnumerationRangeAsync**](InvoiceEnumerationRangesAPI.md#InvoiceEnumerationRangesAPI_createInvoiceEnumerationRangeAsync) | **POST** /api/v2/AccountingService/InvoiceEnumerationRanges | Create a new invoice enumeration range
[**InvoiceEnumerationRangesAPI_deleteInvoiceEnumerationRangeAsync**](InvoiceEnumerationRangesAPI.md#InvoiceEnumerationRangesAPI_deleteInvoiceEnumerationRangeAsync) | **DELETE** /api/v2/AccountingService/InvoiceEnumerationRanges/{rangeId} | Delete an invoice enumeration range
[**InvoiceEnumerationRangesAPI_getInvoiceEnumerationRangeDetailsAsync**](InvoiceEnumerationRangesAPI.md#InvoiceEnumerationRangesAPI_getInvoiceEnumerationRangeDetailsAsync) | **GET** /api/v2/AccountingService/InvoiceEnumerationRanges/{rangeId} | Get invoice enumeration range by ID
[**InvoiceEnumerationRangesAPI_getInvoiceEnumerationRangesAsync**](InvoiceEnumerationRangesAPI.md#InvoiceEnumerationRangesAPI_getInvoiceEnumerationRangesAsync) | **GET** /api/v2/AccountingService/InvoiceEnumerationRanges | Get all invoice enumeration ranges
[**InvoiceEnumerationRangesAPI_updateInvoiceEnumerationRangeAsync**](InvoiceEnumerationRangesAPI.md#InvoiceEnumerationRangesAPI_updateInvoiceEnumerationRangeAsync) | **PUT** /api/v2/AccountingService/InvoiceEnumerationRanges/{rangeId} | Update an invoice enumeration range


# **InvoiceEnumerationRangesAPI_createInvoiceEnumerationRangeAsync**
```c
// Create a new invoice enumeration range
//
// Creates a new invoice enumeration range for the tenant.
//
empty_envelope_t* InvoiceEnumerationRangesAPI_createInvoiceEnumerationRangeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, invoice_enumeration_range_create_dto_t *invoice_enumeration_range_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **InvoiceEnumerationRangesAPI_deleteInvoiceEnumerationRangeAsync**
```c
// Delete an invoice enumeration range
//
// Deletes an invoice enumeration range by its identifier.
//
empty_envelope_t* InvoiceEnumerationRangesAPI_deleteInvoiceEnumerationRangeAsync(apiClient_t *apiClient, char *tenantId, char *rangeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**rangeId** | **char \*** |  | 
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

# **InvoiceEnumerationRangesAPI_getInvoiceEnumerationRangeDetailsAsync**
```c
// Get invoice enumeration range by ID
//
// Retrieves the details of a specific invoice enumeration range.
//
invoice_enumeration_range_dto_envelope_t* InvoiceEnumerationRangesAPI_getInvoiceEnumerationRangeDetailsAsync(apiClient_t *apiClient, char *tenantId, char *rangeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**rangeId** | **char \*** |  | 
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

# **InvoiceEnumerationRangesAPI_getInvoiceEnumerationRangesAsync**
```c
// Get all invoice enumeration ranges
//
// Retrieves all invoice enumeration ranges for the specified tenant.
//
invoice_enumeration_range_dto_list_envelope_t* InvoiceEnumerationRangesAPI_getInvoiceEnumerationRangesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **InvoiceEnumerationRangesAPI_updateInvoiceEnumerationRangeAsync**
```c
// Update an invoice enumeration range
//
// Updates an existing invoice enumeration range with the provided data.
//
empty_envelope_t* InvoiceEnumerationRangesAPI_updateInvoiceEnumerationRangeAsync(apiClient_t *apiClient, char *tenantId, char *rangeId, char *api_version, char *x_api_version, invoice_enumeration_range_update_dto_t *invoice_enumeration_range_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**rangeId** | **char \*** |  | 
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

