# CognitiveAgentVariablesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CognitiveAgentVariablesAPI_createCognitiveAgentVariableAsync**](CognitiveAgentVariablesAPI.md#CognitiveAgentVariablesAPI_createCognitiveAgentVariableAsync) | **POST** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Variables | Add a variable to a cognitive agent
[**CognitiveAgentVariablesAPI_deleteCognitiveAgentVariableAsync**](CognitiveAgentVariablesAPI.md#CognitiveAgentVariablesAPI_deleteCognitiveAgentVariableAsync) | **DELETE** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Variables/{id} | Remove a variable from a cognitive agent
[**CognitiveAgentVariablesAPI_getCognitiveAgentVariableByIdAsync**](CognitiveAgentVariablesAPI.md#CognitiveAgentVariablesAPI_getCognitiveAgentVariableByIdAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Variables/{id} | Get a cognitive agent variable by ID
[**CognitiveAgentVariablesAPI_getCognitiveAgentVariablesAsync**](CognitiveAgentVariablesAPI.md#CognitiveAgentVariablesAPI_getCognitiveAgentVariablesAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Variables | Get all variables for a cognitive agent
[**CognitiveAgentVariablesAPI_getCognitiveAgentVariablesCountAsync**](CognitiveAgentVariablesAPI.md#CognitiveAgentVariablesAPI_getCognitiveAgentVariablesCountAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Variables/Count | Get variable count for a cognitive agent
[**CognitiveAgentVariablesAPI_updateCognitiveAgentVariableAsync**](CognitiveAgentVariablesAPI.md#CognitiveAgentVariablesAPI_updateCognitiveAgentVariableAsync) | **PUT** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Variables/{id} | Update a cognitive agent variable


# **CognitiveAgentVariablesAPI_createCognitiveAgentVariableAsync**
```c
// Add a variable to a cognitive agent
//
// Adds a key/value variable to the specified cognitive agent and tenant.
//
void CognitiveAgentVariablesAPI_createCognitiveAgentVariableAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_variable_create_dto_t *cognitive_agent_variable_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_variable_create_dto** | **[cognitive_agent_variable_create_dto_t](cognitive_agent_variable_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentVariablesAPI_deleteCognitiveAgentVariableAsync**
```c
// Remove a variable from a cognitive agent
//
// Removes a variable from the specified cognitive agent and tenant.
//
void CognitiveAgentVariablesAPI_deleteCognitiveAgentVariableAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version);
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

# **CognitiveAgentVariablesAPI_getCognitiveAgentVariableByIdAsync**
```c
// Get a cognitive agent variable by ID
//
// Retrieves a specific variable of a cognitive agent by its identifier.
//
cognitive_agent_variable_dto_envelope_t* CognitiveAgentVariablesAPI_getCognitiveAgentVariableByIdAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version);
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

[cognitive_agent_variable_dto_envelope_t](cognitive_agent_variable_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentVariablesAPI_getCognitiveAgentVariablesAsync**
```c
// Get all variables for a cognitive agent
//
// Retrieves all key/value variables for the specified cognitive agent and tenant.
//
cognitive_agent_variable_dto_list_envelope_t* CognitiveAgentVariablesAPI_getCognitiveAgentVariablesAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_variable_dto_collection_query_parameters_t *cognitive_agent_variable_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_variable_dto_collection_query_parameters** | **[cognitive_agent_variable_dto_collection_query_parameters_t](cognitive_agent_variable_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[cognitive_agent_variable_dto_list_envelope_t](cognitive_agent_variable_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentVariablesAPI_getCognitiveAgentVariablesCountAsync**
```c
// Get variable count for a cognitive agent
//
// Returns the count of variables for the specified cognitive agent and tenant.
//
int32_envelope_t* CognitiveAgentVariablesAPI_getCognitiveAgentVariablesCountAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_variable_dto_collection_query_parameters_t *cognitive_agent_variable_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_variable_dto_collection_query_parameters** | **[cognitive_agent_variable_dto_collection_query_parameters_t](cognitive_agent_variable_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentVariablesAPI_updateCognitiveAgentVariableAsync**
```c
// Update a cognitive agent variable
//
// Updates the value of a variable for the specified agent and tenant.
//
void CognitiveAgentVariablesAPI_updateCognitiveAgentVariableAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version, cognitive_agent_variable_update_dto_t *cognitive_agent_variable_update_dto);
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
**cognitive_agent_variable_update_dto** | **[cognitive_agent_variable_update_dto_t](cognitive_agent_variable_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

