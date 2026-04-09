# AssetsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AssetsAPI_createAsset**](AssetsAPI.md#AssetsAPI_createAsset) | **POST** /api/v2/AssetsService/Assets | Creates a new asset
[**AssetsAPI_createAssetAssetCategory**](AssetsAPI.md#AssetsAPI_createAssetAssetCategory) | **POST** /api/v2/AssetsService/Assets/Categories | Creates a new asset category
[**AssetsAPI_createAssetDepreciationRecord**](AssetsAPI.md#AssetsAPI_createAssetDepreciationRecord) | **POST** /api/v2/AssetsService/Assets/{assetId}/DepreciationRecords | Creates a new depreciation record for an asset
[**AssetsAPI_createAssetRepair**](AssetsAPI.md#AssetsAPI_createAssetRepair) | **POST** /api/v2/AssetsService/Assets/{assetId}/Repairs | Creates a new repair for an asset
[**AssetsAPI_createAssetTransfer**](AssetsAPI.md#AssetsAPI_createAssetTransfer) | **POST** /api/v2/AssetsService/Assets/{assetId}/Transfers | Creates a new transfer for an asset
[**AssetsAPI_createAssetValueAmend**](AssetsAPI.md#AssetsAPI_createAssetValueAmend) | **POST** /api/v2/AssetsService/Assets/{assetId}/ValueAmends | Creates a new value amendment for an asset
[**AssetsAPI_deleteAsset**](AssetsAPI.md#AssetsAPI_deleteAsset) | **DELETE** /api/v2/AssetsService/Assets/{assetId} | Deletes an existing asset
[**AssetsAPI_deleteAssetAssetCategory**](AssetsAPI.md#AssetsAPI_deleteAssetAssetCategory) | **DELETE** /api/v2/AssetsService/Assets/Categories/{categoryId} | Deletes an existing asset category
[**AssetsAPI_deleteAssetDepreciationRecord**](AssetsAPI.md#AssetsAPI_deleteAssetDepreciationRecord) | **DELETE** /api/v2/AssetsService/Assets/{assetId}/DepreciationRecords/{recordId} | Deletes a depreciation record for an asset
[**AssetsAPI_deleteAssetRepair**](AssetsAPI.md#AssetsAPI_deleteAssetRepair) | **DELETE** /api/v2/AssetsService/Assets/{assetId}/Repairs/{repairId} | Deletes a repair for an asset
[**AssetsAPI_deleteAssetTransfer**](AssetsAPI.md#AssetsAPI_deleteAssetTransfer) | **DELETE** /api/v2/AssetsService/Assets/{assetId}/Transfers/{transferId} | Deletes a transfer for an asset
[**AssetsAPI_deleteAssetValueAmend**](AssetsAPI.md#AssetsAPI_deleteAssetValueAmend) | **DELETE** /api/v2/AssetsService/Assets/{assetId}/ValueAmends/{amendId} | Deletes a value amendment for an asset
[**AssetsAPI_getAsset**](AssetsAPI.md#AssetsAPI_getAsset) | **GET** /api/v2/AssetsService/Assets/{assetId} | Gets a specific asset by ID
[**AssetsAPI_getAssetAssetCategories**](AssetsAPI.md#AssetsAPI_getAssetAssetCategories) | **GET** /api/v2/AssetsService/Assets/Categories | Gets all asset categories
[**AssetsAPI_getAssetAssetCategoriesCount**](AssetsAPI.md#AssetsAPI_getAssetAssetCategoriesCount) | **GET** /api/v2/AssetsService/Assets/Categories/count | Gets the count of asset categories
[**AssetsAPI_getAssetAssetCategory**](AssetsAPI.md#AssetsAPI_getAssetAssetCategory) | **GET** /api/v2/AssetsService/Assets/Categories/{categoryId} | Gets a specific asset category
[**AssetsAPI_getAssetDepreciationRecord**](AssetsAPI.md#AssetsAPI_getAssetDepreciationRecord) | **GET** /api/v2/AssetsService/Assets/{assetId}/DepreciationRecords/{recordId} | Gets a specific depreciation record for an asset
[**AssetsAPI_getAssetDepreciationRecords**](AssetsAPI.md#AssetsAPI_getAssetDepreciationRecords) | **GET** /api/v2/AssetsService/Assets/{assetId}/DepreciationRecords | Gets depreciation records for a specific asset
[**AssetsAPI_getAssetDepreciationRecordsCount**](AssetsAPI.md#AssetsAPI_getAssetDepreciationRecordsCount) | **GET** /api/v2/AssetsService/Assets/{assetId}/DepreciationRecords/Count | Gets count of depreciation records for a specific asset
[**AssetsAPI_getAssetRepair**](AssetsAPI.md#AssetsAPI_getAssetRepair) | **GET** /api/v2/AssetsService/Assets/{assetId}/Repairs/{repairId} | Gets a specific repair for an asset
[**AssetsAPI_getAssetRepairs**](AssetsAPI.md#AssetsAPI_getAssetRepairs) | **GET** /api/v2/AssetsService/Assets/{assetId}/Repairs | Gets repairs for a specific asset
[**AssetsAPI_getAssetRepairsCount**](AssetsAPI.md#AssetsAPI_getAssetRepairsCount) | **GET** /api/v2/AssetsService/Assets/{assetId}/Repairs/Count | Gets count of repairs for a specific asset
[**AssetsAPI_getAssetTransfer**](AssetsAPI.md#AssetsAPI_getAssetTransfer) | **GET** /api/v2/AssetsService/Assets/{assetId}/Transfers/{transferId} | Gets a specific transfer for an asset
[**AssetsAPI_getAssetTransfers**](AssetsAPI.md#AssetsAPI_getAssetTransfers) | **GET** /api/v2/AssetsService/Assets/{assetId}/Transfers | Gets transfers for a specific asset
[**AssetsAPI_getAssetTransfersCount**](AssetsAPI.md#AssetsAPI_getAssetTransfersCount) | **GET** /api/v2/AssetsService/Assets/{assetId}/Transfers/Count | Gets count of transfers for a specific asset
[**AssetsAPI_getAssetValueAmend**](AssetsAPI.md#AssetsAPI_getAssetValueAmend) | **GET** /api/v2/AssetsService/Assets/{assetId}/ValueAmends/{amendId} | Gets a specific value amendment for an asset
[**AssetsAPI_getAssetValueAmends**](AssetsAPI.md#AssetsAPI_getAssetValueAmends) | **GET** /api/v2/AssetsService/Assets/{assetId}/ValueAmends | Gets value amendments for a specific asset
[**AssetsAPI_getAssetValueAmendsCount**](AssetsAPI.md#AssetsAPI_getAssetValueAmendsCount) | **GET** /api/v2/AssetsService/Assets/{assetId}/ValueAmends/Count | Gets count of value amendments for a specific asset
[**AssetsAPI_getAssets**](AssetsAPI.md#AssetsAPI_getAssets) | **GET** /api/v2/AssetsService/Assets | Gets all assets for the current tenant
[**AssetsAPI_getAssetsCount**](AssetsAPI.md#AssetsAPI_getAssetsCount) | **GET** /api/v2/AssetsService/Assets/count | Gets the count of assets
[**AssetsAPI_updateAsset**](AssetsAPI.md#AssetsAPI_updateAsset) | **PUT** /api/v2/AssetsService/Assets/{assetId} | Updates an existing asset
[**AssetsAPI_updateAssetAssetCategory**](AssetsAPI.md#AssetsAPI_updateAssetAssetCategory) | **PUT** /api/v2/AssetsService/Assets/Categories/{categoryId} | Updates an existing asset category
[**AssetsAPI_updateAssetDepreciationRecord**](AssetsAPI.md#AssetsAPI_updateAssetDepreciationRecord) | **PUT** /api/v2/AssetsService/Assets/{assetId}/DepreciationRecords/{recordId} | Updates a depreciation record for an asset
[**AssetsAPI_updateAssetRepair**](AssetsAPI.md#AssetsAPI_updateAssetRepair) | **PUT** /api/v2/AssetsService/Assets/{assetId}/Repairs/{repairId} | Updates a repair for an asset
[**AssetsAPI_updateAssetTransfer**](AssetsAPI.md#AssetsAPI_updateAssetTransfer) | **PUT** /api/v2/AssetsService/Assets/{assetId}/Transfers/{transferId} | Updates a transfer for an asset
[**AssetsAPI_updateAssetValueAmend**](AssetsAPI.md#AssetsAPI_updateAssetValueAmend) | **PUT** /api/v2/AssetsService/Assets/{assetId}/ValueAmends/{amendId} | Updates a value amendment for an asset


# **AssetsAPI_createAsset**
```c
// Creates a new asset
//
// Creates a new asset for the authenticated tenant.
//
asset_dto_envelope_t* AssetsAPI_createAsset(apiClient_t *apiClient, char *tenantId, asset_create_dto_t *asset_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**asset_create_dto** | **[asset_create_dto_t](asset_create_dto.md) \*** |  | [optional] 

### Return type

[asset_dto_envelope_t](asset_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_createAssetAssetCategory**
```c
// Creates a new asset category
//
// Creates a new asset category for the authenticated tenant.
//
asset_category_dto_envelope_t* AssetsAPI_createAssetAssetCategory(apiClient_t *apiClient, char *tenantId, asset_category_create_dto_t *asset_category_create_dto);
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

# **AssetsAPI_createAssetDepreciationRecord**
```c
// Creates a new depreciation record for an asset
//
// Creates a new depreciation record for the specified asset.
//
empty_envelope_t* AssetsAPI_createAssetDepreciationRecord(apiClient_t *apiClient, char *tenantId, char *assetId, asset_depreciation_record_create_dto_t *asset_depreciation_record_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**asset_depreciation_record_create_dto** | **[asset_depreciation_record_create_dto_t](asset_depreciation_record_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_createAssetRepair**
```c
// Creates a new repair for an asset
//
// Creates a new repair record for the specified asset.
//
empty_envelope_t* AssetsAPI_createAssetRepair(apiClient_t *apiClient, char *tenantId, char *assetId, asset_repair_create_dto_t *asset_repair_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**asset_repair_create_dto** | **[asset_repair_create_dto_t](asset_repair_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_createAssetTransfer**
```c
// Creates a new transfer for an asset
//
// Creates a new transfer record for the specified asset.
//
empty_envelope_t* AssetsAPI_createAssetTransfer(apiClient_t *apiClient, char *tenantId, char *assetId, asset_transfer_create_dto_t *asset_transfer_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**asset_transfer_create_dto** | **[asset_transfer_create_dto_t](asset_transfer_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_createAssetValueAmend**
```c
// Creates a new value amendment for an asset
//
// Creates a new value amendment record for the specified asset.
//
empty_envelope_t* AssetsAPI_createAssetValueAmend(apiClient_t *apiClient, char *tenantId, char *assetId, asset_value_amend_create_dto_t *asset_value_amend_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**asset_value_amend_create_dto** | **[asset_value_amend_create_dto_t](asset_value_amend_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_deleteAsset**
```c
// Deletes an existing asset
//
// Deletes an existing asset for the authenticated tenant.
//
void AssetsAPI_deleteAsset(apiClient_t *apiClient, char *tenantId, char *assetId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_deleteAssetAssetCategory**
```c
// Deletes an existing asset category
//
// Deletes an existing asset category for the authenticated tenant.
//
void AssetsAPI_deleteAssetAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId);
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

# **AssetsAPI_deleteAssetDepreciationRecord**
```c
// Deletes a depreciation record for an asset
//
// Deletes a depreciation record for the specified asset.
//
empty_envelope_t* AssetsAPI_deleteAssetDepreciationRecord(apiClient_t *apiClient, char *tenantId, char *assetId, char *recordId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**recordId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_deleteAssetRepair**
```c
// Deletes a repair for an asset
//
// Deletes a repair record for the specified asset.
//
empty_envelope_t* AssetsAPI_deleteAssetRepair(apiClient_t *apiClient, char *tenantId, char *assetId, char *repairId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**repairId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_deleteAssetTransfer**
```c
// Deletes a transfer for an asset
//
// Deletes a transfer record for the specified asset.
//
empty_envelope_t* AssetsAPI_deleteAssetTransfer(apiClient_t *apiClient, char *tenantId, char *assetId, char *transferId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**transferId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_deleteAssetValueAmend**
```c
// Deletes a value amendment for an asset
//
// Deletes a value amendment record for the specified asset.
//
empty_envelope_t* AssetsAPI_deleteAssetValueAmend(apiClient_t *apiClient, char *tenantId, char *assetId, char *amendId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**amendId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAsset**
```c
// Gets a specific asset by ID
//
// Retrieves a specific asset for the authenticated tenant.
//
asset_dto_envelope_t* AssetsAPI_getAsset(apiClient_t *apiClient, char *tenantId, char *assetId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 

### Return type

[asset_dto_envelope_t](asset_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssetAssetCategories**
```c
// Gets all asset categories
//
// Retrieves all asset categories for the authenticated tenant.
//
asset_category_dto_list_envelope_t* AssetsAPI_getAssetAssetCategories(apiClient_t *apiClient, char *tenantId);
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

# **AssetsAPI_getAssetAssetCategoriesCount**
```c
// Gets the count of asset categories
//
// Returns the total number of asset categories for the authenticated tenant.
//
int32_envelope_t* AssetsAPI_getAssetAssetCategoriesCount(apiClient_t *apiClient, char *tenantId);
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

# **AssetsAPI_getAssetAssetCategory**
```c
// Gets a specific asset category
//
// Retrieves a specific asset category for the authenticated tenant.
//
asset_category_dto_envelope_t* AssetsAPI_getAssetAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId);
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

# **AssetsAPI_getAssetDepreciationRecord**
```c
// Gets a specific depreciation record for an asset
//
// Retrieves a specific depreciation record by ID for the specified asset.
//
asset_depreciation_record_dto_envelope_t* AssetsAPI_getAssetDepreciationRecord(apiClient_t *apiClient, char *tenantId, char *assetId, char *recordId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**recordId** | **char \*** |  | 

### Return type

[asset_depreciation_record_dto_envelope_t](asset_depreciation_record_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssetDepreciationRecords**
```c
// Gets depreciation records for a specific asset
//
// Retrieves all depreciation records for the specified asset.
//
asset_depreciation_record_dto_list_envelope_t* AssetsAPI_getAssetDepreciationRecords(apiClient_t *apiClient, char *tenantId, char *assetId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 

### Return type

[asset_depreciation_record_dto_list_envelope_t](asset_depreciation_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssetDepreciationRecordsCount**
```c
// Gets count of depreciation records for a specific asset
//
// Returns the total number of depreciation records for the specified asset.
//
int32_envelope_t* AssetsAPI_getAssetDepreciationRecordsCount(apiClient_t *apiClient, char *tenantId, char *assetId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssetRepair**
```c
// Gets a specific repair for an asset
//
// Retrieves a specific repair record by ID for the specified asset.
//
asset_repair_dto_envelope_t* AssetsAPI_getAssetRepair(apiClient_t *apiClient, char *tenantId, char *assetId, char *repairId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**repairId** | **char \*** |  | 

### Return type

[asset_repair_dto_envelope_t](asset_repair_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssetRepairs**
```c
// Gets repairs for a specific asset
//
// Retrieves all repair records for the specified asset.
//
asset_repair_dto_list_envelope_t* AssetsAPI_getAssetRepairs(apiClient_t *apiClient, char *tenantId, char *assetId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 

### Return type

[asset_repair_dto_list_envelope_t](asset_repair_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssetRepairsCount**
```c
// Gets count of repairs for a specific asset
//
// Returns the total number of repair records for the specified asset.
//
int32_envelope_t* AssetsAPI_getAssetRepairsCount(apiClient_t *apiClient, char *tenantId, char *assetId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssetTransfer**
```c
// Gets a specific transfer for an asset
//
// Retrieves a specific transfer record by ID for the specified asset.
//
asset_transfer_dto_envelope_t* AssetsAPI_getAssetTransfer(apiClient_t *apiClient, char *tenantId, char *assetId, char *transferId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**transferId** | **char \*** |  | 

### Return type

[asset_transfer_dto_envelope_t](asset_transfer_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssetTransfers**
```c
// Gets transfers for a specific asset
//
// Retrieves all transfer records for the specified asset.
//
asset_transfer_dto_list_envelope_t* AssetsAPI_getAssetTransfers(apiClient_t *apiClient, char *tenantId, char *assetId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 

### Return type

[asset_transfer_dto_list_envelope_t](asset_transfer_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssetTransfersCount**
```c
// Gets count of transfers for a specific asset
//
// Returns the total number of transfer records for the specified asset.
//
int32_envelope_t* AssetsAPI_getAssetTransfersCount(apiClient_t *apiClient, char *tenantId, char *assetId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssetValueAmend**
```c
// Gets a specific value amendment for an asset
//
// Retrieves a specific value amendment record by ID for the specified asset.
//
asset_value_amend_dto_envelope_t* AssetsAPI_getAssetValueAmend(apiClient_t *apiClient, char *tenantId, char *assetId, char *amendId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**amendId** | **char \*** |  | 

### Return type

[asset_value_amend_dto_envelope_t](asset_value_amend_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssetValueAmends**
```c
// Gets value amendments for a specific asset
//
// Retrieves all value amendment records for the specified asset.
//
asset_value_amend_dto_list_envelope_t* AssetsAPI_getAssetValueAmends(apiClient_t *apiClient, char *tenantId, char *assetId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 

### Return type

[asset_value_amend_dto_list_envelope_t](asset_value_amend_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssetValueAmendsCount**
```c
// Gets count of value amendments for a specific asset
//
// Returns the total number of value amendment records for the specified asset.
//
int32_envelope_t* AssetsAPI_getAssetValueAmendsCount(apiClient_t *apiClient, char *tenantId, char *assetId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssets**
```c
// Gets all assets for the current tenant
//
// Retrieves all assets for the authenticated tenant with optional filtering.
//
asset_dto_list_envelope_t* AssetsAPI_getAssets(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[asset_dto_list_envelope_t](asset_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_getAssetsCount**
```c
// Gets the count of assets
//
// Returns the total number of assets for the authenticated tenant.
//
int32_envelope_t* AssetsAPI_getAssetsCount(apiClient_t *apiClient, char *tenantId);
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

# **AssetsAPI_updateAsset**
```c
// Updates an existing asset
//
// Updates an existing asset for the authenticated tenant.
//
asset_dto_envelope_t* AssetsAPI_updateAsset(apiClient_t *apiClient, char *tenantId, char *assetId, asset_update_dto_t *asset_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**asset_update_dto** | **[asset_update_dto_t](asset_update_dto.md) \*** |  | [optional] 

### Return type

[asset_dto_envelope_t](asset_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_updateAssetAssetCategory**
```c
// Updates an existing asset category
//
// Updates an existing asset category for the authenticated tenant.
//
asset_category_dto_envelope_t* AssetsAPI_updateAssetAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId, asset_category_update_dto_t *asset_category_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**categoryId** | **char \*** |  | 
**asset_category_update_dto** | **[asset_category_update_dto_t](asset_category_update_dto.md) \*** |  | [optional] 

### Return type

[asset_category_dto_envelope_t](asset_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_updateAssetDepreciationRecord**
```c
// Updates a depreciation record for an asset
//
// Updates an existing depreciation record for the specified asset.
//
empty_envelope_t* AssetsAPI_updateAssetDepreciationRecord(apiClient_t *apiClient, char *tenantId, char *assetId, char *recordId, asset_depreciation_record_update_dto_t *asset_depreciation_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**recordId** | **char \*** |  | 
**asset_depreciation_record_update_dto** | **[asset_depreciation_record_update_dto_t](asset_depreciation_record_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_updateAssetRepair**
```c
// Updates a repair for an asset
//
// Updates an existing repair record for the specified asset.
//
empty_envelope_t* AssetsAPI_updateAssetRepair(apiClient_t *apiClient, char *tenantId, char *assetId, char *repairId, asset_repair_update_dto_t *asset_repair_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**repairId** | **char \*** |  | 
**asset_repair_update_dto** | **[asset_repair_update_dto_t](asset_repair_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AssetsAPI_updateAssetTransfer**
```c
// Updates a transfer for an asset
//
// Updates an existing transfer record for the specified asset.
//
empty_envelope_t* AssetsAPI_updateAssetTransfer(apiClient_t *apiClient, char *tenantId, char *assetId, char *transferId, asset_transfer_update_dto_t *asset_transfer_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
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

# **AssetsAPI_updateAssetValueAmend**
```c
// Updates a value amendment for an asset
//
// Updates an existing value amendment record for the specified asset.
//
empty_envelope_t* AssetsAPI_updateAssetValueAmend(apiClient_t *apiClient, char *tenantId, char *assetId, char *amendId, asset_value_amend_update_dto_t *asset_value_amend_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assetId** | **char \*** |  | 
**amendId** | **char \*** |  | 
**asset_value_amend_update_dto** | **[asset_value_amend_update_dto_t](asset_value_amend_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

