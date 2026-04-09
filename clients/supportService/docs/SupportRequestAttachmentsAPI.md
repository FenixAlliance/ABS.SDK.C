# SupportRequestAttachmentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SupportRequestAttachmentsAPI_createSupportRequestAttachmentAsync**](SupportRequestAttachmentsAPI.md#SupportRequestAttachmentsAPI_createSupportRequestAttachmentAsync) | **POST** /api/v2/SupportService/SupportRequestAttachments | Create a new support request attachment
[**SupportRequestAttachmentsAPI_deleteSupportRequestAttachmentAsync**](SupportRequestAttachmentsAPI.md#SupportRequestAttachmentsAPI_deleteSupportRequestAttachmentAsync) | **DELETE** /api/v2/SupportService/SupportRequestAttachments/{supportRequestAttachmentId} | Delete a support request attachment
[**SupportRequestAttachmentsAPI_getSupportRequestAttachmentAsync**](SupportRequestAttachmentsAPI.md#SupportRequestAttachmentsAPI_getSupportRequestAttachmentAsync) | **GET** /api/v2/SupportService/SupportRequestAttachments/{supportRequestAttachmentId} | Retrieve a support request attachment by ID
[**SupportRequestAttachmentsAPI_getSupportRequestAttachmentsAsync**](SupportRequestAttachmentsAPI.md#SupportRequestAttachmentsAPI_getSupportRequestAttachmentsAsync) | **GET** /api/v2/SupportService/SupportRequestAttachments | Retrieve a list of support request attachments
[**SupportRequestAttachmentsAPI_getSupportRequestAttachmentsCountAsync**](SupportRequestAttachmentsAPI.md#SupportRequestAttachmentsAPI_getSupportRequestAttachmentsCountAsync) | **GET** /api/v2/SupportService/SupportRequestAttachments/Count | Get the count of support request attachments
[**SupportRequestAttachmentsAPI_updateSupportRequestAttachmentAsync**](SupportRequestAttachmentsAPI.md#SupportRequestAttachmentsAPI_updateSupportRequestAttachmentAsync) | **PUT** /api/v2/SupportService/SupportRequestAttachments/{supportRequestAttachmentId} | Update a support request attachment


# **SupportRequestAttachmentsAPI_createSupportRequestAttachmentAsync**
```c
// Create a new support request attachment
//
// Creates a new support request attachment for the specified tenant.
//
empty_envelope_t* SupportRequestAttachmentsAPI_createSupportRequestAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, support_request_attachment_create_dto_t *support_request_attachment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**support_request_attachment_create_dto** | **[support_request_attachment_create_dto_t](support_request_attachment_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportRequestAttachmentsAPI_deleteSupportRequestAttachmentAsync**
```c
// Delete a support request attachment
//
// Deletes a support request attachment by its unique identifier.
//
empty_envelope_t* SupportRequestAttachmentsAPI_deleteSupportRequestAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestAttachmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportRequestAttachmentId** | **char \*** |  | 
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

# **SupportRequestAttachmentsAPI_getSupportRequestAttachmentAsync**
```c
// Retrieve a support request attachment by ID
//
// Retrieves a single support request attachment by its unique identifier.
//
support_request_attachment_dto_envelope_t* SupportRequestAttachmentsAPI_getSupportRequestAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestAttachmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportRequestAttachmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_request_attachment_dto_envelope_t](support_request_attachment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportRequestAttachmentsAPI_getSupportRequestAttachmentsAsync**
```c
// Retrieve a list of support request attachments
//
// Retrieves a list of support request attachments for the specified tenant with OData query support.
//
support_request_attachment_dto_list_envelope_t* SupportRequestAttachmentsAPI_getSupportRequestAttachmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_request_attachment_dto_list_envelope_t](support_request_attachment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportRequestAttachmentsAPI_getSupportRequestAttachmentsCountAsync**
```c
// Get the count of support request attachments
//
// Returns the total count of support request attachments for the specified tenant with OData query support.
//
int32_envelope_t* SupportRequestAttachmentsAPI_getSupportRequestAttachmentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SupportRequestAttachmentsAPI_updateSupportRequestAttachmentAsync**
```c
// Update a support request attachment
//
// Updates an existing support request attachment by its unique identifier.
//
empty_envelope_t* SupportRequestAttachmentsAPI_updateSupportRequestAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestAttachmentId, char *api_version, char *x_api_version, support_request_attachment_update_dto_t *support_request_attachment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportRequestAttachmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**support_request_attachment_update_dto** | **[support_request_attachment_update_dto_t](support_request_attachment_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

