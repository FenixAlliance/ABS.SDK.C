# TaskCategoriesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TaskCategoriesAPI_countTenantTaskCategoriesAsync**](TaskCategoriesAPI.md#TaskCategoriesAPI_countTenantTaskCategoriesAsync) | **GET** /api/v2/ProjectsService/TaskCategories/Count | Counts task categories
[**TaskCategoriesAPI_createTaskCategoryAsync**](TaskCategoriesAPI.md#TaskCategoriesAPI_createTaskCategoryAsync) | **POST** /api/v2/ProjectsService/TaskCategories | Creates a new task category
[**TaskCategoriesAPI_deleteTaskCategoryAsync**](TaskCategoriesAPI.md#TaskCategoriesAPI_deleteTaskCategoryAsync) | **DELETE** /api/v2/ProjectsService/TaskCategories/{taskCategoryId} | Deletes a task category
[**TaskCategoriesAPI_getTaskCategoryByIdAsync**](TaskCategoriesAPI.md#TaskCategoriesAPI_getTaskCategoryByIdAsync) | **GET** /api/v2/ProjectsService/TaskCategories/{taskCategoryId} | Gets a task category by ID
[**TaskCategoriesAPI_getTaskCategoryTaskTypesAsync**](TaskCategoriesAPI.md#TaskCategoriesAPI_getTaskCategoryTaskTypesAsync) | **GET** /api/v2/ProjectsService/TaskCategories/{taskCategoryId}/Types | Retrieves task types for a category
[**TaskCategoriesAPI_getTenantTaskCategoriesAsync**](TaskCategoriesAPI.md#TaskCategoriesAPI_getTenantTaskCategoriesAsync) | **GET** /api/v2/ProjectsService/TaskCategories | Retrieves all task categories
[**TaskCategoriesAPI_updateTaskCategoryAsync**](TaskCategoriesAPI.md#TaskCategoriesAPI_updateTaskCategoryAsync) | **PUT** /api/v2/ProjectsService/TaskCategories/{taskCategoryId} | Updates a task category


# **TaskCategoriesAPI_countTenantTaskCategoriesAsync**
```c
// Counts task categories
//
// Gets the count of task categories for the current tenant.
//
int32_envelope_t* TaskCategoriesAPI_countTenantTaskCategoriesAsync(apiClient_t *apiClient, char *tenantId);
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

# **TaskCategoriesAPI_createTaskCategoryAsync**
```c
// Creates a new task category
//
// Creates a new task category for the current tenant.
//
task_category_dto_t* TaskCategoriesAPI_createTaskCategoryAsync(apiClient_t *apiClient, char *tenantId, task_category_create_dto_t *task_category_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**task_category_create_dto** | **[task_category_create_dto_t](task_category_create_dto.md) \*** |  | [optional] 

### Return type

[task_category_dto_t](task_category_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaskCategoriesAPI_deleteTaskCategoryAsync**
```c
// Deletes a task category
//
// Deletes the specified task category.
//
task_category_dto_t* TaskCategoriesAPI_deleteTaskCategoryAsync(apiClient_t *apiClient, char *taskCategoryId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**taskCategoryId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[task_category_dto_t](task_category_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaskCategoriesAPI_getTaskCategoryByIdAsync**
```c
// Gets a task category by ID
//
// Retrieves the details of a task category using its unique identifier.
//
task_category_dto_t* TaskCategoriesAPI_getTaskCategoryByIdAsync(apiClient_t *apiClient, char *taskCategoryId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**taskCategoryId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[task_category_dto_t](task_category_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaskCategoriesAPI_getTaskCategoryTaskTypesAsync**
```c
// Retrieves task types for a category
//
// Gets all task types belonging to the specified task category.
//
task_category_dto_t* TaskCategoriesAPI_getTaskCategoryTaskTypesAsync(apiClient_t *apiClient, char *taskCategoryId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**taskCategoryId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[task_category_dto_t](task_category_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaskCategoriesAPI_getTenantTaskCategoriesAsync**
```c
// Retrieves all task categories
//
// Gets all task categories for the current tenant with OData support.
//
task_category_dto_list_envelope_t* TaskCategoriesAPI_getTenantTaskCategoriesAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[task_category_dto_list_envelope_t](task_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaskCategoriesAPI_updateTaskCategoryAsync**
```c
// Updates a task category
//
// Updates the specified task category.
//
task_category_dto_t* TaskCategoriesAPI_updateTaskCategoryAsync(apiClient_t *apiClient, char *taskCategoryId, char *tenantId, task_category_update_dto_t *task_category_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**taskCategoryId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**task_category_update_dto** | **[task_category_update_dto_t](task_category_update_dto.md) \*** |  | [optional] 

### Return type

[task_category_dto_t](task_category_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

