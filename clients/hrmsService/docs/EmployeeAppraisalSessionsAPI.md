# EmployeeAppraisalSessionsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EmployeeAppraisalSessionsAPI_createEmployeeAppraisalSessionAsync**](EmployeeAppraisalSessionsAPI.md#EmployeeAppraisalSessionsAPI_createEmployeeAppraisalSessionAsync) | **POST** /api/v2/HrmsService/EmployeeAppraisalSessions | Create an employee appraisal session
[**EmployeeAppraisalSessionsAPI_deleteEmployeeAppraisalSessionAsync**](EmployeeAppraisalSessionsAPI.md#EmployeeAppraisalSessionsAPI_deleteEmployeeAppraisalSessionAsync) | **DELETE** /api/v2/HrmsService/EmployeeAppraisalSessions/{sessionId} | Delete an employee appraisal session
[**EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionByIdAsync**](EmployeeAppraisalSessionsAPI.md#EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionByIdAsync) | **GET** /api/v2/HrmsService/EmployeeAppraisalSessions/{sessionId} | Get employee appraisal session by ID
[**EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionsAsync**](EmployeeAppraisalSessionsAPI.md#EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionsAsync) | **GET** /api/v2/HrmsService/EmployeeAppraisalSessions | Get employee appraisal sessions
[**EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionsCountAsync**](EmployeeAppraisalSessionsAPI.md#EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionsCountAsync) | **GET** /api/v2/HrmsService/EmployeeAppraisalSessions/Count | Count employee appraisal sessions
[**EmployeeAppraisalSessionsAPI_patchEmployeeAppraisalSessionAsync**](EmployeeAppraisalSessionsAPI.md#EmployeeAppraisalSessionsAPI_patchEmployeeAppraisalSessionAsync) | **PATCH** /api/v2/HrmsService/EmployeeAppraisalSessions/{sessionId} | Patch an employee appraisal session
[**EmployeeAppraisalSessionsAPI_updateEmployeeAppraisalSessionAsync**](EmployeeAppraisalSessionsAPI.md#EmployeeAppraisalSessionsAPI_updateEmployeeAppraisalSessionAsync) | **PUT** /api/v2/HrmsService/EmployeeAppraisalSessions/{sessionId} | Update an employee appraisal session


# **EmployeeAppraisalSessionsAPI_createEmployeeAppraisalSessionAsync**
```c
// Create an employee appraisal session
//
// Creates a new employee appraisal session for the specified tenant.
//
empty_envelope_t* EmployeeAppraisalSessionsAPI_createEmployeeAppraisalSessionAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, employee_appraisal_session_create_dto_t *employee_appraisal_session_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**employee_appraisal_session_create_dto** | **[employee_appraisal_session_create_dto_t](employee_appraisal_session_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeeAppraisalSessionsAPI_deleteEmployeeAppraisalSessionAsync**
```c
// Delete an employee appraisal session
//
// Deletes an employee appraisal session for the specified tenant.
//
empty_envelope_t* EmployeeAppraisalSessionsAPI_deleteEmployeeAppraisalSessionAsync(apiClient_t *apiClient, char *tenantId, char *sessionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**sessionId** | **char \*** |  | 
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

# **EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionByIdAsync**
```c
// Get employee appraisal session by ID
//
// Retrieves a specific employee appraisal session by its identifier.
//
employee_appraisal_session_dto_envelope_t* EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionByIdAsync(apiClient_t *apiClient, char *tenantId, char *sessionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**sessionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[employee_appraisal_session_dto_envelope_t](employee_appraisal_session_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionsAsync**
```c
// Get employee appraisal sessions
//
// Retrieves employee appraisal sessions for the specified tenant.
//
employee_appraisal_session_dto_list_envelope_t* EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[employee_appraisal_session_dto_list_envelope_t](employee_appraisal_session_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionsCountAsync**
```c
// Count employee appraisal sessions
//
// Counts employee appraisal sessions for the specified tenant.
//
int32_envelope_t* EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **EmployeeAppraisalSessionsAPI_patchEmployeeAppraisalSessionAsync**
```c
// Patch an employee appraisal session
//
// Partially updates an existing employee appraisal session for the specified tenant.
//
empty_envelope_t* EmployeeAppraisalSessionsAPI_patchEmployeeAppraisalSessionAsync(apiClient_t *apiClient, char *tenantId, char *sessionId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**sessionId** | **char \*** |  | 
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

# **EmployeeAppraisalSessionsAPI_updateEmployeeAppraisalSessionAsync**
```c
// Update an employee appraisal session
//
// Updates an existing employee appraisal session for the specified tenant.
//
empty_envelope_t* EmployeeAppraisalSessionsAPI_updateEmployeeAppraisalSessionAsync(apiClient_t *apiClient, char *tenantId, char *sessionId, char *api_version, char *x_api_version, employee_appraisal_session_update_dto_t *employee_appraisal_session_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**sessionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**employee_appraisal_session_update_dto** | **[employee_appraisal_session_update_dto_t](employee_appraisal_session_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

