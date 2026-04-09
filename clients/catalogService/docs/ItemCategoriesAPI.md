# ItemCategoriesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemCategoriesAPI_countItemCategoriesAsync**](ItemCategoriesAPI.md#ItemCategoriesAPI_countItemCategoriesAsync) | **GET** /api/v2/CatalogService/ItemCategories/Count | Count item categories
[**ItemCategoriesAPI_createItemCategoryAsync**](ItemCategoriesAPI.md#ItemCategoriesAPI_createItemCategoryAsync) | **POST** /api/v2/CatalogService/ItemCategories | Create a new item category
[**ItemCategoriesAPI_deleteItemCategoryAsync**](ItemCategoriesAPI.md#ItemCategoriesAPI_deleteItemCategoryAsync) | **DELETE** /api/v2/CatalogService/ItemCategories/{itemCategoryId} | Delete an item category
[**ItemCategoriesAPI_getItemCategoriesAsync**](ItemCategoriesAPI.md#ItemCategoriesAPI_getItemCategoriesAsync) | **GET** /api/v2/CatalogService/ItemCategories | Get all item categories
[**ItemCategoriesAPI_getItemCategoryByIdAsync**](ItemCategoriesAPI.md#ItemCategoriesAPI_getItemCategoryByIdAsync) | **GET** /api/v2/CatalogService/ItemCategories/{itemCategoryId} | Get item category by ID
[**ItemCategoriesAPI_updateItemCategoryAsync**](ItemCategoriesAPI.md#ItemCategoriesAPI_updateItemCategoryAsync) | **PUT** /api/v2/CatalogService/ItemCategories/{itemCategoryId} | Update an item category


# **ItemCategoriesAPI_countItemCategoriesAsync**
```c
// Count item categories
//
// Counts all item categories for the specified tenant.
//
int32_envelope_t* ItemCategoriesAPI_countItemCategoriesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ItemCategoriesAPI_createItemCategoryAsync**
```c
// Create a new item category
//
// Creates a new item category for the specified tenant.
//
item_category_dto_envelope_t* ItemCategoriesAPI_createItemCategoryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_category_create_dto_t *item_category_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_category_create_dto** | **[item_category_create_dto_t](item_category_create_dto.md) \*** |  | [optional] 

### Return type

[item_category_dto_envelope_t](item_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemCategoriesAPI_deleteItemCategoryAsync**
```c
// Delete an item category
//
// Deletes an item category for the specified tenant.
//
void ItemCategoriesAPI_deleteItemCategoryAsync(apiClient_t *apiClient, char *tenantId, char *itemCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemCategoryId** | **char \*** |  | 
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

# **ItemCategoriesAPI_getItemCategoriesAsync**
```c
// Get all item categories
//
// Retrieves all item categories for the specified tenant using OData query options.
//
item_category_dto_list_envelope_t* ItemCategoriesAPI_getItemCategoriesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_category_dto_list_envelope_t](item_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemCategoriesAPI_getItemCategoryByIdAsync**
```c
// Get item category by ID
//
// Retrieves a specific item category by its ID.
//
item_category_dto_envelope_t* ItemCategoriesAPI_getItemCategoryByIdAsync(apiClient_t *apiClient, char *itemCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_category_dto_envelope_t](item_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemCategoriesAPI_updateItemCategoryAsync**
```c
// Update an item category
//
// Updates an existing item category for the specified tenant.
//
void ItemCategoriesAPI_updateItemCategoryAsync(apiClient_t *apiClient, char *tenantId, char *itemCategoryId, char *api_version, char *x_api_version, item_category_update_dto_t *item_category_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_category_update_dto** | **[item_category_update_dto_t](item_category_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

