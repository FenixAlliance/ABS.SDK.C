# ItemGoogleCategoriesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemGoogleCategoriesAPI_getAllItemGoogleCategoriesAsync**](ItemGoogleCategoriesAPI.md#ItemGoogleCategoriesAPI_getAllItemGoogleCategoriesAsync) | **GET** /api/v2/CatalogService/ItemGoogleCategories/All | Get all Google item categories (all)
[**ItemGoogleCategoriesAPI_getChildrenItemGoogleCategoriesByIdAsync**](ItemGoogleCategoriesAPI.md#ItemGoogleCategoriesAPI_getChildrenItemGoogleCategoriesByIdAsync) | **GET** /api/v2/CatalogService/ItemGoogleCategories/{itemCategoryId}/Children | Get children Google item categories by ID
[**ItemGoogleCategoriesAPI_getItemGoogleCategoriesAsync**](ItemGoogleCategoriesAPI.md#ItemGoogleCategoriesAPI_getItemGoogleCategoriesAsync) | **GET** /api/v2/CatalogService/ItemGoogleCategories | Get all Google item categories
[**ItemGoogleCategoriesAPI_getItemGoogleCategoriesCountAsync**](ItemGoogleCategoriesAPI.md#ItemGoogleCategoriesAPI_getItemGoogleCategoriesCountAsync) | **GET** /api/v2/CatalogService/ItemGoogleCategories/Count | Get Google item categories count
[**ItemGoogleCategoriesAPI_getItemGoogleCategoriesTreeAsync**](ItemGoogleCategoriesAPI.md#ItemGoogleCategoriesAPI_getItemGoogleCategoriesTreeAsync) | **GET** /api/v2/CatalogService/ItemGoogleCategories/tree | Get Google item categories tree
[**ItemGoogleCategoriesAPI_getItemGoogleCategoryByIdAsync**](ItemGoogleCategoriesAPI.md#ItemGoogleCategoriesAPI_getItemGoogleCategoryByIdAsync) | **GET** /api/v2/CatalogService/ItemGoogleCategories/{itemCategoryId} | Get Google item category by ID
[**ItemGoogleCategoriesAPI_getRootItemGoogleCategoriesAsync**](ItemGoogleCategoriesAPI.md#ItemGoogleCategoriesAPI_getRootItemGoogleCategoriesAsync) | **GET** /api/v2/CatalogService/ItemGoogleCategories/Primary | Get root Google item categories
[**ItemGoogleCategoriesAPI_mapItemGoogleCategoriesTreeAsync**](ItemGoogleCategoriesAPI.md#ItemGoogleCategoriesAPI_mapItemGoogleCategoriesTreeAsync) | **POST** /api/v2/CatalogService/ItemGoogleCategories/tree | Map Google item categories tree


# **ItemGoogleCategoriesAPI_getAllItemGoogleCategoriesAsync**
```c
// Get all Google item categories (all)
//
// Retrieves all Google item categories (all) without OData query options.
//
item_google_category_dto_list_envelope_t* ItemGoogleCategoriesAPI_getAllItemGoogleCategoriesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_google_category_dto_list_envelope_t](item_google_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemGoogleCategoriesAPI_getChildrenItemGoogleCategoriesByIdAsync**
```c
// Get children Google item categories by ID
//
// Retrieves children Google item categories for a given ID.
//
item_google_category_dto_list_envelope_t* ItemGoogleCategoriesAPI_getChildrenItemGoogleCategoriesByIdAsync(apiClient_t *apiClient, char *itemCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_google_category_dto_list_envelope_t](item_google_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemGoogleCategoriesAPI_getItemGoogleCategoriesAsync**
```c
// Get all Google item categories
//
// Retrieves all Google item categories using OData query options.
//
item_google_category_dto_list_envelope_t* ItemGoogleCategoriesAPI_getItemGoogleCategoriesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_google_category_dto_list_envelope_t](item_google_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemGoogleCategoriesAPI_getItemGoogleCategoriesCountAsync**
```c
// Get Google item categories count
//
// Retrieves the count of Google item categories using OData query options.
//
int32_envelope_t* ItemGoogleCategoriesAPI_getItemGoogleCategoriesCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **ItemGoogleCategoriesAPI_getItemGoogleCategoriesTreeAsync**
```c
// Get Google item categories tree
//
// Retrieves the Google item categories tree.
//
item_google_category_dto_list_envelope_t* ItemGoogleCategoriesAPI_getItemGoogleCategoriesTreeAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_google_category_dto_list_envelope_t](item_google_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemGoogleCategoriesAPI_getItemGoogleCategoryByIdAsync**
```c
// Get Google item category by ID
//
// Retrieves a specific Google item category by its ID.
//
item_google_category_dto_envelope_t* ItemGoogleCategoriesAPI_getItemGoogleCategoryByIdAsync(apiClient_t *apiClient, char *itemCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_google_category_dto_envelope_t](item_google_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemGoogleCategoriesAPI_getRootItemGoogleCategoriesAsync**
```c
// Get root Google item categories
//
// Retrieves root Google item categories.
//
item_google_category_dto_list_envelope_t* ItemGoogleCategoriesAPI_getRootItemGoogleCategoriesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_google_category_dto_list_envelope_t](item_google_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemGoogleCategoriesAPI_mapItemGoogleCategoriesTreeAsync**
```c
// Map Google item categories tree
//
// Maps the Google item categories tree.
//
item_google_category_dto_list_envelope_t* ItemGoogleCategoriesAPI_mapItemGoogleCategoriesTreeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_google_category_dto_list_envelope_t](item_google_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

