# CourseFilesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseFilesAPI_createCourseFileAsync**](CourseFilesAPI.md#CourseFilesAPI_createCourseFileAsync) | **POST** /api/v2/LearningService/CourseFiles | Create a new course file
[**CourseFilesAPI_deleteCourseFileAsync**](CourseFilesAPI.md#CourseFilesAPI_deleteCourseFileAsync) | **DELETE** /api/v2/LearningService/CourseFiles/{fileId} | Delete a course file
[**CourseFilesAPI_getCourseFileByIdAsync**](CourseFilesAPI.md#CourseFilesAPI_getCourseFileByIdAsync) | **GET** /api/v2/LearningService/CourseFiles/{fileId} | Get course file by ID
[**CourseFilesAPI_getCourseFilesAsync**](CourseFilesAPI.md#CourseFilesAPI_getCourseFilesAsync) | **GET** /api/v2/LearningService/CourseFiles | Get all course files
[**CourseFilesAPI_getCourseFilesCountAsync**](CourseFilesAPI.md#CourseFilesAPI_getCourseFilesCountAsync) | **GET** /api/v2/LearningService/CourseFiles/Count | Get course files count
[**CourseFilesAPI_updateCourseFileAsync**](CourseFilesAPI.md#CourseFilesAPI_updateCourseFileAsync) | **PUT** /api/v2/LearningService/CourseFiles/{fileId} | Update a course file


# **CourseFilesAPI_createCourseFileAsync**
```c
// Create a new course file
//
// Creates a new course file for the specified tenant.
//
void CourseFilesAPI_createCourseFileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_file_create_dto_t *course_file_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_file_create_dto** | **[course_file_create_dto_t](course_file_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseFilesAPI_deleteCourseFileAsync**
```c
// Delete a course file
//
// Deletes a course file for the specified tenant.
//
void CourseFilesAPI_deleteCourseFileAsync(apiClient_t *apiClient, char *tenantId, char *fileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**fileId** | **char \*** |  | 
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

# **CourseFilesAPI_getCourseFileByIdAsync**
```c
// Get course file by ID
//
// Retrieves a specific course file by its ID.
//
course_file_dto_t* CourseFilesAPI_getCourseFileByIdAsync(apiClient_t *apiClient, char *fileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**fileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_file_dto_t](course_file_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseFilesAPI_getCourseFilesAsync**
```c
// Get all course files
//
// Retrieves all course files for the specified tenant.
//
list_t* CourseFilesAPI_getCourseFilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_file_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseFilesAPI_getCourseFilesCountAsync**
```c
// Get course files count
//
// Returns the count of course files for the specified tenant.
//
int* CourseFilesAPI_getCourseFilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseFilesAPI_updateCourseFileAsync**
```c
// Update a course file
//
// Updates an existing course file for the specified tenant.
//
void CourseFilesAPI_updateCourseFileAsync(apiClient_t *apiClient, char *tenantId, char *fileId, char *api_version, char *x_api_version, course_file_update_dto_t *course_file_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**fileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_file_update_dto** | **[course_file_update_dto_t](course_file_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

