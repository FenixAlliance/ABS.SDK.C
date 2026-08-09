# CurriculumExperiencesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CurriculumExperiencesAPI_createCurriculumExperienceAsync**](CurriculumExperiencesAPI.md#CurriculumExperiencesAPI_createCurriculumExperienceAsync) | **POST** /api/v2/SocialService/Curriculums/{curriculumId}/Experiences | Create a curriculum experience
[**CurriculumExperiencesAPI_deleteCurriculumExperienceAsync**](CurriculumExperiencesAPI.md#CurriculumExperiencesAPI_deleteCurriculumExperienceAsync) | **DELETE** /api/v2/SocialService/Curriculums/{curriculumId}/Experiences/{experienceId} | Delete a curriculum experience
[**CurriculumExperiencesAPI_getCurriculumExperienceAsync**](CurriculumExperiencesAPI.md#CurriculumExperiencesAPI_getCurriculumExperienceAsync) | **GET** /api/v2/SocialService/Curriculums/{curriculumId}/Experiences/{experienceId} | Get curriculum experience by ID
[**CurriculumExperiencesAPI_getCurriculumExperiencesAsync**](CurriculumExperiencesAPI.md#CurriculumExperiencesAPI_getCurriculumExperiencesAsync) | **GET** /api/v2/SocialService/Curriculums/{curriculumId}/Experiences | Get curriculum experiences
[**CurriculumExperiencesAPI_getCurriculumExperiencesCountAsync**](CurriculumExperiencesAPI.md#CurriculumExperiencesAPI_getCurriculumExperiencesCountAsync) | **GET** /api/v2/SocialService/Curriculums/{curriculumId}/Experiences/Count | Count curriculum experiences
[**CurriculumExperiencesAPI_patchCurriculumExperienceAsync**](CurriculumExperiencesAPI.md#CurriculumExperiencesAPI_patchCurriculumExperienceAsync) | **PATCH** /api/v2/SocialService/Curriculums/{curriculumId}/Experiences/{experienceId} | Patch a curriculum experience
[**CurriculumExperiencesAPI_updateCurriculumExperienceAsync**](CurriculumExperiencesAPI.md#CurriculumExperiencesAPI_updateCurriculumExperienceAsync) | **PUT** /api/v2/SocialService/Curriculums/{curriculumId}/Experiences/{experienceId} | Update a curriculum experience


# **CurriculumExperiencesAPI_createCurriculumExperienceAsync**
```c
// Create a curriculum experience
//
// Adds a work-experience record to a curriculum authored on the specified social profile.
//
empty_envelope_t* CurriculumExperiencesAPI_createCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_experience_create_dto_t *curriculum_experience_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**curriculumId** | **char \*** |  | 
**socialProfileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**curriculum_experience_create_dto** | **[curriculum_experience_create_dto_t](curriculum_experience_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CurriculumExperiencesAPI_deleteCurriculumExperienceAsync**
```c
// Delete a curriculum experience
//
// Removes a work-experience record from a curriculum.
//
empty_envelope_t* CurriculumExperiencesAPI_deleteCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *experienceId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**curriculumId** | **char \*** |  | 
**experienceId** | **char \*** |  | 
**socialProfileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
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

# **CurriculumExperiencesAPI_getCurriculumExperienceAsync**
```c
// Get curriculum experience by ID
//
// Retrieves a specific work-experience record of a curriculum.
//
curriculum_experience_dto_envelope_t* CurriculumExperiencesAPI_getCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *experienceId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**curriculumId** | **char \*** |  | 
**experienceId** | **char \*** |  | 
**socialProfileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[curriculum_experience_dto_envelope_t](curriculum_experience_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CurriculumExperiencesAPI_getCurriculumExperiencesAsync**
```c
// Get curriculum experiences
//
// Retrieves the work-experience records of a curriculum authored on the specified social profile.
//
curriculum_experience_dto_list_envelope_t* CurriculumExperiencesAPI_getCurriculumExperiencesAsync(apiClient_t *apiClient, char *curriculumId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_experience_dto_collection_query_parameters_t *curriculum_experience_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**curriculumId** | **char \*** |  | 
**socialProfileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**curriculum_experience_dto_collection_query_parameters** | **[curriculum_experience_dto_collection_query_parameters_t](curriculum_experience_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[curriculum_experience_dto_list_envelope_t](curriculum_experience_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CurriculumExperiencesAPI_getCurriculumExperiencesCountAsync**
```c
// Count curriculum experiences
//
// Returns the count of work-experience records of a curriculum.
//
int32_envelope_t* CurriculumExperiencesAPI_getCurriculumExperiencesCountAsync(apiClient_t *apiClient, char *curriculumId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_experience_dto_collection_query_parameters_t *curriculum_experience_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**curriculumId** | **char \*** |  | 
**socialProfileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**curriculum_experience_dto_collection_query_parameters** | **[curriculum_experience_dto_collection_query_parameters_t](curriculum_experience_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CurriculumExperiencesAPI_patchCurriculumExperienceAsync**
```c
// Patch a curriculum experience
//
// Partially updates an existing work-experience record of a curriculum.
//
empty_envelope_t* CurriculumExperiencesAPI_patchCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *experienceId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**curriculumId** | **char \*** |  | 
**experienceId** | **char \*** |  | 
**socialProfileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
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

# **CurriculumExperiencesAPI_updateCurriculumExperienceAsync**
```c
// Update a curriculum experience
//
// Updates an existing work-experience record of a curriculum.
//
empty_envelope_t* CurriculumExperiencesAPI_updateCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *experienceId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_experience_update_dto_t *curriculum_experience_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**curriculumId** | **char \*** |  | 
**experienceId** | **char \*** |  | 
**socialProfileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**curriculum_experience_update_dto** | **[curriculum_experience_update_dto_t](curriculum_experience_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

