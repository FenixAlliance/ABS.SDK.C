# ItemAttachmentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemAttachmentsAPI_createItemAttachmentAsync**](ItemAttachmentsAPI.md#ItemAttachmentsAPI_createItemAttachmentAsync) | **POST** /api/v2/CatalogService/ItemAttachments | Create a new item attachment
[**ItemAttachmentsAPI_deleteItemAttachmentAsync**](ItemAttachmentsAPI.md#ItemAttachmentsAPI_deleteItemAttachmentAsync) | **DELETE** /api/v2/CatalogService/ItemAttachments/{itemAttachmentId} | Delete an item attachment
[**ItemAttachmentsAPI_getItemAttachmentByIdAsync**](ItemAttachmentsAPI.md#ItemAttachmentsAPI_getItemAttachmentByIdAsync) | **GET** /api/v2/CatalogService/ItemAttachments/{itemAttachmentId} | Get item attachment by ID
[**ItemAttachmentsAPI_getItemAttachmentsAsync**](ItemAttachmentsAPI.md#ItemAttachmentsAPI_getItemAttachmentsAsync) | **GET** /api/v2/CatalogService/ItemAttachments | Get all item attachments
[**ItemAttachmentsAPI_updateItemAttachmentAsync**](ItemAttachmentsAPI.md#ItemAttachmentsAPI_updateItemAttachmentAsync) | **PUT** /api/v2/CatalogService/ItemAttachments/{itemAttachmentId} | Update an item attachment


# **ItemAttachmentsAPI_createItemAttachmentAsync**
```c
// Create a new item attachment
//
// Creates a new item attachment for the specified tenant.
//
item_attachment_dto_envelope_t* ItemAttachmentsAPI_createItemAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_attachment_create_dto_t *item_attachment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_attachment_create_dto** | **[item_attachment_create_dto_t](item_attachment_create_dto.md) \*** |  | [optional] 

### Return type

[item_attachment_dto_envelope_t](item_attachment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemAttachmentsAPI_deleteItemAttachmentAsync**
```c
// Delete an item attachment
//
// Deletes an item attachment for the specified tenant.
//
empty_envelope_t* ItemAttachmentsAPI_deleteItemAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *itemAttachmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemAttachmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemAttachmentsAPI_getItemAttachmentByIdAsync**
```c
// Get item attachment by ID
//
// Retrieves a specific item attachment by its ID.
//
item_attachment_dto_envelope_t* ItemAttachmentsAPI_getItemAttachmentByIdAsync(apiClient_t *apiClient, char *itemAttachmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemAttachmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_attachment_dto_envelope_t](item_attachment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemAttachmentsAPI_getItemAttachmentsAsync**
```c
// Get all item attachments
//
// Retrieves all item attachments for the specified tenant using OData query options.
//
item_attachment_dto_list_envelope_t* ItemAttachmentsAPI_getItemAttachmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_attachment_dto_list_envelope_t](item_attachment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemAttachmentsAPI_updateItemAttachmentAsync**
```c
// Update an item attachment
//
// Updates an existing item attachment for the specified tenant.
//
empty_envelope_t* ItemAttachmentsAPI_updateItemAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *itemAttachmentId, char *api_version, char *x_api_version, item_attachment_update_dto_t *item_attachment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemAttachmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_attachment_update_dto** | **[item_attachment_update_dto_t](item_attachment_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

