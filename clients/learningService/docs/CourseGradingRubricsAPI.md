# CourseGradingRubricsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseGradingRubricsAPI_createCourseGradingRubricAsync**](CourseGradingRubricsAPI.md#CourseGradingRubricsAPI_createCourseGradingRubricAsync) | **POST** /api/v2/LearningService/CourseGradingRubrics | Create a course grading rubric
[**CourseGradingRubricsAPI_deleteCourseGradingRubricAsync**](CourseGradingRubricsAPI.md#CourseGradingRubricsAPI_deleteCourseGradingRubricAsync) | **DELETE** /api/v2/LearningService/CourseGradingRubrics/{rubricId} | Delete a course grading rubric
[**CourseGradingRubricsAPI_getCourseGradingRubricByIdAsync**](CourseGradingRubricsAPI.md#CourseGradingRubricsAPI_getCourseGradingRubricByIdAsync) | **GET** /api/v2/LearningService/CourseGradingRubrics/{rubricId} | Get course grading rubric by ID
[**CourseGradingRubricsAPI_getCourseGradingRubricsAsync**](CourseGradingRubricsAPI.md#CourseGradingRubricsAPI_getCourseGradingRubricsAsync) | **GET** /api/v2/LearningService/CourseGradingRubrics | Get all course grading rubrics
[**CourseGradingRubricsAPI_getCourseGradingRubricsCountAsync**](CourseGradingRubricsAPI.md#CourseGradingRubricsAPI_getCourseGradingRubricsCountAsync) | **GET** /api/v2/LearningService/CourseGradingRubrics/Count | Get course grading rubrics count
[**CourseGradingRubricsAPI_patchCourseGradingRubricAsync**](CourseGradingRubricsAPI.md#CourseGradingRubricsAPI_patchCourseGradingRubricAsync) | **PATCH** /api/v2/LearningService/CourseGradingRubrics/{rubricId} | Patch a course grading rubric
[**CourseGradingRubricsAPI_updateCourseGradingRubricAsync**](CourseGradingRubricsAPI.md#CourseGradingRubricsAPI_updateCourseGradingRubricAsync) | **PUT** /api/v2/LearningService/CourseGradingRubrics/{rubricId} | Update a course grading rubric


# **CourseGradingRubricsAPI_createCourseGradingRubricAsync**
```c
// Create a course grading rubric
//
// Creates a new course grading rubric for the specified tenant.
//
void CourseGradingRubricsAPI_createCourseGradingRubricAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_grading_rubric_create_dto_t *course_grading_rubric_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_grading_rubric_create_dto** | **[course_grading_rubric_create_dto_t](course_grading_rubric_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseGradingRubricsAPI_deleteCourseGradingRubricAsync**
```c
// Delete a course grading rubric
//
// Deletes a course grading rubric by its ID.
//
void CourseGradingRubricsAPI_deleteCourseGradingRubricAsync(apiClient_t *apiClient, char *tenantId, char *rubricId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**rubricId** | **char \*** |  | 
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

# **CourseGradingRubricsAPI_getCourseGradingRubricByIdAsync**
```c
// Get course grading rubric by ID
//
// Retrieves a specific course grading rubric by its ID.
//
course_grading_rubric_dto_t* CourseGradingRubricsAPI_getCourseGradingRubricByIdAsync(apiClient_t *apiClient, char *rubricId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**rubricId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_grading_rubric_dto_t](course_grading_rubric_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseGradingRubricsAPI_getCourseGradingRubricsAsync**
```c
// Get all course grading rubrics
//
// Retrieves all course grading rubrics for the specified tenant.
//
list_t* CourseGradingRubricsAPI_getCourseGradingRubricsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_grading_rubric_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseGradingRubricsAPI_getCourseGradingRubricsCountAsync**
```c
// Get course grading rubrics count
//
// Returns the count of course grading rubrics for the specified tenant.
//
int* CourseGradingRubricsAPI_getCourseGradingRubricsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseGradingRubricsAPI_patchCourseGradingRubricAsync**
```c
// Patch a course grading rubric
//
// Partially updates an existing course grading rubric.
//
void CourseGradingRubricsAPI_patchCourseGradingRubricAsync(apiClient_t *apiClient, char *tenantId, char *rubricId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**rubricId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseGradingRubricsAPI_updateCourseGradingRubricAsync**
```c
// Update a course grading rubric
//
// Updates an existing course grading rubric.
//
void CourseGradingRubricsAPI_updateCourseGradingRubricAsync(apiClient_t *apiClient, char *tenantId, char *rubricId, char *api_version, char *x_api_version, course_grading_rubric_update_dto_t *course_grading_rubric_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**rubricId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_grading_rubric_update_dto** | **[course_grading_rubric_update_dto_t](course_grading_rubric_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

