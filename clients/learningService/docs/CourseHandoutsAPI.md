# CourseHandoutsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseHandoutsAPI_createCourseHandoutAsync**](CourseHandoutsAPI.md#CourseHandoutsAPI_createCourseHandoutAsync) | **POST** /api/v2/LearningService/CourseHandouts | Create a course handout
[**CourseHandoutsAPI_deleteCourseHandoutAsync**](CourseHandoutsAPI.md#CourseHandoutsAPI_deleteCourseHandoutAsync) | **DELETE** /api/v2/LearningService/CourseHandouts/{handoutId} | Delete a course handout
[**CourseHandoutsAPI_getCourseHandoutByIdAsync**](CourseHandoutsAPI.md#CourseHandoutsAPI_getCourseHandoutByIdAsync) | **GET** /api/v2/LearningService/CourseHandouts/{handoutId} | Get course handout by ID
[**CourseHandoutsAPI_getCourseHandoutsAsync**](CourseHandoutsAPI.md#CourseHandoutsAPI_getCourseHandoutsAsync) | **GET** /api/v2/LearningService/CourseHandouts | Get all course handouts
[**CourseHandoutsAPI_getCourseHandoutsCountAsync**](CourseHandoutsAPI.md#CourseHandoutsAPI_getCourseHandoutsCountAsync) | **GET** /api/v2/LearningService/CourseHandouts/Count | Get course handouts count
[**CourseHandoutsAPI_updateCourseHandoutAsync**](CourseHandoutsAPI.md#CourseHandoutsAPI_updateCourseHandoutAsync) | **PUT** /api/v2/LearningService/CourseHandouts/{handoutId} | Update a course handout


# **CourseHandoutsAPI_createCourseHandoutAsync**
```c
// Create a course handout
//
// Creates a new course handout for the specified tenant.
//
course_handout_dto_t* CourseHandoutsAPI_createCourseHandoutAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_handout_create_dto_t *course_handout_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_handout_create_dto** | **[course_handout_create_dto_t](course_handout_create_dto.md) \*** |  | [optional] 

### Return type

[course_handout_dto_t](course_handout_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseHandoutsAPI_deleteCourseHandoutAsync**
```c
// Delete a course handout
//
// Deletes a course handout by its ID.
//
void CourseHandoutsAPI_deleteCourseHandoutAsync(apiClient_t *apiClient, char *tenantId, char *handoutId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**handoutId** | **char \*** |  | 
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

# **CourseHandoutsAPI_getCourseHandoutByIdAsync**
```c
// Get course handout by ID
//
// Retrieves a specific course handout by its ID.
//
course_handout_dto_t* CourseHandoutsAPI_getCourseHandoutByIdAsync(apiClient_t *apiClient, char *handoutId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**handoutId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_handout_dto_t](course_handout_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseHandoutsAPI_getCourseHandoutsAsync**
```c
// Get all course handouts
//
// Retrieves all course handouts for the specified tenant.
//
list_t* CourseHandoutsAPI_getCourseHandoutsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_handout_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseHandoutsAPI_getCourseHandoutsCountAsync**
```c
// Get course handouts count
//
// Returns the count of course handouts for the specified tenant.
//
int* CourseHandoutsAPI_getCourseHandoutsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseHandoutsAPI_updateCourseHandoutAsync**
```c
// Update a course handout
//
// Updates an existing course handout.
//
course_handout_dto_t* CourseHandoutsAPI_updateCourseHandoutAsync(apiClient_t *apiClient, char *tenantId, char *handoutId, char *api_version, char *x_api_version, course_handout_update_dto_t *course_handout_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**handoutId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_handout_update_dto** | **[course_handout_update_dto_t](course_handout_update_dto.md) \*** |  | [optional] 

### Return type

[course_handout_dto_t](course_handout_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

