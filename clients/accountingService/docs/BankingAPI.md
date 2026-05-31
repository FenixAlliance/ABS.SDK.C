# BankingAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BankingAPI_createBank**](BankingAPI.md#BankingAPI_createBank) | **POST** /api/v2/AccountingService/Banking | Creates a new bank
[**BankingAPI_createBankAccount**](BankingAPI.md#BankingAPI_createBankAccount) | **POST** /api/v2/AccountingService/Banking/{bankId}/Accounts | Creates a new bank account
[**BankingAPI_createBankGuarantee**](BankingAPI.md#BankingAPI_createBankGuarantee) | **POST** /api/v2/AccountingService/Banking/{bankId}/Guarantees | Creates a new bank guarantee
[**BankingAPI_createBankTransaction**](BankingAPI.md#BankingAPI_createBankTransaction) | **POST** /api/v2/AccountingService/Banking/{bankId}/Transactions | Creates a new bank transaction
[**BankingAPI_deleteBank**](BankingAPI.md#BankingAPI_deleteBank) | **DELETE** /api/v2/AccountingService/Banking/{bankId} | Deletes a bank
[**BankingAPI_deleteBankAccount**](BankingAPI.md#BankingAPI_deleteBankAccount) | **DELETE** /api/v2/AccountingService/Banking/{bankId}/Accounts/{accountId} | Deletes a bank account
[**BankingAPI_deleteBankGuarantee**](BankingAPI.md#BankingAPI_deleteBankGuarantee) | **DELETE** /api/v2/AccountingService/Banking/{bankId}/Guarantees/{guaranteeId} | Deletes a bank guarantee
[**BankingAPI_deleteBankTransaction**](BankingAPI.md#BankingAPI_deleteBankTransaction) | **DELETE** /api/v2/AccountingService/Banking/{bankId}/Transactions/{transactionId} | Deletes a bank transaction
[**BankingAPI_getBank**](BankingAPI.md#BankingAPI_getBank) | **GET** /api/v2/AccountingService/Banking/{bankId} | Gets the current tenant bank
[**BankingAPI_getBankAccount**](BankingAPI.md#BankingAPI_getBankAccount) | **GET** /api/v2/AccountingService/Banking/{bankId}/Accounts/{accountId} | Gets the current tenant bank account
[**BankingAPI_getBankAccounts**](BankingAPI.md#BankingAPI_getBankAccounts) | **GET** /api/v2/AccountingService/Banking/{bankId}/Accounts | Gets the current tenant bank accounts
[**BankingAPI_getBankAccountsCount**](BankingAPI.md#BankingAPI_getBankAccountsCount) | **GET** /api/v2/AccountingService/Banking/{bankId}/Accounts/Count | Gets the current tenant bank accounts count
[**BankingAPI_getBankGuarantee**](BankingAPI.md#BankingAPI_getBankGuarantee) | **GET** /api/v2/AccountingService/Banking/{bankId}/Guarantees/{guaranteeId} | Gets the current tenant bank guarantee
[**BankingAPI_getBankGuarantees**](BankingAPI.md#BankingAPI_getBankGuarantees) | **GET** /api/v2/AccountingService/Banking/{bankId}/Guarantees | Gets the current tenant bank guarantees
[**BankingAPI_getBankGuaranteesCount**](BankingAPI.md#BankingAPI_getBankGuaranteesCount) | **GET** /api/v2/AccountingService/Banking/{bankId}/Guarantees/Count | Gets the current tenant bank guarantees count
[**BankingAPI_getBankTransaction**](BankingAPI.md#BankingAPI_getBankTransaction) | **GET** /api/v2/AccountingService/Banking/{bankId}/Transactions/{transactionId} | Gets the current tenant bank transaction
[**BankingAPI_getBankTransactions**](BankingAPI.md#BankingAPI_getBankTransactions) | **GET** /api/v2/AccountingService/Banking/{bankId}/Transactions | Gets the current tenant bank transactions
[**BankingAPI_getBankTransactionsCount**](BankingAPI.md#BankingAPI_getBankTransactionsCount) | **GET** /api/v2/AccountingService/Banking/{bankId}/Transactions/Count | Gets the current tenant bank transactions count
[**BankingAPI_getBanks**](BankingAPI.md#BankingAPI_getBanks) | **GET** /api/v2/AccountingService/Banking | Gets the current tenant banks
[**BankingAPI_getBanksCount**](BankingAPI.md#BankingAPI_getBanksCount) | **GET** /api/v2/AccountingService/Banking/Count | Gets the current tenant banks count
[**BankingAPI_updateBank**](BankingAPI.md#BankingAPI_updateBank) | **PUT** /api/v2/AccountingService/Banking/{bankId} | Updates a bank
[**BankingAPI_updateBankAccount**](BankingAPI.md#BankingAPI_updateBankAccount) | **PUT** /api/v2/AccountingService/Banking/{bankId}/Accounts/{accountId} | Updates a bank account
[**BankingAPI_updateBankGuarantee**](BankingAPI.md#BankingAPI_updateBankGuarantee) | **PUT** /api/v2/AccountingService/Banking/{bankId}/Guarantees/{guaranteeId} | Updates a bank guarantee
[**BankingAPI_updateBankTransaction**](BankingAPI.md#BankingAPI_updateBankTransaction) | **PUT** /api/v2/AccountingService/Banking/{bankId}/Transactions/{transactionId} | Updates a bank transaction


# **BankingAPI_createBank**
```c
// Creates a new bank
//
// Create a new bank.
//
bank_dto_envelope_t* BankingAPI_createBank(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, bank_create_dto_t *bank_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bank_create_dto** | **[bank_create_dto_t](bank_create_dto.md) \*** |  | [optional] 

### Return type

[bank_dto_envelope_t](bank_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_createBankAccount**
```c
// Creates a new bank account
//
// Create a new bank account.
//
bank_account_dto_envelope_t* BankingAPI_createBankAccount(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version, bank_account_create_dto_t *bank_account_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bank_account_create_dto** | **[bank_account_create_dto_t](bank_account_create_dto.md) \*** |  | [optional] 

### Return type

[bank_account_dto_envelope_t](bank_account_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_createBankGuarantee**
```c
// Creates a new bank guarantee
//
// Create a new bank guarantee.
//
bank_guarantee_dto_envelope_t* BankingAPI_createBankGuarantee(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version, bank_guarantee_create_dto_t *bank_guarantee_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bank_guarantee_create_dto** | **[bank_guarantee_create_dto_t](bank_guarantee_create_dto.md) \*** |  | [optional] 

### Return type

[bank_guarantee_dto_envelope_t](bank_guarantee_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_createBankTransaction**
```c
// Creates a new bank transaction
//
// Create a new bank transaction.
//
bank_transaction_dto_envelope_t* BankingAPI_createBankTransaction(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version, bank_transaction_create_dto_t *bank_transaction_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bank_transaction_create_dto** | **[bank_transaction_create_dto_t](bank_transaction_create_dto.md) \*** |  | [optional] 

### Return type

[bank_transaction_dto_envelope_t](bank_transaction_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_deleteBank**
```c
// Deletes a bank
//
// Delete a bank.
//
void BankingAPI_deleteBank(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_deleteBankAccount**
```c
// Deletes a bank account
//
// Delete a bank account.
//
void BankingAPI_deleteBankAccount(apiClient_t *apiClient, char *tenantId, char *bankId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_deleteBankGuarantee**
```c
// Deletes a bank guarantee
//
// Delete a bank guarantee.
//
void BankingAPI_deleteBankGuarantee(apiClient_t *apiClient, char *tenantId, char *bankId, char *guaranteeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**guaranteeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_deleteBankTransaction**
```c
// Deletes a bank transaction
//
// Delete a bank transaction.
//
void BankingAPI_deleteBankTransaction(apiClient_t *apiClient, char *tenantId, char *bankId, char *transactionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**transactionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_getBank**
```c
// Gets the current tenant bank
//
// Get the currently acting tenant bank.
//
bank_dto_envelope_t* BankingAPI_getBank(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[bank_dto_envelope_t](bank_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_getBankAccount**
```c
// Gets the current tenant bank account
//
// Get the currently acting tenant bank account.
//
bank_account_dto_envelope_t* BankingAPI_getBankAccount(apiClient_t *apiClient, char *tenantId, char *bankId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[bank_account_dto_envelope_t](bank_account_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_getBankAccounts**
```c
// Gets the current tenant bank accounts
//
// Get the currently acting tenant bank accounts.
//
bank_account_dto_list_envelope_t* BankingAPI_getBankAccounts(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[bank_account_dto_list_envelope_t](bank_account_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_getBankAccountsCount**
```c
// Gets the current tenant bank accounts count
//
// Get the currently acting tenant bank accounts count.
//
int32_envelope_t* BankingAPI_getBankAccountsCount(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
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

# **BankingAPI_getBankGuarantee**
```c
// Gets the current tenant bank guarantee
//
// Get the currently acting tenant bank guarantee.
//
bank_guarantee_dto_envelope_t* BankingAPI_getBankGuarantee(apiClient_t *apiClient, char *tenantId, char *bankId, char *guaranteeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**guaranteeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[bank_guarantee_dto_envelope_t](bank_guarantee_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_getBankGuarantees**
```c
// Gets the current tenant bank guarantees
//
// Get the currently acting tenant bank guarantees.
//
bank_guarantee_dto_list_envelope_t* BankingAPI_getBankGuarantees(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[bank_guarantee_dto_list_envelope_t](bank_guarantee_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_getBankGuaranteesCount**
```c
// Gets the current tenant bank guarantees count
//
// Get the currently acting tenant bank guarantees count.
//
int32_envelope_t* BankingAPI_getBankGuaranteesCount(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
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

# **BankingAPI_getBankTransaction**
```c
// Gets the current tenant bank transaction
//
// Get the currently acting tenant bank transaction.
//
bank_transaction_dto_envelope_t* BankingAPI_getBankTransaction(apiClient_t *apiClient, char *tenantId, char *bankId, char *transactionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**transactionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[bank_transaction_dto_envelope_t](bank_transaction_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_getBankTransactions**
```c
// Gets the current tenant bank transactions
//
// Get the currently acting tenant bank transactions.
//
bank_transaction_dto_list_envelope_t* BankingAPI_getBankTransactions(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[bank_transaction_dto_list_envelope_t](bank_transaction_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_getBankTransactionsCount**
```c
// Gets the current tenant bank transactions count
//
// Get the currently acting tenant bank transactions count.
//
int32_envelope_t* BankingAPI_getBankTransactionsCount(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
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

# **BankingAPI_getBanks**
```c
// Gets the current tenant banks
//
// Get the currently acting tenant banks.
//
bank_dto_list_envelope_t* BankingAPI_getBanks(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[bank_dto_list_envelope_t](bank_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_getBanksCount**
```c
// Gets the current tenant banks count
//
// Get the currently acting tenant banks count.
//
int32_envelope_t* BankingAPI_getBanksCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **BankingAPI_updateBank**
```c
// Updates a bank
//
// Update a bank.
//
bank_dto_envelope_t* BankingAPI_updateBank(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version, bank_update_dto_t *bank_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bank_update_dto** | **[bank_update_dto_t](bank_update_dto.md) \*** |  | [optional] 

### Return type

[bank_dto_envelope_t](bank_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_updateBankAccount**
```c
// Updates a bank account
//
// Update a bank account.
//
bank_account_dto_envelope_t* BankingAPI_updateBankAccount(apiClient_t *apiClient, char *tenantId, char *bankId, char *accountId, char *api_version, char *x_api_version, bank_account_update_dto_t *bank_account_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bank_account_update_dto** | **[bank_account_update_dto_t](bank_account_update_dto.md) \*** |  | [optional] 

### Return type

[bank_account_dto_envelope_t](bank_account_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_updateBankGuarantee**
```c
// Updates a bank guarantee
//
// Update a bank guarantee.
//
bank_guarantee_dto_envelope_t* BankingAPI_updateBankGuarantee(apiClient_t *apiClient, char *tenantId, char *bankId, char *guaranteeId, char *api_version, char *x_api_version, bank_guarantee_update_dto_t *bank_guarantee_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**guaranteeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bank_guarantee_update_dto** | **[bank_guarantee_update_dto_t](bank_guarantee_update_dto.md) \*** |  | [optional] 

### Return type

[bank_guarantee_dto_envelope_t](bank_guarantee_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankingAPI_updateBankTransaction**
```c
// Updates a bank transaction
//
// Update a bank transaction.
//
bank_transaction_dto_envelope_t* BankingAPI_updateBankTransaction(apiClient_t *apiClient, char *tenantId, char *bankId, char *transactionId, char *api_version, char *x_api_version, bank_transaction_update_dto_t *bank_transaction_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**bankId** | **char \*** |  | 
**transactionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bank_transaction_update_dto** | **[bank_transaction_update_dto_t](bank_transaction_update_dto.md) \*** |  | [optional] 

### Return type

[bank_transaction_dto_envelope_t](bank_transaction_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

