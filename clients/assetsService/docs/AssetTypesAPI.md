# AssetTypesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AssetTypesAPI_createAssetType**](AssetTypesAPI.md#AssetTypesAPI_createAssetType) | **POST** /api/v2/AssetsService/AssetTypes | Creates a new asset type
[**AssetTypesAPI_deleteAssetType**](AssetTypesAPI.md#AssetTypesAPI_deleteAssetType) | **DELETE** /api/v2/AssetsService/AssetTypes/{typeId} | Deletes an asset type
[**AssetTypesAPI_getAssetType**](AssetTypesAPI.md#AssetTypesAPI_getAssetType) | **GET** /api/v2/AssetsService/AssetTypes/{typeId} | Gets a specific asset type
[**AssetTypesAPI_getAssetTypes**](AssetTypesAPI.md#AssetTypesAPI_getAssetTypes) | **GET** /api/v2/AssetsService/AssetTypes | Gets all asset types for the current tenant
[**AssetTypesAPI_getAssetTypesCount**](AssetTypesAPI.md#AssetTypesAPI_getAssetTypesCount) | **GET** /api/v2/AssetsService/AssetTypes/count | Gets the count of asset types
[**AssetTypesAPI_updateAssetType**](AssetTypesAPI.md#AssetTypesAPI_updateAssetType) | **PUT** /api/v2/AssetsService/AssetTypes/{typeId} | Updates an existing asset type


# **AssetTypesAPI_createAssetType**
```c
// Creates a new asset type
//
// Creates a new asset type for the authenticated tenant.
//
asset_type_dto_envelope_t* AssetTypesAPI_createAssetType(apiClient_t *apiClient, char *tenantId, asset_type_create_dto_t *asset_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**asset_type_create_dto** | **[asset_type_create_dto_t](asset_type_create_dto.md) \*** |  | [optional] 

### Return type

[asset_type_dto_envelope_t](asset_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetTypesAPI_deleteAssetType**
```c
// Deletes an asset type
//
// Deletes an asset type for the authenticated tenant.
//
void AssetTypesAPI_deleteAssetType(apiClient_t *apiClient, char *tenantId, char *_typeId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**_typeId** | **char \*** |  | 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetTypesAPI_getAssetType**
```c
// Gets a specific asset type
//
// Retrieves a specific asset type by ID.
//
asset_type_dto_envelope_t* AssetTypesAPI_getAssetType(apiClient_t *apiClient, char *tenantId, char *_typeId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**_typeId** | **char \*** |  | 

### Return type

[asset_type_dto_envelope_t](asset_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetTypesAPI_getAssetTypes**
```c
// Gets all asset types for the current tenant
//
// Retrieves all asset types for the authenticated tenant.
//
asset_type_dto_list_envelope_t* AssetTypesAPI_getAssetTypes(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[asset_type_dto_list_envelope_t](asset_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetTypesAPI_getAssetTypesCount**
```c
// Gets the count of asset types
//
// Returns the total number of asset types for the authenticated tenant.
//
int32_envelope_t* AssetTypesAPI_getAssetTypesCount(apiClient_t *apiClient, char *tenantId);
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

# **AssetTypesAPI_updateAssetType**
```c
// Updates an existing asset type
//
// Updates an existing asset type for the authenticated tenant.
//
empty_envelope_t* AssetTypesAPI_updateAssetType(apiClient_t *apiClient, char *tenantId, char *_typeId, asset_type_update_dto_t *asset_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**_typeId** | **char \*** |  | 
**asset_type_update_dto** | **[asset_type_update_dto_t](asset_type_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

