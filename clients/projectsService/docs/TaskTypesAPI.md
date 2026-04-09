# TaskTypesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TaskTypesAPI_createTaskTypeAsync**](TaskTypesAPI.md#TaskTypesAPI_createTaskTypeAsync) | **POST** /api/v2/ProjectsService/TaskTypes | Creates a new task type
[**TaskTypesAPI_deleteTaskTypeAsync**](TaskTypesAPI.md#TaskTypesAPI_deleteTaskTypeAsync) | **DELETE** /api/v2/ProjectsService/TaskTypes/{taskTypeId} | Deletes a task type
[**TaskTypesAPI_getTaskTypeByIdAsync**](TaskTypesAPI.md#TaskTypesAPI_getTaskTypeByIdAsync) | **GET** /api/v2/ProjectsService/TaskTypes/{taskTypeId} | Gets a task type by ID
[**TaskTypesAPI_updateTaskTypeAsync**](TaskTypesAPI.md#TaskTypesAPI_updateTaskTypeAsync) | **PUT** /api/v2/ProjectsService/TaskTypes/{taskTypeId} | Updates a task type


# **TaskTypesAPI_createTaskTypeAsync**
```c
// Creates a new task type
//
// Creates a new task type for the current tenant.
//
task_type_dto_t* TaskTypesAPI_createTaskTypeAsync(apiClient_t *apiClient, char *tenantId, task_type_create_dto_t *task_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**task_type_create_dto** | **[task_type_create_dto_t](task_type_create_dto.md) \*** |  | [optional] 

### Return type

[task_type_dto_t](task_type_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaskTypesAPI_deleteTaskTypeAsync**
```c
// Deletes a task type
//
// Deletes the specified task type.
//
task_type_dto_t* TaskTypesAPI_deleteTaskTypeAsync(apiClient_t *apiClient, char *taskTypeId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**taskTypeId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[task_type_dto_t](task_type_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaskTypesAPI_getTaskTypeByIdAsync**
```c
// Gets a task type by ID
//
// Retrieves the details of a task type using its unique identifier.
//
task_type_dto_t* TaskTypesAPI_getTaskTypeByIdAsync(apiClient_t *apiClient, char *taskTypeId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**taskTypeId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[task_type_dto_t](task_type_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaskTypesAPI_updateTaskTypeAsync**
```c
// Updates a task type
//
// Updates the specified task type.
//
task_type_dto_t* TaskTypesAPI_updateTaskTypeAsync(apiClient_t *apiClient, char *taskTypeId, char *tenantId, task_type_update_dto_t *task_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**taskTypeId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**task_type_update_dto** | **[task_type_update_dto_t](task_type_update_dto.md) \*** |  | [optional] 

### Return type

[task_type_dto_t](task_type_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

