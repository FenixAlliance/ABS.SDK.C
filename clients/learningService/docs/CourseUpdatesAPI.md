# CourseUpdatesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseUpdatesAPI_createCourseUpdateAsync**](CourseUpdatesAPI.md#CourseUpdatesAPI_createCourseUpdateAsync) | **POST** /api/v2/LearningService/CourseUpdates | Create a new course update
[**CourseUpdatesAPI_deleteCourseUpdateAsync**](CourseUpdatesAPI.md#CourseUpdatesAPI_deleteCourseUpdateAsync) | **DELETE** /api/v2/LearningService/CourseUpdates/{updateId} | Delete a course update
[**CourseUpdatesAPI_getCourseUpdateByIdAsync**](CourseUpdatesAPI.md#CourseUpdatesAPI_getCourseUpdateByIdAsync) | **GET** /api/v2/LearningService/CourseUpdates/{updateId} | Get course update by ID
[**CourseUpdatesAPI_getCourseUpdatesAsync**](CourseUpdatesAPI.md#CourseUpdatesAPI_getCourseUpdatesAsync) | **GET** /api/v2/LearningService/CourseUpdates | Get all course updates
[**CourseUpdatesAPI_getCourseUpdatesCountAsync**](CourseUpdatesAPI.md#CourseUpdatesAPI_getCourseUpdatesCountAsync) | **GET** /api/v2/LearningService/CourseUpdates/Count | Get course updates count
[**CourseUpdatesAPI_updateCourseUpdateAsync**](CourseUpdatesAPI.md#CourseUpdatesAPI_updateCourseUpdateAsync) | **PUT** /api/v2/LearningService/CourseUpdates/{updateId} | Update a course update


# **CourseUpdatesAPI_createCourseUpdateAsync**
```c
// Create a new course update
//
// Creates a new course update for the specified tenant.
//
void CourseUpdatesAPI_createCourseUpdateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_news_create_dto_t *course_news_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_news_create_dto** | **[course_news_create_dto_t](course_news_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseUpdatesAPI_deleteCourseUpdateAsync**
```c
// Delete a course update
//
// Deletes a course update for the specified tenant.
//
void CourseUpdatesAPI_deleteCourseUpdateAsync(apiClient_t *apiClient, char *tenantId, char *updateId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**updateId** | **char \*** |  | 
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

# **CourseUpdatesAPI_getCourseUpdateByIdAsync**
```c
// Get course update by ID
//
// Retrieves a specific course update by its ID.
//
course_news_dto_t* CourseUpdatesAPI_getCourseUpdateByIdAsync(apiClient_t *apiClient, char *updateId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**updateId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_news_dto_t](course_news_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseUpdatesAPI_getCourseUpdatesAsync**
```c
// Get all course updates
//
// Retrieves all course updates for the specified tenant.
//
list_t* CourseUpdatesAPI_getCourseUpdatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_news_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseUpdatesAPI_getCourseUpdatesCountAsync**
```c
// Get course updates count
//
// Returns the count of course updates for the specified tenant.
//
int* CourseUpdatesAPI_getCourseUpdatesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseUpdatesAPI_updateCourseUpdateAsync**
```c
// Update a course update
//
// Updates an existing course update for the specified tenant.
//
void CourseUpdatesAPI_updateCourseUpdateAsync(apiClient_t *apiClient, char *tenantId, char *updateId, char *api_version, char *x_api_version, course_news_update_dto_t *course_news_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**updateId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_news_update_dto** | **[course_news_update_dto_t](course_news_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

