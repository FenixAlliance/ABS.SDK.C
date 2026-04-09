# CourseLibrariesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseLibrariesAPI_createCourseLibraryAsync**](CourseLibrariesAPI.md#CourseLibrariesAPI_createCourseLibraryAsync) | **POST** /api/v2/LearningService/CourseLibraries | Create a course library
[**CourseLibrariesAPI_deleteCourseLibraryAsync**](CourseLibrariesAPI.md#CourseLibrariesAPI_deleteCourseLibraryAsync) | **DELETE** /api/v2/LearningService/CourseLibraries/{libraryId} | Delete a course library
[**CourseLibrariesAPI_getCourseLibrariesAsync**](CourseLibrariesAPI.md#CourseLibrariesAPI_getCourseLibrariesAsync) | **GET** /api/v2/LearningService/CourseLibraries | Get all course libraries
[**CourseLibrariesAPI_getCourseLibrariesCountAsync**](CourseLibrariesAPI.md#CourseLibrariesAPI_getCourseLibrariesCountAsync) | **GET** /api/v2/LearningService/CourseLibraries/Count | Get course libraries count
[**CourseLibrariesAPI_getCourseLibraryByIdAsync**](CourseLibrariesAPI.md#CourseLibrariesAPI_getCourseLibraryByIdAsync) | **GET** /api/v2/LearningService/CourseLibraries/{libraryId} | Get course library by ID
[**CourseLibrariesAPI_updateCourseLibraryAsync**](CourseLibrariesAPI.md#CourseLibrariesAPI_updateCourseLibraryAsync) | **PUT** /api/v2/LearningService/CourseLibraries/{libraryId} | Update a course library


# **CourseLibrariesAPI_createCourseLibraryAsync**
```c
// Create a course library
//
// Creates a new course library for the specified tenant.
//
course_library_dto_t* CourseLibrariesAPI_createCourseLibraryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_library_create_dto_t *course_library_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_library_create_dto** | **[course_library_create_dto_t](course_library_create_dto.md) \*** |  | [optional] 

### Return type

[course_library_dto_t](course_library_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseLibrariesAPI_deleteCourseLibraryAsync**
```c
// Delete a course library
//
// Deletes a course library by its ID.
//
void CourseLibrariesAPI_deleteCourseLibraryAsync(apiClient_t *apiClient, char *tenantId, char *libraryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**libraryId** | **char \*** |  | 
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

# **CourseLibrariesAPI_getCourseLibrariesAsync**
```c
// Get all course libraries
//
// Retrieves all course libraries for the specified tenant.
//
list_t* CourseLibrariesAPI_getCourseLibrariesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_library_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseLibrariesAPI_getCourseLibrariesCountAsync**
```c
// Get course libraries count
//
// Returns the count of course libraries for the specified tenant.
//
int* CourseLibrariesAPI_getCourseLibrariesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseLibrariesAPI_getCourseLibraryByIdAsync**
```c
// Get course library by ID
//
// Retrieves a specific course library by its ID.
//
course_library_dto_t* CourseLibrariesAPI_getCourseLibraryByIdAsync(apiClient_t *apiClient, char *libraryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**libraryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_library_dto_t](course_library_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseLibrariesAPI_updateCourseLibraryAsync**
```c
// Update a course library
//
// Updates an existing course library.
//
course_library_dto_t* CourseLibrariesAPI_updateCourseLibraryAsync(apiClient_t *apiClient, char *tenantId, char *libraryId, char *api_version, char *x_api_version, course_library_update_dto_t *course_library_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**libraryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_library_update_dto** | **[course_library_update_dto_t](course_library_update_dto.md) \*** |  | [optional] 

### Return type

[course_library_dto_t](course_library_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

