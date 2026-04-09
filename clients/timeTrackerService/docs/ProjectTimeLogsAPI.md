# ProjectTimeLogsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ProjectTimeLogsAPI_countProjectPeriodTimeLogsAsync**](ProjectTimeLogsAPI.md#ProjectTimeLogsAPI_countProjectPeriodTimeLogsAsync) | **GET** /api/v2/TimeTrackerService/ProjectTimeLogs/Count | Get the count of project period time logs
[**ProjectTimeLogsAPI_createProjectTimeLogAsync**](ProjectTimeLogsAPI.md#ProjectTimeLogsAPI_createProjectTimeLogAsync) | **POST** /api/v2/TimeTrackerService/ProjectTimeLogs | Create a new project time log
[**ProjectTimeLogsAPI_deleteProjectTimeLogAsync**](ProjectTimeLogsAPI.md#ProjectTimeLogsAPI_deleteProjectTimeLogAsync) | **DELETE** /api/v2/TimeTrackerService/ProjectTimeLogs/{timeLogId} | Delete a project time log
[**ProjectTimeLogsAPI_getProjectPeriodTimeLogsAsync**](ProjectTimeLogsAPI.md#ProjectTimeLogsAPI_getProjectPeriodTimeLogsAsync) | **GET** /api/v2/TimeTrackerService/ProjectTimeLogs | Retrieve project period time logs
[**ProjectTimeLogsAPI_getProjectTimeLogByIdAsync**](ProjectTimeLogsAPI.md#ProjectTimeLogsAPI_getProjectTimeLogByIdAsync) | **GET** /api/v2/TimeTrackerService/ProjectTimeLogs/{timeLogId} | Retrieve a project time log by ID
[**ProjectTimeLogsAPI_getProjectTimeLogsAsync**](ProjectTimeLogsAPI.md#ProjectTimeLogsAPI_getProjectTimeLogsAsync) | **GET** /api/v2/TimeTrackerService/ProjectTimeLogs/ForProject/{projectId} | Retrieve time logs for a project
[**ProjectTimeLogsAPI_getProjectTimeLogsByResponsibleContactAsync**](ProjectTimeLogsAPI.md#ProjectTimeLogsAPI_getProjectTimeLogsByResponsibleContactAsync) | **GET** /api/v2/TimeTrackerService/ProjectTimeLogs/ByResponsibleContact | Retrieve time logs by responsible contact
[**ProjectTimeLogsAPI_getProjectTimeLogsCreatedByContactAsync**](ProjectTimeLogsAPI.md#ProjectTimeLogsAPI_getProjectTimeLogsCreatedByContactAsync) | **GET** /api/v2/TimeTrackerService/ProjectTimeLogs/CreatedByContact | Retrieve time logs created by a contact
[**ProjectTimeLogsAPI_updateProjectTimeLogAsync**](ProjectTimeLogsAPI.md#ProjectTimeLogsAPI_updateProjectTimeLogAsync) | **PUT** /api/v2/TimeTrackerService/ProjectTimeLogs/{timeLogId} | Update a project time log


# **ProjectTimeLogsAPI_countProjectPeriodTimeLogsAsync**
```c
// Get the count of project period time logs
//
// Returns the total count of time logs for a specific project period with OData query support.
//
int32_envelope_t* ProjectTimeLogsAPI_countProjectPeriodTimeLogsAsync(apiClient_t *apiClient, char *tenantId, char *projectPeriodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**projectPeriodId** | **char \*** |  | 
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

# **ProjectTimeLogsAPI_createProjectTimeLogAsync**
```c
// Create a new project time log
//
// Creates a new project time log entry.
//
void ProjectTimeLogsAPI_createProjectTimeLogAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, project_time_log_create_dto_t *project_time_log_create_dto);
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

# **ProjectTimeLogsAPI_deleteProjectTimeLogAsync**
```c
// Delete a project time log
//
// Deletes a project time log entry.
//
void ProjectTimeLogsAPI_deleteProjectTimeLogAsync(apiClient_t *apiClient, char *tenantId, char *timeLogId, char *api_version, char *x_api_version);
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

# **ProjectTimeLogsAPI_getProjectPeriodTimeLogsAsync**
```c
// Retrieve project period time logs
//
// Retrieves a list of time logs for a specific project period with OData query support.
//
project_time_log_dto_list_envelope_t* ProjectTimeLogsAPI_getProjectPeriodTimeLogsAsync(apiClient_t *apiClient, char *tenantId, char *projectPeriodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**projectPeriodId** | **char \*** |  | 
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

# **ProjectTimeLogsAPI_getProjectTimeLogByIdAsync**
```c
// Retrieve a project time log by ID
//
// Retrieves a single project time log by its unique identifier.
//
project_time_log_dto_envelope_t* ProjectTimeLogsAPI_getProjectTimeLogByIdAsync(apiClient_t *apiClient, char *timeLogId, char *tenantId, char *api_version, char *x_api_version);
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

# **ProjectTimeLogsAPI_getProjectTimeLogsAsync**
```c
// Retrieve time logs for a project
//
// Retrieves all time logs associated with the specified project.
//
project_time_log_dto_list_envelope_t* ProjectTimeLogsAPI_getProjectTimeLogsAsync(apiClient_t *apiClient, char *projectId, char *tenantId, char *api_version, char *x_api_version);
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

# **ProjectTimeLogsAPI_getProjectTimeLogsByResponsibleContactAsync**
```c
// Retrieve time logs by responsible contact
//
// Retrieves time logs where the specified contact is the responsible party.
//
project_time_log_dto_list_envelope_t* ProjectTimeLogsAPI_getProjectTimeLogsByResponsibleContactAsync(apiClient_t *apiClient, char *contactId, char *tenantId, char *api_version, char *x_api_version);
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

# **ProjectTimeLogsAPI_getProjectTimeLogsCreatedByContactAsync**
```c
// Retrieve time logs created by a contact
//
// Retrieves time logs that were created by the specified contact.
//
project_time_log_dto_list_envelope_t* ProjectTimeLogsAPI_getProjectTimeLogsCreatedByContactAsync(apiClient_t *apiClient, char *contactId, char *tenantId, char *api_version, char *x_api_version);
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

# **ProjectTimeLogsAPI_updateProjectTimeLogAsync**
```c
// Update a project time log
//
// Updates an existing project time log entry.
//
void ProjectTimeLogsAPI_updateProjectTimeLogAsync(apiClient_t *apiClient, char *timeLogId, char *tenantId, char *api_version, char *x_api_version, project_time_log_update_dto_t *project_time_log_update_dto);
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

