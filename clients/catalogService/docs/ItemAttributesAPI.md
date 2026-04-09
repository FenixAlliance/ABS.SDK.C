# ItemAttributesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemAttributesAPI_countItemAttributesAsync**](ItemAttributesAPI.md#ItemAttributesAPI_countItemAttributesAsync) | **GET** /api/v2/CatalogService/ItemAttributes/Count | Count item attributes
[**ItemAttributesAPI_createItemAttributeAsync**](ItemAttributesAPI.md#ItemAttributesAPI_createItemAttributeAsync) | **POST** /api/v2/CatalogService/ItemAttributes | Create a new item attribute
[**ItemAttributesAPI_deleteItemAttributeAsync**](ItemAttributesAPI.md#ItemAttributesAPI_deleteItemAttributeAsync) | **DELETE** /api/v2/CatalogService/ItemAttributes/{itemAttributeId} | Delete an item attribute
[**ItemAttributesAPI_getItemAttributeByIdAsync**](ItemAttributesAPI.md#ItemAttributesAPI_getItemAttributeByIdAsync) | **GET** /api/v2/CatalogService/ItemAttributes/{itemAttributeId} | Get item attribute by ID
[**ItemAttributesAPI_getItemAttributesAsync**](ItemAttributesAPI.md#ItemAttributesAPI_getItemAttributesAsync) | **GET** /api/v2/CatalogService/ItemAttributes | Get all item attributes
[**ItemAttributesAPI_updateItemAttributeAsync**](ItemAttributesAPI.md#ItemAttributesAPI_updateItemAttributeAsync) | **PUT** /api/v2/CatalogService/ItemAttributes/{itemAttributeId} | Update an item attribute


# **ItemAttributesAPI_countItemAttributesAsync**
```c
// Count item attributes
//
// Counts all item attributes for the specified tenant.
//
int32_envelope_t* ItemAttributesAPI_countItemAttributesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ItemAttributesAPI_createItemAttributeAsync**
```c
// Create a new item attribute
//
// Creates a new item attribute for the specified tenant.
//
item_attribute_dto_envelope_t* ItemAttributesAPI_createItemAttributeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_attribute_create_dto_t *item_attribute_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_attribute_create_dto** | **[item_attribute_create_dto_t](item_attribute_create_dto.md) \*** |  | [optional] 

### Return type

[item_attribute_dto_envelope_t](item_attribute_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemAttributesAPI_deleteItemAttributeAsync**
```c
// Delete an item attribute
//
// Deletes an item attribute for the specified tenant.
//
void ItemAttributesAPI_deleteItemAttributeAsync(apiClient_t *apiClient, char *tenantId, char *itemAttributeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemAttributeId** | **char \*** |  | 
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

# **ItemAttributesAPI_getItemAttributeByIdAsync**
```c
// Get item attribute by ID
//
// Retrieves a specific item attribute by its ID.
//
item_attribute_dto_envelope_t* ItemAttributesAPI_getItemAttributeByIdAsync(apiClient_t *apiClient, char *itemAttributeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemAttributeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_attribute_dto_envelope_t](item_attribute_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemAttributesAPI_getItemAttributesAsync**
```c
// Get all item attributes
//
// Retrieves all item attributes for the specified tenant using OData query options.
//
item_attribute_dto_list_envelope_t* ItemAttributesAPI_getItemAttributesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_attribute_dto_list_envelope_t](item_attribute_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemAttributesAPI_updateItemAttributeAsync**
```c
// Update an item attribute
//
// Updates an existing item attribute for the specified tenant.
//
void ItemAttributesAPI_updateItemAttributeAsync(apiClient_t *apiClient, char *tenantId, char *itemAttributeId, char *api_version, char *x_api_version, item_attribute_update_dto_t *item_attribute_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemAttributeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_attribute_update_dto** | **[item_attribute_update_dto_t](item_attribute_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

