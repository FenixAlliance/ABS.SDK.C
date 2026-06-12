# CourseContentGroupsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseContentGroupsAPI_createCourseContentGroupAsync**](CourseContentGroupsAPI.md#CourseContentGroupsAPI_createCourseContentGroupAsync) | **POST** /api/v2/LearningService/CourseContentGroups | Create a new course content group
[**CourseContentGroupsAPI_deleteCourseContentGroupAsync**](CourseContentGroupsAPI.md#CourseContentGroupsAPI_deleteCourseContentGroupAsync) | **DELETE** /api/v2/LearningService/CourseContentGroups/{groupId} | Delete a course content group
[**CourseContentGroupsAPI_getCourseContentGroupByIdAsync**](CourseContentGroupsAPI.md#CourseContentGroupsAPI_getCourseContentGroupByIdAsync) | **GET** /api/v2/LearningService/CourseContentGroups/{groupId} | Get course content group by ID
[**CourseContentGroupsAPI_getCourseContentGroupsAsync**](CourseContentGroupsAPI.md#CourseContentGroupsAPI_getCourseContentGroupsAsync) | **GET** /api/v2/LearningService/CourseContentGroups | Get all course content groups
[**CourseContentGroupsAPI_getCourseContentGroupsByCourseAsync**](CourseContentGroupsAPI.md#CourseContentGroupsAPI_getCourseContentGroupsByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/ContentGroups | Get course content groups by course
[**CourseContentGroupsAPI_getCourseContentGroupsByCourseCountAsync**](CourseContentGroupsAPI.md#CourseContentGroupsAPI_getCourseContentGroupsByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/ContentGroups/Count | Get course content groups count by course
[**CourseContentGroupsAPI_getCourseContentGroupsCountAsync**](CourseContentGroupsAPI.md#CourseContentGroupsAPI_getCourseContentGroupsCountAsync) | **GET** /api/v2/LearningService/CourseContentGroups/Count | Get course content groups count
[**CourseContentGroupsAPI_patchCourseContentGroupAsync**](CourseContentGroupsAPI.md#CourseContentGroupsAPI_patchCourseContentGroupAsync) | **PATCH** /api/v2/LearningService/CourseContentGroups/{groupId} | Patch a course content group
[**CourseContentGroupsAPI_updateCourseContentGroupAsync**](CourseContentGroupsAPI.md#CourseContentGroupsAPI_updateCourseContentGroupAsync) | **PUT** /api/v2/LearningService/CourseContentGroups/{groupId} | Update a course content group


# **CourseContentGroupsAPI_createCourseContentGroupAsync**
```c
// Create a new course content group
//
// Creates a new course content group for the specified tenant.
//
void CourseContentGroupsAPI_createCourseContentGroupAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_content_group_create_dto_t *course_content_group_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_content_group_create_dto** | **[course_content_group_create_dto_t](course_content_group_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseContentGroupsAPI_deleteCourseContentGroupAsync**
```c
// Delete a course content group
//
// Deletes a course content group for the specified tenant.
//
void CourseContentGroupsAPI_deleteCourseContentGroupAsync(apiClient_t *apiClient, char *tenantId, char *groupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**groupId** | **char \*** |  | 
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

# **CourseContentGroupsAPI_getCourseContentGroupByIdAsync**
```c
// Get course content group by ID
//
// Retrieves a specific course content group by its ID.
//
course_content_group_dto_t* CourseContentGroupsAPI_getCourseContentGroupByIdAsync(apiClient_t *apiClient, char *groupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**groupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_content_group_dto_t](course_content_group_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseContentGroupsAPI_getCourseContentGroupsAsync**
```c
// Get all course content groups
//
// Retrieves all course content groups for the specified tenant.
//
list_t* CourseContentGroupsAPI_getCourseContentGroupsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_content_group_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseContentGroupsAPI_getCourseContentGroupsByCourseAsync**
```c
// Get course content groups by course
//
// Retrieves all course content groups for a specific course.
//
list_t* CourseContentGroupsAPI_getCourseContentGroupsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_content_group_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseContentGroupsAPI_getCourseContentGroupsByCourseCountAsync**
```c
// Get course content groups count by course
//
// Returns the count of course content groups for a specific course.
//
int* CourseContentGroupsAPI_getCourseContentGroupsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CourseContentGroupsAPI_getCourseContentGroupsCountAsync**
```c
// Get course content groups count
//
// Returns the count of course content groups for the specified tenant.
//
int* CourseContentGroupsAPI_getCourseContentGroupsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseContentGroupsAPI_patchCourseContentGroupAsync**
```c
// Patch a course content group
//
// Partially updates a course content group for the specified tenant.
//
empty_envelope_t* CourseContentGroupsAPI_patchCourseContentGroupAsync(apiClient_t *apiClient, char *tenantId, char *groupId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**groupId** | **char \*** |  | 
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

# **CourseContentGroupsAPI_updateCourseContentGroupAsync**
```c
// Update a course content group
//
// Updates an existing course content group for the specified tenant.
//
void CourseContentGroupsAPI_updateCourseContentGroupAsync(apiClient_t *apiClient, char *tenantId, char *groupId, char *api_version, char *x_api_version, course_content_group_update_dto_t *course_content_group_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**groupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_content_group_update_dto** | **[course_content_group_update_dto_t](course_content_group_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

