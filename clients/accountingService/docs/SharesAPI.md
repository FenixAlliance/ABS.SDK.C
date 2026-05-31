# SharesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SharesAPI_createShareClass**](SharesAPI.md#SharesAPI_createShareClass) | **POST** /api/v2/AccountingService/Shares/Classes | Creates a new share class
[**SharesAPI_createShareIssuance**](SharesAPI.md#SharesAPI_createShareIssuance) | **POST** /api/v2/AccountingService/Shares/Issuances | Creates a new share issuance
[**SharesAPI_createShareTransfer**](SharesAPI.md#SharesAPI_createShareTransfer) | **POST** /api/v2/AccountingService/Shares/Transfers | Creates a new share transfer
[**SharesAPI_createShareTransferReason**](SharesAPI.md#SharesAPI_createShareTransferReason) | **POST** /api/v2/AccountingService/Shares/TransferReasons | Creates a new share transfer reason
[**SharesAPI_deleteShareClass**](SharesAPI.md#SharesAPI_deleteShareClass) | **DELETE** /api/v2/AccountingService/Shares/Classes/{shareClassId} | Deletes an existing share class
[**SharesAPI_deleteShareIssuance**](SharesAPI.md#SharesAPI_deleteShareIssuance) | **DELETE** /api/v2/AccountingService/Shares/Issuances/{issuanceId} | Deletes an existing share issuance
[**SharesAPI_deleteShareTransfer**](SharesAPI.md#SharesAPI_deleteShareTransfer) | **DELETE** /api/v2/AccountingService/Shares/Transfers/{transferId} | Deletes an existing share transfer
[**SharesAPI_deleteShareTransferReason**](SharesAPI.md#SharesAPI_deleteShareTransferReason) | **DELETE** /api/v2/AccountingService/Shares/TransferReasons/{reasonId} | Deletes an existing share transfer reason
[**SharesAPI_getShareClass**](SharesAPI.md#SharesAPI_getShareClass) | **GET** /api/v2/AccountingService/Shares/Classes/{shareClassId} | Gets a share class by id
[**SharesAPI_getShareClasses**](SharesAPI.md#SharesAPI_getShareClasses) | **GET** /api/v2/AccountingService/Shares/Classes | Gets the current tenant share classes
[**SharesAPI_getShareClassesCount**](SharesAPI.md#SharesAPI_getShareClassesCount) | **GET** /api/v2/AccountingService/Shares/Classes/Count | Gets the current tenant share classes count
[**SharesAPI_getShareIssuance**](SharesAPI.md#SharesAPI_getShareIssuance) | **GET** /api/v2/AccountingService/Shares/Issuances/{issuanceId} | Gets a share issuance by id
[**SharesAPI_getShareIssuances**](SharesAPI.md#SharesAPI_getShareIssuances) | **GET** /api/v2/AccountingService/Shares/Issuances | Gets the current tenant share issuances
[**SharesAPI_getShareIssuancesCount**](SharesAPI.md#SharesAPI_getShareIssuancesCount) | **GET** /api/v2/AccountingService/Shares/Issuances/Count | Gets the current tenant share issuances count
[**SharesAPI_getShareTransfer**](SharesAPI.md#SharesAPI_getShareTransfer) | **GET** /api/v2/AccountingService/Shares/Transfers/{transferId} | Gets a share transfer by id
[**SharesAPI_getShareTransferReason**](SharesAPI.md#SharesAPI_getShareTransferReason) | **GET** /api/v2/AccountingService/Shares/TransferReasons/{reasonId} | Gets a share transfer reason by id
[**SharesAPI_getShareTransferReasons**](SharesAPI.md#SharesAPI_getShareTransferReasons) | **GET** /api/v2/AccountingService/Shares/TransferReasons | Gets the current tenant share transfer reasons
[**SharesAPI_getShareTransferReasonsCount**](SharesAPI.md#SharesAPI_getShareTransferReasonsCount) | **GET** /api/v2/AccountingService/Shares/TransferReasons/Count | Gets the current tenant share transfer reasons count
[**SharesAPI_getShareTransfers**](SharesAPI.md#SharesAPI_getShareTransfers) | **GET** /api/v2/AccountingService/Shares/Transfers | Gets the current tenant share transfers
[**SharesAPI_getShareTransfersCount**](SharesAPI.md#SharesAPI_getShareTransfersCount) | **GET** /api/v2/AccountingService/Shares/Transfers/Count | Gets the current tenant share transfers count
[**SharesAPI_updateShareClass**](SharesAPI.md#SharesAPI_updateShareClass) | **PUT** /api/v2/AccountingService/Shares/Classes/{shareClassId} | Updates an existing share class
[**SharesAPI_updateShareIssuance**](SharesAPI.md#SharesAPI_updateShareIssuance) | **PUT** /api/v2/AccountingService/Shares/Issuances/{issuanceId} | Updates an existing share issuance
[**SharesAPI_updateShareTransfer**](SharesAPI.md#SharesAPI_updateShareTransfer) | **PUT** /api/v2/AccountingService/Shares/Transfers/{transferId} | Updates an existing share transfer
[**SharesAPI_updateShareTransferReason**](SharesAPI.md#SharesAPI_updateShareTransferReason) | **PUT** /api/v2/AccountingService/Shares/TransferReasons/{reasonId} | Updates an existing share transfer reason


# **SharesAPI_createShareClass**
```c
// Creates a new share class
//
// Creates a new share class.
//
share_class_dto_envelope_t* SharesAPI_createShareClass(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, share_class_create_dto_t *share_class_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**share_class_create_dto** | **[share_class_create_dto_t](share_class_create_dto.md) \*** |  | [optional] 

### Return type

[share_class_dto_envelope_t](share_class_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_createShareIssuance**
```c
// Creates a new share issuance
//
// Creates a new share issuance.
//
share_issuance_dto_envelope_t* SharesAPI_createShareIssuance(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, share_issuance_create_dto_t *share_issuance_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**share_issuance_create_dto** | **[share_issuance_create_dto_t](share_issuance_create_dto.md) \*** |  | [optional] 

### Return type

[share_issuance_dto_envelope_t](share_issuance_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_createShareTransfer**
```c
// Creates a new share transfer
//
// Creates a new share transfer.
//
share_transfer_dto_envelope_t* SharesAPI_createShareTransfer(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, share_transfer_create_dto_t *share_transfer_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**share_transfer_create_dto** | **[share_transfer_create_dto_t](share_transfer_create_dto.md) \*** |  | [optional] 

### Return type

[share_transfer_dto_envelope_t](share_transfer_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_createShareTransferReason**
```c
// Creates a new share transfer reason
//
// Creates a new share transfer reason.
//
share_transfer_reason_dto_envelope_t* SharesAPI_createShareTransferReason(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, share_transfer_reason_create_dto_t *share_transfer_reason_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**share_transfer_reason_create_dto** | **[share_transfer_reason_create_dto_t](share_transfer_reason_create_dto.md) \*** |  | [optional] 

### Return type

[share_transfer_reason_dto_envelope_t](share_transfer_reason_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_deleteShareClass**
```c
// Deletes an existing share class
//
// Deletes an existing share class.
//
void SharesAPI_deleteShareClass(apiClient_t *apiClient, char *tenantId, char *shareClassId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**shareClassId** | **char \*** |  | 
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

# **SharesAPI_deleteShareIssuance**
```c
// Deletes an existing share issuance
//
// Deletes an existing share issuance.
//
void SharesAPI_deleteShareIssuance(apiClient_t *apiClient, char *tenantId, char *issuanceId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**issuanceId** | **char \*** |  | 
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

# **SharesAPI_deleteShareTransfer**
```c
// Deletes an existing share transfer
//
// Deletes an existing share transfer.
//
void SharesAPI_deleteShareTransfer(apiClient_t *apiClient, char *tenantId, char *transferId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**transferId** | **char \*** |  | 
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

# **SharesAPI_deleteShareTransferReason**
```c
// Deletes an existing share transfer reason
//
// Deletes an existing share transfer reason.
//
void SharesAPI_deleteShareTransferReason(apiClient_t *apiClient, char *tenantId, char *reasonId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**reasonId** | **char \*** |  | 
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

# **SharesAPI_getShareClass**
```c
// Gets a share class by id
//
// Get a specific share class by its identifier.
//
share_class_dto_envelope_t* SharesAPI_getShareClass(apiClient_t *apiClient, char *tenantId, char *shareClassId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**shareClassId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[share_class_dto_envelope_t](share_class_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_getShareClasses**
```c
// Gets the current tenant share classes
//
// Get the currently acting tenant share classes.
//
share_class_dto_list_envelope_t* SharesAPI_getShareClasses(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[share_class_dto_list_envelope_t](share_class_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_getShareClassesCount**
```c
// Gets the current tenant share classes count
//
// Get the currently acting tenant share classes count.
//
int32_envelope_t* SharesAPI_getShareClassesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SharesAPI_getShareIssuance**
```c
// Gets a share issuance by id
//
// Get a specific share issuance by its identifier.
//
share_issuance_dto_envelope_t* SharesAPI_getShareIssuance(apiClient_t *apiClient, char *tenantId, char *issuanceId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**issuanceId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[share_issuance_dto_envelope_t](share_issuance_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_getShareIssuances**
```c
// Gets the current tenant share issuances
//
// Get the currently acting tenant share issuances.
//
share_issuance_dto_list_envelope_t* SharesAPI_getShareIssuances(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[share_issuance_dto_list_envelope_t](share_issuance_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_getShareIssuancesCount**
```c
// Gets the current tenant share issuances count
//
// Get the currently acting tenant share issuances count.
//
int32_envelope_t* SharesAPI_getShareIssuancesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SharesAPI_getShareTransfer**
```c
// Gets a share transfer by id
//
// Get a specific share transfer by its identifier.
//
share_transfer_dto_envelope_t* SharesAPI_getShareTransfer(apiClient_t *apiClient, char *tenantId, char *transferId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**transferId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[share_transfer_dto_envelope_t](share_transfer_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_getShareTransferReason**
```c
// Gets a share transfer reason by id
//
// Get a specific share transfer reason by its identifier.
//
share_transfer_reason_dto_envelope_t* SharesAPI_getShareTransferReason(apiClient_t *apiClient, char *tenantId, char *reasonId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**reasonId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[share_transfer_reason_dto_envelope_t](share_transfer_reason_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_getShareTransferReasons**
```c
// Gets the current tenant share transfer reasons
//
// Get the currently acting tenant share transfer reasons.
//
share_transfer_reason_dto_list_envelope_t* SharesAPI_getShareTransferReasons(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[share_transfer_reason_dto_list_envelope_t](share_transfer_reason_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_getShareTransferReasonsCount**
```c
// Gets the current tenant share transfer reasons count
//
// Get the currently acting tenant share transfer reasons count.
//
int32_envelope_t* SharesAPI_getShareTransferReasonsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SharesAPI_getShareTransfers**
```c
// Gets the current tenant share transfers
//
// Get the currently acting tenant share transfers.
//
share_transfer_dto_list_envelope_t* SharesAPI_getShareTransfers(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[share_transfer_dto_list_envelope_t](share_transfer_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_getShareTransfersCount**
```c
// Gets the current tenant share transfers count
//
// Get the currently acting tenant share transfers count.
//
int32_envelope_t* SharesAPI_getShareTransfersCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SharesAPI_updateShareClass**
```c
// Updates an existing share class
//
// Updates an existing share class.
//
share_class_dto_envelope_t* SharesAPI_updateShareClass(apiClient_t *apiClient, char *tenantId, char *shareClassId, char *api_version, char *x_api_version, share_class_update_dto_t *share_class_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**shareClassId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**share_class_update_dto** | **[share_class_update_dto_t](share_class_update_dto.md) \*** |  | [optional] 

### Return type

[share_class_dto_envelope_t](share_class_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_updateShareIssuance**
```c
// Updates an existing share issuance
//
// Updates an existing share issuance.
//
share_issuance_dto_envelope_t* SharesAPI_updateShareIssuance(apiClient_t *apiClient, char *tenantId, char *issuanceId, char *api_version, char *x_api_version, share_issuance_update_dto_t *share_issuance_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**issuanceId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**share_issuance_update_dto** | **[share_issuance_update_dto_t](share_issuance_update_dto.md) \*** |  | [optional] 

### Return type

[share_issuance_dto_envelope_t](share_issuance_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_updateShareTransfer**
```c
// Updates an existing share transfer
//
// Updates an existing share transfer.
//
share_transfer_dto_envelope_t* SharesAPI_updateShareTransfer(apiClient_t *apiClient, char *tenantId, char *transferId, char *api_version, char *x_api_version, share_transfer_update_dto_t *share_transfer_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**transferId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**share_transfer_update_dto** | **[share_transfer_update_dto_t](share_transfer_update_dto.md) \*** |  | [optional] 

### Return type

[share_transfer_dto_envelope_t](share_transfer_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SharesAPI_updateShareTransferReason**
```c
// Updates an existing share transfer reason
//
// Updates an existing share transfer reason.
//
share_transfer_reason_dto_envelope_t* SharesAPI_updateShareTransferReason(apiClient_t *apiClient, char *tenantId, char *reasonId, char *api_version, char *x_api_version, share_transfer_reason_update_dto_t *share_transfer_reason_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**reasonId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**share_transfer_reason_update_dto** | **[share_transfer_reason_update_dto_t](share_transfer_reason_update_dto.md) \*** |  | [optional] 

### Return type

[share_transfer_reason_dto_envelope_t](share_transfer_reason_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

