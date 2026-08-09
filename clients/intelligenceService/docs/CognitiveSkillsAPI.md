# CognitiveSkillsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CognitiveSkillsAPI_createCognitiveSkillAsync**](CognitiveSkillsAPI.md#CognitiveSkillsAPI_createCognitiveSkillAsync) | **POST** /api/v2/IntelligenceService/CognitiveSkills | Create a new cognitive skill
[**CognitiveSkillsAPI_deleteCognitiveSkillAsync**](CognitiveSkillsAPI.md#CognitiveSkillsAPI_deleteCognitiveSkillAsync) | **DELETE** /api/v2/IntelligenceService/CognitiveSkills/{id} | Delete a cognitive skill
[**CognitiveSkillsAPI_getCognitiveSkillByIdAsync**](CognitiveSkillsAPI.md#CognitiveSkillsAPI_getCognitiveSkillByIdAsync) | **GET** /api/v2/IntelligenceService/CognitiveSkills/{id} | Get cognitive skill by ID
[**CognitiveSkillsAPI_getCognitiveSkillsAsync**](CognitiveSkillsAPI.md#CognitiveSkillsAPI_getCognitiveSkillsAsync) | **GET** /api/v2/IntelligenceService/CognitiveSkills | Get all cognitive skills
[**CognitiveSkillsAPI_getCognitiveSkillsCountAsync**](CognitiveSkillsAPI.md#CognitiveSkillsAPI_getCognitiveSkillsCountAsync) | **GET** /api/v2/IntelligenceService/CognitiveSkills/Count | Get cognitive skills count
[**CognitiveSkillsAPI_updateCognitiveSkillAsync**](CognitiveSkillsAPI.md#CognitiveSkillsAPI_updateCognitiveSkillAsync) | **PUT** /api/v2/IntelligenceService/CognitiveSkills/{id} | Update a cognitive skill


# **CognitiveSkillsAPI_createCognitiveSkillAsync**
```c
// Create a new cognitive skill
//
// Creates a new reusable cognitive skill for the specified tenant.
//
void CognitiveSkillsAPI_createCognitiveSkillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, cognitive_skill_create_dto_t *cognitive_skill_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_skill_create_dto** | **[cognitive_skill_create_dto_t](cognitive_skill_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveSkillsAPI_deleteCognitiveSkillAsync**
```c
// Delete a cognitive skill
//
// Deletes a reusable cognitive skill for the specified tenant.
//
void CognitiveSkillsAPI_deleteCognitiveSkillAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **CognitiveSkillsAPI_getCognitiveSkillByIdAsync**
```c
// Get cognitive skill by ID
//
// Retrieves a specific reusable cognitive skill by its identifier.
//
cognitive_skill_dto_envelope_t* CognitiveSkillsAPI_getCognitiveSkillByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[cognitive_skill_dto_envelope_t](cognitive_skill_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveSkillsAPI_getCognitiveSkillsAsync**
```c
// Get all cognitive skills
//
// Retrieves all reusable cognitive skills for the specified tenant.
//
cognitive_skill_dto_list_envelope_t* CognitiveSkillsAPI_getCognitiveSkillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, cognitive_skill_dto_collection_query_parameters_t *cognitive_skill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_skill_dto_collection_query_parameters** | **[cognitive_skill_dto_collection_query_parameters_t](cognitive_skill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[cognitive_skill_dto_list_envelope_t](cognitive_skill_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveSkillsAPI_getCognitiveSkillsCountAsync**
```c
// Get cognitive skills count
//
// Returns the count of reusable cognitive skills for the specified tenant.
//
int32_envelope_t* CognitiveSkillsAPI_getCognitiveSkillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, cognitive_skill_dto_collection_query_parameters_t *cognitive_skill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_skill_dto_collection_query_parameters** | **[cognitive_skill_dto_collection_query_parameters_t](cognitive_skill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CognitiveSkillsAPI_updateCognitiveSkillAsync**
```c
// Update a cognitive skill
//
// Updates an existing reusable cognitive skill for the specified tenant.
//
void CognitiveSkillsAPI_updateCognitiveSkillAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, cognitive_skill_update_dto_t *cognitive_skill_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**cognitive_skill_update_dto** | **[cognitive_skill_update_dto_t](cognitive_skill_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

