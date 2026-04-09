# ItemBrandsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemBrandsAPI_createItemBrandAsync**](ItemBrandsAPI.md#ItemBrandsAPI_createItemBrandAsync) | **POST** /api/v2/CatalogService/ItemBrands | Create a new item brand
[**ItemBrandsAPI_deleteItemBrandAsync**](ItemBrandsAPI.md#ItemBrandsAPI_deleteItemBrandAsync) | **DELETE** /api/v2/CatalogService/ItemBrands/{itemBrandId} | Delete an item brand
[**ItemBrandsAPI_getItemBrandByIdAsync**](ItemBrandsAPI.md#ItemBrandsAPI_getItemBrandByIdAsync) | **GET** /api/v2/CatalogService/ItemBrands/{itemBrandId} | Get item brand by ID
[**ItemBrandsAPI_getItemBrandsAsync**](ItemBrandsAPI.md#ItemBrandsAPI_getItemBrandsAsync) | **GET** /api/v2/CatalogService/ItemBrands | Get all item brands
[**ItemBrandsAPI_updateItemBrandAsync**](ItemBrandsAPI.md#ItemBrandsAPI_updateItemBrandAsync) | **PUT** /api/v2/CatalogService/ItemBrands/{itemBrandId} | Update an item brand


# **ItemBrandsAPI_createItemBrandAsync**
```c
// Create a new item brand
//
// Creates a new item brand for the specified tenant.
//
item_brand_dto_envelope_t* ItemBrandsAPI_createItemBrandAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_brand_create_dto_t *item_brand_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_brand_create_dto** | **[item_brand_create_dto_t](item_brand_create_dto.md) \*** |  | [optional] 

### Return type

[item_brand_dto_envelope_t](item_brand_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemBrandsAPI_deleteItemBrandAsync**
```c
// Delete an item brand
//
// Deletes an item brand for the specified tenant.
//
void ItemBrandsAPI_deleteItemBrandAsync(apiClient_t *apiClient, char *tenantId, char *itemBrandId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemBrandId** | **char \*** |  | 
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

# **ItemBrandsAPI_getItemBrandByIdAsync**
```c
// Get item brand by ID
//
// Retrieves a specific item brand by its ID.
//
item_brand_dto_envelope_t* ItemBrandsAPI_getItemBrandByIdAsync(apiClient_t *apiClient, char *itemBrandId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemBrandId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_brand_dto_envelope_t](item_brand_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemBrandsAPI_getItemBrandsAsync**
```c
// Get all item brands
//
// Retrieves all item brands for the specified tenant using OData query options.
//
item_brand_dto_list_envelope_t* ItemBrandsAPI_getItemBrandsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_brand_dto_list_envelope_t](item_brand_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemBrandsAPI_updateItemBrandAsync**
```c
// Update an item brand
//
// Updates an existing item brand for the specified tenant.
//
item_brand_dto_envelope_t* ItemBrandsAPI_updateItemBrandAsync(apiClient_t *apiClient, char *tenantId, char *itemBrandId, char *api_version, char *x_api_version, item_brand_update_dto_t *item_brand_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemBrandId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_brand_update_dto** | **[item_brand_update_dto_t](item_brand_update_dto.md) \*** |  | [optional] 

### Return type

[item_brand_dto_envelope_t](item_brand_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

