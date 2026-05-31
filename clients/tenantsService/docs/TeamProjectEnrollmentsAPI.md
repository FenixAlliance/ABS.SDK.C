# TeamProjectEnrollmentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TeamProjectEnrollmentsAPI_createTenantTeamProjectEnrollment**](TeamProjectEnrollmentsAPI.md#TeamProjectEnrollmentsAPI_createTenantTeamProjectEnrollment) | **POST** /api/v2/TenantsService/TeamProjectEnrollments | Create a new tenant team project enrollment
[**TeamProjectEnrollmentsAPI_deleteTenantTeamProjectEnrollment**](TeamProjectEnrollmentsAPI.md#TeamProjectEnrollmentsAPI_deleteTenantTeamProjectEnrollment) | **DELETE** /api/v2/TenantsService/TeamProjectEnrollments/{tenantTeamProjectEnrollmentId} | Delete a tenant team project enrollment
[**TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollmentById**](TeamProjectEnrollmentsAPI.md#TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollmentById) | **GET** /api/v2/TenantsService/TeamProjectEnrollments/{tenantTeamProjectEnrollmentId} | Retrieve a single tenant team project enrollment by its ID
[**TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollments**](TeamProjectEnrollmentsAPI.md#TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollments) | **GET** /api/v2/TenantsService/TeamProjectEnrollments | Retrieve a list of tenant team project enrollments
[**TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollmentsCount**](TeamProjectEnrollmentsAPI.md#TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollmentsCount) | **GET** /api/v2/TenantsService/TeamProjectEnrollments/Count | Get the count of tenant team project enrollments
[**TeamProjectEnrollmentsAPI_updateTenantTeamProjectEnrollment**](TeamProjectEnrollmentsAPI.md#TeamProjectEnrollmentsAPI_updateTenantTeamProjectEnrollment) | **PUT** /api/v2/TenantsService/TeamProjectEnrollments/{tenantTeamProjectEnrollmentId} | Update a tenant team project enrollment


# **TeamProjectEnrollmentsAPI_createTenantTeamProjectEnrollment**
```c
// Create a new tenant team project enrollment
//
// Create a new tenant team project enrollment
//
empty_envelope_t* TeamProjectEnrollmentsAPI_createTenantTeamProjectEnrollment(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_team_project_enrollment_create_dto_t *tenant_team_project_enrollment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_team_project_enrollment_create_dto** | **[tenant_team_project_enrollment_create_dto_t](tenant_team_project_enrollment_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TeamProjectEnrollmentsAPI_deleteTenantTeamProjectEnrollment**
```c
// Delete a tenant team project enrollment
//
// Delete a tenant team project enrollment
//
empty_envelope_t* TeamProjectEnrollmentsAPI_deleteTenantTeamProjectEnrollment(apiClient_t *apiClient, char *tenantId, char *tenantTeamProjectEnrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTeamProjectEnrollmentId** | **char \*** |  | 
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

# **TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollmentById**
```c
// Retrieve a single tenant team project enrollment by its ID
//
// Retrieve a single tenant team project enrollment by its ID
//
tenant_team_project_enrollment_dto_envelope_t* TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollmentById(apiClient_t *apiClient, char *tenantId, char *tenantTeamProjectEnrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTeamProjectEnrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_team_project_enrollment_dto_envelope_t](tenant_team_project_enrollment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollments**
```c
// Retrieve a list of tenant team project enrollments
//
// Retrieve a list of tenant team project enrollments
//
tenant_team_project_enrollment_dto_list_envelope_t* TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_team_project_enrollment_dto_list_envelope_t](tenant_team_project_enrollment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollmentsCount**
```c
// Get the count of tenant team project enrollments
//
// Get the count of tenant team project enrollments
//
int32_envelope_t* TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TeamProjectEnrollmentsAPI_updateTenantTeamProjectEnrollment**
```c
// Update a tenant team project enrollment
//
// Update a tenant team project enrollment
//
empty_envelope_t* TeamProjectEnrollmentsAPI_updateTenantTeamProjectEnrollment(apiClient_t *apiClient, char *tenantId, char *tenantTeamProjectEnrollmentId, char *api_version, char *x_api_version, tenant_team_project_enrollment_update_dto_t *tenant_team_project_enrollment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTeamProjectEnrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_team_project_enrollment_update_dto** | **[tenant_team_project_enrollment_update_dto_t](tenant_team_project_enrollment_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

