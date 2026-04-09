# SupportRequestsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SupportRequestsAPI_createSupportRequestAsync**](SupportRequestsAPI.md#SupportRequestsAPI_createSupportRequestAsync) | **POST** /api/v2/SupportService/SupportRequests | Create a new support request
[**SupportRequestsAPI_deleteSupportRequestAsync**](SupportRequestsAPI.md#SupportRequestsAPI_deleteSupportRequestAsync) | **DELETE** /api/v2/SupportService/SupportRequests/{supportRequestId} | Delete a support request
[**SupportRequestsAPI_getSupportRequestAsync**](SupportRequestsAPI.md#SupportRequestsAPI_getSupportRequestAsync) | **GET** /api/v2/SupportService/SupportRequests/{supportRequestId} | Retrieve a support request by ID
[**SupportRequestsAPI_getSupportRequestAttachmentByRequest**](SupportRequestsAPI.md#SupportRequestsAPI_getSupportRequestAttachmentByRequest) | **GET** /api/v2/SupportService/SupportRequests/{supportRequestId}/Attachments/{attachmentId} | Retrieve a specific attachment for a support request
[**SupportRequestsAPI_getSupportRequestAttachmentsByRequest**](SupportRequestsAPI.md#SupportRequestsAPI_getSupportRequestAttachmentsByRequest) | **GET** /api/v2/SupportService/SupportRequests/{supportRequestId}/Attachments | Retrieve attachments for a support request
[**SupportRequestsAPI_getSupportRequestAttachmentsCountByRequest**](SupportRequestsAPI.md#SupportRequestsAPI_getSupportRequestAttachmentsCountByRequest) | **GET** /api/v2/SupportService/SupportRequests/{supportRequestId}/Attachments/Count | Get the count of attachments for a support request
[**SupportRequestsAPI_getSupportRequestTicketsAsync**](SupportRequestsAPI.md#SupportRequestsAPI_getSupportRequestTicketsAsync) | **GET** /api/v2/SupportService/SupportRequests/{supportRequestId}/Tickets | Retrieve tickets for a support request
[**SupportRequestsAPI_getSupportRequestsAsync**](SupportRequestsAPI.md#SupportRequestsAPI_getSupportRequestsAsync) | **GET** /api/v2/SupportService/SupportRequests | Retrieve a list of support requests
[**SupportRequestsAPI_getSupportRequestsCountAsync**](SupportRequestsAPI.md#SupportRequestsAPI_getSupportRequestsCountAsync) | **GET** /api/v2/SupportService/SupportRequests/Count | Get the count of support requests
[**SupportRequestsAPI_relateSupportRequestToAttachmentAsync**](SupportRequestsAPI.md#SupportRequestsAPI_relateSupportRequestToAttachmentAsync) | **POST** /api/v2/SupportService/SupportRequests/{supportRequestId}/Attachments | Add an attachment to a support request
[**SupportRequestsAPI_updateSupportRequestAsync**](SupportRequestsAPI.md#SupportRequestsAPI_updateSupportRequestAsync) | **PUT** /api/v2/SupportService/SupportRequests/{supportRequestId} | Update a support request


# **SupportRequestsAPI_createSupportRequestAsync**
```c
// Create a new support request
//
// Creates a new support request for the specified tenant.
//
empty_envelope_t* SupportRequestsAPI_createSupportRequestAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, support_request_create_dto_t *support_request_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**support_request_create_dto** | **[support_request_create_dto_t](support_request_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportRequestsAPI_deleteSupportRequestAsync**
```c
// Delete a support request
//
// Deletes a support request by its unique identifier.
//
empty_envelope_t* SupportRequestsAPI_deleteSupportRequestAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportRequestId** | **char \*** |  | 
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

# **SupportRequestsAPI_getSupportRequestAsync**
```c
// Retrieve a support request by ID
//
// Retrieves a single support request by its unique identifier.
//
support_request_dto_envelope_t* SupportRequestsAPI_getSupportRequestAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportRequestId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_request_dto_envelope_t](support_request_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportRequestsAPI_getSupportRequestAttachmentByRequest**
```c
// Retrieve a specific attachment for a support request
//
// Retrieves a single attachment by its ID for a specific support request.
//
support_request_attachment_dto_envelope_t* SupportRequestsAPI_getSupportRequestAttachmentByRequest(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *attachmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportRequestId** | **char \*** |  | 
**attachmentId** | **char \*** |  | 
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

# **SupportRequestsAPI_getSupportRequestAttachmentsByRequest**
```c
// Retrieve attachments for a support request
//
// Retrieves the list of attachments associated with a specific support request.
//
support_request_attachment_dto_list_envelope_t* SupportRequestsAPI_getSupportRequestAttachmentsByRequest(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportRequestId** | **char \*** |  | 
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

# **SupportRequestsAPI_getSupportRequestAttachmentsCountByRequest**
```c
// Get the count of attachments for a support request
//
// Returns the total count of attachments for a specific support request.
//
int32_envelope_t* SupportRequestsAPI_getSupportRequestAttachmentsCountByRequest(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportRequestId** | **char \*** |  | 
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

# **SupportRequestsAPI_getSupportRequestTicketsAsync**
```c
// Retrieve tickets for a support request
//
// Retrieves the list of support tickets associated with a specific support request.
//
support_ticket_dto_list_envelope_t* SupportRequestsAPI_getSupportRequestTicketsAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportRequestId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_ticket_dto_list_envelope_t](support_ticket_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportRequestsAPI_getSupportRequestsAsync**
```c
// Retrieve a list of support requests
//
// Retrieves a list of support requests for the specified tenant with OData query support.
//
support_request_dto_list_envelope_t* SupportRequestsAPI_getSupportRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_request_dto_list_envelope_t](support_request_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportRequestsAPI_getSupportRequestsCountAsync**
```c
// Get the count of support requests
//
// Returns the total count of support requests for the specified tenant with OData query support.
//
int32_envelope_t* SupportRequestsAPI_getSupportRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SupportRequestsAPI_relateSupportRequestToAttachmentAsync**
```c
// Add an attachment to a support request
//
// Creates a new attachment and associates it with the specified support request.
//
empty_envelope_t* SupportRequestsAPI_relateSupportRequestToAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version, support_request_attachment_create_dto_t *support_request_attachment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportRequestId** | **char \*** |  | 
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

# **SupportRequestsAPI_updateSupportRequestAsync**
```c
// Update a support request
//
// Updates an existing support request by its unique identifier.
//
empty_envelope_t* SupportRequestsAPI_updateSupportRequestAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version, support_request_update_dto_t *support_request_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportRequestId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**support_request_update_dto** | **[support_request_update_dto_t](support_request_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

