# CurriculumsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CurriculumsAPI_createCurriculumAsync**](CurriculumsAPI.md#CurriculumsAPI_createCurriculumAsync) | **POST** /api/v2/SocialService/Curriculums | Create a curriculum
[**CurriculumsAPI_deleteCurriculumAsync**](CurriculumsAPI.md#CurriculumsAPI_deleteCurriculumAsync) | **DELETE** /api/v2/SocialService/Curriculums/{curriculumId} | Delete a curriculum
[**CurriculumsAPI_getCurriculumAsync**](CurriculumsAPI.md#CurriculumsAPI_getCurriculumAsync) | **GET** /api/v2/SocialService/Curriculums/{curriculumId} | Get curriculum by ID
[**CurriculumsAPI_getCurriculumsAsync**](CurriculumsAPI.md#CurriculumsAPI_getCurriculumsAsync) | **GET** /api/v2/SocialService/Curriculums | Get curricula
[**CurriculumsAPI_getCurriculumsCountAsync**](CurriculumsAPI.md#CurriculumsAPI_getCurriculumsCountAsync) | **GET** /api/v2/SocialService/Curriculums/Count | Count curricula
[**CurriculumsAPI_patchCurriculumAsync**](CurriculumsAPI.md#CurriculumsAPI_patchCurriculumAsync) | **PATCH** /api/v2/SocialService/Curriculums/{curriculumId} | Patch a curriculum
[**CurriculumsAPI_updateCurriculumAsync**](CurriculumsAPI.md#CurriculumsAPI_updateCurriculumAsync) | **PUT** /api/v2/SocialService/Curriculums/{curriculumId} | Update a curriculum


# **CurriculumsAPI_createCurriculumAsync**
```c
// Create a curriculum
//
// Creates a curriculum (CV) on the specified social profile.
//
empty_envelope_t* CurriculumsAPI_createCurriculumAsync(apiClient_t *apiClient, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_create_dto_t *curriculum_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**curriculum_create_dto** | **[curriculum_create_dto_t](curriculum_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CurriculumsAPI_deleteCurriculumAsync**
```c
// Delete a curriculum
//
// Deletes a curriculum authored on the specified social profile.
//
empty_envelope_t* CurriculumsAPI_deleteCurriculumAsync(apiClient_t *apiClient, char *socialProfileId, char *curriculumId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**curriculumId** | **char \*** |  | 
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

# **CurriculumsAPI_getCurriculumAsync**
```c
// Get curriculum by ID
//
// Retrieves a specific curriculum authored on the specified social profile.
//
curriculum_dto_envelope_t* CurriculumsAPI_getCurriculumAsync(apiClient_t *apiClient, char *socialProfileId, char *curriculumId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**curriculumId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[curriculum_dto_envelope_t](curriculum_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CurriculumsAPI_getCurriculumsAsync**
```c
// Get curricula
//
// Retrieves the curricula (CVs) authored on the specified social profile.
//
curriculum_dto_list_envelope_t* CurriculumsAPI_getCurriculumsAsync(apiClient_t *apiClient, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_dto_collection_query_parameters_t *curriculum_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**curriculum_dto_collection_query_parameters** | **[curriculum_dto_collection_query_parameters_t](curriculum_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[curriculum_dto_list_envelope_t](curriculum_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CurriculumsAPI_getCurriculumsCountAsync**
```c
// Count curricula
//
// Returns the count of curricula authored on the specified social profile.
//
int32_envelope_t* CurriculumsAPI_getCurriculumsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_dto_collection_query_parameters_t *curriculum_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**curriculum_dto_collection_query_parameters** | **[curriculum_dto_collection_query_parameters_t](curriculum_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CurriculumsAPI_patchCurriculumAsync**
```c
// Patch a curriculum
//
// Partially updates an existing curriculum authored on the specified social profile.
//
empty_envelope_t* CurriculumsAPI_patchCurriculumAsync(apiClient_t *apiClient, char *socialProfileId, char *curriculumId, char *tenantId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**curriculumId** | **char \*** |  | 
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

# **CurriculumsAPI_updateCurriculumAsync**
```c
// Update a curriculum
//
// Updates an existing curriculum authored on the specified social profile.
//
empty_envelope_t* CurriculumsAPI_updateCurriculumAsync(apiClient_t *apiClient, char *socialProfileId, char *curriculumId, char *tenantId, char *api_version, char *x_api_version, curriculum_update_dto_t *curriculum_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**curriculumId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**curriculum_update_dto** | **[curriculum_update_dto_t](curriculum_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

