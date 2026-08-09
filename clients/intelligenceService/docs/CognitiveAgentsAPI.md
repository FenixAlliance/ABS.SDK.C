# CognitiveAgentsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CognitiveAgentsAPI_createCognitiveAgentAsync**](CognitiveAgentsAPI.md#CognitiveAgentsAPI_createCognitiveAgentAsync) | **POST** /api/v2/IntelligenceService/CognitiveAgents | Create a new cognitive agent
[**CognitiveAgentsAPI_deleteCognitiveAgentAsync**](CognitiveAgentsAPI.md#CognitiveAgentsAPI_deleteCognitiveAgentAsync) | **DELETE** /api/v2/IntelligenceService/CognitiveAgents/{id} | Delete a cognitive agent
[**CognitiveAgentsAPI_getCognitiveAgentByIdAsync**](CognitiveAgentsAPI.md#CognitiveAgentsAPI_getCognitiveAgentByIdAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/{id} | Get cognitive agent by ID
[**CognitiveAgentsAPI_getCognitiveAgentsAsync**](CognitiveAgentsAPI.md#CognitiveAgentsAPI_getCognitiveAgentsAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents | Get all cognitive agents
[**CognitiveAgentsAPI_getCognitiveAgentsCountAsync**](CognitiveAgentsAPI.md#CognitiveAgentsAPI_getCognitiveAgentsCountAsync) | **GET** /api/v2/IntelligenceService/CognitiveAgents/Count | Get cognitive agents count
[**CognitiveAgentsAPI_updateCognitiveAgentAsync**](CognitiveAgentsAPI.md#CognitiveAgentsAPI_updateCognitiveAgentAsync) | **PUT** /api/v2/IntelligenceService/CognitiveAgents/{id} | Update a cognitive agent


# **CognitiveAgentsAPI_createCognitiveAgentAsync**
```c
// Create a new cognitive agent
//
// Creates a new managed cognitive agent for the specified tenant.
//
void CognitiveAgentsAPI_createCognitiveAgentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, cognitive_agent_create_dto_t *cognitive_agent_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_create_dto** | **[cognitive_agent_create_dto_t](cognitive_agent_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentsAPI_deleteCognitiveAgentAsync**
```c
// Delete a cognitive agent
//
// Deletes a managed cognitive agent for the specified tenant.
//
void CognitiveAgentsAPI_deleteCognitiveAgentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **CognitiveAgentsAPI_getCognitiveAgentByIdAsync**
```c
// Get cognitive agent by ID
//
// Retrieves a specific managed cognitive agent by its identifier.
//
cognitive_agent_dto_envelope_t* CognitiveAgentsAPI_getCognitiveAgentByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[cognitive_agent_dto_envelope_t](cognitive_agent_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentsAPI_getCognitiveAgentsAsync**
```c
// Get all cognitive agents
//
// Retrieves all managed cognitive agents for the specified tenant.
//
cognitive_agent_dto_list_envelope_t* CognitiveAgentsAPI_getCognitiveAgentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, cognitive_agent_dto_collection_query_parameters_t *cognitive_agent_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_dto_collection_query_parameters** | **[cognitive_agent_dto_collection_query_parameters_t](cognitive_agent_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[cognitive_agent_dto_list_envelope_t](cognitive_agent_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentsAPI_getCognitiveAgentsCountAsync**
```c
// Get cognitive agents count
//
// Returns the count of managed cognitive agents for the specified tenant.
//
int32_envelope_t* CognitiveAgentsAPI_getCognitiveAgentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, cognitive_agent_dto_collection_query_parameters_t *cognitive_agent_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_dto_collection_query_parameters** | **[cognitive_agent_dto_collection_query_parameters_t](cognitive_agent_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveAgentsAPI_updateCognitiveAgentAsync**
```c
// Update a cognitive agent
//
// Updates an existing managed cognitive agent for the specified tenant.
//
void CognitiveAgentsAPI_updateCognitiveAgentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, cognitive_agent_update_dto_t *cognitive_agent_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_agent_update_dto** | **[cognitive_agent_update_dto_t](cognitive_agent_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

