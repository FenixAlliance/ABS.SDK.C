# CourseAssignmentTypesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseAssignmentTypesAPI_createCourseAssignmentTypeAsync**](CourseAssignmentTypesAPI.md#CourseAssignmentTypesAPI_createCourseAssignmentTypeAsync) | **POST** /api/v2/LearningService/CourseAssignmentTypes | Create a course assignment type
[**CourseAssignmentTypesAPI_deleteCourseAssignmentTypeAsync**](CourseAssignmentTypesAPI.md#CourseAssignmentTypesAPI_deleteCourseAssignmentTypeAsync) | **DELETE** /api/v2/LearningService/CourseAssignmentTypes/{assignmentTypeId} | Delete a course assignment type
[**CourseAssignmentTypesAPI_getCourseAssignmentTypeByIdAsync**](CourseAssignmentTypesAPI.md#CourseAssignmentTypesAPI_getCourseAssignmentTypeByIdAsync) | **GET** /api/v2/LearningService/CourseAssignmentTypes/{assignmentTypeId} | Get course assignment type by ID
[**CourseAssignmentTypesAPI_getCourseAssignmentTypesAsync**](CourseAssignmentTypesAPI.md#CourseAssignmentTypesAPI_getCourseAssignmentTypesAsync) | **GET** /api/v2/LearningService/CourseAssignmentTypes | Get all course assignment types
[**CourseAssignmentTypesAPI_getCourseAssignmentTypesCountAsync**](CourseAssignmentTypesAPI.md#CourseAssignmentTypesAPI_getCourseAssignmentTypesCountAsync) | **GET** /api/v2/LearningService/CourseAssignmentTypes/Count | Get course assignment types count
[**CourseAssignmentTypesAPI_patchCourseAssignmentTypeAsync**](CourseAssignmentTypesAPI.md#CourseAssignmentTypesAPI_patchCourseAssignmentTypeAsync) | **PATCH** /api/v2/LearningService/CourseAssignmentTypes/{assignmentTypeId} | Patch a course assignment type
[**CourseAssignmentTypesAPI_updateCourseAssignmentTypeAsync**](CourseAssignmentTypesAPI.md#CourseAssignmentTypesAPI_updateCourseAssignmentTypeAsync) | **PUT** /api/v2/LearningService/CourseAssignmentTypes/{assignmentTypeId} | Update a course assignment type


# **CourseAssignmentTypesAPI_createCourseAssignmentTypeAsync**
```c
// Create a course assignment type
//
// Creates a new course assignment type for the specified tenant.
//
void CourseAssignmentTypesAPI_createCourseAssignmentTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_assignment_type_create_dto_t *course_assignment_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_assignment_type_create_dto** | **[course_assignment_type_create_dto_t](course_assignment_type_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseAssignmentTypesAPI_deleteCourseAssignmentTypeAsync**
```c
// Delete a course assignment type
//
// Deletes a course assignment type by its ID.
//
void CourseAssignmentTypesAPI_deleteCourseAssignmentTypeAsync(apiClient_t *apiClient, char *tenantId, char *assignmentTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assignmentTypeId** | **char \*** |  | 
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

# **CourseAssignmentTypesAPI_getCourseAssignmentTypeByIdAsync**
```c
// Get course assignment type by ID
//
// Retrieves a specific course assignment type by its ID.
//
course_assignment_type_dto_t* CourseAssignmentTypesAPI_getCourseAssignmentTypeByIdAsync(apiClient_t *apiClient, char *assignmentTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**assignmentTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_assignment_type_dto_t](course_assignment_type_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseAssignmentTypesAPI_getCourseAssignmentTypesAsync**
```c
// Get all course assignment types
//
// Retrieves all course assignment types for the specified tenant.
//
list_t* CourseAssignmentTypesAPI_getCourseAssignmentTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_assignment_type_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseAssignmentTypesAPI_getCourseAssignmentTypesCountAsync**
```c
// Get course assignment types count
//
// Returns the count of course assignment types for the specified tenant.
//
int* CourseAssignmentTypesAPI_getCourseAssignmentTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseAssignmentTypesAPI_patchCourseAssignmentTypeAsync**
```c
// Patch a course assignment type
//
// Partially updates a course assignment type for the specified tenant.
//
empty_envelope_t* CourseAssignmentTypesAPI_patchCourseAssignmentTypeAsync(apiClient_t *apiClient, char *tenantId, char *assignmentTypeId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assignmentTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseAssignmentTypesAPI_updateCourseAssignmentTypeAsync**
```c
// Update a course assignment type
//
// Updates an existing course assignment type.
//
void CourseAssignmentTypesAPI_updateCourseAssignmentTypeAsync(apiClient_t *apiClient, char *tenantId, char *assignmentTypeId, char *api_version, char *x_api_version, course_assignment_type_update_dto_t *course_assignment_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**assignmentTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_assignment_type_update_dto** | **[course_assignment_type_update_dto_t](course_assignment_type_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

