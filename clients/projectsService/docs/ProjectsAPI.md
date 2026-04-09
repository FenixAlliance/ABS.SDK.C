# ProjectsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ProjectsAPI_createProjectAsync**](ProjectsAPI.md#ProjectsAPI_createProjectAsync) | **POST** /api/v2/ProjectsService/Projects | Creates a new project
[**ProjectsAPI_createProjectPeriodAsync**](ProjectsAPI.md#ProjectsAPI_createProjectPeriodAsync) | **POST** /api/v2/ProjectsService/Projects/{projectId}/Periods | Creates a project period
[**ProjectsAPI_createProjectTaskAsync**](ProjectsAPI.md#ProjectsAPI_createProjectTaskAsync) | **POST** /api/v2/ProjectsService/Projects/{projectId}/Tasks | Creates a project task
[**ProjectsAPI_deleteProjectAsync**](ProjectsAPI.md#ProjectsAPI_deleteProjectAsync) | **DELETE** /api/v2/ProjectsService/Projects/{projectId} | Deletes a project
[**ProjectsAPI_deleteProjectPeriodAsync**](ProjectsAPI.md#ProjectsAPI_deleteProjectPeriodAsync) | **DELETE** /api/v2/ProjectsService/Projects/{projectId}/Periods/{projectPeriodId} | Deletes a project period
[**ProjectsAPI_deleteProjectTaskAsync**](ProjectsAPI.md#ProjectsAPI_deleteProjectTaskAsync) | **DELETE** /api/v2/ProjectsService/Projects/{projectId}/Tasks/{projectTaskId} | Deletes a project task
[**ProjectsAPI_getProjectByIdAsync**](ProjectsAPI.md#ProjectsAPI_getProjectByIdAsync) | **GET** /api/v2/ProjectsService/Projects/{projectId} | Gets a project by ID
[**ProjectsAPI_getProjectPeriodsAsync**](ProjectsAPI.md#ProjectsAPI_getProjectPeriodsAsync) | **GET** /api/v2/ProjectsService/Projects/{projectId}/Periods | Retrieves project periods
[**ProjectsAPI_getProjectTaskCategoriesAsync**](ProjectsAPI.md#ProjectsAPI_getProjectTaskCategoriesAsync) | **GET** /api/v2/ProjectsService/Projects/{projectId}/TaskCategories | Retrieves project task categories
[**ProjectsAPI_getProjectTaskCategoriesCountAsync**](ProjectsAPI.md#ProjectsAPI_getProjectTaskCategoriesCountAsync) | **GET** /api/v2/ProjectsService/Projects/{projectId}/TaskCategories/Count | Counts project task categories
[**ProjectsAPI_getProjectTasksAsync**](ProjectsAPI.md#ProjectsAPI_getProjectTasksAsync) | **GET** /api/v2/ProjectsService/Projects/{projectId}/Tasks | Retrieves project tasks
[**ProjectsAPI_getProjectTasksCountAsync**](ProjectsAPI.md#ProjectsAPI_getProjectTasksCountAsync) | **GET** /api/v2/ProjectsService/Projects/{projectId}/Tasks/Count | Counts project tasks
[**ProjectsAPI_getProjectTimeLogsAsync**](ProjectsAPI.md#ProjectsAPI_getProjectTimeLogsAsync) | **GET** /api/v2/ProjectsService/Projects/{projectId}/TimeLogs | Retrieves project time logs
[**ProjectsAPI_getProjectTimeLogsCountAsync**](ProjectsAPI.md#ProjectsAPI_getProjectTimeLogsCountAsync) | **GET** /api/v2/ProjectsService/Projects/{projectId}/TimeLogs/Count | Counts project time logs
[**ProjectsAPI_getProjectsByTenantIdAsync**](ProjectsAPI.md#ProjectsAPI_getProjectsByTenantIdAsync) | **GET** /api/v2/ProjectsService/Projects | Retrieves all projects
[**ProjectsAPI_getProjectsCountByTenantIdAsync**](ProjectsAPI.md#ProjectsAPI_getProjectsCountByTenantIdAsync) | **GET** /api/v2/ProjectsService/Projects/Count | Counts projects
[**ProjectsAPI_updateProjectAsync**](ProjectsAPI.md#ProjectsAPI_updateProjectAsync) | **PUT** /api/v2/ProjectsService/Projects/{projectId} | Updates a project
[**ProjectsAPI_updateProjectPeriodAsync**](ProjectsAPI.md#ProjectsAPI_updateProjectPeriodAsync) | **PUT** /api/v2/ProjectsService/Projects/{projectId}/Periods/{projectPeriodId} | Updates a project period
[**ProjectsAPI_updateProjectTaskAsync**](ProjectsAPI.md#ProjectsAPI_updateProjectTaskAsync) | **PUT** /api/v2/ProjectsService/Projects/{projectId}/Tasks/{projectTaskId} | Updates a project task


# **ProjectsAPI_createProjectAsync**
```c
// Creates a new project
//
// Creates a new project for the current tenant.
//
empty_envelope_t* ProjectsAPI_createProjectAsync(apiClient_t *apiClient, char *tenantId, project_create_dto_t *project_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**project_create_dto** | **[project_create_dto_t](project_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_createProjectPeriodAsync**
```c
// Creates a project period
//
// Creates a new period for the specified project.
//
empty_envelope_t* ProjectsAPI_createProjectPeriodAsync(apiClient_t *apiClient, char *projectId, char *tenantId, project_period_create_dto_t *project_period_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**project_period_create_dto** | **[project_period_create_dto_t](project_period_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_createProjectTaskAsync**
```c
// Creates a project task
//
// Creates a new task for the specified project.
//
empty_envelope_t* ProjectsAPI_createProjectTaskAsync(apiClient_t *apiClient, char *projectId, char *tenantId, project_task_create_dto_t *project_task_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**project_task_create_dto** | **[project_task_create_dto_t](project_task_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_deleteProjectAsync**
```c
// Deletes a project
//
// Deletes the specified project.
//
empty_envelope_t* ProjectsAPI_deleteProjectAsync(apiClient_t *apiClient, char *projectId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_deleteProjectPeriodAsync**
```c
// Deletes a project period
//
// Deletes the specified period from a project.
//
empty_envelope_t* ProjectsAPI_deleteProjectPeriodAsync(apiClient_t *apiClient, char *projectId, char *projectPeriodId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**projectPeriodId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_deleteProjectTaskAsync**
```c
// Deletes a project task
//
// Deletes the specified task from a project.
//
empty_envelope_t* ProjectsAPI_deleteProjectTaskAsync(apiClient_t *apiClient, char *tenantId, char *projectId, char *projectTaskId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**projectId** | **char \*** |  | 
**projectTaskId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_getProjectByIdAsync**
```c
// Gets a project by ID
//
// Retrieves the details of a project using its unique identifier.
//
project_dto_envelope_t* ProjectsAPI_getProjectByIdAsync(apiClient_t *apiClient, char *projectId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[project_dto_envelope_t](project_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_getProjectPeriodsAsync**
```c
// Retrieves project periods
//
// Gets all periods for a specific project.
//
project_period_dto_list_envelope_t* ProjectsAPI_getProjectPeriodsAsync(apiClient_t *apiClient, char *projectId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[project_period_dto_list_envelope_t](project_period_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_getProjectTaskCategoriesAsync**
```c
// Retrieves project task categories
//
// Gets all task categories for a specific project with OData support.
//
task_category_dto_list_envelope_t* ProjectsAPI_getProjectTaskCategoriesAsync(apiClient_t *apiClient, char *projectId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[task_category_dto_list_envelope_t](task_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_getProjectTaskCategoriesCountAsync**
```c
// Counts project task categories
//
// Gets the count of task categories for a specific project.
//
int32_envelope_t* ProjectsAPI_getProjectTaskCategoriesCountAsync(apiClient_t *apiClient, char *projectId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_getProjectTasksAsync**
```c
// Retrieves project tasks
//
// Gets all tasks for a specific project with OData support.
//
project_task_dto_list_envelope_t* ProjectsAPI_getProjectTasksAsync(apiClient_t *apiClient, char *projectId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[project_task_dto_list_envelope_t](project_task_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_getProjectTasksCountAsync**
```c
// Counts project tasks
//
// Gets the count of tasks for a specific project.
//
int32_envelope_t* ProjectsAPI_getProjectTasksCountAsync(apiClient_t *apiClient, char *projectId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_getProjectTimeLogsAsync**
```c
// Retrieves project time logs
//
// Gets all time log entries for a specific project with OData support.
//
project_time_log_dto_list_envelope_t* ProjectsAPI_getProjectTimeLogsAsync(apiClient_t *apiClient, char *projectId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[project_time_log_dto_list_envelope_t](project_time_log_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_getProjectTimeLogsCountAsync**
```c
// Counts project time logs
//
// Gets the count of time log entries for a specific project.
//
int32_envelope_t* ProjectsAPI_getProjectTimeLogsCountAsync(apiClient_t *apiClient, char *projectId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_getProjectsByTenantIdAsync**
```c
// Retrieves all projects
//
// Gets all projects for the current tenant with OData support.
//
project_dto_list_envelope_t* ProjectsAPI_getProjectsByTenantIdAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[project_dto_list_envelope_t](project_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_getProjectsCountByTenantIdAsync**
```c
// Counts projects
//
// Gets the count of projects for the current tenant.
//
int32_envelope_t* ProjectsAPI_getProjectsCountByTenantIdAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_updateProjectAsync**
```c
// Updates a project
//
// Updates the specified project.
//
empty_envelope_t* ProjectsAPI_updateProjectAsync(apiClient_t *apiClient, char *projectId, char *tenantId, project_update_dto_t *project_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**project_update_dto** | **[project_update_dto_t](project_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_updateProjectPeriodAsync**
```c
// Updates a project period
//
// Updates the specified period for a project.
//
empty_envelope_t* ProjectsAPI_updateProjectPeriodAsync(apiClient_t *apiClient, char *projectId, char *projectPeriodId, char *tenantId, project_period_update_dto_t *project_period_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**projectPeriodId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**project_period_update_dto** | **[project_period_update_dto_t](project_period_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectsAPI_updateProjectTaskAsync**
```c
// Updates a project task
//
// Updates the specified task in a project.
//
empty_envelope_t* ProjectsAPI_updateProjectTaskAsync(apiClient_t *apiClient, char *projectId, char *projectTaskId, char *tenantId, project_task_update_dto_t *project_task_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**projectTaskId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**project_task_update_dto** | **[project_task_update_dto_t](project_task_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

