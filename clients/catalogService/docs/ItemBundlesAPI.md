# ItemBundlesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemBundlesAPI_createItemBundleAsync**](ItemBundlesAPI.md#ItemBundlesAPI_createItemBundleAsync) | **POST** /api/v2/CatalogService/ItemBundles | Create a new item bundle
[**ItemBundlesAPI_deleteItemBundleAsync**](ItemBundlesAPI.md#ItemBundlesAPI_deleteItemBundleAsync) | **DELETE** /api/v2/CatalogService/ItemBundles/{itemBundleId} | Delete an item bundle
[**ItemBundlesAPI_getItemBundleByIdAsync**](ItemBundlesAPI.md#ItemBundlesAPI_getItemBundleByIdAsync) | **GET** /api/v2/CatalogService/ItemBundles/{itemBundleId} | Get item bundle by ID
[**ItemBundlesAPI_getItemBundlesAsync**](ItemBundlesAPI.md#ItemBundlesAPI_getItemBundlesAsync) | **GET** /api/v2/CatalogService/ItemBundles | Get all item bundles
[**ItemBundlesAPI_getItemBundlesCountAsync**](ItemBundlesAPI.md#ItemBundlesAPI_getItemBundlesCountAsync) | **GET** /api/v2/CatalogService/ItemBundles/Count | Get item bundles count
[**ItemBundlesAPI_patchItemBundleAsync**](ItemBundlesAPI.md#ItemBundlesAPI_patchItemBundleAsync) | **PATCH** /api/v2/CatalogService/ItemBundles/{itemBundleId} | Patch an item bundle
[**ItemBundlesAPI_updateItemBundleAsync**](ItemBundlesAPI.md#ItemBundlesAPI_updateItemBundleAsync) | **PUT** /api/v2/CatalogService/ItemBundles/{itemBundleId} | Update an item bundle


# **ItemBundlesAPI_createItemBundleAsync**
```c
// Create a new item bundle
//
// Creates a new item bundle for the specified tenant.
//
item_bundle_dto_envelope_t* ItemBundlesAPI_createItemBundleAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_bundle_create_dto_t *item_bundle_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_bundle_create_dto** | **[item_bundle_create_dto_t](item_bundle_create_dto.md) \*** |  | [optional] 

### Return type

[item_bundle_dto_envelope_t](item_bundle_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemBundlesAPI_deleteItemBundleAsync**
```c
// Delete an item bundle
//
// Deletes an item bundle for the specified tenant.
//
void ItemBundlesAPI_deleteItemBundleAsync(apiClient_t *apiClient, char *tenantId, char *itemBundleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemBundleId** | **char \*** |  | 
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

# **ItemBundlesAPI_getItemBundleByIdAsync**
```c
// Get item bundle by ID
//
// Retrieves a specific item bundle by its ID.
//
item_bundle_dto_envelope_t* ItemBundlesAPI_getItemBundleByIdAsync(apiClient_t *apiClient, char *itemBundleId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemBundleId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_bundle_dto_envelope_t](item_bundle_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemBundlesAPI_getItemBundlesAsync**
```c
// Get all item bundles
//
// Retrieves all item bundles for the specified tenant using OData query options.
//
item_bundle_dto_list_envelope_t* ItemBundlesAPI_getItemBundlesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_bundle_dto_collection_query_parameters_t *item_bundle_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_bundle_dto_collection_query_parameters** | **[item_bundle_dto_collection_query_parameters_t](item_bundle_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[item_bundle_dto_list_envelope_t](item_bundle_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemBundlesAPI_getItemBundlesCountAsync**
```c
// Get item bundles count
//
// Returns the count of item bundles for the specified tenant.
//
int32_envelope_t* ItemBundlesAPI_getItemBundlesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_bundle_dto_collection_query_parameters_t *item_bundle_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_bundle_dto_collection_query_parameters** | **[item_bundle_dto_collection_query_parameters_t](item_bundle_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemBundlesAPI_patchItemBundleAsync**
```c
// Patch an item bundle
//
// Partially updates an existing item bundle for the specified tenant using a JSON Patch document.
//
empty_envelope_t* ItemBundlesAPI_patchItemBundleAsync(apiClient_t *apiClient, char *tenantId, char *itemBundleId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemBundleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemBundlesAPI_updateItemBundleAsync**
```c
// Update an item bundle
//
// Updates an existing item bundle for the specified tenant.
//
item_bundle_dto_envelope_t* ItemBundlesAPI_updateItemBundleAsync(apiClient_t *apiClient, char *tenantId, char *itemBundleId, char *api_version, char *x_api_version, item_bundle_update_dto_t *item_bundle_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemBundleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_bundle_update_dto** | **[item_bundle_update_dto_t](item_bundle_update_dto.md) \*** |  | [optional] 

### Return type

[item_bundle_dto_envelope_t](item_bundle_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

