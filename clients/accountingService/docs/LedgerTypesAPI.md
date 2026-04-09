# LedgerTypesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LedgerTypesAPI_createLedgerTypeAsync**](LedgerTypesAPI.md#LedgerTypesAPI_createLedgerTypeAsync) | **POST** /api/v2/AccountingService/LedgerTypes | Creates a new ledger type
[**LedgerTypesAPI_deleteLedgerTypeAsync**](LedgerTypesAPI.md#LedgerTypesAPI_deleteLedgerTypeAsync) | **DELETE** /api/v2/AccountingService/LedgerTypes/{ledgerTypeId} | Deletes a ledger type
[**LedgerTypesAPI_getLedgerTypeDetailsAsync**](LedgerTypesAPI.md#LedgerTypesAPI_getLedgerTypeDetailsAsync) | **GET** /api/v2/AccountingService/LedgerTypes/{ledgerTypeId} | Gets a ledger type by ID
[**LedgerTypesAPI_getLedgerTypesAsync**](LedgerTypesAPI.md#LedgerTypesAPI_getLedgerTypesAsync) | **GET** /api/v2/AccountingService/LedgerTypes | Retrieves all ledger types
[**LedgerTypesAPI_getLedgerTypesCountAsync**](LedgerTypesAPI.md#LedgerTypesAPI_getLedgerTypesCountAsync) | **GET** /api/v2/AccountingService/LedgerTypes/Count | Counts ledger types
[**LedgerTypesAPI_updateLedgerTypeAsync**](LedgerTypesAPI.md#LedgerTypesAPI_updateLedgerTypeAsync) | **PUT** /api/v2/AccountingService/LedgerTypes/{ledgerTypeId} | Updates a ledger type


# **LedgerTypesAPI_createLedgerTypeAsync**
```c
// Creates a new ledger type
//
// Creates a new ledger type for the current tenant.
//
empty_envelope_t* LedgerTypesAPI_createLedgerTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, ledger_type_create_dto_t *ledger_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**ledger_type_create_dto** | **[ledger_type_create_dto_t](ledger_type_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LedgerTypesAPI_deleteLedgerTypeAsync**
```c
// Deletes a ledger type
//
// Deletes the specified ledger type.
//
empty_envelope_t* LedgerTypesAPI_deleteLedgerTypeAsync(apiClient_t *apiClient, char *tenantId, char *ledgerTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**ledgerTypeId** | **char \*** |  | 
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

# **LedgerTypesAPI_getLedgerTypeDetailsAsync**
```c
// Gets a ledger type by ID
//
// Retrieves the details of a ledger type using its unique ID.
//
ledger_type_dto_envelope_t* LedgerTypesAPI_getLedgerTypeDetailsAsync(apiClient_t *apiClient, char *tenantId, char *ledgerTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**ledgerTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[ledger_type_dto_envelope_t](ledger_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LedgerTypesAPI_getLedgerTypesAsync**
```c
// Retrieves all ledger types
//
// Gets all ledger types for the current tenant with OData support.
//
ledger_type_dto_i_read_only_list_envelope_t* LedgerTypesAPI_getLedgerTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[ledger_type_dto_i_read_only_list_envelope_t](ledger_type_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LedgerTypesAPI_getLedgerTypesCountAsync**
```c
// Counts ledger types
//
// Gets the count of ledger types for the current tenant.
//
int32_envelope_t* LedgerTypesAPI_getLedgerTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **LedgerTypesAPI_updateLedgerTypeAsync**
```c
// Updates a ledger type
//
// Updates the specified ledger type.
//
empty_envelope_t* LedgerTypesAPI_updateLedgerTypeAsync(apiClient_t *apiClient, char *tenantId, char *ledgerTypeId, char *api_version, char *x_api_version, ledger_type_update_dto_t *ledger_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**ledgerTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**ledger_type_update_dto** | **[ledger_type_update_dto_t](ledger_type_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

