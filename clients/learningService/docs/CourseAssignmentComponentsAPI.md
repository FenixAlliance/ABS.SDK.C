# CourseAssignmentComponentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseAssignmentComponentsAPI_createCourseAssignmentComponentAsync**](CourseAssignmentComponentsAPI.md#CourseAssignmentComponentsAPI_createCourseAssignmentComponentAsync) | **POST** /api/v2/LearningService/CourseAssignmentComponents | Create a course assignment component
[**CourseAssignmentComponentsAPI_deleteCourseAssignmentComponentAsync**](CourseAssignmentComponentsAPI.md#CourseAssignmentComponentsAPI_deleteCourseAssignmentComponentAsync) | **DELETE** /api/v2/LearningService/CourseAssignmentComponents/{componentId} | Delete a course assignment component
[**CourseAssignmentComponentsAPI_getCourseAssignmentComponentByIdAsync**](CourseAssignmentComponentsAPI.md#CourseAssignmentComponentsAPI_getCourseAssignmentComponentByIdAsync) | **GET** /api/v2/LearningService/CourseAssignmentComponents/{componentId} | Get course assignment component by ID
[**CourseAssignmentComponentsAPI_getCourseAssignmentComponentsAsync**](CourseAssignmentComponentsAPI.md#CourseAssignmentComponentsAPI_getCourseAssignmentComponentsAsync) | **GET** /api/v2/LearningService/CourseAssignmentComponents | Get all course assignment components
[**CourseAssignmentComponentsAPI_getCourseAssignmentComponentsCountAsync**](CourseAssignmentComponentsAPI.md#CourseAssignmentComponentsAPI_getCourseAssignmentComponentsCountAsync) | **GET** /api/v2/LearningService/CourseAssignmentComponents/Count | Get course assignment components count
[**CourseAssignmentComponentsAPI_patchCourseAssignmentComponentAsync**](CourseAssignmentComponentsAPI.md#CourseAssignmentComponentsAPI_patchCourseAssignmentComponentAsync) | **PATCH** /api/v2/LearningService/CourseAssignmentComponents/{componentId} | Patch a course assignment component
[**CourseAssignmentComponentsAPI_updateCourseAssignmentComponentAsync**](CourseAssignmentComponentsAPI.md#CourseAssignmentComponentsAPI_updateCourseAssignmentComponentAsync) | **PUT** /api/v2/LearningService/CourseAssignmentComponents/{componentId} | Update a course assignment component


# **CourseAssignmentComponentsAPI_createCourseAssignmentComponentAsync**
```c
// Create a course assignment component
//
// Creates a new course assignment component for the specified tenant.
//
void CourseAssignmentComponentsAPI_createCourseAssignmentComponentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_assignment_component_create_dto_t *course_assignment_component_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_assignment_component_create_dto** | **[course_assignment_component_create_dto_t](course_assignment_component_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseAssignmentComponentsAPI_deleteCourseAssignmentComponentAsync**
```c
// Delete a course assignment component
//
// Deletes a course assignment component by its ID.
//
void CourseAssignmentComponentsAPI_deleteCourseAssignmentComponentAsync(apiClient_t *apiClient, char *tenantId, char *componentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**componentId** | **char \*** |  | 
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

# **CourseAssignmentComponentsAPI_getCourseAssignmentComponentByIdAsync**
```c
// Get course assignment component by ID
//
// Retrieves a specific course assignment component by its ID.
//
course_assignment_component_dto_t* CourseAssignmentComponentsAPI_getCourseAssignmentComponentByIdAsync(apiClient_t *apiClient, char *componentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**componentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_assignment_component_dto_t](course_assignment_component_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseAssignmentComponentsAPI_getCourseAssignmentComponentsAsync**
```c
// Get all course assignment components
//
// Retrieves all course assignment components for the specified tenant.
//
list_t* CourseAssignmentComponentsAPI_getCourseAssignmentComponentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_assignment_component_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseAssignmentComponentsAPI_getCourseAssignmentComponentsCountAsync**
```c
// Get course assignment components count
//
// Returns the count of course assignment components for the specified tenant.
//
int* CourseAssignmentComponentsAPI_getCourseAssignmentComponentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseAssignmentComponentsAPI_patchCourseAssignmentComponentAsync**
```c
// Patch a course assignment component
//
// Partially updates a course assignment component for the specified tenant.
//
empty_envelope_t* CourseAssignmentComponentsAPI_patchCourseAssignmentComponentAsync(apiClient_t *apiClient, char *tenantId, char *componentId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**componentId** | **char \*** |  | 
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

# **CourseAssignmentComponentsAPI_updateCourseAssignmentComponentAsync**
```c
// Update a course assignment component
//
// Updates an existing course assignment component.
//
void CourseAssignmentComponentsAPI_updateCourseAssignmentComponentAsync(apiClient_t *apiClient, char *tenantId, char *componentId, char *api_version, char *x_api_version, course_assignment_component_update_dto_t *course_assignment_component_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**componentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_assignment_component_update_dto** | **[course_assignment_component_update_dto_t](course_assignment_component_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

