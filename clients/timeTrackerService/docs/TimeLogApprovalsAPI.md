# TimeLogApprovalsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TimeLogApprovalsAPI_requestProjectHoursApprovalAsync**](TimeLogApprovalsAPI.md#TimeLogApprovalsAPI_requestProjectHoursApprovalAsync) | **POST** /api/v2/TimeTrackerService/TimeLogApprovals | Request project hours approval
[**TimeLogApprovalsAPI_updateProjectHoursApprovalApproverAsync**](TimeLogApprovalsAPI.md#TimeLogApprovalsAPI_updateProjectHoursApprovalApproverAsync) | **PUT** /api/v2/TimeTrackerService/TimeLogApprovals/{approvalId}/Approver | Update approval approver
[**TimeLogApprovalsAPI_updateProjectHoursApprovalStatusAsync**](TimeLogApprovalsAPI.md#TimeLogApprovalsAPI_updateProjectHoursApprovalStatusAsync) | **PUT** /api/v2/TimeTrackerService/TimeLogApprovals/{approvalId}/Status | Update approval status


# **TimeLogApprovalsAPI_requestProjectHoursApprovalAsync**
```c
// Request project hours approval
//
// Creates a new project hours approval request.
//
void TimeLogApprovalsAPI_requestProjectHoursApprovalAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, project_hours_approval_create_dto_t *project_hours_approval_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**project_hours_approval_create_dto** | **[project_hours_approval_create_dto_t](project_hours_approval_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeLogApprovalsAPI_updateProjectHoursApprovalApproverAsync**
```c
// Update approval approver
//
// Updates the approver of an existing project hours approval.
//
void TimeLogApprovalsAPI_updateProjectHoursApprovalApproverAsync(apiClient_t *apiClient, char *approvalId, char *tenantId, char *api_version, char *x_api_version, project_hours_approval_approver_update_dto_t *project_hours_approval_approver_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**approvalId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**project_hours_approval_approver_update_dto** | **[project_hours_approval_approver_update_dto_t](project_hours_approval_approver_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimeLogApprovalsAPI_updateProjectHoursApprovalStatusAsync**
```c
// Update approval status
//
// Updates the status of an existing project hours approval.
//
void TimeLogApprovalsAPI_updateProjectHoursApprovalStatusAsync(apiClient_t *apiClient, char *tenantId, char *approvalId, char *api_version, char *x_api_version, project_hours_approval_status_update_dto_t *project_hours_approval_status_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**approvalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**project_hours_approval_status_update_dto** | **[project_hours_approval_status_update_dto_t](project_hours_approval_status_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

