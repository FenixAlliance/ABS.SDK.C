# CourseArticlesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseArticlesAPI_createCourseArticleAsync**](CourseArticlesAPI.md#CourseArticlesAPI_createCourseArticleAsync) | **POST** /api/v2/LearningService/CourseArticles | Create a new course article
[**CourseArticlesAPI_deleteCourseArticleAsync**](CourseArticlesAPI.md#CourseArticlesAPI_deleteCourseArticleAsync) | **DELETE** /api/v2/LearningService/CourseArticles/{articleId} | Delete a course article
[**CourseArticlesAPI_getCourseArticleByIdAsync**](CourseArticlesAPI.md#CourseArticlesAPI_getCourseArticleByIdAsync) | **GET** /api/v2/LearningService/CourseArticles/{articleId} | Get course article by ID
[**CourseArticlesAPI_getCourseArticlesAsync**](CourseArticlesAPI.md#CourseArticlesAPI_getCourseArticlesAsync) | **GET** /api/v2/LearningService/CourseArticles | Get all course articles
[**CourseArticlesAPI_getCourseArticlesCountAsync**](CourseArticlesAPI.md#CourseArticlesAPI_getCourseArticlesCountAsync) | **GET** /api/v2/LearningService/CourseArticles/Count | Get course articles count
[**CourseArticlesAPI_updateCourseArticleAsync**](CourseArticlesAPI.md#CourseArticlesAPI_updateCourseArticleAsync) | **PUT** /api/v2/LearningService/CourseArticles/{articleId} | Update a course article


# **CourseArticlesAPI_createCourseArticleAsync**
```c
// Create a new course article
//
// Creates a new course article for the specified tenant.
//
void CourseArticlesAPI_createCourseArticleAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_article_create_dto_t *course_article_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_article_create_dto** | **[course_article_create_dto_t](course_article_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseArticlesAPI_deleteCourseArticleAsync**
```c
// Delete a course article
//
// Deletes a course article for the specified tenant.
//
void CourseArticlesAPI_deleteCourseArticleAsync(apiClient_t *apiClient, char *tenantId, char *articleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**articleId** | **char \*** |  | 
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

# **CourseArticlesAPI_getCourseArticleByIdAsync**
```c
// Get course article by ID
//
// Retrieves a specific course article by its ID.
//
course_article_dto_t* CourseArticlesAPI_getCourseArticleByIdAsync(apiClient_t *apiClient, char *articleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**articleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_article_dto_t](course_article_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseArticlesAPI_getCourseArticlesAsync**
```c
// Get all course articles
//
// Retrieves all course articles for the specified tenant.
//
list_t* CourseArticlesAPI_getCourseArticlesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_article_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseArticlesAPI_getCourseArticlesCountAsync**
```c
// Get course articles count
//
// Returns the count of course articles for the specified tenant.
//
int* CourseArticlesAPI_getCourseArticlesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseArticlesAPI_updateCourseArticleAsync**
```c
// Update a course article
//
// Updates an existing course article for the specified tenant.
//
void CourseArticlesAPI_updateCourseArticleAsync(apiClient_t *apiClient, char *tenantId, char *articleId, char *api_version, char *x_api_version, course_article_update_dto_t *course_article_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**articleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_article_update_dto** | **[course_article_update_dto_t](course_article_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

