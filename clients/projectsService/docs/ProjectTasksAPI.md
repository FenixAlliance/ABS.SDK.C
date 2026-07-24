# ProjectTasksAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ProjectTasksAPI_createProjectTaskAsync**](ProjectTasksAPI.md#ProjectTasksAPI_createProjectTaskAsync) | **POST** /api/v2/ProjectsService/ProjectTasks | Create a project task
[**ProjectTasksAPI_deleteProjectTaskAsync**](ProjectTasksAPI.md#ProjectTasksAPI_deleteProjectTaskAsync) | **DELETE** /api/v2/ProjectsService/ProjectTasks/{projectTaskId} | Delete a project task
[**ProjectTasksAPI_getProjectTaskByIdAsync**](ProjectTasksAPI.md#ProjectTasksAPI_getProjectTaskByIdAsync) | **GET** /api/v2/ProjectsService/ProjectTasks/{projectTaskId} | Get project task by ID
[**ProjectTasksAPI_getProjectTasksAsync**](ProjectTasksAPI.md#ProjectTasksAPI_getProjectTasksAsync) | **GET** /api/v2/ProjectsService/ProjectTasks | Get all project tasks
[**ProjectTasksAPI_getProjectTasksCountAsync**](ProjectTasksAPI.md#ProjectTasksAPI_getProjectTasksCountAsync) | **GET** /api/v2/ProjectsService/ProjectTasks/Count | Get project tasks count
[**ProjectTasksAPI_patchProjectTaskAsync**](ProjectTasksAPI.md#ProjectTasksAPI_patchProjectTaskAsync) | **PATCH** /api/v2/ProjectsService/ProjectTasks/{projectTaskId} | Patch a project task
[**ProjectTasksAPI_updateProjectTaskAsync**](ProjectTasksAPI.md#ProjectTasksAPI_updateProjectTaskAsync) | **PUT** /api/v2/ProjectsService/ProjectTasks/{projectTaskId} | Update a project task


# **ProjectTasksAPI_createProjectTaskAsync**
```c
// Create a project task
//
// Creates a new project task.
//
empty_envelope_t* ProjectTasksAPI_createProjectTaskAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, project_task_create_dto_t *project_task_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**project_task_create_dto** | **[project_task_create_dto_t](project_task_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectTasksAPI_deleteProjectTaskAsync**
```c
// Delete a project task
//
// Deletes a project task.
//
empty_envelope_t* ProjectTasksAPI_deleteProjectTaskAsync(apiClient_t *apiClient, char *tenantId, char *projectTaskId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**projectTaskId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectTasksAPI_getProjectTaskByIdAsync**
```c
// Get project task by ID
//
// Retrieves a specific project task.
//
project_task_dto_envelope_t* ProjectTasksAPI_getProjectTaskByIdAsync(apiClient_t *apiClient, char *tenantId, char *projectTaskId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**projectTaskId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[project_task_dto_envelope_t](project_task_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectTasksAPI_getProjectTasksAsync**
```c
// Get all project tasks
//
// Retrieves all project tasks for the specified tenant.
//
project_task_dto_list_envelope_t* ProjectTasksAPI_getProjectTasksAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[project_task_dto_list_envelope_t](project_task_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectTasksAPI_getProjectTasksCountAsync**
```c
// Get project tasks count
//
// Returns the count of project tasks for the specified tenant.
//
int32_envelope_t* ProjectTasksAPI_getProjectTasksCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectTasksAPI_patchProjectTaskAsync**
```c
// Patch a project task
//
// Partially updates an existing project task.
//
empty_envelope_t* ProjectTasksAPI_patchProjectTaskAsync(apiClient_t *apiClient, char *tenantId, char *projectTaskId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**projectTaskId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProjectTasksAPI_updateProjectTaskAsync**
```c
// Update a project task
//
// Updates an existing project task.
//
empty_envelope_t* ProjectTasksAPI_updateProjectTaskAsync(apiClient_t *apiClient, char *tenantId, char *projectTaskId, char *api_version, char *x_api_version, project_task_update_dto_t *project_task_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**projectTaskId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**project_task_update_dto** | **[project_task_update_dto_t](project_task_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

