# SalariesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SalariesAPI_createSalaryAsync**](SalariesAPI.md#SalariesAPI_createSalaryAsync) | **POST** /api/v2/HrmsService/Salaries | Create a salary
[**SalariesAPI_deleteSalaryAsync**](SalariesAPI.md#SalariesAPI_deleteSalaryAsync) | **DELETE** /api/v2/HrmsService/Salaries/{salaryId} | Delete a salary
[**SalariesAPI_getSalariesAsync**](SalariesAPI.md#SalariesAPI_getSalariesAsync) | **GET** /api/v2/HrmsService/Salaries | Get salaries
[**SalariesAPI_getSalariesCountAsync**](SalariesAPI.md#SalariesAPI_getSalariesCountAsync) | **GET** /api/v2/HrmsService/Salaries/Count | Count salaries
[**SalariesAPI_getSalaryByIdAsync**](SalariesAPI.md#SalariesAPI_getSalaryByIdAsync) | **GET** /api/v2/HrmsService/Salaries/{salaryId} | Get salary by ID
[**SalariesAPI_patchSalaryAsync**](SalariesAPI.md#SalariesAPI_patchSalaryAsync) | **PATCH** /api/v2/HrmsService/Salaries/{salaryId} | Patch a salary
[**SalariesAPI_updateSalaryAsync**](SalariesAPI.md#SalariesAPI_updateSalaryAsync) | **PUT** /api/v2/HrmsService/Salaries/{salaryId} | Update a salary


# **SalariesAPI_createSalaryAsync**
```c
// Create a salary
//
// Creates a new salary for the specified tenant.
//
empty_envelope_t* SalariesAPI_createSalaryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, salary_create_dto_t *salary_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**salary_create_dto** | **[salary_create_dto_t](salary_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SalariesAPI_deleteSalaryAsync**
```c
// Delete a salary
//
// Deletes a salary for the specified tenant.
//
empty_envelope_t* SalariesAPI_deleteSalaryAsync(apiClient_t *apiClient, char *tenantId, char *salaryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**salaryId** | **char \*** |  | 
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

# **SalariesAPI_getSalariesAsync**
```c
// Get salaries
//
// Retrieves salaries for the specified tenant.
//
salary_dto_list_envelope_t* SalariesAPI_getSalariesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[salary_dto_list_envelope_t](salary_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SalariesAPI_getSalariesCountAsync**
```c
// Count salaries
//
// Counts salaries for the specified tenant.
//
int32_envelope_t* SalariesAPI_getSalariesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SalariesAPI_getSalaryByIdAsync**
```c
// Get salary by ID
//
// Retrieves a specific salary by its identifier.
//
salary_dto_envelope_t* SalariesAPI_getSalaryByIdAsync(apiClient_t *apiClient, char *tenantId, char *salaryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**salaryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[salary_dto_envelope_t](salary_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SalariesAPI_patchSalaryAsync**
```c
// Patch a salary
//
// Partially updates an existing salary for the specified tenant.
//
empty_envelope_t* SalariesAPI_patchSalaryAsync(apiClient_t *apiClient, char *tenantId, char *salaryId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**salaryId** | **char \*** |  | 
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

# **SalariesAPI_updateSalaryAsync**
```c
// Update a salary
//
// Updates an existing salary for the specified tenant.
//
empty_envelope_t* SalariesAPI_updateSalaryAsync(apiClient_t *apiClient, char *tenantId, char *salaryId, char *api_version, char *x_api_version, salary_update_dto_t *salary_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**salaryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**salary_update_dto** | **[salary_update_dto_t](salary_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

