# AssetCategoriesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AssetCategoriesAPI_createAssetCategory**](AssetCategoriesAPI.md#AssetCategoriesAPI_createAssetCategory) | **POST** /api/v2/AssetsService/AssetCategories | Creates a new asset category
[**AssetCategoriesAPI_deleteAssetCategory**](AssetCategoriesAPI.md#AssetCategoriesAPI_deleteAssetCategory) | **DELETE** /api/v2/AssetsService/AssetCategories/{categoryId} | Deletes an asset category
[**AssetCategoriesAPI_getAssetCategories**](AssetCategoriesAPI.md#AssetCategoriesAPI_getAssetCategories) | **GET** /api/v2/AssetsService/AssetCategories | Gets all asset categories for the current tenant
[**AssetCategoriesAPI_getAssetCategoriesCount**](AssetCategoriesAPI.md#AssetCategoriesAPI_getAssetCategoriesCount) | **GET** /api/v2/AssetsService/AssetCategories/count | Gets the count of asset categories
[**AssetCategoriesAPI_getAssetCategory**](AssetCategoriesAPI.md#AssetCategoriesAPI_getAssetCategory) | **GET** /api/v2/AssetsService/AssetCategories/{categoryId} | Gets a specific asset category
[**AssetCategoriesAPI_updateAssetCategory**](AssetCategoriesAPI.md#AssetCategoriesAPI_updateAssetCategory) | **PUT** /api/v2/AssetsService/AssetCategories/{categoryId} | Updates an existing asset category


# **AssetCategoriesAPI_createAssetCategory**
```c
// Creates a new asset category
//
// Creates a new asset category for the authenticated tenant.
//
asset_category_dto_envelope_t* AssetCategoriesAPI_createAssetCategory(apiClient_t *apiClient, char *tenantId, asset_category_create_dto_t *asset_category_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**asset_category_create_dto** | **[asset_category_create_dto_t](asset_category_create_dto.md) \*** |  | [optional] 

### Return type

[asset_category_dto_envelope_t](asset_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetCategoriesAPI_deleteAssetCategory**
```c
// Deletes an asset category
//
// Deletes an asset category for the authenticated tenant.
//
void AssetCategoriesAPI_deleteAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**categoryId** | **char \*** |  | 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetCategoriesAPI_getAssetCategories**
```c
// Gets all asset categories for the current tenant
//
// Retrieves all asset categories for the authenticated tenant.
//
asset_category_dto_list_envelope_t* AssetCategoriesAPI_getAssetCategories(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[asset_category_dto_list_envelope_t](asset_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetCategoriesAPI_getAssetCategoriesCount**
```c
// Gets the count of asset categories
//
// Returns the total number of asset categories for the authenticated tenant.
//
int32_envelope_t* AssetCategoriesAPI_getAssetCategoriesCount(apiClient_t *apiClient, char *tenantId);
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

# **AssetCategoriesAPI_getAssetCategory**
```c
// Gets a specific asset category
//
// Retrieves a specific asset category by ID.
//
asset_category_dto_envelope_t* AssetCategoriesAPI_getAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**categoryId** | **char \*** |  | 

### Return type

[asset_category_dto_envelope_t](asset_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetCategoriesAPI_updateAssetCategory**
```c
// Updates an existing asset category
//
// Updates an existing asset category for the authenticated tenant.
//
empty_envelope_t* AssetCategoriesAPI_updateAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId, asset_category_update_dto_t *asset_category_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**categoryId** | **char \*** |  | 
**asset_category_update_dto** | **[asset_category_update_dto_t](asset_category_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

