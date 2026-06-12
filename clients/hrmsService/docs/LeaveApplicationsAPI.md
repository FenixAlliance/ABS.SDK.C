# LeaveApplicationsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LeaveApplicationsAPI_createLeaveApplicationAsync**](LeaveApplicationsAPI.md#LeaveApplicationsAPI_createLeaveApplicationAsync) | **POST** /api/v2/HrmsService/LeaveApplications | Create a leave application
[**LeaveApplicationsAPI_deleteLeaveApplicationAsync**](LeaveApplicationsAPI.md#LeaveApplicationsAPI_deleteLeaveApplicationAsync) | **DELETE** /api/v2/HrmsService/LeaveApplications/{leaveApplicationId} | Delete a leave application
[**LeaveApplicationsAPI_getLeaveApplicationByIdAsync**](LeaveApplicationsAPI.md#LeaveApplicationsAPI_getLeaveApplicationByIdAsync) | **GET** /api/v2/HrmsService/LeaveApplications/{leaveApplicationId} | Get leave application by ID
[**LeaveApplicationsAPI_getLeaveApplicationsAsync**](LeaveApplicationsAPI.md#LeaveApplicationsAPI_getLeaveApplicationsAsync) | **GET** /api/v2/HrmsService/LeaveApplications | Get leave applications
[**LeaveApplicationsAPI_getLeaveApplicationsCountAsync**](LeaveApplicationsAPI.md#LeaveApplicationsAPI_getLeaveApplicationsCountAsync) | **GET** /api/v2/HrmsService/LeaveApplications/Count | Count leave applications
[**LeaveApplicationsAPI_patchLeaveApplicationAsync**](LeaveApplicationsAPI.md#LeaveApplicationsAPI_patchLeaveApplicationAsync) | **PATCH** /api/v2/HrmsService/LeaveApplications/{leaveApplicationId} | Patch a leave application
[**LeaveApplicationsAPI_updateLeaveApplicationAsync**](LeaveApplicationsAPI.md#LeaveApplicationsAPI_updateLeaveApplicationAsync) | **PUT** /api/v2/HrmsService/LeaveApplications/{leaveApplicationId} | Update a leave application


# **LeaveApplicationsAPI_createLeaveApplicationAsync**
```c
// Create a leave application
//
// Creates a new leave application for the specified tenant.
//
empty_envelope_t* LeaveApplicationsAPI_createLeaveApplicationAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, leave_application_create_dto_t *leave_application_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**leave_application_create_dto** | **[leave_application_create_dto_t](leave_application_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LeaveApplicationsAPI_deleteLeaveApplicationAsync**
```c
// Delete a leave application
//
// Deletes a leave application for the specified tenant.
//
empty_envelope_t* LeaveApplicationsAPI_deleteLeaveApplicationAsync(apiClient_t *apiClient, char *tenantId, char *leaveApplicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**leaveApplicationId** | **char \*** |  | 
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

# **LeaveApplicationsAPI_getLeaveApplicationByIdAsync**
```c
// Get leave application by ID
//
// Retrieves a specific leave application by its identifier.
//
leave_application_dto_envelope_t* LeaveApplicationsAPI_getLeaveApplicationByIdAsync(apiClient_t *apiClient, char *tenantId, char *leaveApplicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**leaveApplicationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[leave_application_dto_envelope_t](leave_application_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LeaveApplicationsAPI_getLeaveApplicationsAsync**
```c
// Get leave applications
//
// Retrieves leave applications for the specified tenant.
//
leave_application_dto_list_envelope_t* LeaveApplicationsAPI_getLeaveApplicationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[leave_application_dto_list_envelope_t](leave_application_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LeaveApplicationsAPI_getLeaveApplicationsCountAsync**
```c
// Count leave applications
//
// Counts leave applications for the specified tenant.
//
int32_envelope_t* LeaveApplicationsAPI_getLeaveApplicationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **LeaveApplicationsAPI_patchLeaveApplicationAsync**
```c
// Patch a leave application
//
// Partially updates an existing leave application for the specified tenant.
//
empty_envelope_t* LeaveApplicationsAPI_patchLeaveApplicationAsync(apiClient_t *apiClient, char *tenantId, char *leaveApplicationId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**leaveApplicationId** | **char \*** |  | 
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

# **LeaveApplicationsAPI_updateLeaveApplicationAsync**
```c
// Update a leave application
//
// Updates an existing leave application for the specified tenant.
//
empty_envelope_t* LeaveApplicationsAPI_updateLeaveApplicationAsync(apiClient_t *apiClient, char *tenantId, char *leaveApplicationId, char *api_version, char *x_api_version, leave_application_update_dto_t *leave_application_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**leaveApplicationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**leave_application_update_dto** | **[leave_application_update_dto_t](leave_application_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

