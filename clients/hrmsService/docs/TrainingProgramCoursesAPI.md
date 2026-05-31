# TrainingProgramCoursesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TrainingProgramCoursesAPI_createTrainingProgramCourseAsync**](TrainingProgramCoursesAPI.md#TrainingProgramCoursesAPI_createTrainingProgramCourseAsync) | **POST** /api/v2/HrmsService/TrainingProgramCourses | Create a training program course
[**TrainingProgramCoursesAPI_deleteTrainingProgramCourseAsync**](TrainingProgramCoursesAPI.md#TrainingProgramCoursesAPI_deleteTrainingProgramCourseAsync) | **DELETE** /api/v2/HrmsService/TrainingProgramCourses/{courseId} | Delete a training program course
[**TrainingProgramCoursesAPI_getTrainingProgramCourseByIdAsync**](TrainingProgramCoursesAPI.md#TrainingProgramCoursesAPI_getTrainingProgramCourseByIdAsync) | **GET** /api/v2/HrmsService/TrainingProgramCourses/{courseId} | Get training program course by ID
[**TrainingProgramCoursesAPI_getTrainingProgramCoursesAsync**](TrainingProgramCoursesAPI.md#TrainingProgramCoursesAPI_getTrainingProgramCoursesAsync) | **GET** /api/v2/HrmsService/TrainingProgramCourses | Get training program courses
[**TrainingProgramCoursesAPI_getTrainingProgramCoursesCountAsync**](TrainingProgramCoursesAPI.md#TrainingProgramCoursesAPI_getTrainingProgramCoursesCountAsync) | **GET** /api/v2/HrmsService/TrainingProgramCourses/Count | Count training program courses
[**TrainingProgramCoursesAPI_updateTrainingProgramCourseAsync**](TrainingProgramCoursesAPI.md#TrainingProgramCoursesAPI_updateTrainingProgramCourseAsync) | **PUT** /api/v2/HrmsService/TrainingProgramCourses/{courseId} | Update a training program course


# **TrainingProgramCoursesAPI_createTrainingProgramCourseAsync**
```c
// Create a training program course
//
// Creates a new training program course for the specified tenant.
//
empty_envelope_t* TrainingProgramCoursesAPI_createTrainingProgramCourseAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, training_program_course_create_dto_t *training_program_course_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**training_program_course_create_dto** | **[training_program_course_create_dto_t](training_program_course_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrainingProgramCoursesAPI_deleteTrainingProgramCourseAsync**
```c
// Delete a training program course
//
// Deletes a training program course for the specified tenant.
//
empty_envelope_t* TrainingProgramCoursesAPI_deleteTrainingProgramCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseId** | **char \*** |  | 
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

# **TrainingProgramCoursesAPI_getTrainingProgramCourseByIdAsync**
```c
// Get training program course by ID
//
// Retrieves a specific training program course by its identifier.
//
training_program_course_dto_envelope_t* TrainingProgramCoursesAPI_getTrainingProgramCourseByIdAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[training_program_course_dto_envelope_t](training_program_course_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrainingProgramCoursesAPI_getTrainingProgramCoursesAsync**
```c
// Get training program courses
//
// Retrieves training program courses for the specified tenant.
//
training_program_course_dto_list_envelope_t* TrainingProgramCoursesAPI_getTrainingProgramCoursesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[training_program_course_dto_list_envelope_t](training_program_course_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrainingProgramCoursesAPI_getTrainingProgramCoursesCountAsync**
```c
// Count training program courses
//
// Counts training program courses for the specified tenant.
//
int32_envelope_t* TrainingProgramCoursesAPI_getTrainingProgramCoursesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrainingProgramCoursesAPI_updateTrainingProgramCourseAsync**
```c
// Update a training program course
//
// Updates an existing training program course for the specified tenant.
//
empty_envelope_t* TrainingProgramCoursesAPI_updateTrainingProgramCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version, training_program_course_update_dto_t *training_program_course_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**training_program_course_update_dto** | **[training_program_course_update_dto_t](training_program_course_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

