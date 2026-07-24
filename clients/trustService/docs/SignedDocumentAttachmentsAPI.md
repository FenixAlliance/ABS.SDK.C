# SignedDocumentAttachmentsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SignedDocumentAttachmentsAPI_createSignedDocumentAttachmentAsync**](SignedDocumentAttachmentsAPI.md#SignedDocumentAttachmentsAPI_createSignedDocumentAttachmentAsync) | **POST** /api/v2/TrustService/SignedDocumentAttachments | Create a new signed document attachment
[**SignedDocumentAttachmentsAPI_deleteSignedDocumentAttachmentAsync**](SignedDocumentAttachmentsAPI.md#SignedDocumentAttachmentsAPI_deleteSignedDocumentAttachmentAsync) | **DELETE** /api/v2/TrustService/SignedDocumentAttachments/{id} | Delete a signed document attachment
[**SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentByIdAsync**](SignedDocumentAttachmentsAPI.md#SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentByIdAsync) | **GET** /api/v2/TrustService/SignedDocumentAttachments/{id} | Get signed document attachment by ID
[**SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentsAsync**](SignedDocumentAttachmentsAPI.md#SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentsAsync) | **GET** /api/v2/TrustService/SignedDocumentAttachments | Get all signed document attachments
[**SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentsCountAsync**](SignedDocumentAttachmentsAPI.md#SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentsCountAsync) | **GET** /api/v2/TrustService/SignedDocumentAttachments/Count | Get signed document attachments count
[**SignedDocumentAttachmentsAPI_patchSignedDocumentAttachmentAsync**](SignedDocumentAttachmentsAPI.md#SignedDocumentAttachmentsAPI_patchSignedDocumentAttachmentAsync) | **PATCH** /api/v2/TrustService/SignedDocumentAttachments/{id} | Patch a signed document attachment
[**SignedDocumentAttachmentsAPI_updateSignedDocumentAttachmentAsync**](SignedDocumentAttachmentsAPI.md#SignedDocumentAttachmentsAPI_updateSignedDocumentAttachmentAsync) | **PUT** /api/v2/TrustService/SignedDocumentAttachments/{id} | Update a signed document attachment


# **SignedDocumentAttachmentsAPI_createSignedDocumentAttachmentAsync**
```c
// Create a new signed document attachment
//
// Links an already-stored file to a SignedDocument (metadata + Storage pointer; no bytes).
//
void SignedDocumentAttachmentsAPI_createSignedDocumentAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signed_document_attachment_create_dto_t *signed_document_attachment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signed_document_attachment_create_dto** | **[signed_document_attachment_create_dto_t](signed_document_attachment_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignedDocumentAttachmentsAPI_deleteSignedDocumentAttachmentAsync**
```c
// Delete a signed document attachment
//
// Deletes a signed document attachment link for the specified tenant.
//
void SignedDocumentAttachmentsAPI_deleteSignedDocumentAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
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

# **SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentByIdAsync**
```c
// Get signed document attachment by ID
//
// Retrieves a specific signed document attachment by its identifier.
//
signed_document_attachment_dto_t* SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[signed_document_attachment_dto_t](signed_document_attachment_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentsAsync**
```c
// Get all signed document attachments
//
// Retrieves all signed document attachments for the specified tenant.
//
signed_document_attachment_dto_list_envelope_t* SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[signed_document_attachment_dto_list_envelope_t](signed_document_attachment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentsCountAsync**
```c
// Get signed document attachments count
//
// Returns the count of signed document attachments for the specified tenant.
//
int32_envelope_t* SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SignedDocumentAttachmentsAPI_patchSignedDocumentAttachmentAsync**
```c
// Patch a signed document attachment
//
// Patch a signed document attachment
//
empty_envelope_t* SignedDocumentAttachmentsAPI_patchSignedDocumentAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
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

# **SignedDocumentAttachmentsAPI_updateSignedDocumentAttachmentAsync**
```c
// Update a signed document attachment
//
// Updates signed document attachment metadata for the specified tenant.
//
void SignedDocumentAttachmentsAPI_updateSignedDocumentAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, signed_document_attachment_update_dto_t *signed_document_attachment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signed_document_attachment_update_dto** | **[signed_document_attachment_update_dto_t](signed_document_attachment_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

