# PayrollsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PayrollsAPI_createPayrollAsync**](PayrollsAPI.md#PayrollsAPI_createPayrollAsync) | **POST** /api/v2/HrmsService/Payrolls | Create a payroll
[**PayrollsAPI_deletePayrollAsync**](PayrollsAPI.md#PayrollsAPI_deletePayrollAsync) | **DELETE** /api/v2/HrmsService/Payrolls/{payrollId} | Delete a payroll
[**PayrollsAPI_getPayrollByIdAsync**](PayrollsAPI.md#PayrollsAPI_getPayrollByIdAsync) | **GET** /api/v2/HrmsService/Payrolls/{payrollId} | Get payroll by ID
[**PayrollsAPI_getPayrollsAsync**](PayrollsAPI.md#PayrollsAPI_getPayrollsAsync) | **GET** /api/v2/HrmsService/Payrolls | Get payrolls
[**PayrollsAPI_getPayrollsCountAsync**](PayrollsAPI.md#PayrollsAPI_getPayrollsCountAsync) | **GET** /api/v2/HrmsService/Payrolls/Count | Count payrolls
[**PayrollsAPI_patchPayrollAsync**](PayrollsAPI.md#PayrollsAPI_patchPayrollAsync) | **PATCH** /api/v2/HrmsService/Payrolls/{payrollId} | Patch a payroll
[**PayrollsAPI_updatePayrollAsync**](PayrollsAPI.md#PayrollsAPI_updatePayrollAsync) | **PUT** /api/v2/HrmsService/Payrolls/{payrollId} | Update a payroll


# **PayrollsAPI_createPayrollAsync**
```c
// Create a payroll
//
// Creates a new payroll for the specified tenant.
//
empty_envelope_t* PayrollsAPI_createPayrollAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, payroll_create_dto_t *payroll_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**payroll_create_dto** | **[payroll_create_dto_t](payroll_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PayrollsAPI_deletePayrollAsync**
```c
// Delete a payroll
//
// Deletes a payroll for the specified tenant.
//
empty_envelope_t* PayrollsAPI_deletePayrollAsync(apiClient_t *apiClient, char *tenantId, char *payrollId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**payrollId** | **char \*** |  | 
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

# **PayrollsAPI_getPayrollByIdAsync**
```c
// Get payroll by ID
//
// Retrieves a specific payroll by its identifier.
//
payroll_dto_envelope_t* PayrollsAPI_getPayrollByIdAsync(apiClient_t *apiClient, char *tenantId, char *payrollId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**payrollId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payroll_dto_envelope_t](payroll_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PayrollsAPI_getPayrollsAsync**
```c
// Get payrolls
//
// Retrieves payrolls for the specified tenant.
//
payroll_dto_list_envelope_t* PayrollsAPI_getPayrollsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payroll_dto_list_envelope_t](payroll_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PayrollsAPI_getPayrollsCountAsync**
```c
// Count payrolls
//
// Counts payrolls for the specified tenant.
//
int32_envelope_t* PayrollsAPI_getPayrollsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **PayrollsAPI_patchPayrollAsync**
```c
// Patch a payroll
//
// Partially updates an existing payroll for the specified tenant.
//
empty_envelope_t* PayrollsAPI_patchPayrollAsync(apiClient_t *apiClient, char *tenantId, char *payrollId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**payrollId** | **char \*** |  | 
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

# **PayrollsAPI_updatePayrollAsync**
```c
// Update a payroll
//
// Updates an existing payroll for the specified tenant.
//
empty_envelope_t* PayrollsAPI_updatePayrollAsync(apiClient_t *apiClient, char *tenantId, char *payrollId, char *api_version, char *x_api_version, payroll_update_dto_t *payroll_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**payrollId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**payroll_update_dto** | **[payroll_update_dto_t](payroll_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

