# CourseProblemSetsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseProblemSetsAPI_createCourseProblemSetAsync**](CourseProblemSetsAPI.md#CourseProblemSetsAPI_createCourseProblemSetAsync) | **POST** /api/v2/LearningService/CourseProblemSets | Create a new course problem set
[**CourseProblemSetsAPI_deleteCourseProblemSetAsync**](CourseProblemSetsAPI.md#CourseProblemSetsAPI_deleteCourseProblemSetAsync) | **DELETE** /api/v2/LearningService/CourseProblemSets/{problemSetId} | Delete a course problem set
[**CourseProblemSetsAPI_getCourseProblemSetByIdAsync**](CourseProblemSetsAPI.md#CourseProblemSetsAPI_getCourseProblemSetByIdAsync) | **GET** /api/v2/LearningService/CourseProblemSets/{problemSetId} | Get course problem set by ID
[**CourseProblemSetsAPI_getCourseProblemSetsAsync**](CourseProblemSetsAPI.md#CourseProblemSetsAPI_getCourseProblemSetsAsync) | **GET** /api/v2/LearningService/CourseProblemSets | Get all course problem sets
[**CourseProblemSetsAPI_getCourseProblemSetsCountAsync**](CourseProblemSetsAPI.md#CourseProblemSetsAPI_getCourseProblemSetsCountAsync) | **GET** /api/v2/LearningService/CourseProblemSets/Count | Get course problem sets count
[**CourseProblemSetsAPI_updateCourseProblemSetAsync**](CourseProblemSetsAPI.md#CourseProblemSetsAPI_updateCourseProblemSetAsync) | **PUT** /api/v2/LearningService/CourseProblemSets/{problemSetId} | Update a course problem set


# **CourseProblemSetsAPI_createCourseProblemSetAsync**
```c
// Create a new course problem set
//
// Creates a new course problem set for the specified tenant.
//
void CourseProblemSetsAPI_createCourseProblemSetAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_problem_set_create_dto_t *course_problem_set_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_problem_set_create_dto** | **[course_problem_set_create_dto_t](course_problem_set_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseProblemSetsAPI_deleteCourseProblemSetAsync**
```c
// Delete a course problem set
//
// Deletes a course problem set for the specified tenant.
//
void CourseProblemSetsAPI_deleteCourseProblemSetAsync(apiClient_t *apiClient, char *tenantId, char *problemSetId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**problemSetId** | **char \*** |  | 
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

# **CourseProblemSetsAPI_getCourseProblemSetByIdAsync**
```c
// Get course problem set by ID
//
// Retrieves a specific course problem set by its ID.
//
course_problem_set_dto_t* CourseProblemSetsAPI_getCourseProblemSetByIdAsync(apiClient_t *apiClient, char *problemSetId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**problemSetId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_problem_set_dto_t](course_problem_set_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseProblemSetsAPI_getCourseProblemSetsAsync**
```c
// Get all course problem sets
//
// Retrieves all course problem sets for the specified tenant.
//
list_t* CourseProblemSetsAPI_getCourseProblemSetsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_problem_set_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseProblemSetsAPI_getCourseProblemSetsCountAsync**
```c
// Get course problem sets count
//
// Returns the count of course problem sets for the specified tenant.
//
int* CourseProblemSetsAPI_getCourseProblemSetsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseProblemSetsAPI_updateCourseProblemSetAsync**
```c
// Update a course problem set
//
// Updates an existing course problem set for the specified tenant.
//
void CourseProblemSetsAPI_updateCourseProblemSetAsync(apiClient_t *apiClient, char *tenantId, char *problemSetId, char *api_version, char *x_api_version, course_problem_set_update_dto_t *course_problem_set_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**problemSetId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_problem_set_update_dto** | **[course_problem_set_update_dto_t](course_problem_set_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

