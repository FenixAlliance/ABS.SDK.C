# AccountsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AccountsAPI_balanceAccountAsync**](AccountsAPI.md#AccountsAPI_balanceAccountAsync) | **POST** /api/v2/AccountingService/Accounts/{accountId}/Balance | Balance account
[**AccountsAPI_balanceRootAccountAsync**](AccountsAPI.md#AccountsAPI_balanceRootAccountAsync) | **POST** /api/v2/AccountingService/Accounts/Root/Balance | Balance root account
[**AccountsAPI_createAccountAsync**](AccountsAPI.md#AccountsAPI_createAccountAsync) | **POST** /api/v2/AccountingService/Accounts | Get root accounts
[**AccountsAPI_createAccountCreditAsync**](AccountsAPI.md#AccountsAPI_createAccountCreditAsync) | **POST** /api/v2/AccountingService/Accounts/{accountId}/Credits | Create account credit
[**AccountsAPI_createAccountDebitAsync**](AccountsAPI.md#AccountsAPI_createAccountDebitAsync) | **POST** /api/v2/AccountingService/Accounts/{accountId}/Debits | Create account debit
[**AccountsAPI_createAccountEntryAsync**](AccountsAPI.md#AccountsAPI_createAccountEntryAsync) | **POST** /api/v2/AccountingService/Accounts/{accountId}/Entries | Create account entry
[**AccountsAPI_createAccountRelationAsync**](AccountsAPI.md#AccountsAPI_createAccountRelationAsync) | **POST** /api/v2/AccountingService/Accounts/Relations | Create account relation
[**AccountsAPI_createAccountTypeAsync**](AccountsAPI.md#AccountsAPI_createAccountTypeAsync) | **POST** /api/v2/AccountingService/Accounts/Types | Create account type
[**AccountsAPI_deleteAccountAsync**](AccountsAPI.md#AccountsAPI_deleteAccountAsync) | **DELETE** /api/v2/AccountingService/Accounts/{accountId} | Delete an account
[**AccountsAPI_deleteAccountEntryAsync**](AccountsAPI.md#AccountsAPI_deleteAccountEntryAsync) | **DELETE** /api/v2/AccountingService/Accounts/{accountId}/Entries/{entryId} | Delete account entry
[**AccountsAPI_deleteAccountRelationAsync**](AccountsAPI.md#AccountsAPI_deleteAccountRelationAsync) | **DELETE** /api/v2/AccountingService/Accounts/Relations/{accountRelationId} | Delete account relation
[**AccountsAPI_deleteAccountTypeAsync**](AccountsAPI.md#AccountsAPI_deleteAccountTypeAsync) | **DELETE** /api/v2/AccountingService/Accounts/Types/{accountTypeId} | Delete account type
[**AccountsAPI_getAccountAggregateAsync**](AccountsAPI.md#AccountsAPI_getAccountAggregateAsync) | **POST** /api/v2/AccountingService/Accounts/Aggregate | Get account aggregate
[**AccountsAPI_getAccountCreditsAsync**](AccountsAPI.md#AccountsAPI_getAccountCreditsAsync) | **GET** /api/v2/AccountingService/Accounts/{accountId}/Credits | Get account credits
[**AccountsAPI_getAccountCreditsCountAsync**](AccountsAPI.md#AccountsAPI_getAccountCreditsCountAsync) | **GET** /api/v2/AccountingService/Accounts/{accountId}/Credits/Count | Get account credits count
[**AccountsAPI_getAccountDebitsAsync**](AccountsAPI.md#AccountsAPI_getAccountDebitsAsync) | **GET** /api/v2/AccountingService/Accounts/{accountId}/Debits | Get account debits
[**AccountsAPI_getAccountDebitsCountAsync**](AccountsAPI.md#AccountsAPI_getAccountDebitsCountAsync) | **GET** /api/v2/AccountingService/Accounts/{accountId}/Debits/Count | Get account debits count
[**AccountsAPI_getAccountDetailsAsync**](AccountsAPI.md#AccountsAPI_getAccountDetailsAsync) | **GET** /api/v2/AccountingService/Accounts/{accountId} | Get account details
[**AccountsAPI_getAccountEntriesAsync**](AccountsAPI.md#AccountsAPI_getAccountEntriesAsync) | **GET** /api/v2/AccountingService/Accounts/{accountId}/Entries | Get account entries
[**AccountsAPI_getAccountEntryAsync**](AccountsAPI.md#AccountsAPI_getAccountEntryAsync) | **GET** /api/v2/AccountingService/Accounts/{accountId}/Entries/{entryId} | Get account entry
[**AccountsAPI_getAccountRelationsAsync**](AccountsAPI.md#AccountsAPI_getAccountRelationsAsync) | **GET** /api/v2/AccountingService/Accounts/Relations | Get account relations
[**AccountsAPI_getAccountRelationsCountAsync**](AccountsAPI.md#AccountsAPI_getAccountRelationsCountAsync) | **GET** /api/v2/AccountingService/Accounts/Relations/Count | Get account relations count
[**AccountsAPI_getAccountTypesAsync**](AccountsAPI.md#AccountsAPI_getAccountTypesAsync) | **GET** /api/v2/AccountingService/Accounts/Types | Get account types
[**AccountsAPI_getAccountTypesCountAsync**](AccountsAPI.md#AccountsAPI_getAccountTypesCountAsync) | **GET** /api/v2/AccountingService/Accounts/Types/Count | Get account types count
[**AccountsAPI_getAccountsAsync**](AccountsAPI.md#AccountsAPI_getAccountsAsync) | **GET** /api/v2/AccountingService/Accounts | Creates a new account
[**AccountsAPI_getAccountsCountAsync**](AccountsAPI.md#AccountsAPI_getAccountsCountAsync) | **GET** /api/v2/AccountingService/Accounts/Count | Get the number of accounts
[**AccountsAPI_getChildAccountsAsync**](AccountsAPI.md#AccountsAPI_getChildAccountsAsync) | **GET** /api/v2/AccountingService/Accounts/{accountId}/Children | Get child accounts
[**AccountsAPI_getCreditAccountEntriesAsync**](AccountsAPI.md#AccountsAPI_getCreditAccountEntriesAsync) | **GET** /api/v2/AccountingService/Accounts/{accountId}/Entries/Credit | Get credit account entries
[**AccountsAPI_getDebitAccountEntriesAsync**](AccountsAPI.md#AccountsAPI_getDebitAccountEntriesAsync) | **GET** /api/v2/AccountingService/Accounts/{accountId}/Entries/Debit | Get debit account entries
[**AccountsAPI_getRootAccountsAsync**](AccountsAPI.md#AccountsAPI_getRootAccountsAsync) | **GET** /api/v2/AccountingService/Accounts/Root | Get root accounts
[**AccountsAPI_patchAccountAsync**](AccountsAPI.md#AccountsAPI_patchAccountAsync) | **PATCH** /api/v2/AccountingService/Accounts/{accountId} | Patch an account
[**AccountsAPI_updateAccountAsync**](AccountsAPI.md#AccountsAPI_updateAccountAsync) | **PUT** /api/v2/AccountingService/Accounts/{accountId} | Update an account
[**AccountsAPI_updateAccountEntryAsync**](AccountsAPI.md#AccountsAPI_updateAccountEntryAsync) | **PUT** /api/v2/AccountingService/Accounts/{accountId}/Entries/{entryId} | Update account entry
[**AccountsAPI_updateAccountRelationAsync**](AccountsAPI.md#AccountsAPI_updateAccountRelationAsync) | **PUT** /api/v2/AccountingService/Accounts/Relations/{accountRelationId} | Update account relation
[**AccountsAPI_updateAccountTypeAsync**](AccountsAPI.md#AccountsAPI_updateAccountTypeAsync) | **PUT** /api/v2/AccountingService/Accounts/Types/{accountTypeId} | Update account type


# **AccountsAPI_balanceAccountAsync**
```c
// Balance account
//
// Balance account.
//
account_dto_envelope_t* AccountsAPI_balanceAccountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[account_dto_envelope_t](account_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_balanceRootAccountAsync**
```c
// Balance root account
//
// Balance root account.
//
account_dto_list_envelope_t* AccountsAPI_balanceRootAccountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[account_dto_list_envelope_t](account_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_createAccountAsync**
```c
// Get root accounts
//
// Get root accounts.
//
account_dto_list_envelope_t* AccountsAPI_createAccountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, account_create_dto_t *account_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**account_create_dto** | **[account_create_dto_t](account_create_dto.md) \*** |  | [optional] 

### Return type

[account_dto_list_envelope_t](account_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_createAccountCreditAsync**
```c
// Create account credit
//
// Create account credit.
//
accounting_entry_dto_list_envelope_t* AccountsAPI_createAccountCreditAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, accounting_entry_create_dto_t *accounting_entry_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**accounting_entry_create_dto** | **[accounting_entry_create_dto_t](accounting_entry_create_dto.md) \*** |  | [optional] 

### Return type

[accounting_entry_dto_list_envelope_t](accounting_entry_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_createAccountDebitAsync**
```c
// Create account debit
//
// Create account debit.
//
accounting_entry_dto_list_envelope_t* AccountsAPI_createAccountDebitAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, accounting_entry_create_dto_t *accounting_entry_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**accounting_entry_create_dto** | **[accounting_entry_create_dto_t](accounting_entry_create_dto.md) \*** |  | [optional] 

### Return type

[accounting_entry_dto_list_envelope_t](accounting_entry_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_createAccountEntryAsync**
```c
// Create account entry
//
// Create account entry.
//
accounting_entry_dto_envelope_t* AccountsAPI_createAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, accounting_entry_create_dto_t *accounting_entry_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**accounting_entry_create_dto** | **[accounting_entry_create_dto_t](accounting_entry_create_dto.md) \*** |  | [optional] 

### Return type

[accounting_entry_dto_envelope_t](accounting_entry_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_createAccountRelationAsync**
```c
// Create account relation
//
// Create account relation.
//
empty_envelope_t* AccountsAPI_createAccountRelationAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, account_relation_create_dto_t *account_relation_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**account_relation_create_dto** | **[account_relation_create_dto_t](account_relation_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_createAccountTypeAsync**
```c
// Create account type
//
// Create account type.
//
empty_envelope_t* AccountsAPI_createAccountTypeAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, account_type_create_dto_t *account_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**account_type_create_dto** | **[account_type_create_dto_t](account_type_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_deleteAccountAsync**
```c
// Delete an account
//
// Delete an account.
//
empty_envelope_t* AccountsAPI_deleteAccountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
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

# **AccountsAPI_deleteAccountEntryAsync**
```c
// Delete account entry
//
// Delete account entry.
//
empty_envelope_t* AccountsAPI_deleteAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *entryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**entryId** | **char \*** |  | 
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

# **AccountsAPI_deleteAccountRelationAsync**
```c
// Delete account relation
//
// Delete account relation.
//
empty_envelope_t* AccountsAPI_deleteAccountRelationAsync(apiClient_t *apiClient, char *tenantId, char *accountRelationId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountRelationId** | **char \*** |  | 
**accountId** | **char \*** |  | 
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

# **AccountsAPI_deleteAccountTypeAsync**
```c
// Delete account type
//
// Delete account type.
//
empty_envelope_t* AccountsAPI_deleteAccountTypeAsync(apiClient_t *apiClient, char *tenantId, char *accountTypeId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountTypeId** | **char \*** |  | 
**accountId** | **char \*** |  | 
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

# **AccountsAPI_getAccountAggregateAsync**
```c
// Get account aggregate
//
// Get account aggregate.
//
accounting_entry_dto_list_envelope_t* AccountsAPI_getAccountAggregateAsync(apiClient_t *apiClient, char *tenantId, char *currencyId, char *api_version, char *x_api_version, list_t *account_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**currencyId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**account_dto** | **[list_t](account_dto.md) \*** |  | [optional] 

### Return type

[accounting_entry_dto_list_envelope_t](accounting_entry_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_getAccountCreditsAsync**
```c
// Get account credits
//
// Get account credits.
//
accounting_entry_dto_list_envelope_t* AccountsAPI_getAccountCreditsAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[accounting_entry_dto_list_envelope_t](accounting_entry_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_getAccountCreditsCountAsync**
```c
// Get account credits count
//
// Get account credits count.
//
int32_envelope_t* AccountsAPI_getAccountCreditsCountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
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

# **AccountsAPI_getAccountDebitsAsync**
```c
// Get account debits
//
// Get account debits.
//
accounting_entry_dto_list_envelope_t* AccountsAPI_getAccountDebitsAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[accounting_entry_dto_list_envelope_t](accounting_entry_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_getAccountDebitsCountAsync**
```c
// Get account debits count
//
// Get account debits count.
//
int32_envelope_t* AccountsAPI_getAccountDebitsCountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
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

# **AccountsAPI_getAccountDetailsAsync**
```c
// Get account details
//
// Get account details.
//
account_dto_envelope_t* AccountsAPI_getAccountDetailsAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[account_dto_envelope_t](account_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_getAccountEntriesAsync**
```c
// Get account entries
//
// Get account entries.
//
accounting_entry_dto_list_envelope_t* AccountsAPI_getAccountEntriesAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[accounting_entry_dto_list_envelope_t](accounting_entry_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_getAccountEntryAsync**
```c
// Get account entry
//
// Get account entry.
//
accounting_entry_dto_envelope_t* AccountsAPI_getAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *entryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**entryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[accounting_entry_dto_envelope_t](accounting_entry_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_getAccountRelationsAsync**
```c
// Get account relations
//
// Get account relations.
//
account_relation_dto_list_envelope_t* AccountsAPI_getAccountRelationsAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[account_relation_dto_list_envelope_t](account_relation_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_getAccountRelationsCountAsync**
```c
// Get account relations count
//
// Get account relations count.
//
int32_envelope_t* AccountsAPI_getAccountRelationsCountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
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

# **AccountsAPI_getAccountTypesAsync**
```c
// Get account types
//
// Get account types.
//
account_type_dto_list_envelope_t* AccountsAPI_getAccountTypesAsync(apiClient_t *apiClient, char *tenantId, char *accountTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[account_type_dto_list_envelope_t](account_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_getAccountTypesCountAsync**
```c
// Get account types count
//
// Get account types count.
//
int32_envelope_t* AccountsAPI_getAccountTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *accountTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountTypeId** | **char \*** |  | 
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

# **AccountsAPI_getAccountsAsync**
```c
// Creates a new account
//
// Creates a new account.
//
account_dto_list_envelope_t* AccountsAPI_getAccountsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[account_dto_list_envelope_t](account_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_getAccountsCountAsync**
```c
// Get the number of accounts
//
// Get the number of accounts.
//
int32_envelope_t* AccountsAPI_getAccountsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **AccountsAPI_getChildAccountsAsync**
```c
// Get child accounts
//
// Get child accounts.
//
account_dto_list_envelope_t* AccountsAPI_getChildAccountsAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[account_dto_list_envelope_t](account_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_getCreditAccountEntriesAsync**
```c
// Get credit account entries
//
// Get credit account entries.
//
accounting_entry_dto_list_envelope_t* AccountsAPI_getCreditAccountEntriesAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[accounting_entry_dto_list_envelope_t](accounting_entry_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_getDebitAccountEntriesAsync**
```c
// Get debit account entries
//
// Get debit account entries.
//
accounting_entry_dto_list_envelope_t* AccountsAPI_getDebitAccountEntriesAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[accounting_entry_dto_list_envelope_t](accounting_entry_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_getRootAccountsAsync**
```c
// Get root accounts
//
// Get root accounts.
//
account_dto_list_envelope_t* AccountsAPI_getRootAccountsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[account_dto_list_envelope_t](account_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_patchAccountAsync**
```c
// Patch an account
//
// Patch an account.
//
empty_envelope_t* AccountsAPI_patchAccountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_updateAccountAsync**
```c
// Update an account
//
// Update an account.
//
account_dto_envelope_t* AccountsAPI_updateAccountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, account_update_dto_t *account_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**account_update_dto** | **[account_update_dto_t](account_update_dto.md) \*** |  | [optional] 

### Return type

[account_dto_envelope_t](account_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_updateAccountEntryAsync**
```c
// Update account entry
//
// Update account entry.
//
empty_envelope_t* AccountsAPI_updateAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *entryId, char *api_version, char *x_api_version, accounting_entry_update_dto_t *accounting_entry_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**entryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**accounting_entry_update_dto** | **[accounting_entry_update_dto_t](accounting_entry_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_updateAccountRelationAsync**
```c
// Update account relation
//
// Update account relation.
//
empty_envelope_t* AccountsAPI_updateAccountRelationAsync(apiClient_t *apiClient, char *tenantId, char *accountRelationId, char *accountId, char *api_version, char *x_api_version, account_relation_update_dto_t *account_relation_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountRelationId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**account_relation_update_dto** | **[account_relation_update_dto_t](account_relation_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountsAPI_updateAccountTypeAsync**
```c
// Update account type
//
// Update account type.
//
empty_envelope_t* AccountsAPI_updateAccountTypeAsync(apiClient_t *apiClient, char *tenantId, char *accountTypeId, char *accountId, char *api_version, char *x_api_version, account_type_update_dto_t *account_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountTypeId** | **char \*** |  | 
**accountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**account_type_update_dto** | **[account_type_update_dto_t](account_type_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

