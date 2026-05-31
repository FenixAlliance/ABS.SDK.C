# CourseCategoriesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseCategoriesAPI_createCourseCategoryAsync**](CourseCategoriesAPI.md#CourseCategoriesAPI_createCourseCategoryAsync) | **POST** /api/v2/LearningService/CourseCategories | Create a new course category
[**CourseCategoriesAPI_deleteCourseCategoryAsync**](CourseCategoriesAPI.md#CourseCategoriesAPI_deleteCourseCategoryAsync) | **DELETE** /api/v2/LearningService/CourseCategories/{categoryId} | Delete a course category
[**CourseCategoriesAPI_getCourseCategoriesAsync**](CourseCategoriesAPI.md#CourseCategoriesAPI_getCourseCategoriesAsync) | **GET** /api/v2/LearningService/CourseCategories | Get all course categories
[**CourseCategoriesAPI_getCourseCategoriesCountAsync**](CourseCategoriesAPI.md#CourseCategoriesAPI_getCourseCategoriesCountAsync) | **GET** /api/v2/LearningService/CourseCategories/Count | Get course categories count
[**CourseCategoriesAPI_getCourseCategoryByIdAsync**](CourseCategoriesAPI.md#CourseCategoriesAPI_getCourseCategoryByIdAsync) | **GET** /api/v2/LearningService/CourseCategories/{categoryId} | Get course category by ID
[**CourseCategoriesAPI_updateCourseCategoryAsync**](CourseCategoriesAPI.md#CourseCategoriesAPI_updateCourseCategoryAsync) | **PUT** /api/v2/LearningService/CourseCategories/{categoryId} | Update a course category


# **CourseCategoriesAPI_createCourseCategoryAsync**
```c
// Create a new course category
//
// Creates a new course category for the specified tenant.
//
void CourseCategoriesAPI_createCourseCategoryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_category_create_dto_t *course_category_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_category_create_dto** | **[course_category_create_dto_t](course_category_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCategoriesAPI_deleteCourseCategoryAsync**
```c
// Delete a course category
//
// Deletes a course category for the specified tenant.
//
void CourseCategoriesAPI_deleteCourseCategoryAsync(apiClient_t *apiClient, char *tenantId, char *categoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**categoryId** | **char \*** |  | 
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

# **CourseCategoriesAPI_getCourseCategoriesAsync**
```c
// Get all course categories
//
// Retrieves all course categories for the specified tenant.
//
list_t* CourseCategoriesAPI_getCourseCategoriesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_category_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCategoriesAPI_getCourseCategoriesCountAsync**
```c
// Get course categories count
//
// Returns the count of course categories for the specified tenant.
//
int* CourseCategoriesAPI_getCourseCategoriesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseCategoriesAPI_getCourseCategoryByIdAsync**
```c
// Get course category by ID
//
// Retrieves a specific course category by its ID.
//
course_category_dto_t* CourseCategoriesAPI_getCourseCategoryByIdAsync(apiClient_t *apiClient, char *categoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**categoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_category_dto_t](course_category_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCategoriesAPI_updateCourseCategoryAsync**
```c
// Update a course category
//
// Updates an existing course category for the specified tenant.
//
void CourseCategoriesAPI_updateCourseCategoryAsync(apiClient_t *apiClient, char *tenantId, char *categoryId, char *api_version, char *x_api_version, course_category_update_dto_t *course_category_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**categoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_category_update_dto** | **[course_category_update_dto_t](course_category_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

