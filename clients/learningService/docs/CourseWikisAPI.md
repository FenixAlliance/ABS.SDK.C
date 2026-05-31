# CourseWikisAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseWikisAPI_createCourseWikiAsync**](CourseWikisAPI.md#CourseWikisAPI_createCourseWikiAsync) | **POST** /api/v2/LearningService/CourseWikis | Create a new course wiki
[**CourseWikisAPI_deleteCourseWikiAsync**](CourseWikisAPI.md#CourseWikisAPI_deleteCourseWikiAsync) | **DELETE** /api/v2/LearningService/CourseWikis/{wikiId} | Delete a course wiki
[**CourseWikisAPI_getCourseWikiByIdAsync**](CourseWikisAPI.md#CourseWikisAPI_getCourseWikiByIdAsync) | **GET** /api/v2/LearningService/CourseWikis/{wikiId} | Get course wiki by ID
[**CourseWikisAPI_getCourseWikisAsync**](CourseWikisAPI.md#CourseWikisAPI_getCourseWikisAsync) | **GET** /api/v2/LearningService/CourseWikis | Get all course wikis
[**CourseWikisAPI_getCourseWikisCountAsync**](CourseWikisAPI.md#CourseWikisAPI_getCourseWikisCountAsync) | **GET** /api/v2/LearningService/CourseWikis/Count | Get course wikis count
[**CourseWikisAPI_updateCourseWikiAsync**](CourseWikisAPI.md#CourseWikisAPI_updateCourseWikiAsync) | **PUT** /api/v2/LearningService/CourseWikis/{wikiId} | Update a course wiki


# **CourseWikisAPI_createCourseWikiAsync**
```c
// Create a new course wiki
//
// Creates a new course wiki for the specified tenant.
//
void CourseWikisAPI_createCourseWikiAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_wiki_create_dto_t *course_wiki_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_wiki_create_dto** | **[course_wiki_create_dto_t](course_wiki_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseWikisAPI_deleteCourseWikiAsync**
```c
// Delete a course wiki
//
// Deletes a course wiki for the specified tenant.
//
void CourseWikisAPI_deleteCourseWikiAsync(apiClient_t *apiClient, char *tenantId, char *wikiId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**wikiId** | **char \*** |  | 
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

# **CourseWikisAPI_getCourseWikiByIdAsync**
```c
// Get course wiki by ID
//
// Retrieves a specific course wiki by its ID.
//
course_wiki_dto_t* CourseWikisAPI_getCourseWikiByIdAsync(apiClient_t *apiClient, char *wikiId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**wikiId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_wiki_dto_t](course_wiki_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseWikisAPI_getCourseWikisAsync**
```c
// Get all course wikis
//
// Retrieves all course wikis for the specified tenant.
//
list_t* CourseWikisAPI_getCourseWikisAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_wiki_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseWikisAPI_getCourseWikisCountAsync**
```c
// Get course wikis count
//
// Returns the count of course wikis for the specified tenant.
//
int* CourseWikisAPI_getCourseWikisCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseWikisAPI_updateCourseWikiAsync**
```c
// Update a course wiki
//
// Updates an existing course wiki for the specified tenant.
//
void CourseWikisAPI_updateCourseWikiAsync(apiClient_t *apiClient, char *tenantId, char *wikiId, char *api_version, char *x_api_version, course_wiki_update_dto_t *course_wiki_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**wikiId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_wiki_update_dto** | **[course_wiki_update_dto_t](course_wiki_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

