# CognitiveAgentSkillsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CognitiveAgentSkillsAPI_createCognitiveAgentSkillAsync**](CognitiveAgentSkillsAPI.md#CognitiveAgentSkillsAPI_createCognitiveAgentSkillAsync) | **POST** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Skills | Assign a skill to a cognitive agent
[**CognitiveAgentSkillsAPI_deleteCognitiveAgentSkillAsync**](CognitiveAgentSkillsAPI.md#CognitiveAgentSkillsAPI_deleteCognitiveAgentSkillAsync) | **DELETE** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Skills/{id} | Remove a skill assignment from a cognitive agent
[**CognitiveAgentSkillsAPI_getCognitiveAgentSkillByIdAsync**](CognitiveAgentSkillsAPI.md#CognitiveAgentSkillsAPI_getCognitiveAgentSkillByIdAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Skills/{id} | Get a cognitive agent skill assignment by ID
[**CognitiveAgentSkillsAPI_getCognitiveAgentSkillsAsync**](CognitiveAgentSkillsAPI.md#CognitiveAgentSkillsAPI_getCognitiveAgentSkillsAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Skills | Get all skill assignments for a cognitive agent
[**CognitiveAgentSkillsAPI_getCognitiveAgentSkillsCountAsync**](CognitiveAgentSkillsAPI.md#CognitiveAgentSkillsAPI_getCognitiveAgentSkillsCountAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Skills/Count | Get skill assignment count for a cognitive agent
[**CognitiveAgentSkillsAPI_updateCognitiveAgentSkillAsync**](CognitiveAgentSkillsAPI.md#CognitiveAgentSkillsAPI_updateCognitiveAgentSkillAsync) | **PUT** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Skills/{id} | Update a cognitive agent skill assignment


# **CognitiveAgentSkillsAPI_createCognitiveAgentSkillAsync**
```c
// Assign a skill to a cognitive agent
//
// Assigns a reusable catalog skill to the specified cognitive agent and tenant.
//
void CognitiveAgentSkillsAPI_createCognitiveAgentSkillAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_skill_create_dto_t *cognitive_agent_skill_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_skill_create_dto** | **[cognitive_agent_skill_create_dto_t](cognitive_agent_skill_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentSkillsAPI_deleteCognitiveAgentSkillAsync**
```c
// Remove a skill assignment from a cognitive agent
//
// Removes a skill assignment from the specified cognitive agent and tenant.
//
void CognitiveAgentSkillsAPI_deleteCognitiveAgentSkillAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version);
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

# **CognitiveAgentSkillsAPI_getCognitiveAgentSkillByIdAsync**
```c
// Get a cognitive agent skill assignment by ID
//
// Retrieves a specific skill assignment of a cognitive agent by its identifier.
//
cognitive_agent_skill_dto_envelope_t* CognitiveAgentSkillsAPI_getCognitiveAgentSkillByIdAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version);
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

[cognitive_agent_skill_dto_envelope_t](cognitive_agent_skill_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentSkillsAPI_getCognitiveAgentSkillsAsync**
```c
// Get all skill assignments for a cognitive agent
//
// Retrieves all skill assignments for the specified cognitive agent and tenant.
//
cognitive_agent_skill_dto_list_envelope_t* CognitiveAgentSkillsAPI_getCognitiveAgentSkillsAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_skill_dto_collection_query_parameters_t *cognitive_agent_skill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_skill_dto_collection_query_parameters** | **[cognitive_agent_skill_dto_collection_query_parameters_t](cognitive_agent_skill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[cognitive_agent_skill_dto_list_envelope_t](cognitive_agent_skill_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentSkillsAPI_getCognitiveAgentSkillsCountAsync**
```c
// Get skill assignment count for a cognitive agent
//
// Returns the count of skill assignments for the specified cognitive agent and tenant.
//
int32_envelope_t* CognitiveAgentSkillsAPI_getCognitiveAgentSkillsCountAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_skill_dto_collection_query_parameters_t *cognitive_agent_skill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_skill_dto_collection_query_parameters** | **[cognitive_agent_skill_dto_collection_query_parameters_t](cognitive_agent_skill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentSkillsAPI_updateCognitiveAgentSkillAsync**
```c
// Update a cognitive agent skill assignment
//
// Updates the per-assignment overrides of a skill assignment for the specified agent and tenant.
//
void CognitiveAgentSkillsAPI_updateCognitiveAgentSkillAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version, cognitive_agent_skill_update_dto_t *cognitive_agent_skill_update_dto);
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
**cognitive_agent_skill_update_dto** | **[cognitive_agent_skill_update_dto_t](cognitive_agent_skill_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

