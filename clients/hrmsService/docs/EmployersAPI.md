# EmployersAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EmployersAPI_createEmployerAsync**](EmployersAPI.md#EmployersAPI_createEmployerAsync) | **POST** /api/v2/HrmsService/Employers | Create an employer
[**EmployersAPI_deleteEmployerAsync**](EmployersAPI.md#EmployersAPI_deleteEmployerAsync) | **DELETE** /api/v2/HrmsService/Employers/{employerId} | Delete an employer
[**EmployersAPI_getEmployerByIdAsync**](EmployersAPI.md#EmployersAPI_getEmployerByIdAsync) | **GET** /api/v2/HrmsService/Employers/{employerId} | Get employer by ID
[**EmployersAPI_getEmployersAsync**](EmployersAPI.md#EmployersAPI_getEmployersAsync) | **GET** /api/v2/HrmsService/Employers | Get employers
[**EmployersAPI_getEmployersCountAsync**](EmployersAPI.md#EmployersAPI_getEmployersCountAsync) | **GET** /api/v2/HrmsService/Employers/Count | Count employers
[**EmployersAPI_patchEmployerAsync**](EmployersAPI.md#EmployersAPI_patchEmployerAsync) | **PATCH** /api/v2/HrmsService/Employers/{employerId} | Patch an employer
[**EmployersAPI_updateEmployerAsync**](EmployersAPI.md#EmployersAPI_updateEmployerAsync) | **PUT** /api/v2/HrmsService/Employers/{employerId} | Update an employer


# **EmployersAPI_createEmployerAsync**
```c
// Create an employer
//
// Creates a new employer for the specified tenant.
//
empty_envelope_t* EmployersAPI_createEmployerAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, employer_profile_create_dto_t *employer_profile_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**employer_profile_create_dto** | **[employer_profile_create_dto_t](employer_profile_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployersAPI_deleteEmployerAsync**
```c
// Delete an employer
//
// Deletes an employer for the specified tenant.
//
empty_envelope_t* EmployersAPI_deleteEmployerAsync(apiClient_t *apiClient, char *tenantId, char *employerId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**employerId** | **char \*** |  | 
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

# **EmployersAPI_getEmployerByIdAsync**
```c
// Get employer by ID
//
// Retrieves a specific employer by its identifier.
//
employer_profile_dto_envelope_t* EmployersAPI_getEmployerByIdAsync(apiClient_t *apiClient, char *tenantId, char *employerId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**employerId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[employer_profile_dto_envelope_t](employer_profile_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployersAPI_getEmployersAsync**
```c
// Get employers
//
// Retrieves employers for the specified tenant.
//
employer_profile_dto_list_envelope_t* EmployersAPI_getEmployersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[employer_profile_dto_list_envelope_t](employer_profile_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployersAPI_getEmployersCountAsync**
```c
// Count employers
//
// Counts employers for the specified tenant.
//
int32_envelope_t* EmployersAPI_getEmployersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **EmployersAPI_patchEmployerAsync**
```c
// Patch an employer
//
// Partially updates an existing employer for the specified tenant.
//
empty_envelope_t* EmployersAPI_patchEmployerAsync(apiClient_t *apiClient, char *tenantId, char *employerId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**employerId** | **char \*** |  | 
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

# **EmployersAPI_updateEmployerAsync**
```c
// Update an employer
//
// Updates an existing employer for the specified tenant.
//
empty_envelope_t* EmployersAPI_updateEmployerAsync(apiClient_t *apiClient, char *tenantId, char *employerId, char *api_version, char *x_api_version, employer_profile_update_dto_t *employer_profile_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**employerId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**employer_profile_update_dto** | **[employer_profile_update_dto_t](employer_profile_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

