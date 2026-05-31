# ReceiptsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReceiptsAPI_createReceiptAsync**](ReceiptsAPI.md#ReceiptsAPI_createReceiptAsync) | **POST** /api/v2/AccountingService/Receipts | Creates a new receipt
[**ReceiptsAPI_deleteReceiptAsync**](ReceiptsAPI.md#ReceiptsAPI_deleteReceiptAsync) | **DELETE** /api/v2/AccountingService/Receipts/{receiptId} | Deletes a receipt
[**ReceiptsAPI_getReceiptDetailsAsync**](ReceiptsAPI.md#ReceiptsAPI_getReceiptDetailsAsync) | **GET** /api/v2/AccountingService/Receipts/{receiptId} | Gets details of a receipt
[**ReceiptsAPI_getReceiptsAsync**](ReceiptsAPI.md#ReceiptsAPI_getReceiptsAsync) | **GET** /api/v2/AccountingService/Receipts | Retrieves tenant receipts
[**ReceiptsAPI_getReceiptsCountAsync**](ReceiptsAPI.md#ReceiptsAPI_getReceiptsCountAsync) | **GET** /api/v2/AccountingService/Receipts/Count | Gets count of tenant receipts
[**ReceiptsAPI_updateReceiptAsync**](ReceiptsAPI.md#ReceiptsAPI_updateReceiptAsync) | **PUT** /api/v2/AccountingService/Receipts/{receiptId} | Updates a receipt


# **ReceiptsAPI_createReceiptAsync**
```c
// Creates a new receipt
//
// Adds a new receipt record under the specified tenant.
//
empty_envelope_t* ReceiptsAPI_createReceiptAsync(apiClient_t *apiClient, char *tenantId, receipt_create_dto_t *receipt_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**receipt_create_dto** | **[receipt_create_dto_t](receipt_create_dto.md) \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReceiptsAPI_deleteReceiptAsync**
```c
// Deletes a receipt
//
// Removes an existing receipt from the tenant’s records.
//
empty_envelope_t* ReceiptsAPI_deleteReceiptAsync(apiClient_t *apiClient, char *tenantId, char *receiptId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**receiptId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReceiptsAPI_getReceiptDetailsAsync**
```c
// Gets details of a receipt
//
// Retrieves a specific receipt by its ID for the given tenant.
//
receipt_dto_envelope_t* ReceiptsAPI_getReceiptDetailsAsync(apiClient_t *apiClient, char *tenantId, char *receiptId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**receiptId** | **char \*** |  | 

### Return type

[receipt_dto_envelope_t](receipt_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReceiptsAPI_getReceiptsAsync**
```c
// Retrieves tenant receipts
//
// Fetches all receipts for a given tenant with OData support.
//
receipt_dto_i_read_only_list_envelope_t* ReceiptsAPI_getReceiptsAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[receipt_dto_i_read_only_list_envelope_t](receipt_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReceiptsAPI_getReceiptsCountAsync**
```c
// Gets count of tenant receipts
//
// Returns total number of receipts for the tenant with OData filter support.
//
int32_envelope_t* ReceiptsAPI_getReceiptsCountAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReceiptsAPI_updateReceiptAsync**
```c
// Updates a receipt
//
// Modifies the data of an existing receipt for the given tenant.
//
empty_envelope_t* ReceiptsAPI_updateReceiptAsync(apiClient_t *apiClient, char *tenantId, char *receiptId, receipt_update_dto_t *receipt_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**receiptId** | **char \*** |  | 
**receipt_update_dto** | **[receipt_update_dto_t](receipt_update_dto.md) \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

