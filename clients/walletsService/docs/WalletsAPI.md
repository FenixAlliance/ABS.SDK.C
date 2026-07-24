# WalletsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WalletsAPI_createLocationForWalletAsync**](WalletsAPI.md#WalletsAPI_createLocationForWalletAsync) | **POST** /api/v2/WalletsService/Wallets/{walletId}/Locations | Create Wallet Location
[**WalletsAPI_createWalletBankAccountAsync**](WalletsAPI.md#WalletsAPI_createWalletBankAccountAsync) | **POST** /api/v2/WalletsService/Wallets/{walletId}/BankAccounts | Create Wallet Bank Account
[**WalletsAPI_createWalletPaymentAsync**](WalletsAPI.md#WalletsAPI_createWalletPaymentAsync) | **POST** /api/v2/WalletsService/Wallets/{walletId}/Payments | Create Wallet Payment
[**WalletsAPI_createWalletTokenAsync**](WalletsAPI.md#WalletsAPI_createWalletTokenAsync) | **POST** /api/v2/WalletsService/Wallets/{walletId}/Tokens | Create Wallet Token
[**WalletsAPI_createWalletWithdrawRequestAsync**](WalletsAPI.md#WalletsAPI_createWalletWithdrawRequestAsync) | **POST** /api/v2/WalletsService/Wallets/{walletId}/Withdraws | Create Wallet Withdraw Request
[**WalletsAPI_deleteLocationForWalletAsync**](WalletsAPI.md#WalletsAPI_deleteLocationForWalletAsync) | **DELETE** /api/v2/WalletsService/Wallets/{walletId}/Locations/{locationId} | Delete Wallet Location
[**WalletsAPI_deleteWalletBankAccountAsync**](WalletsAPI.md#WalletsAPI_deleteWalletBankAccountAsync) | **DELETE** /api/v2/WalletsService/Wallets/{walletId}/BankAccounts/{bankAccountId} | Delete Wallet Bank Account
[**WalletsAPI_deleteWalletTokenAsync**](WalletsAPI.md#WalletsAPI_deleteWalletTokenAsync) | **DELETE** /api/v2/WalletsService/Wallets/{walletId}/Tokens/{tokenId} | Delete Wallet Token
[**WalletsAPI_getIncomingPaymentsAsync**](WalletsAPI.md#WalletsAPI_getIncomingPaymentsAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Payments/Incoming | Get Incoming Payments
[**WalletsAPI_getIncomingPaymentsCountAsync**](WalletsAPI.md#WalletsAPI_getIncomingPaymentsCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Payments/Incoming/Count | Get Incoming Payments Count
[**WalletsAPI_getIncomingWalletInvoicesAsync**](WalletsAPI.md#WalletsAPI_getIncomingWalletInvoicesAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Invoices/Incoming | Get Incoming Wallet Invoices
[**WalletsAPI_getIncomingWalletInvoicesCountAsync**](WalletsAPI.md#WalletsAPI_getIncomingWalletInvoicesCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Invoices/Incoming/Count | Get Incoming Wallet Invoices Count
[**WalletsAPI_getLocationForWalletAsync**](WalletsAPI.md#WalletsAPI_getLocationForWalletAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Locations/{locationId} | Get Wallet Location
[**WalletsAPI_getLocationsForWalletAsync**](WalletsAPI.md#WalletsAPI_getLocationsForWalletAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Locations | Get Wallet Locations
[**WalletsAPI_getLocationsForWalletCountAsync**](WalletsAPI.md#WalletsAPI_getLocationsForWalletCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Locations/Count | Get Wallet Locations Count
[**WalletsAPI_getOutgoingPaymentsAsync**](WalletsAPI.md#WalletsAPI_getOutgoingPaymentsAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Payments/Outgoing | Get Outgoing Payments
[**WalletsAPI_getOutgoingPaymentsCountAsync**](WalletsAPI.md#WalletsAPI_getOutgoingPaymentsCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Payments/Outgoing/Count | Get Outgoing Payments Count
[**WalletsAPI_getOutgoingWalletInvoicesAsync**](WalletsAPI.md#WalletsAPI_getOutgoingWalletInvoicesAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Invoices/Outgoing | Get Outgoing Wallet Invoices
[**WalletsAPI_getOutgoingWalletInvoicesCountAsync**](WalletsAPI.md#WalletsAPI_getOutgoingWalletInvoicesCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Invoices/Outgoing/Count | Get Outgoing Wallet Invoices Count
[**WalletsAPI_getWalletBankAccountAsync**](WalletsAPI.md#WalletsAPI_getWalletBankAccountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/BankAccounts/{bankAccountId} | Get Wallet Bank Account
[**WalletsAPI_getWalletBankAccountsAsync**](WalletsAPI.md#WalletsAPI_getWalletBankAccountsAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/BankAccounts | Get Wallet Bank Accounts
[**WalletsAPI_getWalletBankAccountsCountAsync**](WalletsAPI.md#WalletsAPI_getWalletBankAccountsCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/BankAccounts/Count | Get Wallet Bank Accounts Count
[**WalletsAPI_getWalletChargebacksAsync**](WalletsAPI.md#WalletsAPI_getWalletChargebacksAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Chargebacks | Get Wallet Chargebacks
[**WalletsAPI_getWalletChargebacksCountAsync**](WalletsAPI.md#WalletsAPI_getWalletChargebacksCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Chargebacks/Count | Get Wallet Chargebacks Count
[**WalletsAPI_getWalletDetailsAsync**](WalletsAPI.md#WalletsAPI_getWalletDetailsAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId} | Get Wallet Details
[**WalletsAPI_getWalletExtendedOrdersAsync**](WalletsAPI.md#WalletsAPI_getWalletExtendedOrdersAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Orders/Extended | Get Wallet Extended Orders
[**WalletsAPI_getWalletInvoicesAsync**](WalletsAPI.md#WalletsAPI_getWalletInvoicesAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Invoices | Get Wallet Invoices
[**WalletsAPI_getWalletInvoicesCountAsync**](WalletsAPI.md#WalletsAPI_getWalletInvoicesCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Invoices/Count | Get Wallet Invoices Count
[**WalletsAPI_getWalletOrdersAsync**](WalletsAPI.md#WalletsAPI_getWalletOrdersAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Orders | Get Wallet Orders
[**WalletsAPI_getWalletOrdersCountAsync**](WalletsAPI.md#WalletsAPI_getWalletOrdersCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Orders/Count | Get Wallet Orders Count
[**WalletsAPI_getWalletPaymentsAsync**](WalletsAPI.md#WalletsAPI_getWalletPaymentsAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Payments | Get Wallet Payments
[**WalletsAPI_getWalletPaymentsCountAsync**](WalletsAPI.md#WalletsAPI_getWalletPaymentsCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Payments/Count | Get Wallet Payments Count
[**WalletsAPI_getWalletQuotesAsync**](WalletsAPI.md#WalletsAPI_getWalletQuotesAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Quotes | Get Wallet Quotes
[**WalletsAPI_getWalletQuotesCountAsync**](WalletsAPI.md#WalletsAPI_getWalletQuotesCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Quotes/Count | Get Wallet Quotes Count
[**WalletsAPI_getWalletRefundsAsync**](WalletsAPI.md#WalletsAPI_getWalletRefundsAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Refunds | Get Wallet Refunds
[**WalletsAPI_getWalletRefundsCountAsync**](WalletsAPI.md#WalletsAPI_getWalletRefundsCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Refunds/Count | Get Wallet Refunds Count
[**WalletsAPI_getWalletTokenAsync**](WalletsAPI.md#WalletsAPI_getWalletTokenAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Tokens/{tokenId} | Get Wallet Token
[**WalletsAPI_getWalletTokensAsync**](WalletsAPI.md#WalletsAPI_getWalletTokensAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Tokens | Get Wallet Tokens
[**WalletsAPI_getWalletTokensCountAsync**](WalletsAPI.md#WalletsAPI_getWalletTokensCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Tokens/Count | Get Wallet Tokens Count
[**WalletsAPI_getWalletWithdrawRequestsAsync**](WalletsAPI.md#WalletsAPI_getWalletWithdrawRequestsAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/WithdrawRequests | Get Wallet Withdraw Requests
[**WalletsAPI_getWalletWithdrawRequestsCountAsync**](WalletsAPI.md#WalletsAPI_getWalletWithdrawRequestsCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/WithdrawRequests/Count | Get Wallet Withdraw Requests Count
[**WalletsAPI_getWalletWithdrawsAsync**](WalletsAPI.md#WalletsAPI_getWalletWithdrawsAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Withdraws | Get Wallet Withdraws
[**WalletsAPI_getWalletWithdrawsCountAsync**](WalletsAPI.md#WalletsAPI_getWalletWithdrawsCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Withdraws/Count | Get Wallet Withdraws Count
[**WalletsAPI_patchWalletBankAccountAsync**](WalletsAPI.md#WalletsAPI_patchWalletBankAccountAsync) | **PATCH** /api/v2/WalletsService/Wallets/{walletId}/BankAccounts/{bankAccountId} | Patch Wallet Bank Account
[**WalletsAPI_patchWalletTokenAsync**](WalletsAPI.md#WalletsAPI_patchWalletTokenAsync) | **PATCH** /api/v2/WalletsService/Wallets/{walletId}/Tokens/{tokenId} | Patch Wallet Token
[**WalletsAPI_updateLocationForWalletAsync**](WalletsAPI.md#WalletsAPI_updateLocationForWalletAsync) | **PUT** /api/v2/WalletsService/Wallets/{walletId}/Locations/{locationId} | Update Wallet Location
[**WalletsAPI_updateWalletBankAccountAsync**](WalletsAPI.md#WalletsAPI_updateWalletBankAccountAsync) | **PUT** /api/v2/WalletsService/Wallets/{walletId}/BankAccounts/{bankAccountId} | Update Wallet Bank Account
[**WalletsAPI_updateWalletTokenAsync**](WalletsAPI.md#WalletsAPI_updateWalletTokenAsync) | **PUT** /api/v2/WalletsService/Wallets/{walletId}/Tokens/{tokenId} | Update Wallet Token


# **WalletsAPI_createLocationForWalletAsync**
```c
// Create Wallet Location
//
// Create a new location for a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_createLocationForWalletAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version, location_create_dto_t *location_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**location_create_dto** | **[location_create_dto_t](location_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_createWalletBankAccountAsync**
```c
// Create Wallet Bank Account
//
// Create a new bank account for a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_createWalletBankAccountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version, bank_account_create_dto_t *bank_account_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bank_account_create_dto** | **[bank_account_create_dto_t](bank_account_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_createWalletPaymentAsync**
```c
// Create Wallet Payment
//
// Create a new payment for a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_createWalletPaymentAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version, payment_create_dto_t *payment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**payment_create_dto** | **[payment_create_dto_t](payment_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_createWalletTokenAsync**
```c
// Create Wallet Token
//
// Create a new payment token for a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_createWalletTokenAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version, payment_token_create_dto_t *payment_token_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**payment_token_create_dto** | **[payment_token_create_dto_t](payment_token_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_createWalletWithdrawRequestAsync**
```c
// Create Wallet Withdraw Request
//
// Create a new withdraw request for a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_createWalletWithdrawRequestAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version, wallet_withdraw_request_create_dto_t *wallet_withdraw_request_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**wallet_withdraw_request_create_dto** | **[wallet_withdraw_request_create_dto_t](wallet_withdraw_request_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_deleteLocationForWalletAsync**
```c
// Delete Wallet Location
//
// Delete a specific location of a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_deleteLocationForWalletAsync(apiClient_t *apiClient, char *walletId, char *locationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**locationId** | **char \*** |  | 
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

# **WalletsAPI_deleteWalletBankAccountAsync**
```c
// Delete Wallet Bank Account
//
// Delete a specific bank account of a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_deleteWalletBankAccountAsync(apiClient_t *apiClient, char *walletId, char *bankAccountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**bankAccountId** | **char \*** |  | 
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

# **WalletsAPI_deleteWalletTokenAsync**
```c
// Delete Wallet Token
//
// Delete a specific payment token of a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_deleteWalletTokenAsync(apiClient_t *apiClient, char *walletId, char *tokenId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**tokenId** | **char \*** |  | 
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

# **WalletsAPI_getIncomingPaymentsAsync**
```c
// Get Incoming Payments
//
// Get incoming payments of a specific wallet by ID.
//
payment_dto_list_envelope_t* WalletsAPI_getIncomingPaymentsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_dto_list_envelope_t](payment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getIncomingPaymentsCountAsync**
```c
// Get Incoming Payments Count
//
// Get incoming payments count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getIncomingPaymentsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getIncomingWalletInvoicesAsync**
```c
// Get Incoming Wallet Invoices
//
// Get incoming invoices of a specific wallet by ID.
//
invoice_dto_list_envelope_t* WalletsAPI_getIncomingWalletInvoicesAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[invoice_dto_list_envelope_t](invoice_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getIncomingWalletInvoicesCountAsync**
```c
// Get Incoming Wallet Invoices Count
//
// Get incoming invoices count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getIncomingWalletInvoicesCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getLocationForWalletAsync**
```c
// Get Wallet Location
//
// Get a specific location of a specific wallet by ID.
//
location_dto_envelope_t* WalletsAPI_getLocationForWalletAsync(apiClient_t *apiClient, char *walletId, char *locationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**locationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[location_dto_envelope_t](location_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getLocationsForWalletAsync**
```c
// Get Wallet Locations
//
// Get locations of a specific wallet by ID.
//
location_dto_list_envelope_t* WalletsAPI_getLocationsForWalletAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[location_dto_list_envelope_t](location_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getLocationsForWalletCountAsync**
```c
// Get Wallet Locations Count
//
// Get locations count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getLocationsForWalletCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getOutgoingPaymentsAsync**
```c
// Get Outgoing Payments
//
// Get outgoing payments of a specific wallet by ID.
//
payment_dto_list_envelope_t* WalletsAPI_getOutgoingPaymentsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_dto_list_envelope_t](payment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getOutgoingPaymentsCountAsync**
```c
// Get Outgoing Payments Count
//
// Get outgoing payments count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getOutgoingPaymentsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getOutgoingWalletInvoicesAsync**
```c
// Get Outgoing Wallet Invoices
//
// Get outgoing invoices of a specific wallet by ID.
//
invoice_dto_list_envelope_t* WalletsAPI_getOutgoingWalletInvoicesAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[invoice_dto_list_envelope_t](invoice_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getOutgoingWalletInvoicesCountAsync**
```c
// Get Outgoing Wallet Invoices Count
//
// Get outgoing invoices count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getOutgoingWalletInvoicesCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getWalletBankAccountAsync**
```c
// Get Wallet Bank Account
//
// Get a specific bank account of a specific wallet by ID.
//
bank_account_dto_envelope_t* WalletsAPI_getWalletBankAccountAsync(apiClient_t *apiClient, char *walletId, char *bankAccountId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**bankAccountId** | **char \*** |  | 
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

# **WalletsAPI_getWalletBankAccountsAsync**
```c
// Get Wallet Bank Accounts
//
// Get bank accounts of a specific wallet by ID.
//
bank_account_dto_list_envelope_t* WalletsAPI_getWalletBankAccountsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getWalletBankAccountsCountAsync**
```c
// Get Wallet Bank Accounts Count
//
// Get bank accounts count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getWalletBankAccountsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getWalletChargebacksAsync**
```c
// Get Wallet Chargebacks
//
// Get chargebacks of a specific wallet by ID.
//
payment_chargeback_dto_list_envelope_t* WalletsAPI_getWalletChargebacksAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_chargeback_dto_list_envelope_t](payment_chargeback_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getWalletChargebacksCountAsync**
```c
// Get Wallet Chargebacks Count
//
// Get chargebacks count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getWalletChargebacksCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getWalletDetailsAsync**
```c
// Get Wallet Details
//
// Get details of a specific wallet by ID.
//
wallet_dto_envelope_t* WalletsAPI_getWalletDetailsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[wallet_dto_envelope_t](wallet_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getWalletExtendedOrdersAsync**
```c
// Get Wallet Extended Orders
//
// Get extended orders of a specific wallet by ID.
//
extended_order_dto_list_envelope_t* WalletsAPI_getWalletExtendedOrdersAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[extended_order_dto_list_envelope_t](extended_order_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getWalletInvoicesAsync**
```c
// Get Wallet Invoices
//
// Get invoices of a specific wallet by ID.
//
invoice_dto_list_envelope_t* WalletsAPI_getWalletInvoicesAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[invoice_dto_list_envelope_t](invoice_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getWalletInvoicesCountAsync**
```c
// Get Wallet Invoices Count
//
// Get invoices count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getWalletInvoicesCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getWalletOrdersAsync**
```c
// Get Wallet Orders
//
// Get orders of a specific wallet by ID.
//
order_dto_list_envelope_t* WalletsAPI_getWalletOrdersAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[order_dto_list_envelope_t](order_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getWalletOrdersCountAsync**
```c
// Get Wallet Orders Count
//
// Get orders count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getWalletOrdersCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getWalletPaymentsAsync**
```c
// Get Wallet Payments
//
// Get payments of a specific wallet by ID.
//
payment_dto_list_envelope_t* WalletsAPI_getWalletPaymentsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_dto_list_envelope_t](payment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getWalletPaymentsCountAsync**
```c
// Get Wallet Payments Count
//
// Get payments count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getWalletPaymentsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getWalletQuotesAsync**
```c
// Get Wallet Quotes
//
// Get quotes of a specific wallet by ID.
//
quote_dto_list_envelope_t* WalletsAPI_getWalletQuotesAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[quote_dto_list_envelope_t](quote_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getWalletQuotesCountAsync**
```c
// Get Wallet Quotes Count
//
// Get quotes count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getWalletQuotesCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getWalletRefundsAsync**
```c
// Get Wallet Refunds
//
// Get refunds of a specific wallet by ID.
//
payment_refund_dto_list_envelope_t* WalletsAPI_getWalletRefundsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_refund_dto_list_envelope_t](payment_refund_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getWalletRefundsCountAsync**
```c
// Get Wallet Refunds Count
//
// Get refunds count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getWalletRefundsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getWalletTokenAsync**
```c
// Get Wallet Token
//
// Get a specific payment token of a specific wallet by ID.
//
payment_token_dto_envelope_t* WalletsAPI_getWalletTokenAsync(apiClient_t *apiClient, char *walletId, char *tokenId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**tokenId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_token_dto_envelope_t](payment_token_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getWalletTokensAsync**
```c
// Get Wallet Tokens
//
// Get payment tokens of a specific wallet by ID.
//
payment_token_dto_list_envelope_t* WalletsAPI_getWalletTokensAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_token_dto_list_envelope_t](payment_token_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getWalletTokensCountAsync**
```c
// Get Wallet Tokens Count
//
// Get payment tokens count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getWalletTokensCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getWalletWithdrawRequestsAsync**
```c
// Get Wallet Withdraw Requests
//
// Get withdraw requests of a specific wallet by ID.
//
wallet_withdraw_request_dto_list_envelope_t* WalletsAPI_getWalletWithdrawRequestsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[wallet_withdraw_request_dto_list_envelope_t](wallet_withdraw_request_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getWalletWithdrawRequestsCountAsync**
```c
// Get Wallet Withdraw Requests Count
//
// Get withdraw requests count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getWalletWithdrawRequestsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_getWalletWithdrawsAsync**
```c
// Get Wallet Withdraws
//
// Get withdraws of a specific wallet by ID.
//
wallet_withdraw_dto_list_envelope_t* WalletsAPI_getWalletWithdrawsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[wallet_withdraw_dto_list_envelope_t](wallet_withdraw_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_getWalletWithdrawsCountAsync**
```c
// Get Wallet Withdraws Count
//
// Get withdraws count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getWalletWithdrawsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
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

# **WalletsAPI_patchWalletBankAccountAsync**
```c
// Patch Wallet Bank Account
//
// Partially update a specific bank account of a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_patchWalletBankAccountAsync(apiClient_t *apiClient, char *walletId, char *bankAccountId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**bankAccountId** | **char \*** |  | 
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

# **WalletsAPI_patchWalletTokenAsync**
```c
// Patch Wallet Token
//
// Partially update a specific payment token of a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_patchWalletTokenAsync(apiClient_t *apiClient, char *walletId, char *tokenId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**tokenId** | **char \*** |  | 
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

# **WalletsAPI_updateLocationForWalletAsync**
```c
// Update Wallet Location
//
// Update a specific location of a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_updateLocationForWalletAsync(apiClient_t *apiClient, char *walletId, char *locationId, char *api_version, char *x_api_version, location_update_dto_t *location_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**locationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**location_update_dto** | **[location_update_dto_t](location_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_updateWalletBankAccountAsync**
```c
// Update Wallet Bank Account
//
// Update a specific bank account of a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_updateWalletBankAccountAsync(apiClient_t *apiClient, char *walletId, char *bankAccountId, char *api_version, char *x_api_version, bank_account_update_dto_t *bank_account_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**bankAccountId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bank_account_update_dto** | **[bank_account_update_dto_t](bank_account_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WalletsAPI_updateWalletTokenAsync**
```c
// Update Wallet Token
//
// Update a specific payment token of a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_updateWalletTokenAsync(apiClient_t *apiClient, char *walletId, char *tokenId, char *api_version, char *x_api_version, payment_token_update_dto_t *payment_token_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**tokenId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**payment_token_update_dto** | **[payment_token_update_dto_t](payment_token_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

