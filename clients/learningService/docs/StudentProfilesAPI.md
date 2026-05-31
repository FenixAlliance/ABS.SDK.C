# StudentProfilesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**StudentProfilesAPI_apiV2LearningServiceStudentProfilesCountGet**](StudentProfilesAPI.md#StudentProfilesAPI_apiV2LearningServiceStudentProfilesCountGet) | **GET** /api/v2/LearningService/StudentProfiles/Count | 
[**StudentProfilesAPI_apiV2LearningServiceStudentProfilesGet**](StudentProfilesAPI.md#StudentProfilesAPI_apiV2LearningServiceStudentProfilesGet) | **GET** /api/v2/LearningService/StudentProfiles | 
[**StudentProfilesAPI_apiV2LearningServiceStudentProfilesPost**](StudentProfilesAPI.md#StudentProfilesAPI_apiV2LearningServiceStudentProfilesPost) | **POST** /api/v2/LearningService/StudentProfiles | 
[**StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdAverageGet**](StudentProfilesAPI.md#StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdAverageGet) | **GET** /api/v2/LearningService/StudentProfiles/{studentProfileId}/Average | 
[**StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdDelete**](StudentProfilesAPI.md#StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdDelete) | **DELETE** /api/v2/LearningService/StudentProfiles/{studentProfileId} | 
[**StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdGet**](StudentProfilesAPI.md#StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdGet) | **GET** /api/v2/LearningService/StudentProfiles/{studentProfileId} | 
[**StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdHoursCompletedGet**](StudentProfilesAPI.md#StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdHoursCompletedGet) | **GET** /api/v2/LearningService/StudentProfiles/{studentProfileId}/HoursCompleted | 
[**StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdPut**](StudentProfilesAPI.md#StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdPut) | **PUT** /api/v2/LearningService/StudentProfiles/{studentProfileId} | 


# **StudentProfilesAPI_apiV2LearningServiceStudentProfilesCountGet**
```c
int* StudentProfilesAPI_apiV2LearningServiceStudentProfilesCountGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **StudentProfilesAPI_apiV2LearningServiceStudentProfilesGet**
```c
list_t* StudentProfilesAPI_apiV2LearningServiceStudentProfilesGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](student_profile_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StudentProfilesAPI_apiV2LearningServiceStudentProfilesPost**
```c
void StudentProfilesAPI_apiV2LearningServiceStudentProfilesPost(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, student_profile_create_dto_t *student_profile_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**student_profile_create_dto** | **[student_profile_create_dto_t](student_profile_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdAverageGet**
```c
average_dto_t* StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdAverageGet(apiClient_t *apiClient, char *tenantId, char *studentProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**studentProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[average_dto_t](average_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdDelete**
```c
void StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdDelete(apiClient_t *apiClient, char *tenantId, char *studentProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**studentProfileId** | **char \*** |  | 
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

# **StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdGet**
```c
student_profile_dto_t* StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdGet(apiClient_t *apiClient, char *tenantId, char *studentProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**studentProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[student_profile_dto_t](student_profile_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdHoursCompletedGet**
```c
count_dto_t* StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdHoursCompletedGet(apiClient_t *apiClient, char *tenantId, char *studentProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**studentProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[count_dto_t](count_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdPut**
```c
void StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdPut(apiClient_t *apiClient, char *tenantId, char *studentProfileId, char *api_version, char *x_api_version, student_profile_update_dto_t *student_profile_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**studentProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**student_profile_update_dto** | **[student_profile_update_dto_t](student_profile_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

