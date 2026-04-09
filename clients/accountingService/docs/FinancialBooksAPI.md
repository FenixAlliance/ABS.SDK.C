# FinancialBooksAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FinancialBooksAPI_createFinancialBookAsync**](FinancialBooksAPI.md#FinancialBooksAPI_createFinancialBookAsync) | **POST** /api/v2/AccountingService/FinancialBooks | Creates a new financial book
[**FinancialBooksAPI_deleteFinancialBookAsync**](FinancialBooksAPI.md#FinancialBooksAPI_deleteFinancialBookAsync) | **DELETE** /api/v2/AccountingService/FinancialBooks/{financialBookId} | Deletes an existing financial book
[**FinancialBooksAPI_getFinancialBookDetailsAsync**](FinancialBooksAPI.md#FinancialBooksAPI_getFinancialBookDetailsAsync) | **GET** /api/v2/AccountingService/FinancialBooks/{financialBookId} | Gets the details of a specific financial book
[**FinancialBooksAPI_getFinancialBooksAsync**](FinancialBooksAPI.md#FinancialBooksAPI_getFinancialBooksAsync) | **GET** /api/v2/AccountingService/FinancialBooks | Get all financial books for a tenant
[**FinancialBooksAPI_getFinancialBooksCountAsync**](FinancialBooksAPI.md#FinancialBooksAPI_getFinancialBooksCountAsync) | **GET** /api/v2/AccountingService/FinancialBooks/Count | Get the count of financial books
[**FinancialBooksAPI_updateFinancialBookAsync**](FinancialBooksAPI.md#FinancialBooksAPI_updateFinancialBookAsync) | **PUT** /api/v2/AccountingService/FinancialBooks/{financialBookId} | Updates an existing financial book


# **FinancialBooksAPI_createFinancialBookAsync**
```c
// Creates a new financial book
//
// Creates a new financial book.
//
empty_envelope_t* FinancialBooksAPI_createFinancialBookAsync(apiClient_t *apiClient, char *tenantId, financial_book_create_dto_t *financial_book_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**financial_book_create_dto** | **[financial_book_create_dto_t](financial_book_create_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FinancialBooksAPI_deleteFinancialBookAsync**
```c
// Deletes an existing financial book
//
// Deletes an existing financial book.
//
empty_envelope_t* FinancialBooksAPI_deleteFinancialBookAsync(apiClient_t *apiClient, char *tenantId, char *financialBookId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**financialBookId** | **char \*** |  | 
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

# **FinancialBooksAPI_getFinancialBookDetailsAsync**
```c
// Gets the details of a specific financial book
//
// Gets the details of a specific financial book.
//
financial_book_dto_envelope_t* FinancialBooksAPI_getFinancialBookDetailsAsync(apiClient_t *apiClient, char *tenantId, char *financialBookId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**financialBookId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[financial_book_dto_envelope_t](financial_book_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FinancialBooksAPI_getFinancialBooksAsync**
```c
// Get all financial books for a tenant
//
// Retrieves all financial books for the specified tenant using OData query options.
//
financial_book_dto_list_envelope_t* FinancialBooksAPI_getFinancialBooksAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[financial_book_dto_list_envelope_t](financial_book_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FinancialBooksAPI_getFinancialBooksCountAsync**
```c
// Get the count of financial books
//
// Get the count of financial books.
//
int32_envelope_t* FinancialBooksAPI_getFinancialBooksCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **FinancialBooksAPI_updateFinancialBookAsync**
```c
// Updates an existing financial book
//
// Updates an existing financial book.
//
empty_envelope_t* FinancialBooksAPI_updateFinancialBookAsync(apiClient_t *apiClient, char *tenantId, char *financialBookId, financial_book_update_dto_t *financial_book_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**financialBookId** | **char \*** |  | 
**financial_book_update_dto** | **[financial_book_update_dto_t](financial_book_update_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

