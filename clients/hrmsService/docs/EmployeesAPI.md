# EmployeesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EmployeesAPI_createEmployeeAsync**](EmployeesAPI.md#EmployeesAPI_createEmployeeAsync) | **POST** /api/v2/HrmsService/Employees | Create an employee
[**EmployeesAPI_deleteEmployeeAsync**](EmployeesAPI.md#EmployeesAPI_deleteEmployeeAsync) | **DELETE** /api/v2/HrmsService/Employees/{employeeId} | Delete an employee
[**EmployeesAPI_getEmployeeByIdAsync**](EmployeesAPI.md#EmployeesAPI_getEmployeeByIdAsync) | **GET** /api/v2/HrmsService/Employees/{employeeId} | Get employee by ID
[**EmployeesAPI_getEmployeesAsync**](EmployeesAPI.md#EmployeesAPI_getEmployeesAsync) | **GET** /api/v2/HrmsService/Employees | Get employees
[**EmployeesAPI_getEmployeesCountAsync**](EmployeesAPI.md#EmployeesAPI_getEmployeesCountAsync) | **GET** /api/v2/HrmsService/Employees/Count | Count employees
[**EmployeesAPI_updateEmployeeAsync**](EmployeesAPI.md#EmployeesAPI_updateEmployeeAsync) | **PUT** /api/v2/HrmsService/Employees/{employeeId} | Update an employee


# **EmployeesAPI_createEmployeeAsync**
```c
// Create an employee
//
// Creates a new employee for the specified tenant.
//
empty_envelope_t* EmployeesAPI_createEmployeeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, employee_profile_create_dto_t *employee_profile_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**employee_profile_create_dto** | **[employee_profile_create_dto_t](employee_profile_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeesAPI_deleteEmployeeAsync**
```c
// Delete an employee
//
// Deletes an employee for the specified tenant.
//
empty_envelope_t* EmployeesAPI_deleteEmployeeAsync(apiClient_t *apiClient, char *tenantId, char *employeeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**employeeId** | **char \*** |  | 
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

# **EmployeesAPI_getEmployeeByIdAsync**
```c
// Get employee by ID
//
// Retrieves a specific employee by its identifier.
//
employee_profile_dto_envelope_t* EmployeesAPI_getEmployeeByIdAsync(apiClient_t *apiClient, char *tenantId, char *employeeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**employeeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[employee_profile_dto_envelope_t](employee_profile_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeesAPI_getEmployeesAsync**
```c
// Get employees
//
// Retrieves employees for the specified tenant.
//
employee_profile_dto_list_envelope_t* EmployeesAPI_getEmployeesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[employee_profile_dto_list_envelope_t](employee_profile_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeesAPI_getEmployeesCountAsync**
```c
// Count employees
//
// Counts employees for the specified tenant.
//
int32_envelope_t* EmployeesAPI_getEmployeesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **EmployeesAPI_updateEmployeeAsync**
```c
// Update an employee
//
// Updates an existing employee for the specified tenant.
//
empty_envelope_t* EmployeesAPI_updateEmployeeAsync(apiClient_t *apiClient, char *tenantId, char *employeeId, char *api_version, char *x_api_version, object_t *body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**employeeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**body** | **[object_t](object.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

