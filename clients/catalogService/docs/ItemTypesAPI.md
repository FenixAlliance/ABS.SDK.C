# ItemTypesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemTypesAPI_countItemTypesAsync**](ItemTypesAPI.md#ItemTypesAPI_countItemTypesAsync) | **GET** /api/v2/CatalogService/ItemTypes/Count | Count item types
[**ItemTypesAPI_createItemTypeAsync**](ItemTypesAPI.md#ItemTypesAPI_createItemTypeAsync) | **POST** /api/v2/CatalogService/ItemTypes | Create a new item type
[**ItemTypesAPI_deleteItemTypeAsync**](ItemTypesAPI.md#ItemTypesAPI_deleteItemTypeAsync) | **DELETE** /api/v2/CatalogService/ItemTypes/{itemTypeID} | Delete an item type
[**ItemTypesAPI_getItemTypeByIdAsync**](ItemTypesAPI.md#ItemTypesAPI_getItemTypeByIdAsync) | **GET** /api/v2/CatalogService/ItemTypes/{itemTypeID} | Get item type by ID
[**ItemTypesAPI_getItemTypesAsync**](ItemTypesAPI.md#ItemTypesAPI_getItemTypesAsync) | **GET** /api/v2/CatalogService/ItemTypes | Get all item types
[**ItemTypesAPI_updateItemTypeAsync**](ItemTypesAPI.md#ItemTypesAPI_updateItemTypeAsync) | **PUT** /api/v2/CatalogService/ItemTypes/{itemTypeID} | Update an item type


# **ItemTypesAPI_countItemTypesAsync**
```c
// Count item types
//
// Counts all item types for the specified tenant.
//
int32_envelope_t* ItemTypesAPI_countItemTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ItemTypesAPI_createItemTypeAsync**
```c
// Create a new item type
//
// Creates a new item type for the specified tenant.
//
item_type_dto_envelope_t* ItemTypesAPI_createItemTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_type_create_dto_t *item_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_type_create_dto** | **[item_type_create_dto_t](item_type_create_dto.md) \*** |  | [optional] 

### Return type

[item_type_dto_envelope_t](item_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemTypesAPI_deleteItemTypeAsync**
```c
// Delete an item type
//
// Deletes an item type for the specified tenant.
//
item_type_dto_envelope_t* ItemTypesAPI_deleteItemTypeAsync(apiClient_t *apiClient, char *tenantId, char *itemTypeID, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemTypeID** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_type_dto_envelope_t](item_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemTypesAPI_getItemTypeByIdAsync**
```c
// Get item type by ID
//
// Retrieves a specific item type by its ID.
//
item_type_dto_envelope_t* ItemTypesAPI_getItemTypeByIdAsync(apiClient_t *apiClient, char *itemTypeID, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemTypeID** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_type_dto_envelope_t](item_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemTypesAPI_getItemTypesAsync**
```c
// Get all item types
//
// Retrieves all item types for the specified tenant using OData query options.
//
item_type_dto_list_envelope_t* ItemTypesAPI_getItemTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_type_dto_list_envelope_t](item_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemTypesAPI_updateItemTypeAsync**
```c
// Update an item type
//
// Updates an existing item type for the specified tenant.
//
void ItemTypesAPI_updateItemTypeAsync(apiClient_t *apiClient, char *tenantId, char *itemTypeID, char *api_version, char *x_api_version, item_type_update_dto_t *item_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemTypeID** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_type_update_dto** | **[item_type_update_dto_t](item_type_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

