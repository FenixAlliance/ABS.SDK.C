# CourseTeamMembershipsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseTeamMembershipsAPI_createCourseTeamMembershipAsync**](CourseTeamMembershipsAPI.md#CourseTeamMembershipsAPI_createCourseTeamMembershipAsync) | **POST** /api/v2/LearningService/CourseTeamMemberships | Create a course team membership
[**CourseTeamMembershipsAPI_deleteCourseTeamMembershipAsync**](CourseTeamMembershipsAPI.md#CourseTeamMembershipsAPI_deleteCourseTeamMembershipAsync) | **DELETE** /api/v2/LearningService/CourseTeamMemberships/{membershipId} | Delete a course team membership
[**CourseTeamMembershipsAPI_getCourseTeamMembershipByIdAsync**](CourseTeamMembershipsAPI.md#CourseTeamMembershipsAPI_getCourseTeamMembershipByIdAsync) | **GET** /api/v2/LearningService/CourseTeamMemberships/{membershipId} | Get course team membership by ID
[**CourseTeamMembershipsAPI_getCourseTeamMembershipsAsync**](CourseTeamMembershipsAPI.md#CourseTeamMembershipsAPI_getCourseTeamMembershipsAsync) | **GET** /api/v2/LearningService/CourseTeamMemberships | Get all course team memberships
[**CourseTeamMembershipsAPI_getCourseTeamMembershipsCountAsync**](CourseTeamMembershipsAPI.md#CourseTeamMembershipsAPI_getCourseTeamMembershipsCountAsync) | **GET** /api/v2/LearningService/CourseTeamMemberships/Count | Get course team memberships count
[**CourseTeamMembershipsAPI_updateCourseTeamMembershipAsync**](CourseTeamMembershipsAPI.md#CourseTeamMembershipsAPI_updateCourseTeamMembershipAsync) | **PUT** /api/v2/LearningService/CourseTeamMemberships/{membershipId} | Update a course team membership


# **CourseTeamMembershipsAPI_createCourseTeamMembershipAsync**
```c
// Create a course team membership
//
// Creates a new course team membership for the specified tenant.
//
void CourseTeamMembershipsAPI_createCourseTeamMembershipAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_team_membership_create_dto_t *course_team_membership_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_team_membership_create_dto** | **[course_team_membership_create_dto_t](course_team_membership_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseTeamMembershipsAPI_deleteCourseTeamMembershipAsync**
```c
// Delete a course team membership
//
// Deletes a course team membership by its ID.
//
void CourseTeamMembershipsAPI_deleteCourseTeamMembershipAsync(apiClient_t *apiClient, char *tenantId, char *membershipId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**membershipId** | **char \*** |  | 
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

# **CourseTeamMembershipsAPI_getCourseTeamMembershipByIdAsync**
```c
// Get course team membership by ID
//
// Retrieves a specific course team membership by its ID.
//
course_team_membership_dto_t* CourseTeamMembershipsAPI_getCourseTeamMembershipByIdAsync(apiClient_t *apiClient, char *membershipId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**membershipId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_team_membership_dto_t](course_team_membership_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseTeamMembershipsAPI_getCourseTeamMembershipsAsync**
```c
// Get all course team memberships
//
// Retrieves all course team memberships for the specified tenant.
//
list_t* CourseTeamMembershipsAPI_getCourseTeamMembershipsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_team_membership_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseTeamMembershipsAPI_getCourseTeamMembershipsCountAsync**
```c
// Get course team memberships count
//
// Returns the count of course team memberships for the specified tenant.
//
int* CourseTeamMembershipsAPI_getCourseTeamMembershipsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CourseTeamMembershipsAPI_updateCourseTeamMembershipAsync**
```c
// Update a course team membership
//
// Updates an existing course team membership.
//
void CourseTeamMembershipsAPI_updateCourseTeamMembershipAsync(apiClient_t *apiClient, char *tenantId, char *membershipId, char *api_version, char *x_api_version, course_team_membership_update_dto_t *course_team_membership_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**membershipId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_team_membership_update_dto** | **[course_team_membership_update_dto_t](course_team_membership_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

