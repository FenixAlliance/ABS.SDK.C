# CourseAssignmentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseAssignmentsAPI_createCourseAssignmentAsync**](CourseAssignmentsAPI.md#CourseAssignmentsAPI_createCourseAssignmentAsync) | **POST** /api/v2/LearningService/CourseAssignments | Create a new course assignment
[**CourseAssignmentsAPI_deleteCourseAssignmentAsync**](CourseAssignmentsAPI.md#CourseAssignmentsAPI_deleteCourseAssignmentAsync) | **DELETE** /api/v2/LearningService/CourseAssignments/{assignmentId} | Delete a course assignment
[**CourseAssignmentsAPI_getCourseAssignmentByIdAsync**](CourseAssignmentsAPI.md#CourseAssignmentsAPI_getCourseAssignmentByIdAsync) | **GET** /api/v2/LearningService/CourseAssignments/{assignmentId} | Get course assignment by ID
[**CourseAssignmentsAPI_getCourseAssignmentsAsync**](CourseAssignmentsAPI.md#CourseAssignmentsAPI_getCourseAssignmentsAsync) | **GET** /api/v2/LearningService/CourseAssignments | Get all course assignments
[**CourseAssignmentsAPI_getCourseAssignmentsCountAsync**](CourseAssignmentsAPI.md#CourseAssignmentsAPI_getCourseAssignmentsCountAsync) | **GET** /api/v2/LearningService/CourseAssignments/Count | Get course assignments count
[**CourseAssignmentsAPI_updateCourseAssignmentAsync**](CourseAssignmentsAPI.md#CourseAssignmentsAPI_updateCourseAssignmentAsync) | **PUT** /api/v2/LearningService/CourseAssignments/{assignmentId} | Update a course assignment


# **CourseAssignmentsAPI_createCourseAssignmentAsync**
```c
// Create a new course assignment
//
// Creates a new course assignment for the specified tenant.
//
void CourseAssignmentsAPI_createCourseAssignmentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_assignment_create_dto_t *course_assignment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_assignment_create_dto** | **[course_assignment_create_dto_t](course_assignment_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseAssignmentsAPI_deleteCourseAssignmentAsync**
```c
// Delete a course assignment
//
// Deletes a course assignment for the specified tenant.
//
void CourseAssignmentsAPI_deleteCourseAssignmentAsync(apiClient_t *apiClient, char *tenantId, char *assignmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assignmentId** | **char \*** |  | 
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

# **CourseAssignmentsAPI_getCourseAssignmentByIdAsync**
```c
// Get course assignment by ID
//
// Retrieves a specific course assignment by its ID.
//
course_assignment_dto_t* CourseAssignmentsAPI_getCourseAssignmentByIdAsync(apiClient_t *apiClient, char *assignmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**assignmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_assignment_dto_t](course_assignment_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseAssignmentsAPI_getCourseAssignmentsAsync**
```c
// Get all course assignments
//
// Retrieves all course assignments for the specified tenant.
//
list_t* CourseAssignmentsAPI_getCourseAssignmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_assignment_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseAssignmentsAPI_getCourseAssignmentsCountAsync**
```c
// Get course assignments count
//
// Returns the count of course assignments for the specified tenant.
//
int* CourseAssignmentsAPI_getCourseAssignmentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseAssignmentsAPI_updateCourseAssignmentAsync**
```c
// Update a course assignment
//
// Updates an existing course assignment for the specified tenant.
//
void CourseAssignmentsAPI_updateCourseAssignmentAsync(apiClient_t *apiClient, char *tenantId, char *assignmentId, char *api_version, char *x_api_version, course_assignment_update_dto_t *course_assignment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assignmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_assignment_update_dto** | **[course_assignment_update_dto_t](course_assignment_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

