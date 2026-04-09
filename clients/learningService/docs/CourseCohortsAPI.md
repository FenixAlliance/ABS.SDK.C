# CourseCohortsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseCohortsAPI_createCourseCohortAsync**](CourseCohortsAPI.md#CourseCohortsAPI_createCourseCohortAsync) | **POST** /api/v2/LearningService/CourseCohorts | Create a new course cohort
[**CourseCohortsAPI_deleteCourseCohortAsync**](CourseCohortsAPI.md#CourseCohortsAPI_deleteCourseCohortAsync) | **DELETE** /api/v2/LearningService/CourseCohorts/{cohortId} | Delete a course cohort
[**CourseCohortsAPI_getCourseCohortByIdAsync**](CourseCohortsAPI.md#CourseCohortsAPI_getCourseCohortByIdAsync) | **GET** /api/v2/LearningService/CourseCohorts/{cohortId} | Get course cohort by ID
[**CourseCohortsAPI_getCourseCohortsAsync**](CourseCohortsAPI.md#CourseCohortsAPI_getCourseCohortsAsync) | **GET** /api/v2/LearningService/CourseCohorts | Get all course cohorts
[**CourseCohortsAPI_getCourseCohortsCountAsync**](CourseCohortsAPI.md#CourseCohortsAPI_getCourseCohortsCountAsync) | **GET** /api/v2/LearningService/CourseCohorts/Count | Get course cohorts count
[**CourseCohortsAPI_updateCourseCohortAsync**](CourseCohortsAPI.md#CourseCohortsAPI_updateCourseCohortAsync) | **PUT** /api/v2/LearningService/CourseCohorts/{cohortId} | Update a course cohort


# **CourseCohortsAPI_createCourseCohortAsync**
```c
// Create a new course cohort
//
// Creates a new course cohort for the specified tenant.
//
void CourseCohortsAPI_createCourseCohortAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_cohort_create_dto_t *course_cohort_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_cohort_create_dto** | **[course_cohort_create_dto_t](course_cohort_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCohortsAPI_deleteCourseCohortAsync**
```c
// Delete a course cohort
//
// Deletes a course cohort for the specified tenant.
//
void CourseCohortsAPI_deleteCourseCohortAsync(apiClient_t *apiClient, char *tenantId, char *cohortId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**cohortId** | **char \*** |  | 
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

# **CourseCohortsAPI_getCourseCohortByIdAsync**
```c
// Get course cohort by ID
//
// Retrieves a specific course cohort by its ID.
//
course_cohort_dto_t* CourseCohortsAPI_getCourseCohortByIdAsync(apiClient_t *apiClient, char *cohortId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cohortId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_cohort_dto_t](course_cohort_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCohortsAPI_getCourseCohortsAsync**
```c
// Get all course cohorts
//
// Retrieves all course cohorts for the specified tenant.
//
list_t* CourseCohortsAPI_getCourseCohortsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_cohort_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCohortsAPI_getCourseCohortsCountAsync**
```c
// Get course cohorts count
//
// Returns the count of course cohorts for the specified tenant.
//
int* CourseCohortsAPI_getCourseCohortsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseCohortsAPI_updateCourseCohortAsync**
```c
// Update a course cohort
//
// Updates an existing course cohort for the specified tenant.
//
void CourseCohortsAPI_updateCourseCohortAsync(apiClient_t *apiClient, char *tenantId, char *cohortId, char *api_version, char *x_api_version, course_cohort_update_dto_t *course_cohort_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**cohortId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_cohort_update_dto** | **[course_cohort_update_dto_t](course_cohort_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

