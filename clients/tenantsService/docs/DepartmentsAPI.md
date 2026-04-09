# DepartmentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DepartmentsAPI_createTenantDepartment**](DepartmentsAPI.md#DepartmentsAPI_createTenantDepartment) | **POST** /api/v2/TenantsService/Departments | Create a new tenant department
[**DepartmentsAPI_deleteTenantDepartment**](DepartmentsAPI.md#DepartmentsAPI_deleteTenantDepartment) | **DELETE** /api/v2/TenantsService/Departments/{tenantDepartmentId} | Delete a tenant department
[**DepartmentsAPI_getTenantDepartmentById**](DepartmentsAPI.md#DepartmentsAPI_getTenantDepartmentById) | **GET** /api/v2/TenantsService/Departments/{tenantDepartmentId} | Retrieve a single tenant department by its ID
[**DepartmentsAPI_getTenantDepartments**](DepartmentsAPI.md#DepartmentsAPI_getTenantDepartments) | **GET** /api/v2/TenantsService/Departments | Retrieve a list of tenant departments
[**DepartmentsAPI_getTenantDepartmentsCount**](DepartmentsAPI.md#DepartmentsAPI_getTenantDepartmentsCount) | **GET** /api/v2/TenantsService/Departments/Count | Get the count of tenant departments
[**DepartmentsAPI_updateTenantDepartment**](DepartmentsAPI.md#DepartmentsAPI_updateTenantDepartment) | **PUT** /api/v2/TenantsService/Departments/{tenantDepartmentId} | Update a tenant department


# **DepartmentsAPI_createTenantDepartment**
```c
// Create a new tenant department
//
// Create a new tenant department
//
empty_envelope_t* DepartmentsAPI_createTenantDepartment(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_department_create_dto_t *tenant_department_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_department_create_dto** | **[tenant_department_create_dto_t](tenant_department_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DepartmentsAPI_deleteTenantDepartment**
```c
// Delete a tenant department
//
// Delete a tenant department
//
empty_envelope_t* DepartmentsAPI_deleteTenantDepartment(apiClient_t *apiClient, char *tenantId, char *tenantDepartmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantDepartmentId** | **char \*** |  | 
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

# **DepartmentsAPI_getTenantDepartmentById**
```c
// Retrieve a single tenant department by its ID
//
// Retrieve a single tenant department by its ID
//
tenant_department_dto_envelope_t* DepartmentsAPI_getTenantDepartmentById(apiClient_t *apiClient, char *tenantId, char *tenantDepartmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantDepartmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_department_dto_envelope_t](tenant_department_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DepartmentsAPI_getTenantDepartments**
```c
// Retrieve a list of tenant departments
//
// Retrieve a list of tenant departments
//
tenant_department_dto_list_envelope_t* DepartmentsAPI_getTenantDepartments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_department_dto_list_envelope_t](tenant_department_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DepartmentsAPI_getTenantDepartmentsCount**
```c
// Get the count of tenant departments
//
// Get the count of tenant departments
//
int32_envelope_t* DepartmentsAPI_getTenantDepartmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **DepartmentsAPI_updateTenantDepartment**
```c
// Update a tenant department
//
// Update a tenant department
//
empty_envelope_t* DepartmentsAPI_updateTenantDepartment(apiClient_t *apiClient, char *tenantId, char *tenantDepartmentId, char *api_version, char *x_api_version, tenant_department_update_dto_t *tenant_department_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantDepartmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_department_update_dto** | **[tenant_department_update_dto_t](tenant_department_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

