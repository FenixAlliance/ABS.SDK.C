# TimeLogsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TimeLogsAPI_countProjectPeriodTimeLogsAsync**](TimeLogsAPI.md#TimeLogsAPI_countProjectPeriodTimeLogsAsync) | **GET** /api/v2/ProjectsService/TimeLogs/Count | Get the count of project period time logs
[**TimeLogsAPI_createProjectTimeLogAsync**](TimeLogsAPI.md#TimeLogsAPI_createProjectTimeLogAsync) | **POST** /api/v2/ProjectsService/TimeLogs | Create a new project time log
[**TimeLogsAPI_deleteProjectTimeLogAsync**](TimeLogsAPI.md#TimeLogsAPI_deleteProjectTimeLogAsync) | **DELETE** /api/v2/ProjectsService/TimeLogs/{timeLogId} | Delete a project time log
[**TimeLogsAPI_getProjectPeriodTimeLogsAsync**](TimeLogsAPI.md#TimeLogsAPI_getProjectPeriodTimeLogsAsync) | **GET** /api/v2/ProjectsService/TimeLogs | Retrieve project period time logs
[**TimeLogsAPI_getProjectTimeLogByIdAsync**](TimeLogsAPI.md#TimeLogsAPI_getProjectTimeLogByIdAsync) | **GET** /api/v2/ProjectsService/TimeLogs/{timeLogId} | Retrieve a project time log by ID
[**TimeLogsAPI_getProjectTimeLogsAsync**](TimeLogsAPI.md#TimeLogsAPI_getProjectTimeLogsAsync) | **GET** /api/v2/ProjectsService/TimeLogs/ForProject/{projectId} | Retrieve time logs for a project
[**TimeLogsAPI_getProjectTimeLogsByResponsibleContactAsync**](TimeLogsAPI.md#TimeLogsAPI_getProjectTimeLogsByResponsibleContactAsync) | **GET** /api/v2/ProjectsService/TimeLogs/ByResponsibleContact | Retrieve time logs by responsible contact
[**TimeLogsAPI_getProjectTimeLogsCreatedByContactAsync**](TimeLogsAPI.md#TimeLogsAPI_getProjectTimeLogsCreatedByContactAsync) | **GET** /api/v2/ProjectsService/TimeLogs/CreatedByContact | Retrieve time logs created by a contact
[**TimeLogsAPI_patchProjectTimeLogAsync**](TimeLogsAPI.md#TimeLogsAPI_patchProjectTimeLogAsync) | **PATCH** /api/v2/ProjectsService/TimeLogs/{timeLogId} | Patch a project time log
[**TimeLogsAPI_updateProjectTimeLogAsync**](TimeLogsAPI.md#TimeLogsAPI_updateProjectTimeLogAsync) | **PUT** /api/v2/ProjectsService/TimeLogs/{timeLogId} | Update a project time log


# **TimeLogsAPI_countProjectPeriodTimeLogsAsync**
```c
// Get the count of project period time logs
//
// Returns the total count of time logs for a specific project period with OData query support.
//
int32_envelope_t* TimeLogsAPI_countProjectPeriodTimeLogsAsync(apiClient_t *apiClient, char *tenantId, char *projectPeriodId, char *api_version, char *x_api_version, project_time_log_dto_collection_query_parameters_t *project_time_log_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**projectPeriodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**project_time_log_dto_collection_query_parameters** | **[project_time_log_dto_collection_query_parameters_t](project_time_log_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeLogsAPI_createProjectTimeLogAsync**
```c
// Create a new project time log
//
// Creates a new project time log entry.
//
void TimeLogsAPI_createProjectTimeLogAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, project_time_log_create_dto_t *project_time_log_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**project_time_log_create_dto** | **[project_time_log_create_dto_t](project_time_log_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeLogsAPI_deleteProjectTimeLogAsync**
```c
// Delete a project time log
//
// Deletes a project time log entry.
//
void TimeLogsAPI_deleteProjectTimeLogAsync(apiClient_t *apiClient, char *tenantId, char *timeLogId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**timeLogId** | **char \*** |  | 
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

# **TimeLogsAPI_getProjectPeriodTimeLogsAsync**
```c
// Retrieve project period time logs
//
// Retrieves a list of time logs for a specific project period with OData query support.
//
project_time_log_dto_list_envelope_t* TimeLogsAPI_getProjectPeriodTimeLogsAsync(apiClient_t *apiClient, char *tenantId, char *projectPeriodId, char *api_version, char *x_api_version, project_time_log_dto_collection_query_parameters_t *project_time_log_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**projectPeriodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**project_time_log_dto_collection_query_parameters** | **[project_time_log_dto_collection_query_parameters_t](project_time_log_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[project_time_log_dto_list_envelope_t](project_time_log_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeLogsAPI_getProjectTimeLogByIdAsync**
```c
// Retrieve a project time log by ID
//
// Retrieves a single project time log by its unique identifier.
//
project_time_log_dto_envelope_t* TimeLogsAPI_getProjectTimeLogByIdAsync(apiClient_t *apiClient, char *timeLogId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**timeLogId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[project_time_log_dto_envelope_t](project_time_log_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeLogsAPI_getProjectTimeLogsAsync**
```c
// Retrieve time logs for a project
//
// Retrieves all time logs associated with the specified project.
//
project_time_log_dto_list_envelope_t* TimeLogsAPI_getProjectTimeLogsAsync(apiClient_t *apiClient, char *projectId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[project_time_log_dto_list_envelope_t](project_time_log_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeLogsAPI_getProjectTimeLogsByResponsibleContactAsync**
```c
// Retrieve time logs by responsible contact
//
// Retrieves time logs where the specified contact is the responsible party.
//
project_time_log_dto_list_envelope_t* TimeLogsAPI_getProjectTimeLogsByResponsibleContactAsync(apiClient_t *apiClient, char *contactId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[project_time_log_dto_list_envelope_t](project_time_log_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeLogsAPI_getProjectTimeLogsCreatedByContactAsync**
```c
// Retrieve time logs created by a contact
//
// Retrieves time logs that were created by the specified contact.
//
project_time_log_dto_list_envelope_t* TimeLogsAPI_getProjectTimeLogsCreatedByContactAsync(apiClient_t *apiClient, char *contactId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[project_time_log_dto_list_envelope_t](project_time_log_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeLogsAPI_patchProjectTimeLogAsync**
```c
// Patch a project time log
//
// Partially updates an existing project time log entry.
//
void TimeLogsAPI_patchProjectTimeLogAsync(apiClient_t *apiClient, char *timeLogId, char *tenantId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**timeLogId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeLogsAPI_updateProjectTimeLogAsync**
```c
// Update a project time log
//
// Updates an existing project time log entry.
//
void TimeLogsAPI_updateProjectTimeLogAsync(apiClient_t *apiClient, char *timeLogId, char *tenantId, char *api_version, char *x_api_version, project_time_log_update_dto_t *project_time_log_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**timeLogId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**project_time_log_update_dto** | **[project_time_log_update_dto_t](project_time_log_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

