# EmployeeTypesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EmployeeTypesAPI_createEmployeeTypeAsync**](EmployeeTypesAPI.md#EmployeeTypesAPI_createEmployeeTypeAsync) | **POST** /api/v2/HrmsService/EmployeeTypes | Create an employee type
[**EmployeeTypesAPI_deleteEmployeeTypeAsync**](EmployeeTypesAPI.md#EmployeeTypesAPI_deleteEmployeeTypeAsync) | **DELETE** /api/v2/HrmsService/EmployeeTypes/{employeeTypeId} | Delete an employee type
[**EmployeeTypesAPI_getEmployeeTypeByIdAsync**](EmployeeTypesAPI.md#EmployeeTypesAPI_getEmployeeTypeByIdAsync) | **GET** /api/v2/HrmsService/EmployeeTypes/{employeeTypeId} | Get employee type by ID
[**EmployeeTypesAPI_getEmployeeTypesAsync**](EmployeeTypesAPI.md#EmployeeTypesAPI_getEmployeeTypesAsync) | **GET** /api/v2/HrmsService/EmployeeTypes | Get employee types
[**EmployeeTypesAPI_getEmployeeTypesCountAsync**](EmployeeTypesAPI.md#EmployeeTypesAPI_getEmployeeTypesCountAsync) | **GET** /api/v2/HrmsService/EmployeeTypes/Count | Count employee types
[**EmployeeTypesAPI_patchEmployeeTypeAsync**](EmployeeTypesAPI.md#EmployeeTypesAPI_patchEmployeeTypeAsync) | **PATCH** /api/v2/HrmsService/EmployeeTypes/{employeeTypeId} | Patch an employee type
[**EmployeeTypesAPI_updateEmployeeTypeAsync**](EmployeeTypesAPI.md#EmployeeTypesAPI_updateEmployeeTypeAsync) | **PUT** /api/v2/HrmsService/EmployeeTypes/{employeeTypeId} | Update an employee type


# **EmployeeTypesAPI_createEmployeeTypeAsync**
```c
// Create an employee type
//
// Creates a new employee type for the specified tenant.
//
empty_envelope_t* EmployeeTypesAPI_createEmployeeTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, employee_type_create_dto_t *employee_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**employee_type_create_dto** | **[employee_type_create_dto_t](employee_type_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeeTypesAPI_deleteEmployeeTypeAsync**
```c
// Delete an employee type
//
// Deletes an employee type for the specified tenant.
//
empty_envelope_t* EmployeeTypesAPI_deleteEmployeeTypeAsync(apiClient_t *apiClient, char *tenantId, char *employeeTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**employeeTypeId** | **char \*** |  | 
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

# **EmployeeTypesAPI_getEmployeeTypeByIdAsync**
```c
// Get employee type by ID
//
// Retrieves a specific employee type by its identifier.
//
employee_type_dto_envelope_t* EmployeeTypesAPI_getEmployeeTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *employeeTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**employeeTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[employee_type_dto_envelope_t](employee_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeeTypesAPI_getEmployeeTypesAsync**
```c
// Get employee types
//
// Retrieves employee types for the specified tenant.
//
employee_type_dto_list_envelope_t* EmployeeTypesAPI_getEmployeeTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, employee_type_dto_collection_query_parameters_t *employee_type_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**employee_type_dto_collection_query_parameters** | **[employee_type_dto_collection_query_parameters_t](employee_type_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[employee_type_dto_list_envelope_t](employee_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeeTypesAPI_getEmployeeTypesCountAsync**
```c
// Count employee types
//
// Counts employee types for the specified tenant.
//
int32_envelope_t* EmployeeTypesAPI_getEmployeeTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, employee_type_dto_collection_query_parameters_t *employee_type_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**employee_type_dto_collection_query_parameters** | **[employee_type_dto_collection_query_parameters_t](employee_type_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeeTypesAPI_patchEmployeeTypeAsync**
```c
// Patch an employee type
//
// Partially updates an existing employee type for the specified tenant.
//
empty_envelope_t* EmployeeTypesAPI_patchEmployeeTypeAsync(apiClient_t *apiClient, char *tenantId, char *employeeTypeId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**employeeTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeeTypesAPI_updateEmployeeTypeAsync**
```c
// Update an employee type
//
// Updates an existing employee type for the specified tenant.
//
empty_envelope_t* EmployeeTypesAPI_updateEmployeeTypeAsync(apiClient_t *apiClient, char *tenantId, char *employeeTypeId, char *api_version, char *x_api_version, employee_type_update_dto_t *employee_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**employeeTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**employee_type_update_dto** | **[employee_type_update_dto_t](employee_type_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

