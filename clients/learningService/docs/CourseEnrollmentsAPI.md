# CourseEnrollmentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseEnrollmentsAPI_createCourseEnrollmentAsync**](CourseEnrollmentsAPI.md#CourseEnrollmentsAPI_createCourseEnrollmentAsync) | **POST** /api/v2/LearningService/CourseEnrollments | Create a new course enrollment
[**CourseEnrollmentsAPI_deleteCourseEnrollmentAsync**](CourseEnrollmentsAPI.md#CourseEnrollmentsAPI_deleteCourseEnrollmentAsync) | **DELETE** /api/v2/LearningService/CourseEnrollments/{courseEnrollmentId} | Delete a course enrollment
[**CourseEnrollmentsAPI_getCourseEnrollmentAsync**](CourseEnrollmentsAPI.md#CourseEnrollmentsAPI_getCourseEnrollmentAsync) | **GET** /api/v2/LearningService/CourseEnrollments/{courseEnrollmentId} | Get course enrollment by ID
[**CourseEnrollmentsAPI_getEnrollmentsAsync**](CourseEnrollmentsAPI.md#CourseEnrollmentsAPI_getEnrollmentsAsync) | **GET** /api/v2/LearningService/CourseEnrollments | Get all course enrollments
[**CourseEnrollmentsAPI_getEnrollmentsCountAsync**](CourseEnrollmentsAPI.md#CourseEnrollmentsAPI_getEnrollmentsCountAsync) | **GET** /api/v2/LearningService/CourseEnrollments/Count | Get course enrollments count
[**CourseEnrollmentsAPI_getStudentCourseEnrollmentsAsync**](CourseEnrollmentsAPI.md#CourseEnrollmentsAPI_getStudentCourseEnrollmentsAsync) | **GET** /api/v2/LearningService/CourseEnrollments/Student/{studentProfileId} | Get enrollments by student
[**CourseEnrollmentsAPI_updateCourseEnrollmentAsync**](CourseEnrollmentsAPI.md#CourseEnrollmentsAPI_updateCourseEnrollmentAsync) | **PUT** /api/v2/LearningService/CourseEnrollments/{courseEnrollmentId} | Update a course enrollment


# **CourseEnrollmentsAPI_createCourseEnrollmentAsync**
```c
// Create a new course enrollment
//
// Creates a new course enrollment for the specified tenant.
//
void CourseEnrollmentsAPI_createCourseEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_enrollment_create_dto_t *course_enrollment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_enrollment_create_dto** | **[course_enrollment_create_dto_t](course_enrollment_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseEnrollmentsAPI_deleteCourseEnrollmentAsync**
```c
// Delete a course enrollment
//
// Deletes a course enrollment for the specified tenant.
//
void CourseEnrollmentsAPI_deleteCourseEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *courseEnrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseEnrollmentId** | **char \*** |  | 
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

# **CourseEnrollmentsAPI_getCourseEnrollmentAsync**
```c
// Get course enrollment by ID
//
// Retrieves a specific course enrollment by its ID.
//
course_enrollment_dto_t* CourseEnrollmentsAPI_getCourseEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *courseEnrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseEnrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_enrollment_dto_t](course_enrollment_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseEnrollmentsAPI_getEnrollmentsAsync**
```c
// Get all course enrollments
//
// Retrieves all course enrollments for the specified tenant.
//
list_t* CourseEnrollmentsAPI_getEnrollmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_enrollment_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseEnrollmentsAPI_getEnrollmentsCountAsync**
```c
// Get course enrollments count
//
// Returns the count of course enrollments for the specified tenant.
//
int* CourseEnrollmentsAPI_getEnrollmentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseEnrollmentsAPI_getStudentCourseEnrollmentsAsync**
```c
// Get enrollments by student
//
// Retrieves all enrollments for a specific student.
//
list_t* CourseEnrollmentsAPI_getStudentCourseEnrollmentsAsync(apiClient_t *apiClient, char *tenantId, char *studentProfileId, char *api_version, char *x_api_version);
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

[list_t](course_enrollment_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseEnrollmentsAPI_updateCourseEnrollmentAsync**
```c
// Update a course enrollment
//
// Updates an existing course enrollment for the specified tenant.
//
void CourseEnrollmentsAPI_updateCourseEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *courseEnrollmentId, char *api_version, char *x_api_version, course_enrollment_update_dto_t *course_enrollment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseEnrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_enrollment_update_dto** | **[course_enrollment_update_dto_t](course_enrollment_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

