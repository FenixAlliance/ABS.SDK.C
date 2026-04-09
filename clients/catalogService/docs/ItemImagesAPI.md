# ItemImagesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemImagesAPI_createItemImageAsync**](ItemImagesAPI.md#ItemImagesAPI_createItemImageAsync) | **POST** /api/v2/CatalogService/ItemImages | Create a new item image
[**ItemImagesAPI_deleteItemImageAsync**](ItemImagesAPI.md#ItemImagesAPI_deleteItemImageAsync) | **DELETE** /api/v2/CatalogService/ItemImages/{itemImageId} | Delete an item image
[**ItemImagesAPI_getItemImageByIdAsync**](ItemImagesAPI.md#ItemImagesAPI_getItemImageByIdAsync) | **GET** /api/v2/CatalogService/ItemImages/{itemImageId} | Get item image by ID
[**ItemImagesAPI_getItemImagesAsync**](ItemImagesAPI.md#ItemImagesAPI_getItemImagesAsync) | **GET** /api/v2/CatalogService/ItemImages | Get all item images
[**ItemImagesAPI_updateItemImageAsync**](ItemImagesAPI.md#ItemImagesAPI_updateItemImageAsync) | **PUT** /api/v2/CatalogService/ItemImages/{itemImageId} | Update an item image


# **ItemImagesAPI_createItemImageAsync**
```c
// Create a new item image
//
// Creates a new item image for the specified tenant.
//
item_image_dto_envelope_t* ItemImagesAPI_createItemImageAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_image_create_dto_t *item_image_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_image_create_dto** | **[item_image_create_dto_t](item_image_create_dto.md) \*** |  | [optional] 

### Return type

[item_image_dto_envelope_t](item_image_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemImagesAPI_deleteItemImageAsync**
```c
// Delete an item image
//
// Deletes an item image for the specified tenant.
//
void ItemImagesAPI_deleteItemImageAsync(apiClient_t *apiClient, char *tenantId, char *itemImageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemImageId** | **char \*** |  | 
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

# **ItemImagesAPI_getItemImageByIdAsync**
```c
// Get item image by ID
//
// Retrieves a specific item image by its ID.
//
item_image_dto_envelope_t* ItemImagesAPI_getItemImageByIdAsync(apiClient_t *apiClient, char *itemImageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemImageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_image_dto_envelope_t](item_image_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemImagesAPI_getItemImagesAsync**
```c
// Get all item images
//
// Retrieves all item images for the specified tenant using OData query options.
//
item_image_dto_list_envelope_t* ItemImagesAPI_getItemImagesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_image_dto_list_envelope_t](item_image_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemImagesAPI_updateItemImageAsync**
```c
// Update an item image
//
// Updates an existing item image for the specified tenant.
//
void ItemImagesAPI_updateItemImageAsync(apiClient_t *apiClient, char *tenantId, char *itemImageId, char *api_version, char *x_api_version, item_image_update_dto_t *item_image_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemImageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_image_update_dto** | **[item_image_update_dto_t](item_image_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

