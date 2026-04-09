# WalletsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WalletsAPI_createWalletLocationAsync**](WalletsAPI.md#WalletsAPI_createWalletLocationAsync) | **POST** /api/v2/WalletsService/Wallets/{walletId}/Locations | Create Wallet Location
[**WalletsAPI_deleteWalletLocationAsync**](WalletsAPI.md#WalletsAPI_deleteWalletLocationAsync) | **DELETE** /api/v2/WalletsService/Wallets/{walletId}/Locations/{locationId} | Delete Wallet Location
[**WalletsAPI_getIncomingPaymentsAsync**](WalletsAPI.md#WalletsAPI_getIncomingPaymentsAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Payments/Incoming | Get Incoming Payments
[**WalletsAPI_getIncomingPaymentsCountAsync**](WalletsAPI.md#WalletsAPI_getIncomingPaymentsCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Payments/Incoming/Count | Get Incoming Payments Count
[**WalletsAPI_getIncomingWalletInvoicesAsync**](WalletsAPI.md#WalletsAPI_getIncomingWalletInvoicesAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Invoices/Incoming | Get Incoming Wallet Invoices
[**WalletsAPI_getIncomingWalletInvoicesCountAsync**](WalletsAPI.md#WalletsAPI_getIncomingWalletInvoicesCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Invoices/Incoming/Count | Get Incoming Wallet Invoices Count
[**WalletsAPI_getOutgoingPaymentsAsync**](WalletsAPI.md#WalletsAPI_getOutgoingPaymentsAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Payments/Outgoing | Get Outgoing Payments
[**WalletsAPI_getOutgoingPaymentsCountAsync**](WalletsAPI.md#WalletsAPI_getOutgoingPaymentsCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Payments/Outgoing/Count | Get Outgoing Payments Count
[**WalletsAPI_getOutgoingWalletInvoicesAsync**](WalletsAPI.md#WalletsAPI_getOutgoingWalletInvoicesAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Invoices/Outgoing | Get Outgoing Wallet Invoices
[**WalletsAPI_getOutgoingWalletInvoicesCountAsync**](WalletsAPI.md#WalletsAPI_getOutgoingWalletInvoicesCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Invoices/Outgoing/Count | Get Outgoing Wallet Invoices Count
[**WalletsAPI_getWalletDetailsAsync**](WalletsAPI.md#WalletsAPI_getWalletDetailsAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId} | Get Wallet Details
[**WalletsAPI_getWalletExtendedOrdersAsync**](WalletsAPI.md#WalletsAPI_getWalletExtendedOrdersAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Orders/Extended | Get Wallet Extended Orders
[**WalletsAPI_getWalletInvoicesAsync**](WalletsAPI.md#WalletsAPI_getWalletInvoicesAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Invoices | Get Wallet Invoices
[**WalletsAPI_getWalletInvoicesCountAsync**](WalletsAPI.md#WalletsAPI_getWalletInvoicesCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Invoices/Count | Get Wallet Invoices Count
[**WalletsAPI_getWalletLocationAsync**](WalletsAPI.md#WalletsAPI_getWalletLocationAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Locations/{locationId} | Get Wallet Location
[**WalletsAPI_getWalletLocationsAsync**](WalletsAPI.md#WalletsAPI_getWalletLocationsAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Locations | Get Wallet Locations
[**WalletsAPI_getWalletLocationsCountAsync**](WalletsAPI.md#WalletsAPI_getWalletLocationsCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Locations/Count | Get Wallet Locations Count
[**WalletsAPI_getWalletOrdersAsync**](WalletsAPI.md#WalletsAPI_getWalletOrdersAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Orders | Get Wallet Orders
[**WalletsAPI_getWalletOrdersCountAsync**](WalletsAPI.md#WalletsAPI_getWalletOrdersCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Orders/Count | Get Wallet Orders Count
[**WalletsAPI_getWalletPaymentsAsync**](WalletsAPI.md#WalletsAPI_getWalletPaymentsAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Payments | Get Wallet Payments
[**WalletsAPI_getWalletPaymentsCountAsync**](WalletsAPI.md#WalletsAPI_getWalletPaymentsCountAsync) | **GET** /api/v2/WalletsService/Wallets/{walletId}/Payments/Count | Get Wallet Payments Count
[**WalletsAPI_updateWalletLocationAsync**](WalletsAPI.md#WalletsAPI_updateWalletLocationAsync) | **PUT** /api/v2/WalletsService/Wallets/{walletId}/Locations/{locationId} | Update Wallet Location


# **WalletsAPI_createWalletLocationAsync**
```c
// Create Wallet Location
//
// Create a new location for a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_createWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version, location_create_dto_t *location_create_dto);
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

# **WalletsAPI_deleteWalletLocationAsync**
```c
// Delete Wallet Location
//
// Delete a specific location of a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_deleteWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId, char *api_version, char *x_api_version);
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

# **WalletsAPI_getWalletLocationAsync**
```c
// Get Wallet Location
//
// Get a specific location of a specific wallet by ID.
//
location_dto_envelope_t* WalletsAPI_getWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId, char *api_version, char *x_api_version);
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

# **WalletsAPI_getWalletLocationsAsync**
```c
// Get Wallet Locations
//
// Get locations of a specific wallet by ID.
//
location_dto_list_envelope_t* WalletsAPI_getWalletLocationsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
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

# **WalletsAPI_getWalletLocationsCountAsync**
```c
// Get Wallet Locations Count
//
// Get locations count of a specific wallet by ID.
//
int32_envelope_t* WalletsAPI_getWalletLocationsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);
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

# **WalletsAPI_updateWalletLocationAsync**
```c
// Update Wallet Location
//
// Update a specific location of a specific wallet by ID.
//
empty_envelope_t* WalletsAPI_updateWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId, char *api_version, char *x_api_version, location_update_dto_t *location_update_dto);
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

