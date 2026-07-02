# ItemAttributeOptionsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemAttributeOptionsAPI_createItemAttributeOptionAsync**](ItemAttributeOptionsAPI.md#ItemAttributeOptionsAPI_createItemAttributeOptionAsync) | **POST** /api/v2/CatalogService/ItemAttributeOptions | Create a new item attribute option
[**ItemAttributeOptionsAPI_deleteItemAttributeOptionAsync**](ItemAttributeOptionsAPI.md#ItemAttributeOptionsAPI_deleteItemAttributeOptionAsync) | **DELETE** /api/v2/CatalogService/ItemAttributeOptions/{itemAttributeOptionId} | Delete an item attribute option
[**ItemAttributeOptionsAPI_getItemAttributeOptionByIdAsync**](ItemAttributeOptionsAPI.md#ItemAttributeOptionsAPI_getItemAttributeOptionByIdAsync) | **GET** /api/v2/CatalogService/ItemAttributeOptions/{itemAttributeOptionId} | Get item attribute option by ID
[**ItemAttributeOptionsAPI_getItemAttributeOptionsAsync**](ItemAttributeOptionsAPI.md#ItemAttributeOptionsAPI_getItemAttributeOptionsAsync) | **GET** /api/v2/CatalogService/ItemAttributeOptions | Get all item attribute options
[**ItemAttributeOptionsAPI_getItemAttributeOptionsCountAsync**](ItemAttributeOptionsAPI.md#ItemAttributeOptionsAPI_getItemAttributeOptionsCountAsync) | **GET** /api/v2/CatalogService/ItemAttributeOptions/Count | Get item attribute options count
[**ItemAttributeOptionsAPI_patchItemAttributeOptionAsync**](ItemAttributeOptionsAPI.md#ItemAttributeOptionsAPI_patchItemAttributeOptionAsync) | **PATCH** /api/v2/CatalogService/ItemAttributeOptions/{itemAttributeOptionId} | Patch an item attribute option
[**ItemAttributeOptionsAPI_updateItemAttributeOptionAsync**](ItemAttributeOptionsAPI.md#ItemAttributeOptionsAPI_updateItemAttributeOptionAsync) | **PUT** /api/v2/CatalogService/ItemAttributeOptions/{itemAttributeOptionId} | Update an item attribute option


# **ItemAttributeOptionsAPI_createItemAttributeOptionAsync**
```c
// Create a new item attribute option
//
// Creates a new item attribute option for the specified tenant.
//
item_attribute_option_dto_envelope_t* ItemAttributeOptionsAPI_createItemAttributeOptionAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_attribute_option_create_dto_t *item_attribute_option_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_attribute_option_create_dto** | **[item_attribute_option_create_dto_t](item_attribute_option_create_dto.md) \*** |  | [optional] 

### Return type

[item_attribute_option_dto_envelope_t](item_attribute_option_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemAttributeOptionsAPI_deleteItemAttributeOptionAsync**
```c
// Delete an item attribute option
//
// Deletes an item attribute option for the specified tenant.
//
void ItemAttributeOptionsAPI_deleteItemAttributeOptionAsync(apiClient_t *apiClient, char *tenantId, char *itemAttributeOptionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemAttributeOptionId** | **char \*** |  | 
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

# **ItemAttributeOptionsAPI_getItemAttributeOptionByIdAsync**
```c
// Get item attribute option by ID
//
// Retrieves a specific item attribute option by its ID.
//
item_attribute_option_dto_envelope_t* ItemAttributeOptionsAPI_getItemAttributeOptionByIdAsync(apiClient_t *apiClient, char *itemAttributeOptionId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemAttributeOptionId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_attribute_option_dto_envelope_t](item_attribute_option_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemAttributeOptionsAPI_getItemAttributeOptionsAsync**
```c
// Get all item attribute options
//
// Retrieves all item attribute options for the specified tenant using OData query options.
//
item_attribute_option_dto_list_envelope_t* ItemAttributeOptionsAPI_getItemAttributeOptionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_attribute_option_dto_list_envelope_t](item_attribute_option_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemAttributeOptionsAPI_getItemAttributeOptionsCountAsync**
```c
// Get item attribute options count
//
// Returns the count of item attribute options for the specified tenant.
//
int32_envelope_t* ItemAttributeOptionsAPI_getItemAttributeOptionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
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

# **ItemAttributeOptionsAPI_patchItemAttributeOptionAsync**
```c
// Patch an item attribute option
//
// Partially updates an existing item attribute option for the specified tenant using a JSON Patch document.
//
empty_envelope_t* ItemAttributeOptionsAPI_patchItemAttributeOptionAsync(apiClient_t *apiClient, char *tenantId, char *itemAttributeOptionId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemAttributeOptionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemAttributeOptionsAPI_updateItemAttributeOptionAsync**
```c
// Update an item attribute option
//
// Updates an existing item attribute option for the specified tenant.
//
item_attribute_option_dto_envelope_t* ItemAttributeOptionsAPI_updateItemAttributeOptionAsync(apiClient_t *apiClient, char *tenantId, char *itemAttributeOptionId, char *api_version, char *x_api_version, item_attribute_option_update_dto_t *item_attribute_option_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemAttributeOptionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_attribute_option_update_dto** | **[item_attribute_option_update_dto_t](item_attribute_option_update_dto.md) \*** |  | [optional] 

### Return type

[item_attribute_option_dto_envelope_t](item_attribute_option_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

