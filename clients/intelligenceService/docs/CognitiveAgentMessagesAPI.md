# CognitiveAgentMessagesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CognitiveAgentMessagesAPI_getCognitiveAgentMessageByIdAsync**](CognitiveAgentMessagesAPI.md#CognitiveAgentMessagesAPI_getCognitiveAgentMessageByIdAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/{conversationId}/Messages/{id} | Get a cognitive agent conversation message by ID
[**CognitiveAgentMessagesAPI_getCognitiveAgentMessagesAsync**](CognitiveAgentMessagesAPI.md#CognitiveAgentMessagesAPI_getCognitiveAgentMessagesAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/{conversationId}/Messages | Get all messages for a cognitive agent conversation
[**CognitiveAgentMessagesAPI_getCognitiveAgentMessagesCountAsync**](CognitiveAgentMessagesAPI.md#CognitiveAgentMessagesAPI_getCognitiveAgentMessagesCountAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/{conversationId}/Messages/Count | Get message count for a cognitive agent conversation


# **CognitiveAgentMessagesAPI_getCognitiveAgentMessageByIdAsync**
```c
// Get a cognitive agent conversation message by ID
//
// Retrieves a specific durable message of a conversation by its identifier.
//
cognitive_agent_message_dto_envelope_t* CognitiveAgentMessagesAPI_getCognitiveAgentMessageByIdAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *conversationId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**conversationId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cognitive_agent_message_dto_envelope_t](cognitive_agent_message_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentMessagesAPI_getCognitiveAgentMessagesAsync**
```c
// Get all messages for a cognitive agent conversation
//
// Retrieves all durable messages for the specified conversation, agent and tenant.
//
cognitive_agent_message_dto_list_envelope_t* CognitiveAgentMessagesAPI_getCognitiveAgentMessagesAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *conversationId, char *api_version, char *x_api_version, cognitive_agent_message_dto_collection_query_parameters_t *cognitive_agent_message_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**conversationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_message_dto_collection_query_parameters** | **[cognitive_agent_message_dto_collection_query_parameters_t](cognitive_agent_message_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[cognitive_agent_message_dto_list_envelope_t](cognitive_agent_message_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentMessagesAPI_getCognitiveAgentMessagesCountAsync**
```c
// Get message count for a cognitive agent conversation
//
// Returns the count of durable messages for the specified conversation, agent and tenant.
//
int32_envelope_t* CognitiveAgentMessagesAPI_getCognitiveAgentMessagesCountAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *conversationId, char *api_version, char *x_api_version, cognitive_agent_message_dto_collection_query_parameters_t *cognitive_agent_message_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**conversationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_message_dto_collection_query_parameters** | **[cognitive_agent_message_dto_collection_query_parameters_t](cognitive_agent_message_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

