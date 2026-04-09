# CoursePagesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CoursePagesAPI_createCoursePageAsync**](CoursePagesAPI.md#CoursePagesAPI_createCoursePageAsync) | **POST** /api/v2/LearningService/CoursePages | Create a new course page
[**CoursePagesAPI_deleteCoursePageAsync**](CoursePagesAPI.md#CoursePagesAPI_deleteCoursePageAsync) | **DELETE** /api/v2/LearningService/CoursePages/{pageId} | Delete a course page
[**CoursePagesAPI_getCoursePageByIdAsync**](CoursePagesAPI.md#CoursePagesAPI_getCoursePageByIdAsync) | **GET** /api/v2/LearningService/CoursePages/{pageId} | Get course page by ID
[**CoursePagesAPI_getCoursePagesAsync**](CoursePagesAPI.md#CoursePagesAPI_getCoursePagesAsync) | **GET** /api/v2/LearningService/CoursePages | Get all course pages
[**CoursePagesAPI_getCoursePagesCountAsync**](CoursePagesAPI.md#CoursePagesAPI_getCoursePagesCountAsync) | **GET** /api/v2/LearningService/CoursePages/Count | Get course pages count
[**CoursePagesAPI_updateCoursePageAsync**](CoursePagesAPI.md#CoursePagesAPI_updateCoursePageAsync) | **PUT** /api/v2/LearningService/CoursePages/{pageId} | Update a course page


# **CoursePagesAPI_createCoursePageAsync**
```c
// Create a new course page
//
// Creates a new course page for the specified tenant.
//
void CoursePagesAPI_createCoursePageAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_page_create_dto_t *course_page_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_page_create_dto** | **[course_page_create_dto_t](course_page_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursePagesAPI_deleteCoursePageAsync**
```c
// Delete a course page
//
// Deletes a course page for the specified tenant.
//
void CoursePagesAPI_deleteCoursePageAsync(apiClient_t *apiClient, char *tenantId, char *pageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pageId** | **char \*** |  | 
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

# **CoursePagesAPI_getCoursePageByIdAsync**
```c
// Get course page by ID
//
// Retrieves a specific course page by its ID.
//
course_page_dto_t* CoursePagesAPI_getCoursePageByIdAsync(apiClient_t *apiClient, char *pageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_page_dto_t](course_page_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursePagesAPI_getCoursePagesAsync**
```c
// Get all course pages
//
// Retrieves all course pages for the specified tenant.
//
list_t* CoursePagesAPI_getCoursePagesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_page_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursePagesAPI_getCoursePagesCountAsync**
```c
// Get course pages count
//
// Returns the count of course pages for the specified tenant.
//
int* CoursePagesAPI_getCoursePagesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CoursePagesAPI_updateCoursePageAsync**
```c
// Update a course page
//
// Updates an existing course page for the specified tenant.
//
void CoursePagesAPI_updateCoursePageAsync(apiClient_t *apiClient, char *tenantId, char *pageId, char *api_version, char *x_api_version, course_page_update_dto_t *course_page_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_page_update_dto** | **[course_page_update_dto_t](course_page_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

