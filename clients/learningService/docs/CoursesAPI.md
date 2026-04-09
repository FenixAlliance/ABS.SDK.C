# CoursesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CoursesAPI_createCourseAsync**](CoursesAPI.md#CoursesAPI_createCourseAsync) | **POST** /api/v2/LearningService/Courses | Create a new course
[**CoursesAPI_deleteCourseAsync**](CoursesAPI.md#CoursesAPI_deleteCourseAsync) | **DELETE** /api/v2/LearningService/Courses/{courseId} | Delete a course
[**CoursesAPI_getCourseArticlesByCourseWikiAsync**](CoursesAPI.md#CoursesAPI_getCourseArticlesByCourseWikiAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Articles/{wikiId} | Get course articles by course wiki
[**CoursesAPI_getCourseArticlesByCourseWikiCountAsync**](CoursesAPI.md#CoursesAPI_getCourseArticlesByCourseWikiCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Articles/{wikiId}/Count | Get course articles by course wiki count
[**CoursesAPI_getCourseAssignmentsByCourseAsync**](CoursesAPI.md#CoursesAPI_getCourseAssignmentsByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Assignments | Get course assignments by course
[**CoursesAPI_getCourseAssignmentsByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getCourseAssignmentsByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Assignments/Count | Get course assignments by course count
[**CoursesAPI_getCourseByIdAsync**](CoursesAPI.md#CoursesAPI_getCourseByIdAsync) | **GET** /api/v2/LearningService/Courses/{courseId} | Get course by ID
[**CoursesAPI_getCourseCategoriesByCourseAsync**](CoursesAPI.md#CoursesAPI_getCourseCategoriesByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Categories | Get course categories by course
[**CoursesAPI_getCourseCategoriesByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getCourseCategoriesByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Categories/Count | Get course categories by course count
[**CoursesAPI_getCourseCohortsByCourseAsync**](CoursesAPI.md#CoursesAPI_getCourseCohortsByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Cohorts | Get course cohorts by course
[**CoursesAPI_getCourseCohortsByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getCourseCohortsByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Cohorts/Count | Get course cohorts by course count
[**CoursesAPI_getCourseEnrollmentsByCourseAsync**](CoursesAPI.md#CoursesAPI_getCourseEnrollmentsByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Enrollments | Get enrollments by course
[**CoursesAPI_getCourseFilesByCourseAsync**](CoursesAPI.md#CoursesAPI_getCourseFilesByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Files | Get course files by course
[**CoursesAPI_getCourseFilesByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getCourseFilesByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Files/Count | Get course files by course count
[**CoursesAPI_getCourseForumsByCourseAsync**](CoursesAPI.md#CoursesAPI_getCourseForumsByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Forums | Get course forums by course
[**CoursesAPI_getCourseForumsByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getCourseForumsByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Forums/Count | Get course forums by course count
[**CoursesAPI_getCourseHandoutsByCourseAsync**](CoursesAPI.md#CoursesAPI_getCourseHandoutsByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Handouts | Get course handouts by course
[**CoursesAPI_getCourseHandoutsByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getCourseHandoutsByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Handouts/Count | Get course handouts by course count
[**CoursesAPI_getCourseLibrariesByCourseAsync**](CoursesAPI.md#CoursesAPI_getCourseLibrariesByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Libraries | Get course libraries by course
[**CoursesAPI_getCourseLibrariesByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getCourseLibrariesByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Libraries/Count | Get course libraries by course count
[**CoursesAPI_getCoursePagesByCourseAsync**](CoursesAPI.md#CoursesAPI_getCoursePagesByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Pages | Get course pages by course
[**CoursesAPI_getCoursePagesByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getCoursePagesByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Pages/Count | Get course pages by course count
[**CoursesAPI_getCourseProblemSetsByCourseAsync**](CoursesAPI.md#CoursesAPI_getCourseProblemSetsByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/ProblemSets | Get course problem sets by course
[**CoursesAPI_getCourseProblemSetsByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getCourseProblemSetsByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/ProblemSets/Count | Get course problem sets by course count
[**CoursesAPI_getCourseSectionsByCourseAsync**](CoursesAPI.md#CoursesAPI_getCourseSectionsByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Sections | Get course sections by course
[**CoursesAPI_getCourseSectionsByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getCourseSectionsByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Sections/Count | Get course sections by course count
[**CoursesAPI_getCourseUnitComponentsByCourseAsync**](CoursesAPI.md#CoursesAPI_getCourseUnitComponentsByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/UnitComponents | Get course unit components by course
[**CoursesAPI_getCourseUnitComponentsByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getCourseUnitComponentsByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/UnitComponents/Count | Get course unit components by course count
[**CoursesAPI_getCourseUnitsBySectionAsync**](CoursesAPI.md#CoursesAPI_getCourseUnitsBySectionAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Units/{sectionId} | Get course units by section
[**CoursesAPI_getCourseUnitsBySectionCountAsync**](CoursesAPI.md#CoursesAPI_getCourseUnitsBySectionCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Units/{sectionId}/Count | Get course units by section count
[**CoursesAPI_getCourseUpdatesByCourseAsync**](CoursesAPI.md#CoursesAPI_getCourseUpdatesByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Updates | Get course updates by course
[**CoursesAPI_getCourseUpdatesByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getCourseUpdatesByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Updates/Count | Get course updates by course count
[**CoursesAPI_getCourseWikisByCourseAsync**](CoursesAPI.md#CoursesAPI_getCourseWikisByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Wikis | Get course wikis by course
[**CoursesAPI_getCourseWikisByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getCourseWikisByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Wikis/Count | Get course wikis by course count
[**CoursesAPI_getCoursesAsync**](CoursesAPI.md#CoursesAPI_getCoursesAsync) | **GET** /api/v2/LearningService/Courses | Get courses
[**CoursesAPI_getCoursesCountAsync**](CoursesAPI.md#CoursesAPI_getCoursesCountAsync) | **GET** /api/v2/LearningService/Courses/Count | Get courses count
[**CoursesAPI_getInstructorProfilesByCourseAsync**](CoursesAPI.md#CoursesAPI_getInstructorProfilesByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Instructors | Get instructor profiles by course
[**CoursesAPI_getInstructorProfilesByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getInstructorProfilesByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Instructors/Count | Get instructor profiles by course count
[**CoursesAPI_getStudentProfilesByCourseAsync**](CoursesAPI.md#CoursesAPI_getStudentProfilesByCourseAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Students | Get student profiles by course
[**CoursesAPI_getStudentProfilesByCourseCountAsync**](CoursesAPI.md#CoursesAPI_getStudentProfilesByCourseCountAsync) | **GET** /api/v2/LearningService/Courses/{courseId}/Students/Count | Get student profiles by course count
[**CoursesAPI_updateCourseAsync**](CoursesAPI.md#CoursesAPI_updateCourseAsync) | **PUT** /api/v2/LearningService/Courses/{courseId} | Update a course


# **CoursesAPI_createCourseAsync**
```c
// Create a new course
//
// Creates a new course for the specified tenant.
//
void CoursesAPI_createCourseAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_create_dto_t *course_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_create_dto** | **[course_create_dto_t](course_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursesAPI_deleteCourseAsync**
```c
// Delete a course
//
// Deletes a course for the specified tenant.
//
void CoursesAPI_deleteCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseArticlesByCourseWikiAsync**
```c
// Get course articles by course wiki
//
// Retrieves all course articles for a specific course wiki.
//
list_t* CoursesAPI_getCourseArticlesByCourseWikiAsync(apiClient_t *apiClient, char *courseId, char *wikiId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
**wikiId** | **char \*** |  | 
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

# **CoursesAPI_getCourseArticlesByCourseWikiCountAsync**
```c
// Get course articles by course wiki count
//
// Returns the count of course articles for a specific course wiki.
//
int* CoursesAPI_getCourseArticlesByCourseWikiCountAsync(apiClient_t *apiClient, char *courseId, char *wikiId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
**wikiId** | **char \*** |  | 
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

# **CoursesAPI_getCourseAssignmentsByCourseAsync**
```c
// Get course assignments by course
//
// Retrieves all course assignments for a specific course.
//
list_t* CoursesAPI_getCourseAssignmentsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_assignment_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursesAPI_getCourseAssignmentsByCourseCountAsync**
```c
// Get course assignments by course count
//
// Returns the count of course assignments for a specific course.
//
int* CoursesAPI_getCourseAssignmentsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseByIdAsync**
```c
// Get course by ID
//
// Retrieves a specific course by its ID.
//
course_dto_t* CoursesAPI_getCourseByIdAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_dto_t](course_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursesAPI_getCourseCategoriesByCourseAsync**
```c
// Get course categories by course
//
// Retrieves all course categories for a specific course.
//
list_t* CoursesAPI_getCourseCategoriesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseCategoriesByCourseCountAsync**
```c
// Get course categories by course count
//
// Returns the count of course categories for a specific course.
//
int* CoursesAPI_getCourseCategoriesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseCohortsByCourseAsync**
```c
// Get course cohorts by course
//
// Retrieves all course cohorts for a specific course.
//
list_t* CoursesAPI_getCourseCohortsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_cohort_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursesAPI_getCourseCohortsByCourseCountAsync**
```c
// Get course cohorts by course count
//
// Returns the count of course cohorts for a specific course.
//
int* CoursesAPI_getCourseCohortsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseEnrollmentsByCourseAsync**
```c
// Get enrollments by course
//
// Retrieves all enrollments for a specific course.
//
list_t* CoursesAPI_getCourseEnrollmentsByCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_enrollment_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursesAPI_getCourseFilesByCourseAsync**
```c
// Get course files by course
//
// Retrieves all course files for a specific course.
//
list_t* CoursesAPI_getCourseFilesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_file_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursesAPI_getCourseFilesByCourseCountAsync**
```c
// Get course files by course count
//
// Returns the count of course files for a specific course.
//
int* CoursesAPI_getCourseFilesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseForumsByCourseAsync**
```c
// Get course forums by course
//
// Retrieves all course forums for a specific course.
//
list_t* CoursesAPI_getCourseForumsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_forum_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursesAPI_getCourseForumsByCourseCountAsync**
```c
// Get course forums by course count
//
// Returns the count of course forums for a specific course.
//
int* CoursesAPI_getCourseForumsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseHandoutsByCourseAsync**
```c
// Get course handouts by course
//
// Retrieves all course handouts for a specific course.
//
list_t* CoursesAPI_getCourseHandoutsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseHandoutsByCourseCountAsync**
```c
// Get course handouts by course count
//
// Returns the count of course handouts for a specific course.
//
int* CoursesAPI_getCourseHandoutsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseLibrariesByCourseAsync**
```c
// Get course libraries by course
//
// Retrieves all course libraries for a specific course.
//
list_t* CoursesAPI_getCourseLibrariesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_library_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursesAPI_getCourseLibrariesByCourseCountAsync**
```c
// Get course libraries by course count
//
// Returns the count of course libraries for a specific course.
//
int* CoursesAPI_getCourseLibrariesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCoursePagesByCourseAsync**
```c
// Get course pages by course
//
// Retrieves all course pages for a specific course.
//
list_t* CoursesAPI_getCoursePagesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_page_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursesAPI_getCoursePagesByCourseCountAsync**
```c
// Get course pages by course count
//
// Returns the count of course pages for a specific course.
//
int* CoursesAPI_getCoursePagesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseProblemSetsByCourseAsync**
```c
// Get course problem sets by course
//
// Retrieves all course problem sets for a specific course.
//
list_t* CoursesAPI_getCourseProblemSetsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseProblemSetsByCourseCountAsync**
```c
// Get course problem sets by course count
//
// Returns the count of course problem sets for a specific course.
//
int* CoursesAPI_getCourseProblemSetsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseSectionsByCourseAsync**
```c
// Get course sections by course
//
// Retrieves all course sections for a specific course.
//
list_t* CoursesAPI_getCourseSectionsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseSectionsByCourseCountAsync**
```c
// Get course sections by course count
//
// Returns the count of course sections for a specific course.
//
int* CoursesAPI_getCourseSectionsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseUnitComponentsByCourseAsync**
```c
// Get course unit components by course
//
// Retrieves all course unit components for a specific course.
//
list_t* CoursesAPI_getCourseUnitComponentsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseUnitComponentsByCourseCountAsync**
```c
// Get course unit components by course count
//
// Returns the count of course unit components for a specific course.
//
int* CoursesAPI_getCourseUnitComponentsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseUnitsBySectionAsync**
```c
// Get course units by section
//
// Retrieves all course units for a specific course section.
//
list_t* CoursesAPI_getCourseUnitsBySectionAsync(apiClient_t *apiClient, char *courseId, char *sectionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
**sectionId** | **char \*** |  | 
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

# **CoursesAPI_getCourseUnitsBySectionCountAsync**
```c
// Get course units by section count
//
// Returns the count of course units for a specific course section.
//
int* CoursesAPI_getCourseUnitsBySectionCountAsync(apiClient_t *apiClient, char *courseId, char *sectionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
**sectionId** | **char \*** |  | 
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

# **CoursesAPI_getCourseUpdatesByCourseAsync**
```c
// Get course updates by course
//
// Retrieves all course updates for a specific course.
//
list_t* CoursesAPI_getCourseUpdatesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseUpdatesByCourseCountAsync**
```c
// Get course updates by course count
//
// Returns the count of course updates for a specific course.
//
int* CoursesAPI_getCourseUpdatesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseWikisByCourseAsync**
```c
// Get course wikis by course
//
// Retrieves all course wikis for a specific course.
//
list_t* CoursesAPI_getCourseWikisByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCourseWikisByCourseCountAsync**
```c
// Get course wikis by course count
//
// Returns the count of course wikis for a specific course.
//
int* CoursesAPI_getCourseWikisByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getCoursesAsync**
```c
// Get courses
//
// Retrieves courses. When tenantId is provided, returns tenant-scoped courses; otherwise returns all courses.
//
list_t* CoursesAPI_getCoursesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursesAPI_getCoursesCountAsync**
```c
// Get courses count
//
// Returns the count of courses. When tenantId is provided, returns tenant-scoped count; otherwise returns global count.
//
int* CoursesAPI_getCoursesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CoursesAPI_getInstructorProfilesByCourseAsync**
```c
// Get instructor profiles by course
//
// Retrieves all instructor profiles teaching a specific course.
//
list_t* CoursesAPI_getInstructorProfilesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](instructor_profile_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursesAPI_getInstructorProfilesByCourseCountAsync**
```c
// Get instructor profiles by course count
//
// Returns the count of instructor profiles teaching a specific course.
//
int* CoursesAPI_getInstructorProfilesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_getStudentProfilesByCourseAsync**
```c
// Get student profiles by course
//
// Retrieves all student profiles enrolled in a specific course.
//
list_t* CoursesAPI_getStudentProfilesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](student_profile_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CoursesAPI_getStudentProfilesByCourseCountAsync**
```c
// Get student profiles by course count
//
// Returns the count of student profiles enrolled in a specific course.
//
int* CoursesAPI_getStudentProfilesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**courseId** | **char \*** |  | 
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

# **CoursesAPI_updateCourseAsync**
```c
// Update a course
//
// Updates an existing course for the specified tenant.
//
void CoursesAPI_updateCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version, course_update_dto_t *course_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_update_dto** | **[course_update_dto_t](course_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

