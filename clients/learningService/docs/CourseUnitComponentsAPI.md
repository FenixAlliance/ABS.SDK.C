# CourseUnitComponentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseUnitComponentsAPI_createCourseUnitComponentAsync**](CourseUnitComponentsAPI.md#CourseUnitComponentsAPI_createCourseUnitComponentAsync) | **POST** /api/v2/LearningService/CourseUnitComponents | Create a new course unit component
[**CourseUnitComponentsAPI_deleteCourseUnitComponentAsync**](CourseUnitComponentsAPI.md#CourseUnitComponentsAPI_deleteCourseUnitComponentAsync) | **DELETE** /api/v2/LearningService/CourseUnitComponents/{componentId} | Delete a course unit component
[**CourseUnitComponentsAPI_getCourseUnitComponentByIdAsync**](CourseUnitComponentsAPI.md#CourseUnitComponentsAPI_getCourseUnitComponentByIdAsync) | **GET** /api/v2/LearningService/CourseUnitComponents/{componentId} | Get course unit component by ID
[**CourseUnitComponentsAPI_getCourseUnitComponentsAsync**](CourseUnitComponentsAPI.md#CourseUnitComponentsAPI_getCourseUnitComponentsAsync) | **GET** /api/v2/LearningService/CourseUnitComponents | Get all course unit components
[**CourseUnitComponentsAPI_getCourseUnitComponentsCountAsync**](CourseUnitComponentsAPI.md#CourseUnitComponentsAPI_getCourseUnitComponentsCountAsync) | **GET** /api/v2/LearningService/CourseUnitComponents/Count | Get course unit components count
[**CourseUnitComponentsAPI_updateCourseUnitComponentAsync**](CourseUnitComponentsAPI.md#CourseUnitComponentsAPI_updateCourseUnitComponentAsync) | **PUT** /api/v2/LearningService/CourseUnitComponents/{componentId} | Update a course unit component


# **CourseUnitComponentsAPI_createCourseUnitComponentAsync**
```c
// Create a new course unit component
//
// Creates a new course unit component for the specified tenant.
//
void CourseUnitComponentsAPI_createCourseUnitComponentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_unit_component_create_dto_t *course_unit_component_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_unit_component_create_dto** | **[course_unit_component_create_dto_t](course_unit_component_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseUnitComponentsAPI_deleteCourseUnitComponentAsync**
```c
// Delete a course unit component
//
// Deletes a course unit component for the specified tenant.
//
void CourseUnitComponentsAPI_deleteCourseUnitComponentAsync(apiClient_t *apiClient, char *tenantId, char *componentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**componentId** | **char \*** |  | 
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

# **CourseUnitComponentsAPI_getCourseUnitComponentByIdAsync**
```c
// Get course unit component by ID
//
// Retrieves a specific course unit component by its ID.
//
course_unit_component_dto_t* CourseUnitComponentsAPI_getCourseUnitComponentByIdAsync(apiClient_t *apiClient, char *componentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**componentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_unit_component_dto_t](course_unit_component_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseUnitComponentsAPI_getCourseUnitComponentsAsync**
```c
// Get all course unit components
//
// Retrieves all course unit components for the specified tenant.
//
list_t* CourseUnitComponentsAPI_getCourseUnitComponentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_unit_component_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseUnitComponentsAPI_getCourseUnitComponentsCountAsync**
```c
// Get course unit components count
//
// Returns the count of course unit components for the specified tenant.
//
int* CourseUnitComponentsAPI_getCourseUnitComponentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseUnitComponentsAPI_updateCourseUnitComponentAsync**
```c
// Update a course unit component
//
// Updates an existing course unit component for the specified tenant.
//
void CourseUnitComponentsAPI_updateCourseUnitComponentAsync(apiClient_t *apiClient, char *tenantId, char *componentId, char *api_version, char *x_api_version, course_unit_component_update_dto_t *course_unit_component_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**componentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_unit_component_update_dto** | **[course_unit_component_update_dto_t](course_unit_component_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

