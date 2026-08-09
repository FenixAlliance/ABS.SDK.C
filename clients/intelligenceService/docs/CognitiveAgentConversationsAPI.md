# CognitiveAgentConversationsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CognitiveAgentConversationsAPI_createCognitiveAgentConversationAsync**](CognitiveAgentConversationsAPI.md#CognitiveAgentConversationsAPI_createCognitiveAgentConversationAsync) | **POST** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations | Create a new cognitive agent conversation
[**CognitiveAgentConversationsAPI_deleteCognitiveAgentConversationAsync**](CognitiveAgentConversationsAPI.md#CognitiveAgentConversationsAPI_deleteCognitiveAgentConversationAsync) | **DELETE** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/{id} | Delete a cognitive agent conversation
[**CognitiveAgentConversationsAPI_getCognitiveAgentConversationByIdAsync**](CognitiveAgentConversationsAPI.md#CognitiveAgentConversationsAPI_getCognitiveAgentConversationByIdAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/{id} | Get a cognitive agent conversation by ID
[**CognitiveAgentConversationsAPI_getCognitiveAgentConversationsAsync**](CognitiveAgentConversationsAPI.md#CognitiveAgentConversationsAPI_getCognitiveAgentConversationsAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations | Get all conversations for a cognitive agent
[**CognitiveAgentConversationsAPI_getCognitiveAgentConversationsCountAsync**](CognitiveAgentConversationsAPI.md#CognitiveAgentConversationsAPI_getCognitiveAgentConversationsCountAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/Count | Get conversation count for a cognitive agent
[**CognitiveAgentConversationsAPI_updateCognitiveAgentConversationAsync**](CognitiveAgentConversationsAPI.md#CognitiveAgentConversationsAPI_updateCognitiveAgentConversationAsync) | **PUT** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/{id} | Update a cognitive agent conversation


# **CognitiveAgentConversationsAPI_createCognitiveAgentConversationAsync**
```c
// Create a new cognitive agent conversation
//
// Creates a new managed conversation for the specified cognitive agent and tenant.
//
void CognitiveAgentConversationsAPI_createCognitiveAgentConversationAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_conversation_create_dto_t *cognitive_agent_conversation_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_conversation_create_dto** | **[cognitive_agent_conversation_create_dto_t](cognitive_agent_conversation_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentConversationsAPI_deleteCognitiveAgentConversationAsync**
```c
// Delete a cognitive agent conversation
//
// Deletes a managed conversation for the specified cognitive agent and tenant.
//
void CognitiveAgentConversationsAPI_deleteCognitiveAgentConversationAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
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

# **CognitiveAgentConversationsAPI_getCognitiveAgentConversationByIdAsync**
```c
// Get a cognitive agent conversation by ID
//
// Retrieves a specific managed conversation of a cognitive agent by its identifier.
//
cognitive_agent_conversation_dto_envelope_t* CognitiveAgentConversationsAPI_getCognitiveAgentConversationByIdAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cognitive_agent_conversation_dto_envelope_t](cognitive_agent_conversation_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentConversationsAPI_getCognitiveAgentConversationsAsync**
```c
// Get all conversations for a cognitive agent
//
// Retrieves all managed conversations for the specified cognitive agent and tenant.
//
cognitive_agent_conversation_dto_list_envelope_t* CognitiveAgentConversationsAPI_getCognitiveAgentConversationsAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_conversation_dto_collection_query_parameters** | **[cognitive_agent_conversation_dto_collection_query_parameters_t](cognitive_agent_conversation_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[cognitive_agent_conversation_dto_list_envelope_t](cognitive_agent_conversation_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentConversationsAPI_getCognitiveAgentConversationsCountAsync**
```c
// Get conversation count for a cognitive agent
//
// Returns the count of managed conversations for the specified cognitive agent and tenant.
//
int32_envelope_t* CognitiveAgentConversationsAPI_getCognitiveAgentConversationsCountAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_conversation_dto_collection_query_parameters** | **[cognitive_agent_conversation_dto_collection_query_parameters_t](cognitive_agent_conversation_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentConversationsAPI_updateCognitiveAgentConversationAsync**
```c
// Update a cognitive agent conversation
//
// Updates an existing managed conversation for the specified cognitive agent and tenant.
//
void CognitiveAgentConversationsAPI_updateCognitiveAgentConversationAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version, cognitive_agent_conversation_update_dto_t *cognitive_agent_conversation_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_conversation_update_dto** | **[cognitive_agent_conversation_update_dto_t](cognitive_agent_conversation_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

