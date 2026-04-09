# CourseForumsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseForumsAPI_createCourseForumAsync**](CourseForumsAPI.md#CourseForumsAPI_createCourseForumAsync) | **POST** /api/v2/LearningService/CourseForums | Create a course forum
[**CourseForumsAPI_deleteCourseForumAsync**](CourseForumsAPI.md#CourseForumsAPI_deleteCourseForumAsync) | **DELETE** /api/v2/LearningService/CourseForums/{forumId} | Delete a course forum
[**CourseForumsAPI_getCourseForumByIdAsync**](CourseForumsAPI.md#CourseForumsAPI_getCourseForumByIdAsync) | **GET** /api/v2/LearningService/CourseForums/{forumId} | Get course forum by ID
[**CourseForumsAPI_getCourseForumsAsync**](CourseForumsAPI.md#CourseForumsAPI_getCourseForumsAsync) | **GET** /api/v2/LearningService/CourseForums | Get all course forums
[**CourseForumsAPI_getCourseForumsCountAsync**](CourseForumsAPI.md#CourseForumsAPI_getCourseForumsCountAsync) | **GET** /api/v2/LearningService/CourseForums/Count | Get course forums count
[**CourseForumsAPI_updateCourseForumAsync**](CourseForumsAPI.md#CourseForumsAPI_updateCourseForumAsync) | **PUT** /api/v2/LearningService/CourseForums/{forumId} | Update a course forum


# **CourseForumsAPI_createCourseForumAsync**
```c
// Create a course forum
//
// Creates a new course forum for the specified tenant.
//
course_forum_dto_t* CourseForumsAPI_createCourseForumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_forum_create_dto_t *course_forum_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_forum_create_dto** | **[course_forum_create_dto_t](course_forum_create_dto.md) \*** |  | [optional] 

### Return type

[course_forum_dto_t](course_forum_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseForumsAPI_deleteCourseForumAsync**
```c
// Delete a course forum
//
// Deletes a course forum by its ID.
//
void CourseForumsAPI_deleteCourseForumAsync(apiClient_t *apiClient, char *tenantId, char *forumId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**forumId** | **char \*** |  | 
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

# **CourseForumsAPI_getCourseForumByIdAsync**
```c
// Get course forum by ID
//
// Retrieves a specific course forum by its ID.
//
course_forum_dto_t* CourseForumsAPI_getCourseForumByIdAsync(apiClient_t *apiClient, char *forumId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**forumId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_forum_dto_t](course_forum_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseForumsAPI_getCourseForumsAsync**
```c
// Get all course forums
//
// Retrieves all course forums for the specified tenant.
//
list_t* CourseForumsAPI_getCourseForumsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_forum_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseForumsAPI_getCourseForumsCountAsync**
```c
// Get course forums count
//
// Returns the count of course forums for the specified tenant.
//
int* CourseForumsAPI_getCourseForumsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseForumsAPI_updateCourseForumAsync**
```c
// Update a course forum
//
// Updates an existing course forum.
//
course_forum_dto_t* CourseForumsAPI_updateCourseForumAsync(apiClient_t *apiClient, char *tenantId, char *forumId, char *api_version, char *x_api_version, course_forum_update_dto_t *course_forum_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**forumId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_forum_update_dto** | **[course_forum_update_dto_t](course_forum_update_dto.md) \*** |  | [optional] 

### Return type

[course_forum_dto_t](course_forum_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

