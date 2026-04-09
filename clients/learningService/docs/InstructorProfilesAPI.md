# InstructorProfilesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesCountGet**](InstructorProfilesAPI.md#InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesCountGet) | **GET** /api/v2/LearningService/InstructorProfiles/Count | 
[**InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesGet**](InstructorProfilesAPI.md#InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesGet) | **GET** /api/v2/LearningService/InstructorProfiles | 
[**InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdDelete**](InstructorProfilesAPI.md#InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdDelete) | **DELETE** /api/v2/LearningService/InstructorProfiles/{instructorProfileId} | 
[**InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdGet**](InstructorProfilesAPI.md#InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdGet) | **GET** /api/v2/LearningService/InstructorProfiles/{instructorProfileId} | 
[**InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdPut**](InstructorProfilesAPI.md#InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdPut) | **PUT** /api/v2/LearningService/InstructorProfiles/{instructorProfileId} | 
[**InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesPost**](InstructorProfilesAPI.md#InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesPost) | **POST** /api/v2/LearningService/InstructorProfiles | 


# **InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesCountGet**
```c
int* InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesCountGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

int*



### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesGet**
```c
list_t* InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](instructor_profile_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdDelete**
```c
void InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdDelete(apiClient_t *apiClient, char *tenantId, char *instructorProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**instructorProfileId** | **char \*** |  | 
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

# **InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdGet**
```c
instructor_profile_dto_t* InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdGet(apiClient_t *apiClient, char *tenantId, char *instructorProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**instructorProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[instructor_profile_dto_t](instructor_profile_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdPut**
```c
void InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdPut(apiClient_t *apiClient, char *tenantId, char *instructorProfileId, char *api_version, char *x_api_version, instructor_profile_update_dto_t *instructor_profile_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**instructorProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**instructor_profile_update_dto** | **[instructor_profile_update_dto_t](instructor_profile_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesPost**
```c
void InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesPost(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, instructor_profile_create_dto_t *instructor_profile_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**instructor_profile_create_dto** | **[instructor_profile_create_dto_t](instructor_profile_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

