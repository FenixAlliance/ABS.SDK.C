# ItemFamiliesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemFamiliesAPI_createItemFamilyAsync**](ItemFamiliesAPI.md#ItemFamiliesAPI_createItemFamilyAsync) | **POST** /api/v2/CatalogService/ItemFamilies | Create a new item family
[**ItemFamiliesAPI_deleteItemFamilyAsync**](ItemFamiliesAPI.md#ItemFamiliesAPI_deleteItemFamilyAsync) | **DELETE** /api/v2/CatalogService/ItemFamilies/{itemFamilyId} | Delete an item family
[**ItemFamiliesAPI_getItemFamiliesAsync**](ItemFamiliesAPI.md#ItemFamiliesAPI_getItemFamiliesAsync) | **GET** /api/v2/CatalogService/ItemFamilies | Get all item families
[**ItemFamiliesAPI_getItemFamiliesCountAsync**](ItemFamiliesAPI.md#ItemFamiliesAPI_getItemFamiliesCountAsync) | **GET** /api/v2/CatalogService/ItemFamilies/Count | Get item families count
[**ItemFamiliesAPI_getItemFamilyByIdAsync**](ItemFamiliesAPI.md#ItemFamiliesAPI_getItemFamilyByIdAsync) | **GET** /api/v2/CatalogService/ItemFamilies/{itemFamilyId} | Get item family by ID
[**ItemFamiliesAPI_patchItemFamilyAsync**](ItemFamiliesAPI.md#ItemFamiliesAPI_patchItemFamilyAsync) | **PATCH** /api/v2/CatalogService/ItemFamilies/{itemFamilyId} | Patch an item family
[**ItemFamiliesAPI_updateItemFamilyAsync**](ItemFamiliesAPI.md#ItemFamiliesAPI_updateItemFamilyAsync) | **PUT** /api/v2/CatalogService/ItemFamilies/{itemFamilyId} | Update an item family


# **ItemFamiliesAPI_createItemFamilyAsync**
```c
// Create a new item family
//
// Creates a new item family for the specified tenant.
//
item_family_dto_envelope_t* ItemFamiliesAPI_createItemFamilyAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_family_create_dto_t *item_family_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_family_create_dto** | **[item_family_create_dto_t](item_family_create_dto.md) \*** |  | [optional] 

### Return type

[item_family_dto_envelope_t](item_family_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemFamiliesAPI_deleteItemFamilyAsync**
```c
// Delete an item family
//
// Deletes an item family for the specified tenant.
//
void ItemFamiliesAPI_deleteItemFamilyAsync(apiClient_t *apiClient, char *tenantId, char *itemFamilyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemFamilyId** | **char \*** |  | 
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

# **ItemFamiliesAPI_getItemFamiliesAsync**
```c
// Get all item families
//
// Retrieves all item families for the specified tenant using OData query options.
//
item_family_dto_list_envelope_t* ItemFamiliesAPI_getItemFamiliesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_family_dto_collection_query_parameters_t *item_family_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_family_dto_collection_query_parameters** | **[item_family_dto_collection_query_parameters_t](item_family_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[item_family_dto_list_envelope_t](item_family_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemFamiliesAPI_getItemFamiliesCountAsync**
```c
// Get item families count
//
// Returns the count of item families for the specified tenant.
//
int32_envelope_t* ItemFamiliesAPI_getItemFamiliesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_family_dto_collection_query_parameters_t *item_family_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_family_dto_collection_query_parameters** | **[item_family_dto_collection_query_parameters_t](item_family_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemFamiliesAPI_getItemFamilyByIdAsync**
```c
// Get item family by ID
//
// Retrieves a specific item family by its ID.
//
item_family_dto_envelope_t* ItemFamiliesAPI_getItemFamilyByIdAsync(apiClient_t *apiClient, char *itemFamilyId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemFamilyId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_family_dto_envelope_t](item_family_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemFamiliesAPI_patchItemFamilyAsync**
```c
// Patch an item family
//
// Partially updates an existing item family for the specified tenant using a JSON Patch document.
//
empty_envelope_t* ItemFamiliesAPI_patchItemFamilyAsync(apiClient_t *apiClient, char *tenantId, char *itemFamilyId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemFamilyId** | **char \*** |  | 
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

# **ItemFamiliesAPI_updateItemFamilyAsync**
```c
// Update an item family
//
// Updates an existing item family for the specified tenant.
//
item_family_dto_envelope_t* ItemFamiliesAPI_updateItemFamilyAsync(apiClient_t *apiClient, char *tenantId, char *itemFamilyId, char *api_version, char *x_api_version, item_family_update_dto_t *item_family_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemFamilyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_family_update_dto** | **[item_family_update_dto_t](item_family_update_dto.md) \*** |  | [optional] 

### Return type

[item_family_dto_envelope_t](item_family_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

