# CourseSectionsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseSectionsAPI_createCourseSectionAsync**](CourseSectionsAPI.md#CourseSectionsAPI_createCourseSectionAsync) | **POST** /api/v2/LearningService/CourseSections | Create a new course section
[**CourseSectionsAPI_deleteCourseSectionAsync**](CourseSectionsAPI.md#CourseSectionsAPI_deleteCourseSectionAsync) | **DELETE** /api/v2/LearningService/CourseSections/{sectionId} | Delete a course section
[**CourseSectionsAPI_getCourseSectionByIdAsync**](CourseSectionsAPI.md#CourseSectionsAPI_getCourseSectionByIdAsync) | **GET** /api/v2/LearningService/CourseSections/{sectionId} | Get course section by ID
[**CourseSectionsAPI_getCourseSectionsAsync**](CourseSectionsAPI.md#CourseSectionsAPI_getCourseSectionsAsync) | **GET** /api/v2/LearningService/CourseSections | Get all course sections
[**CourseSectionsAPI_getCourseSectionsCountAsync**](CourseSectionsAPI.md#CourseSectionsAPI_getCourseSectionsCountAsync) | **GET** /api/v2/LearningService/CourseSections/Count | Get course sections count
[**CourseSectionsAPI_updateCourseSectionAsync**](CourseSectionsAPI.md#CourseSectionsAPI_updateCourseSectionAsync) | **PUT** /api/v2/LearningService/CourseSections/{sectionId} | Update a course section


# **CourseSectionsAPI_createCourseSectionAsync**
```c
// Create a new course section
//
// Creates a new course section for the specified tenant.
//
void CourseSectionsAPI_createCourseSectionAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_section_create_dto_t *course_section_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_section_create_dto** | **[course_section_create_dto_t](course_section_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseSectionsAPI_deleteCourseSectionAsync**
```c
// Delete a course section
//
// Deletes a course section for the specified tenant.
//
void CourseSectionsAPI_deleteCourseSectionAsync(apiClient_t *apiClient, char *tenantId, char *sectionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**sectionId** | **char \*** |  | 
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

# **CourseSectionsAPI_getCourseSectionByIdAsync**
```c
// Get course section by ID
//
// Retrieves a specific course section by its ID.
//
course_section_dto_t* CourseSectionsAPI_getCourseSectionByIdAsync(apiClient_t *apiClient, char *sectionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sectionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_section_dto_t](course_section_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseSectionsAPI_getCourseSectionsAsync**
```c
// Get all course sections
//
// Retrieves all course sections for the specified tenant.
//
list_t* CourseSectionsAPI_getCourseSectionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_section_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseSectionsAPI_getCourseSectionsCountAsync**
```c
// Get course sections count
//
// Returns the count of course sections for the specified tenant.
//
int* CourseSectionsAPI_getCourseSectionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseSectionsAPI_updateCourseSectionAsync**
```c
// Update a course section
//
// Updates an existing course section for the specified tenant.
//
void CourseSectionsAPI_updateCourseSectionAsync(apiClient_t *apiClient, char *tenantId, char *sectionId, char *api_version, char *x_api_version, course_section_update_dto_t *course_section_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**sectionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_section_update_dto** | **[course_section_update_dto_t](course_section_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

