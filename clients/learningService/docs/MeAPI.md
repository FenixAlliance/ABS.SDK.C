# MeAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MeAPI_getMyAverageScoreAsync**](MeAPI.md#MeAPI_getMyAverageScoreAsync) | **GET** /api/v2/LearningService/Me/AverageScore | Get current user&#39;s average score
[**MeAPI_getMyCertificatesAsync**](MeAPI.md#MeAPI_getMyCertificatesAsync) | **GET** /api/v2/LearningService/Me/Certificates | Get current user&#39;s completion certificates
[**MeAPI_getMyCertificatesCountAsync**](MeAPI.md#MeAPI_getMyCertificatesCountAsync) | **GET** /api/v2/LearningService/Me/Certificates/Count | Get current user&#39;s certificates count
[**MeAPI_getMyEnrollmentsAsync**](MeAPI.md#MeAPI_getMyEnrollmentsAsync) | **GET** /api/v2/LearningService/Me/Enrollments | Get current user&#39;s course enrollments
[**MeAPI_getMyEnrollmentsCountAsync**](MeAPI.md#MeAPI_getMyEnrollmentsCountAsync) | **GET** /api/v2/LearningService/Me/Enrollments/Count | Get current user&#39;s enrollment count
[**MeAPI_getMyHoursCompletedAsync**](MeAPI.md#MeAPI_getMyHoursCompletedAsync) | **GET** /api/v2/LearningService/Me/HoursCompleted | Get current user&#39;s completed hours
[**MeAPI_getMyInstructorCoursesAsync**](MeAPI.md#MeAPI_getMyInstructorCoursesAsync) | **GET** /api/v2/LearningService/Me/InstructorCourses | Get current user&#39;s instructor courses
[**MeAPI_getMyInstructorCoursesCountAsync**](MeAPI.md#MeAPI_getMyInstructorCoursesCountAsync) | **GET** /api/v2/LearningService/Me/InstructorCourses/Count | Get current user&#39;s instructor courses count
[**MeAPI_getMyInstructorProfilesAsync**](MeAPI.md#MeAPI_getMyInstructorProfilesAsync) | **GET** /api/v2/LearningService/Me/InstructorProfiles | Get current user&#39;s instructor profiles
[**MeAPI_getMyInstructorProfilesCountAsync**](MeAPI.md#MeAPI_getMyInstructorProfilesCountAsync) | **GET** /api/v2/LearningService/Me/InstructorProfiles/Count | Get current user&#39;s instructor profiles count
[**MeAPI_getMyPendingTaskCountAsync**](MeAPI.md#MeAPI_getMyPendingTaskCountAsync) | **GET** /api/v2/LearningService/Me/PendingTasks | Get current user&#39;s pending task count
[**MeAPI_getMyStudentCoursesAsync**](MeAPI.md#MeAPI_getMyStudentCoursesAsync) | **GET** /api/v2/LearningService/Me/Courses | Get current user&#39;s enrolled courses
[**MeAPI_getMyStudentCoursesCountAsync**](MeAPI.md#MeAPI_getMyStudentCoursesCountAsync) | **GET** /api/v2/LearningService/Me/Courses/Count | Get current user&#39;s enrolled courses count
[**MeAPI_getMyStudentProfilesAsync**](MeAPI.md#MeAPI_getMyStudentProfilesAsync) | **GET** /api/v2/LearningService/Me/StudentProfiles | Get current user&#39;s student profiles
[**MeAPI_getMyStudentProfilesCountAsync**](MeAPI.md#MeAPI_getMyStudentProfilesCountAsync) | **GET** /api/v2/LearningService/Me/StudentProfiles/Count | Get current user&#39;s student profiles count


# **MeAPI_getMyAverageScoreAsync**
```c
// Get current user's average score
//
average_dto_envelope_t* MeAPI_getMyAverageScoreAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[average_dto_envelope_t](average_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MeAPI_getMyCertificatesAsync**
```c
// Get current user's completion certificates
//
course_completion_certificate_dto_i_read_only_list_envelope_t* MeAPI_getMyCertificatesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_completion_certificate_dto_i_read_only_list_envelope_t](course_completion_certificate_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MeAPI_getMyCertificatesCountAsync**
```c
// Get current user's certificates count
//
int* MeAPI_getMyCertificatesCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **MeAPI_getMyEnrollmentsAsync**
```c
// Get current user's course enrollments
//
course_enrollment_dto_i_read_only_list_envelope_t* MeAPI_getMyEnrollmentsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_enrollment_dto_i_read_only_list_envelope_t](course_enrollment_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MeAPI_getMyEnrollmentsCountAsync**
```c
// Get current user's enrollment count
//
int* MeAPI_getMyEnrollmentsCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **MeAPI_getMyHoursCompletedAsync**
```c
// Get current user's completed hours
//
count_dto_envelope_t* MeAPI_getMyHoursCompletedAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[count_dto_envelope_t](count_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MeAPI_getMyInstructorCoursesAsync**
```c
// Get current user's instructor courses
//
course_dto_i_read_only_list_envelope_t* MeAPI_getMyInstructorCoursesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_dto_i_read_only_list_envelope_t](course_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MeAPI_getMyInstructorCoursesCountAsync**
```c
// Get current user's instructor courses count
//
int* MeAPI_getMyInstructorCoursesCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **MeAPI_getMyInstructorProfilesAsync**
```c
// Get current user's instructor profiles
//
instructor_profile_dto_i_read_only_list_envelope_t* MeAPI_getMyInstructorProfilesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[instructor_profile_dto_i_read_only_list_envelope_t](instructor_profile_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MeAPI_getMyInstructorProfilesCountAsync**
```c
// Get current user's instructor profiles count
//
int* MeAPI_getMyInstructorProfilesCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **MeAPI_getMyPendingTaskCountAsync**
```c
// Get current user's pending task count
//
count_dto_envelope_t* MeAPI_getMyPendingTaskCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[count_dto_envelope_t](count_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MeAPI_getMyStudentCoursesAsync**
```c
// Get current user's enrolled courses
//
course_dto_i_read_only_list_envelope_t* MeAPI_getMyStudentCoursesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_dto_i_read_only_list_envelope_t](course_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MeAPI_getMyStudentCoursesCountAsync**
```c
// Get current user's enrolled courses count
//
int* MeAPI_getMyStudentCoursesCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **MeAPI_getMyStudentProfilesAsync**
```c
// Get current user's student profiles
//
student_profile_dto_i_read_only_list_envelope_t* MeAPI_getMyStudentProfilesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[student_profile_dto_i_read_only_list_envelope_t](student_profile_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MeAPI_getMyStudentProfilesCountAsync**
```c
// Get current user's student profiles count
//
int* MeAPI_getMyStudentProfilesCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

