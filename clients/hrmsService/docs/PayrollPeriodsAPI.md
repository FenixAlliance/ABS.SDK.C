# PayrollPeriodsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PayrollPeriodsAPI_createPayrollPeriodAsync**](PayrollPeriodsAPI.md#PayrollPeriodsAPI_createPayrollPeriodAsync) | **POST** /api/v2/HrmsService/PayrollPeriods | Create a payroll period
[**PayrollPeriodsAPI_deletePayrollPeriodAsync**](PayrollPeriodsAPI.md#PayrollPeriodsAPI_deletePayrollPeriodAsync) | **DELETE** /api/v2/HrmsService/PayrollPeriods/{periodId} | Delete a payroll period
[**PayrollPeriodsAPI_getPayrollPeriodByIdAsync**](PayrollPeriodsAPI.md#PayrollPeriodsAPI_getPayrollPeriodByIdAsync) | **GET** /api/v2/HrmsService/PayrollPeriods/{periodId} | Get payroll period by ID
[**PayrollPeriodsAPI_getPayrollPeriodsAsync**](PayrollPeriodsAPI.md#PayrollPeriodsAPI_getPayrollPeriodsAsync) | **GET** /api/v2/HrmsService/PayrollPeriods | Get payroll periods
[**PayrollPeriodsAPI_getPayrollPeriodsCountAsync**](PayrollPeriodsAPI.md#PayrollPeriodsAPI_getPayrollPeriodsCountAsync) | **GET** /api/v2/HrmsService/PayrollPeriods/Count | Count payroll periods
[**PayrollPeriodsAPI_updatePayrollPeriodAsync**](PayrollPeriodsAPI.md#PayrollPeriodsAPI_updatePayrollPeriodAsync) | **PUT** /api/v2/HrmsService/PayrollPeriods/{periodId} | Update a payroll period


# **PayrollPeriodsAPI_createPayrollPeriodAsync**
```c
// Create a payroll period
//
// Creates a new payroll period for the specified tenant.
//
empty_envelope_t* PayrollPeriodsAPI_createPayrollPeriodAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, payroll_period_create_dto_t *payroll_period_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**payroll_period_create_dto** | **[payroll_period_create_dto_t](payroll_period_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PayrollPeriodsAPI_deletePayrollPeriodAsync**
```c
// Delete a payroll period
//
// Deletes a payroll period for the specified tenant.
//
empty_envelope_t* PayrollPeriodsAPI_deletePayrollPeriodAsync(apiClient_t *apiClient, char *tenantId, char *periodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**periodId** | **char \*** |  | 
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

# **PayrollPeriodsAPI_getPayrollPeriodByIdAsync**
```c
// Get payroll period by ID
//
// Retrieves a specific payroll period by its identifier.
//
payroll_period_dto_envelope_t* PayrollPeriodsAPI_getPayrollPeriodByIdAsync(apiClient_t *apiClient, char *tenantId, char *periodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**periodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payroll_period_dto_envelope_t](payroll_period_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PayrollPeriodsAPI_getPayrollPeriodsAsync**
```c
// Get payroll periods
//
// Retrieves payroll periods for the specified tenant.
//
payroll_period_dto_list_envelope_t* PayrollPeriodsAPI_getPayrollPeriodsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payroll_period_dto_list_envelope_t](payroll_period_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PayrollPeriodsAPI_getPayrollPeriodsCountAsync**
```c
// Count payroll periods
//
// Counts payroll periods for the specified tenant.
//
int32_envelope_t* PayrollPeriodsAPI_getPayrollPeriodsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **PayrollPeriodsAPI_updatePayrollPeriodAsync**
```c
// Update a payroll period
//
// Updates an existing payroll period for the specified tenant.
//
empty_envelope_t* PayrollPeriodsAPI_updatePayrollPeriodAsync(apiClient_t *apiClient, char *tenantId, char *periodId, char *api_version, char *x_api_version, payroll_period_update_dto_t *payroll_period_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**periodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**payroll_period_update_dto** | **[payroll_period_update_dto_t](payroll_period_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

