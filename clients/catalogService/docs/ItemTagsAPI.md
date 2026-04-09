# ItemTagsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemTagsAPI_createItemTagAsync**](ItemTagsAPI.md#ItemTagsAPI_createItemTagAsync) | **POST** /api/v2/CatalogService/ItemTags | Create a new item tag
[**ItemTagsAPI_deleteItemTagAsync**](ItemTagsAPI.md#ItemTagsAPI_deleteItemTagAsync) | **DELETE** /api/v2/CatalogService/ItemTags/{itemTagId} | Delete an item tag
[**ItemTagsAPI_getItemTagByIdAsync**](ItemTagsAPI.md#ItemTagsAPI_getItemTagByIdAsync) | **GET** /api/v2/CatalogService/ItemTags/{itemTagId} | Get item tag by ID
[**ItemTagsAPI_getItemTagsAsync**](ItemTagsAPI.md#ItemTagsAPI_getItemTagsAsync) | **GET** /api/v2/CatalogService/ItemTags | Get all item tags
[**ItemTagsAPI_updateItemTagAsync**](ItemTagsAPI.md#ItemTagsAPI_updateItemTagAsync) | **PUT** /api/v2/CatalogService/ItemTags/{itemTagId} | Update an item tag


# **ItemTagsAPI_createItemTagAsync**
```c
// Create a new item tag
//
// Creates a new item tag for the specified tenant.
//
item_tag_dto_envelope_t* ItemTagsAPI_createItemTagAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_tag_create_dto_t *item_tag_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_tag_create_dto** | **[item_tag_create_dto_t](item_tag_create_dto.md) \*** |  | [optional] 

### Return type

[item_tag_dto_envelope_t](item_tag_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemTagsAPI_deleteItemTagAsync**
```c
// Delete an item tag
//
// Deletes an item tag for the specified tenant.
//
void ItemTagsAPI_deleteItemTagAsync(apiClient_t *apiClient, char *tenantId, char *itemTagId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemTagId** | **char \*** |  | 
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

# **ItemTagsAPI_getItemTagByIdAsync**
```c
// Get item tag by ID
//
// Retrieves a specific item tag by its ID.
//
item_tag_dto_envelope_t* ItemTagsAPI_getItemTagByIdAsync(apiClient_t *apiClient, char *itemTagId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemTagId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tag_dto_envelope_t](item_tag_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemTagsAPI_getItemTagsAsync**
```c
// Get all item tags
//
// Retrieves all item tags for the specified tenant using OData query options.
//
item_tag_dto_list_envelope_t* ItemTagsAPI_getItemTagsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tag_dto_list_envelope_t](item_tag_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemTagsAPI_updateItemTagAsync**
```c
// Update an item tag
//
// Updates an existing item tag for the specified tenant.
//
void ItemTagsAPI_updateItemTagAsync(apiClient_t *apiClient, char *tenantId, char *itemTagId, char *api_version, char *x_api_version, item_tag_update_dto_t *item_tag_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemTagId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_tag_update_dto** | **[item_tag_update_dto_t](item_tag_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

