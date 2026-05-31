# EmployeeEnrollmentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EmployeeEnrollmentsAPI_createTenantEmployeeEnrollment**](EmployeeEnrollmentsAPI.md#EmployeeEnrollmentsAPI_createTenantEmployeeEnrollment) | **POST** /api/v2/TenantsService/EmployeeEnrollments | Create a new tenant employee enrollment
[**EmployeeEnrollmentsAPI_deleteTenantEmployeeEnrollment**](EmployeeEnrollmentsAPI.md#EmployeeEnrollmentsAPI_deleteTenantEmployeeEnrollment) | **DELETE** /api/v2/TenantsService/EmployeeEnrollments/{tenantEmployeeEnrollmentId} | Delete a tenant employee enrollment
[**EmployeeEnrollmentsAPI_getTenantEmployeeEnrollmentById**](EmployeeEnrollmentsAPI.md#EmployeeEnrollmentsAPI_getTenantEmployeeEnrollmentById) | **GET** /api/v2/TenantsService/EmployeeEnrollments/{tenantEmployeeEnrollmentId} | Retrieve a single tenant employee enrollment by its ID
[**EmployeeEnrollmentsAPI_getTenantEmployeeEnrollments**](EmployeeEnrollmentsAPI.md#EmployeeEnrollmentsAPI_getTenantEmployeeEnrollments) | **GET** /api/v2/TenantsService/EmployeeEnrollments | Retrieve a list of tenant employee enrollments
[**EmployeeEnrollmentsAPI_getTenantEmployeeEnrollmentsCount**](EmployeeEnrollmentsAPI.md#EmployeeEnrollmentsAPI_getTenantEmployeeEnrollmentsCount) | **GET** /api/v2/TenantsService/EmployeeEnrollments/Count | Get the count of tenant employee enrollments
[**EmployeeEnrollmentsAPI_updateTenantEmployeeEnrollment**](EmployeeEnrollmentsAPI.md#EmployeeEnrollmentsAPI_updateTenantEmployeeEnrollment) | **PUT** /api/v2/TenantsService/EmployeeEnrollments/{tenantEmployeeEnrollmentId} | Update a tenant employee enrollment


# **EmployeeEnrollmentsAPI_createTenantEmployeeEnrollment**
```c
// Create a new tenant employee enrollment
//
// Create a new tenant employee enrollment
//
empty_envelope_t* EmployeeEnrollmentsAPI_createTenantEmployeeEnrollment(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_team_employee_enrollment_create_dto_t *tenant_team_employee_enrollment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_team_employee_enrollment_create_dto** | **[tenant_team_employee_enrollment_create_dto_t](tenant_team_employee_enrollment_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeeEnrollmentsAPI_deleteTenantEmployeeEnrollment**
```c
// Delete a tenant employee enrollment
//
// Delete a tenant employee enrollment
//
empty_envelope_t* EmployeeEnrollmentsAPI_deleteTenantEmployeeEnrollment(apiClient_t *apiClient, char *tenantId, char *tenantEmployeeEnrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantEmployeeEnrollmentId** | **char \*** |  | 
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

# **EmployeeEnrollmentsAPI_getTenantEmployeeEnrollmentById**
```c
// Retrieve a single tenant employee enrollment by its ID
//
// Retrieve a single tenant employee enrollment by its ID
//
tenant_team_employee_enrollment_dto_envelope_t* EmployeeEnrollmentsAPI_getTenantEmployeeEnrollmentById(apiClient_t *apiClient, char *tenantId, char *tenantEmployeeEnrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantEmployeeEnrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_team_employee_enrollment_dto_envelope_t](tenant_team_employee_enrollment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeeEnrollmentsAPI_getTenantEmployeeEnrollments**
```c
// Retrieve a list of tenant employee enrollments
//
// Retrieve a list of tenant employee enrollments
//
tenant_team_employee_enrollment_dto_list_envelope_t* EmployeeEnrollmentsAPI_getTenantEmployeeEnrollments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_team_employee_enrollment_dto_list_envelope_t](tenant_team_employee_enrollment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmployeeEnrollmentsAPI_getTenantEmployeeEnrollmentsCount**
```c
// Get the count of tenant employee enrollments
//
// Get the count of tenant employee enrollments
//
int32_envelope_t* EmployeeEnrollmentsAPI_getTenantEmployeeEnrollmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **EmployeeEnrollmentsAPI_updateTenantEmployeeEnrollment**
```c
// Update a tenant employee enrollment
//
// Update a tenant employee enrollment
//
empty_envelope_t* EmployeeEnrollmentsAPI_updateTenantEmployeeEnrollment(apiClient_t *apiClient, char *tenantId, char *tenantEmployeeEnrollmentId, char *api_version, char *x_api_version, tenant_team_employee_enrollment_update_dto_t *tenant_team_employee_enrollment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantEmployeeEnrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_team_employee_enrollment_update_dto** | **[tenant_team_employee_enrollment_update_dto_t](tenant_team_employee_enrollment_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

