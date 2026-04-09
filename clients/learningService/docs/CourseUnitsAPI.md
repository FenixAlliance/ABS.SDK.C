# CourseUnitsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseUnitsAPI_createCourseUnitAsync**](CourseUnitsAPI.md#CourseUnitsAPI_createCourseUnitAsync) | **POST** /api/v2/LearningService/CourseUnits | Create a new course unit
[**CourseUnitsAPI_deleteCourseUnitAsync**](CourseUnitsAPI.md#CourseUnitsAPI_deleteCourseUnitAsync) | **DELETE** /api/v2/LearningService/CourseUnits/{unitId} | Delete a course unit
[**CourseUnitsAPI_getCourseUnitByIdAsync**](CourseUnitsAPI.md#CourseUnitsAPI_getCourseUnitByIdAsync) | **GET** /api/v2/LearningService/CourseUnits/{unitId} | Get course unit by ID
[**CourseUnitsAPI_getCourseUnitsAsync**](CourseUnitsAPI.md#CourseUnitsAPI_getCourseUnitsAsync) | **GET** /api/v2/LearningService/CourseUnits | Get all course units
[**CourseUnitsAPI_getCourseUnitsCountAsync**](CourseUnitsAPI.md#CourseUnitsAPI_getCourseUnitsCountAsync) | **GET** /api/v2/LearningService/CourseUnits/Count | Get course units count
[**CourseUnitsAPI_updateCourseUnitAsync**](CourseUnitsAPI.md#CourseUnitsAPI_updateCourseUnitAsync) | **PUT** /api/v2/LearningService/CourseUnits/{unitId} | Update a course unit


# **CourseUnitsAPI_createCourseUnitAsync**
```c
// Create a new course unit
//
// Creates a new course unit for the specified tenant.
//
void CourseUnitsAPI_createCourseUnitAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_unit_create_dto_t *course_unit_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_unit_create_dto** | **[course_unit_create_dto_t](course_unit_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseUnitsAPI_deleteCourseUnitAsync**
```c
// Delete a course unit
//
// Deletes a course unit for the specified tenant.
//
void CourseUnitsAPI_deleteCourseUnitAsync(apiClient_t *apiClient, char *tenantId, char *unitId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**unitId** | **char \*** |  | 
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

# **CourseUnitsAPI_getCourseUnitByIdAsync**
```c
// Get course unit by ID
//
// Retrieves a specific course unit by its ID.
//
course_unit_dto_t* CourseUnitsAPI_getCourseUnitByIdAsync(apiClient_t *apiClient, char *unitId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**unitId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_unit_dto_t](course_unit_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseUnitsAPI_getCourseUnitsAsync**
```c
// Get all course units
//
// Retrieves all course units for the specified tenant.
//
list_t* CourseUnitsAPI_getCourseUnitsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_unit_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseUnitsAPI_getCourseUnitsCountAsync**
```c
// Get course units count
//
// Returns the count of course units for the specified tenant.
//
int* CourseUnitsAPI_getCourseUnitsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseUnitsAPI_updateCourseUnitAsync**
```c
// Update a course unit
//
// Updates an existing course unit for the specified tenant.
//
void CourseUnitsAPI_updateCourseUnitAsync(apiClient_t *apiClient, char *tenantId, char *unitId, char *api_version, char *x_api_version, course_unit_update_dto_t *course_unit_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**unitId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_unit_update_dto** | **[course_unit_update_dto_t](course_unit_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

