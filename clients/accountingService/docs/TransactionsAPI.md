# TransactionsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TransactionsAPI_createTransaction**](TransactionsAPI.md#TransactionsAPI_createTransaction) | **POST** /api/v2/AccountingService/Transactions | Create a transaction
[**TransactionsAPI_createTransactionCategory**](TransactionsAPI.md#TransactionsAPI_createTransactionCategory) | **POST** /api/v2/AccountingService/Transactions/Categories | Create a transaction category
[**TransactionsAPI_deleteTransaction**](TransactionsAPI.md#TransactionsAPI_deleteTransaction) | **DELETE** /api/v2/AccountingService/Transactions/{transactionId} | Delete a transaction
[**TransactionsAPI_deleteTransactionCategory**](TransactionsAPI.md#TransactionsAPI_deleteTransactionCategory) | **DELETE** /api/v2/AccountingService/Transactions/Categories/{categoryId} | Delete a transaction category
[**TransactionsAPI_getTransaction**](TransactionsAPI.md#TransactionsAPI_getTransaction) | **GET** /api/v2/AccountingService/Transactions/{transactionId} | Get transaction by ID
[**TransactionsAPI_getTransactionCategories**](TransactionsAPI.md#TransactionsAPI_getTransactionCategories) | **GET** /api/v2/AccountingService/Transactions/Categories | Get all transaction categories
[**TransactionsAPI_getTransactionCategoriesCount**](TransactionsAPI.md#TransactionsAPI_getTransactionCategoriesCount) | **GET** /api/v2/AccountingService/Transactions/Categories/Count | Get transaction categories count
[**TransactionsAPI_getTransactionCategory**](TransactionsAPI.md#TransactionsAPI_getTransactionCategory) | **GET** /api/v2/AccountingService/Transactions/Categories/{categoryId} | Get transaction category by ID
[**TransactionsAPI_getTransactions**](TransactionsAPI.md#TransactionsAPI_getTransactions) | **GET** /api/v2/AccountingService/Transactions | Get all transactions for a tenant
[**TransactionsAPI_getTransactionsCount**](TransactionsAPI.md#TransactionsAPI_getTransactionsCount) | **GET** /api/v2/AccountingService/Transactions/Count | Get transactions count
[**TransactionsAPI_updateTransaction**](TransactionsAPI.md#TransactionsAPI_updateTransaction) | **PUT** /api/v2/AccountingService/Transactions/{transactionId} | Update a transaction
[**TransactionsAPI_updateTransactionCategory**](TransactionsAPI.md#TransactionsAPI_updateTransactionCategory) | **PUT** /api/v2/AccountingService/Transactions/Categories/{categoryId} | Update a transaction category


# **TransactionsAPI_createTransaction**
```c
// Create a transaction
//
// Creates a new transaction for the specified tenant.
//
transaction_dto_envelope_t* TransactionsAPI_createTransaction(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, transaction_create_dto_t *transaction_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**transaction_create_dto** | **[transaction_create_dto_t](transaction_create_dto.md) \*** |  | [optional] 

### Return type

[transaction_dto_envelope_t](transaction_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransactionsAPI_createTransactionCategory**
```c
// Create a transaction category
//
// Creates a new transaction category for the specified tenant.
//
transaction_category_dto_envelope_t* TransactionsAPI_createTransactionCategory(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, transaction_category_create_dto_t *transaction_category_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**transaction_category_create_dto** | **[transaction_category_create_dto_t](transaction_category_create_dto.md) \*** |  | [optional] 

### Return type

[transaction_category_dto_envelope_t](transaction_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransactionsAPI_deleteTransaction**
```c
// Delete a transaction
//
// Deletes a transaction by its unique identifier.
//
transaction_dto_envelope_t* TransactionsAPI_deleteTransaction(apiClient_t *apiClient, char *tenantId, char *transactionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**transactionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[transaction_dto_envelope_t](transaction_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransactionsAPI_deleteTransactionCategory**
```c
// Delete a transaction category
//
// Deletes a transaction category by its unique identifier.
//
transaction_category_dto_envelope_t* TransactionsAPI_deleteTransactionCategory(apiClient_t *apiClient, char *tenantId, char *categoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**categoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[transaction_category_dto_envelope_t](transaction_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransactionsAPI_getTransaction**
```c
// Get transaction by ID
//
// Retrieves a specific transaction by its unique identifier.
//
transaction_dto_envelope_t* TransactionsAPI_getTransaction(apiClient_t *apiClient, char *tenantId, char *transactionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**transactionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[transaction_dto_envelope_t](transaction_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransactionsAPI_getTransactionCategories**
```c
// Get all transaction categories
//
// Retrieves all transaction categories for the specified tenant.
//
transaction_category_dto_list_envelope_t* TransactionsAPI_getTransactionCategories(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[transaction_category_dto_list_envelope_t](transaction_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransactionsAPI_getTransactionCategoriesCount**
```c
// Get transaction categories count
//
// Returns total number of transaction categories for the tenant.
//
int32_envelope_t* TransactionsAPI_getTransactionCategoriesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TransactionsAPI_getTransactionCategory**
```c
// Get transaction category by ID
//
// Retrieves a specific transaction category by its unique identifier.
//
transaction_category_dto_envelope_t* TransactionsAPI_getTransactionCategory(apiClient_t *apiClient, char *tenantId, char *categoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**categoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[transaction_category_dto_envelope_t](transaction_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransactionsAPI_getTransactions**
```c
// Get all transactions for a tenant
//
// Retrieves all transactions for the specified tenant using OData query options.
//
transaction_dto_list_envelope_t* TransactionsAPI_getTransactions(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[transaction_dto_list_envelope_t](transaction_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransactionsAPI_getTransactionsCount**
```c
// Get transactions count
//
// Returns total number of transactions for the tenant with OData filter support.
//
int32_envelope_t* TransactionsAPI_getTransactionsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TransactionsAPI_updateTransaction**
```c
// Update a transaction
//
// Updates an existing transaction with the provided data.
//
transaction_dto_envelope_t* TransactionsAPI_updateTransaction(apiClient_t *apiClient, char *tenantId, char *transactionId, char *api_version, char *x_api_version, transaction_update_dto_t *transaction_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**transactionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**transaction_update_dto** | **[transaction_update_dto_t](transaction_update_dto.md) \*** |  | [optional] 

### Return type

[transaction_dto_envelope_t](transaction_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransactionsAPI_updateTransactionCategory**
```c
// Update a transaction category
//
// Updates an existing transaction category with the provided data.
//
transaction_category_dto_envelope_t* TransactionsAPI_updateTransactionCategory(apiClient_t *apiClient, char *tenantId, char *categoryId, char *api_version, char *x_api_version, transaction_category_update_dto_t *transaction_category_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**categoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**transaction_category_update_dto** | **[transaction_category_update_dto_t](transaction_category_update_dto.md) \*** |  | [optional] 

### Return type

[transaction_category_dto_envelope_t](transaction_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

