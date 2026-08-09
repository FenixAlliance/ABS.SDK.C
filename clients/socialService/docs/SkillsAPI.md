# SkillsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SkillsAPI_createSkillAsync**](SkillsAPI.md#SkillsAPI_createSkillAsync) | **POST** /api/v2/SocialService/Skills | Create a skill
[**SkillsAPI_deleteSkillAsync**](SkillsAPI.md#SkillsAPI_deleteSkillAsync) | **DELETE** /api/v2/SocialService/Skills/{skillId} | Delete a skill
[**SkillsAPI_getSkillByIdAsync**](SkillsAPI.md#SkillsAPI_getSkillByIdAsync) | **GET** /api/v2/SocialService/Skills/{skillId} | Get skill by ID
[**SkillsAPI_getSkillsAsync**](SkillsAPI.md#SkillsAPI_getSkillsAsync) | **GET** /api/v2/SocialService/Skills | Get skills
[**SkillsAPI_getSkillsCountAsync**](SkillsAPI.md#SkillsAPI_getSkillsCountAsync) | **GET** /api/v2/SocialService/Skills/Count | Count skills
[**SkillsAPI_patchSkillAsync**](SkillsAPI.md#SkillsAPI_patchSkillAsync) | **PATCH** /api/v2/SocialService/Skills/{skillId} | Patch a skill
[**SkillsAPI_updateSkillAsync**](SkillsAPI.md#SkillsAPI_updateSkillAsync) | **PUT** /api/v2/SocialService/Skills/{skillId} | Update a skill


# **SkillsAPI_createSkillAsync**
```c
// Create a skill
//
// Creates a new skill catalog entry for the specified tenant.
//
empty_envelope_t* SkillsAPI_createSkillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, skill_create_dto_t *skill_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**skill_create_dto** | **[skill_create_dto_t](skill_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SkillsAPI_deleteSkillAsync**
```c
// Delete a skill
//
// Deletes a skill for the specified tenant.
//
empty_envelope_t* SkillsAPI_deleteSkillAsync(apiClient_t *apiClient, char *tenantId, char *skillId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**skillId** | **char \*** |  | 
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

# **SkillsAPI_getSkillByIdAsync**
```c
// Get skill by ID
//
// Retrieves a specific skill by its identifier.
//
skill_dto_envelope_t* SkillsAPI_getSkillByIdAsync(apiClient_t *apiClient, char *tenantId, char *skillId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**skillId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[skill_dto_envelope_t](skill_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SkillsAPI_getSkillsAsync**
```c
// Get skills
//
// Retrieves the skill catalog for the specified tenant.
//
skill_dto_list_envelope_t* SkillsAPI_getSkillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, skill_dto_collection_query_parameters_t *skill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**skill_dto_collection_query_parameters** | **[skill_dto_collection_query_parameters_t](skill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[skill_dto_list_envelope_t](skill_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SkillsAPI_getSkillsCountAsync**
```c
// Count skills
//
// Counts skill catalog entries for the specified tenant.
//
int32_envelope_t* SkillsAPI_getSkillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, skill_dto_collection_query_parameters_t *skill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**skill_dto_collection_query_parameters** | **[skill_dto_collection_query_parameters_t](skill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SkillsAPI_patchSkillAsync**
```c
// Patch a skill
//
// Partially updates an existing skill for the specified tenant.
//
empty_envelope_t* SkillsAPI_patchSkillAsync(apiClient_t *apiClient, char *tenantId, char *skillId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**skillId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SkillsAPI_updateSkillAsync**
```c
// Update a skill
//
// Updates an existing skill for the specified tenant.
//
empty_envelope_t* SkillsAPI_updateSkillAsync(apiClient_t *apiClient, char *tenantId, char *skillId, char *api_version, char *x_api_version, skill_update_dto_t *skill_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**skillId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**skill_update_dto** | **[skill_update_dto_t](skill_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

