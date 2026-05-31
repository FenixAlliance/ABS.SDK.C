# SupportTicketPrioritiesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SupportTicketPrioritiesAPI_createSupportTicketPriorityAsync**](SupportTicketPrioritiesAPI.md#SupportTicketPrioritiesAPI_createSupportTicketPriorityAsync) | **POST** /api/v2/SupportService/SupportTicketPriorities | Create a new support ticket priority
[**SupportTicketPrioritiesAPI_deleteSupportTicketPriorityAsync**](SupportTicketPrioritiesAPI.md#SupportTicketPrioritiesAPI_deleteSupportTicketPriorityAsync) | **DELETE** /api/v2/SupportService/SupportTicketPriorities/{supportTicketPriorityId} | Delete a support ticket priority
[**SupportTicketPrioritiesAPI_getSupportTicketPrioritiesAsync**](SupportTicketPrioritiesAPI.md#SupportTicketPrioritiesAPI_getSupportTicketPrioritiesAsync) | **GET** /api/v2/SupportService/SupportTicketPriorities | Retrieve a list of support ticket priorities
[**SupportTicketPrioritiesAPI_getSupportTicketPrioritiesCountAsync**](SupportTicketPrioritiesAPI.md#SupportTicketPrioritiesAPI_getSupportTicketPrioritiesCountAsync) | **GET** /api/v2/SupportService/SupportTicketPriorities/Count | Get the count of support ticket priorities
[**SupportTicketPrioritiesAPI_getSupportTicketPriorityAsync**](SupportTicketPrioritiesAPI.md#SupportTicketPrioritiesAPI_getSupportTicketPriorityAsync) | **GET** /api/v2/SupportService/SupportTicketPriorities/{supportTicketPriorityId} | Retrieve a support ticket priority by ID
[**SupportTicketPrioritiesAPI_updateSupportTicketPriorityAsync**](SupportTicketPrioritiesAPI.md#SupportTicketPrioritiesAPI_updateSupportTicketPriorityAsync) | **PUT** /api/v2/SupportService/SupportTicketPriorities/{supportTicketPriorityId} | Update a support ticket priority


# **SupportTicketPrioritiesAPI_createSupportTicketPriorityAsync**
```c
// Create a new support ticket priority
//
// Creates a new support ticket priority for the specified tenant.
//
empty_envelope_t* SupportTicketPrioritiesAPI_createSupportTicketPriorityAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, support_ticket_priority_create_dto_t *support_ticket_priority_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**support_ticket_priority_create_dto** | **[support_ticket_priority_create_dto_t](support_ticket_priority_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportTicketPrioritiesAPI_deleteSupportTicketPriorityAsync**
```c
// Delete a support ticket priority
//
// Deletes a support ticket priority by its unique identifier.
//
empty_envelope_t* SupportTicketPrioritiesAPI_deleteSupportTicketPriorityAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketPriorityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketPriorityId** | **char \*** |  | 
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

# **SupportTicketPrioritiesAPI_getSupportTicketPrioritiesAsync**
```c
// Retrieve a list of support ticket priorities
//
// Retrieves a list of support ticket priorities for the specified tenant with OData query support.
//
support_ticket_priority_dto_list_envelope_t* SupportTicketPrioritiesAPI_getSupportTicketPrioritiesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_ticket_priority_dto_list_envelope_t](support_ticket_priority_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportTicketPrioritiesAPI_getSupportTicketPrioritiesCountAsync**
```c
// Get the count of support ticket priorities
//
// Returns the total count of support ticket priorities for the specified tenant with OData query support.
//
int32_envelope_t* SupportTicketPrioritiesAPI_getSupportTicketPrioritiesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SupportTicketPrioritiesAPI_getSupportTicketPriorityAsync**
```c
// Retrieve a support ticket priority by ID
//
// Retrieves a single support ticket priority by its unique identifier.
//
support_ticket_priority_dto_envelope_t* SupportTicketPrioritiesAPI_getSupportTicketPriorityAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketPriorityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketPriorityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_ticket_priority_dto_envelope_t](support_ticket_priority_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportTicketPrioritiesAPI_updateSupportTicketPriorityAsync**
```c
// Update a support ticket priority
//
// Updates an existing support ticket priority by its unique identifier.
//
empty_envelope_t* SupportTicketPrioritiesAPI_updateSupportTicketPriorityAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketPriorityId, char *api_version, char *x_api_version, support_ticket_priority_update_dto_t *support_ticket_priority_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketPriorityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**support_ticket_priority_update_dto** | **[support_ticket_priority_update_dto_t](support_ticket_priority_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

