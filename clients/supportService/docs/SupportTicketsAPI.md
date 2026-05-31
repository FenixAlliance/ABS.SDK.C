# SupportTicketsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SupportTicketsAPI_createSupportTicketAsync**](SupportTicketsAPI.md#SupportTicketsAPI_createSupportTicketAsync) | **POST** /api/v2/SupportService/SupportTickets | Create a new support ticket
[**SupportTicketsAPI_deleteSupportTicketAsync**](SupportTicketsAPI.md#SupportTicketsAPI_deleteSupportTicketAsync) | **DELETE** /api/v2/SupportService/SupportTickets/{supportTicketId} | Delete a support ticket
[**SupportTicketsAPI_deleteSupportTicketConversationAsync**](SupportTicketsAPI.md#SupportTicketsAPI_deleteSupportTicketConversationAsync) | **DELETE** /api/v2/SupportService/SupportTickets/{supportTicketId}/Conversations/{supportTicketConversationId} | Delete a conversation from a support ticket
[**SupportTicketsAPI_getSupportTicketAsync**](SupportTicketsAPI.md#SupportTicketsAPI_getSupportTicketAsync) | **GET** /api/v2/SupportService/SupportTickets/{supportTicketId} | Retrieve a support ticket by ID
[**SupportTicketsAPI_getSupportTicketConversationAsync**](SupportTicketsAPI.md#SupportTicketsAPI_getSupportTicketConversationAsync) | **GET** /api/v2/SupportService/SupportTickets/{supportTicketId}/Conversations/{supportTicketConversationId} | Retrieve a specific conversation for a support ticket
[**SupportTicketsAPI_getSupportTicketConversationMessagesAsync**](SupportTicketsAPI.md#SupportTicketsAPI_getSupportTicketConversationMessagesAsync) | **GET** /api/v2/SupportService/SupportTickets/{supportTicketId}/Conversations/{supportTicketConversationId}/Messages | Retrieve messages for a support ticket conversation
[**SupportTicketsAPI_getSupportTicketConversationsAsync**](SupportTicketsAPI.md#SupportTicketsAPI_getSupportTicketConversationsAsync) | **GET** /api/v2/SupportService/SupportTickets/{supportTicketId}/Conversations | Retrieve conversations for a support ticket
[**SupportTicketsAPI_getSupportTicketsAsync**](SupportTicketsAPI.md#SupportTicketsAPI_getSupportTicketsAsync) | **GET** /api/v2/SupportService/SupportTickets | Retrieve a list of support tickets
[**SupportTicketsAPI_getSupportTicketsCountAsync**](SupportTicketsAPI.md#SupportTicketsAPI_getSupportTicketsCountAsync) | **GET** /api/v2/SupportService/SupportTickets/Count | Get the count of support tickets
[**SupportTicketsAPI_relateSupportTicketToConversationAsync**](SupportTicketsAPI.md#SupportTicketsAPI_relateSupportTicketToConversationAsync) | **POST** /api/v2/SupportService/SupportTickets/{supportTicketId}/Conversations | Create a conversation for a support ticket
[**SupportTicketsAPI_updateSupportTicketAsync**](SupportTicketsAPI.md#SupportTicketsAPI_updateSupportTicketAsync) | **PUT** /api/v2/SupportService/SupportTickets/{supportTicketId} | Update a support ticket


# **SupportTicketsAPI_createSupportTicketAsync**
```c
// Create a new support ticket
//
// Creates a new support ticket for the specified tenant.
//
empty_envelope_t* SupportTicketsAPI_createSupportTicketAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, support_ticket_create_dto_t *support_ticket_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**support_ticket_create_dto** | **[support_ticket_create_dto_t](support_ticket_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportTicketsAPI_deleteSupportTicketAsync**
```c
// Delete a support ticket
//
// Deletes a support ticket by its unique identifier.
//
empty_envelope_t* SupportTicketsAPI_deleteSupportTicketAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketId** | **char \*** |  | 
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

# **SupportTicketsAPI_deleteSupportTicketConversationAsync**
```c
// Delete a conversation from a support ticket
//
// Deletes a specific conversation from a support ticket.
//
empty_envelope_t* SupportTicketsAPI_deleteSupportTicketConversationAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *supportTicketConversationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketId** | **char \*** |  | 
**supportTicketConversationId** | **char \*** |  | 
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

# **SupportTicketsAPI_getSupportTicketAsync**
```c
// Retrieve a support ticket by ID
//
// Retrieves a single support ticket by its unique identifier.
//
support_ticket_dto_envelope_t* SupportTicketsAPI_getSupportTicketAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_ticket_dto_envelope_t](support_ticket_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportTicketsAPI_getSupportTicketConversationAsync**
```c
// Retrieve a specific conversation for a support ticket
//
// Retrieves a single conversation by its ID for a specific support ticket.
//
support_ticket_conversation_dto_envelope_t* SupportTicketsAPI_getSupportTicketConversationAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *supportTicketConversationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketId** | **char \*** |  | 
**supportTicketConversationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_ticket_conversation_dto_envelope_t](support_ticket_conversation_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportTicketsAPI_getSupportTicketConversationMessagesAsync**
```c
// Retrieve messages for a support ticket conversation
//
// Retrieves the list of messages within a specific conversation of a support ticket.
//
private_message_dto_list_envelope_t* SupportTicketsAPI_getSupportTicketConversationMessagesAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *supportTicketConversationId, int *pageNumber, int *pageSize, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketId** | **char \*** |  | 
**supportTicketConversationId** | **char \*** |  | 
**pageNumber** | **int \*** |  | [optional] 
**pageSize** | **int \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[private_message_dto_list_envelope_t](private_message_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportTicketsAPI_getSupportTicketConversationsAsync**
```c
// Retrieve conversations for a support ticket
//
// Retrieves the list of conversations associated with a specific support ticket.
//
support_ticket_conversation_dto_list_envelope_t* SupportTicketsAPI_getSupportTicketConversationsAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_ticket_conversation_dto_list_envelope_t](support_ticket_conversation_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportTicketsAPI_getSupportTicketsAsync**
```c
// Retrieve a list of support tickets
//
// Retrieves a list of support tickets for the specified tenant with OData query support.
//
support_ticket_dto_list_envelope_t* SupportTicketsAPI_getSupportTicketsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **SupportTicketsAPI_getSupportTicketsCountAsync**
```c
// Get the count of support tickets
//
// Returns the total count of support tickets for the specified tenant with OData query support.
//
int32_envelope_t* SupportTicketsAPI_getSupportTicketsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SupportTicketsAPI_relateSupportTicketToConversationAsync**
```c
// Create a conversation for a support ticket
//
// Creates a new conversation and associates it with the specified support ticket.
//
empty_envelope_t* SupportTicketsAPI_relateSupportTicketToConversationAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *api_version, char *x_api_version, support_ticket_conversation_create_dto_t *support_ticket_conversation_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**support_ticket_conversation_create_dto** | **[support_ticket_conversation_create_dto_t](support_ticket_conversation_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportTicketsAPI_updateSupportTicketAsync**
```c
// Update a support ticket
//
// Updates an existing support ticket by its unique identifier.
//
empty_envelope_t* SupportTicketsAPI_updateSupportTicketAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *api_version, char *x_api_version, support_ticket_update_dto_t *support_ticket_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**support_ticket_update_dto** | **[support_ticket_update_dto_t](support_ticket_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

