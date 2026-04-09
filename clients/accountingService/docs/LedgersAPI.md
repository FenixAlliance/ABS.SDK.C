# LedgersAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LedgersAPI_createLedgerAsync**](LedgersAPI.md#LedgersAPI_createLedgerAsync) | **POST** /api/v2/AccountingService/Ledgers | Creates a new ledger
[**LedgersAPI_deleteLedgerAsync**](LedgersAPI.md#LedgersAPI_deleteLedgerAsync) | **DELETE** /api/v2/AccountingService/Ledgers/{ledgerId} | Deletes a ledger
[**LedgersAPI_getLedgerDetailsAsync**](LedgersAPI.md#LedgersAPI_getLedgerDetailsAsync) | **GET** /api/v2/AccountingService/Ledgers/{ledgerId} | Gets a ledger by ID
[**LedgersAPI_getLedgersAsync**](LedgersAPI.md#LedgersAPI_getLedgersAsync) | **GET** /api/v2/AccountingService/Ledgers | Retrieves all ledgers
[**LedgersAPI_getLedgersCountAsync**](LedgersAPI.md#LedgersAPI_getLedgersCountAsync) | **GET** /api/v2/AccountingService/Ledgers/Count | Counts ledgers
[**LedgersAPI_updateLedgerAsync**](LedgersAPI.md#LedgersAPI_updateLedgerAsync) | **PUT** /api/v2/AccountingService/Ledgers/{ledgerId} | Updates a ledger


# **LedgersAPI_createLedgerAsync**
```c
// Creates a new ledger
//
// Creates a new ledger for the current tenant.
//
empty_envelope_t* LedgersAPI_createLedgerAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, create_ledger_dto_t *create_ledger_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**create_ledger_dto** | **[create_ledger_dto_t](create_ledger_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LedgersAPI_deleteLedgerAsync**
```c
// Deletes a ledger
//
// Deletes the specified ledger.
//
empty_envelope_t* LedgersAPI_deleteLedgerAsync(apiClient_t *apiClient, char *tenantId, char *ledgerId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**ledgerId** | **char \*** |  | 
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

# **LedgersAPI_getLedgerDetailsAsync**
```c
// Gets a ledger by ID
//
// Retrieves the details of a ledger using its unique ID.
//
ledger_dto_envelope_t* LedgersAPI_getLedgerDetailsAsync(apiClient_t *apiClient, char *tenantId, char *ledgerId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**ledgerId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[ledger_dto_envelope_t](ledger_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LedgersAPI_getLedgersAsync**
```c
// Retrieves all ledgers
//
// Gets all ledgers for the current tenant with OData support.
//
ledger_dto_i_read_only_list_envelope_t* LedgersAPI_getLedgersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[ledger_dto_i_read_only_list_envelope_t](ledger_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LedgersAPI_getLedgersCountAsync**
```c
// Counts ledgers
//
// Gets the count of ledgers for the current tenant.
//
int32_envelope_t* LedgersAPI_getLedgersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **LedgersAPI_updateLedgerAsync**
```c
// Updates a ledger
//
// Updates the specified ledger.
//
empty_envelope_t* LedgersAPI_updateLedgerAsync(apiClient_t *apiClient, char *tenantId, char *ledgerId, char *api_version, char *x_api_version, update_ledger_dto_t *update_ledger_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**ledgerId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**update_ledger_dto** | **[update_ledger_dto_t](update_ledger_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

