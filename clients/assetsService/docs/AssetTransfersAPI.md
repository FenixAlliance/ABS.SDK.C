# AssetTransfersAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AssetTransfersAPI_createAssetTransferAsync**](AssetTransfersAPI.md#AssetTransfersAPI_createAssetTransferAsync) | **POST** /api/v2/AssetsService/AssetTransfers | Creates a new asset transfer
[**AssetTransfersAPI_deleteAssetTransferAsync**](AssetTransfersAPI.md#AssetTransfersAPI_deleteAssetTransferAsync) | **DELETE** /api/v2/AssetsService/AssetTransfers/{transferId} | Deletes an asset transfer
[**AssetTransfersAPI_getAssetTransferAsync**](AssetTransfersAPI.md#AssetTransfersAPI_getAssetTransferAsync) | **GET** /api/v2/AssetsService/AssetTransfers/{transferId} | Gets a single asset transfer by ID
[**AssetTransfersAPI_getAssetTransfersAsync**](AssetTransfersAPI.md#AssetTransfersAPI_getAssetTransfersAsync) | **GET** /api/v2/AssetsService/AssetTransfers | Gets a list of asset transfers
[**AssetTransfersAPI_getAssetTransfersCountAsync**](AssetTransfersAPI.md#AssetTransfersAPI_getAssetTransfersCountAsync) | **GET** /api/v2/AssetsService/AssetTransfers/Count | Gets the count of asset transfers
[**AssetTransfersAPI_updateAssetTransferAsync**](AssetTransfersAPI.md#AssetTransfersAPI_updateAssetTransferAsync) | **PUT** /api/v2/AssetsService/AssetTransfers/{transferId} | Updates an existing asset transfer


# **AssetTransfersAPI_createAssetTransferAsync**
```c
// Creates a new asset transfer
//
// Creates a new asset transfer for the authenticated tenant.
//
empty_envelope_t* AssetTransfersAPI_createAssetTransferAsync(apiClient_t *apiClient, char *tenantId, asset_transfer_create_dto_t *asset_transfer_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**asset_transfer_create_dto** | **[asset_transfer_create_dto_t](asset_transfer_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetTransfersAPI_deleteAssetTransferAsync**
```c
// Deletes an asset transfer
//
// Deletes an asset transfer for the authenticated tenant.
//
empty_envelope_t* AssetTransfersAPI_deleteAssetTransferAsync(apiClient_t *apiClient, char *tenantId, char *transferId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**transferId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetTransfersAPI_getAssetTransferAsync**
```c
// Gets a single asset transfer by ID
//
// Retrieves a specific asset transfer by its ID for the authenticated tenant.
//
asset_transfer_dto_envelope_t* AssetTransfersAPI_getAssetTransferAsync(apiClient_t *apiClient, char *tenantId, char *transferId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**transferId** | **char \*** |  | 

### Return type

[asset_transfer_dto_envelope_t](asset_transfer_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetTransfersAPI_getAssetTransfersAsync**
```c
// Gets a list of asset transfers
//
// Retrieves all asset transfers for the authenticated tenant.
//
asset_transfer_dto_list_envelope_t* AssetTransfersAPI_getAssetTransfersAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[asset_transfer_dto_list_envelope_t](asset_transfer_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetTransfersAPI_getAssetTransfersCountAsync**
```c
// Gets the count of asset transfers
//
// Returns the total number of asset transfers for the authenticated tenant.
//
int32_envelope_t* AssetTransfersAPI_getAssetTransfersCountAsync(apiClient_t *apiClient, char *tenantId);
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

# **AssetTransfersAPI_updateAssetTransferAsync**
```c
// Updates an existing asset transfer
//
// Updates an existing asset transfer for the authenticated tenant.
//
empty_envelope_t* AssetTransfersAPI_updateAssetTransferAsync(apiClient_t *apiClient, char *tenantId, char *transferId, asset_transfer_update_dto_t *asset_transfer_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**transferId** | **char \*** |  | 
**asset_transfer_update_dto** | **[asset_transfer_update_dto_t](asset_transfer_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

