# TeamContactEnrollmentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TeamContactEnrollmentsAPI_createTenantTeamContactEnrollment**](TeamContactEnrollmentsAPI.md#TeamContactEnrollmentsAPI_createTenantTeamContactEnrollment) | **POST** /api/v2/TenantsService/TeamContactEnrollments | Create a new tenant team contact enrollment
[**TeamContactEnrollmentsAPI_deleteTenantTeamContactEnrollment**](TeamContactEnrollmentsAPI.md#TeamContactEnrollmentsAPI_deleteTenantTeamContactEnrollment) | **DELETE** /api/v2/TenantsService/TeamContactEnrollments/{tenantTeamContactEnrollmentId} | Delete a tenant team contact enrollment
[**TeamContactEnrollmentsAPI_getTenantTeamContactEnrollmentById**](TeamContactEnrollmentsAPI.md#TeamContactEnrollmentsAPI_getTenantTeamContactEnrollmentById) | **GET** /api/v2/TenantsService/TeamContactEnrollments/{tenantTeamContactEnrollmentId} | Retrieve a single tenant team contact enrollment by its ID
[**TeamContactEnrollmentsAPI_getTenantTeamContactEnrollments**](TeamContactEnrollmentsAPI.md#TeamContactEnrollmentsAPI_getTenantTeamContactEnrollments) | **GET** /api/v2/TenantsService/TeamContactEnrollments | Retrieve a list of tenant team contact enrollments
[**TeamContactEnrollmentsAPI_getTenantTeamContactEnrollmentsCount**](TeamContactEnrollmentsAPI.md#TeamContactEnrollmentsAPI_getTenantTeamContactEnrollmentsCount) | **GET** /api/v2/TenantsService/TeamContactEnrollments/Count | Get the count of tenant team contact enrollments
[**TeamContactEnrollmentsAPI_updateTenantTeamContactEnrollment**](TeamContactEnrollmentsAPI.md#TeamContactEnrollmentsAPI_updateTenantTeamContactEnrollment) | **PUT** /api/v2/TenantsService/TeamContactEnrollments/{tenantTeamContactEnrollmentId} | Update a tenant team contact enrollment


# **TeamContactEnrollmentsAPI_createTenantTeamContactEnrollment**
```c
// Create a new tenant team contact enrollment
//
// Create a new tenant team contact enrollment
//
empty_envelope_t* TeamContactEnrollmentsAPI_createTenantTeamContactEnrollment(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_team_contact_enrollment_create_dto_t *tenant_team_contact_enrollment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_team_contact_enrollment_create_dto** | **[tenant_team_contact_enrollment_create_dto_t](tenant_team_contact_enrollment_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TeamContactEnrollmentsAPI_deleteTenantTeamContactEnrollment**
```c
// Delete a tenant team contact enrollment
//
// Delete a tenant team contact enrollment
//
empty_envelope_t* TeamContactEnrollmentsAPI_deleteTenantTeamContactEnrollment(apiClient_t *apiClient, char *tenantId, char *tenantTeamContactEnrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTeamContactEnrollmentId** | **char \*** |  | 
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

# **TeamContactEnrollmentsAPI_getTenantTeamContactEnrollmentById**
```c
// Retrieve a single tenant team contact enrollment by its ID
//
// Retrieve a single tenant team contact enrollment by its ID
//
tenant_team_contact_enrollment_dto_envelope_t* TeamContactEnrollmentsAPI_getTenantTeamContactEnrollmentById(apiClient_t *apiClient, char *tenantId, char *tenantTeamContactEnrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTeamContactEnrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_team_contact_enrollment_dto_envelope_t](tenant_team_contact_enrollment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TeamContactEnrollmentsAPI_getTenantTeamContactEnrollments**
```c
// Retrieve a list of tenant team contact enrollments
//
// Retrieve a list of tenant team contact enrollments
//
tenant_team_contact_enrollment_dto_list_envelope_t* TeamContactEnrollmentsAPI_getTenantTeamContactEnrollments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_team_contact_enrollment_dto_list_envelope_t](tenant_team_contact_enrollment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TeamContactEnrollmentsAPI_getTenantTeamContactEnrollmentsCount**
```c
// Get the count of tenant team contact enrollments
//
// Get the count of tenant team contact enrollments
//
int32_envelope_t* TeamContactEnrollmentsAPI_getTenantTeamContactEnrollmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TeamContactEnrollmentsAPI_updateTenantTeamContactEnrollment**
```c
// Update a tenant team contact enrollment
//
// Update a tenant team contact enrollment
//
empty_envelope_t* TeamContactEnrollmentsAPI_updateTenantTeamContactEnrollment(apiClient_t *apiClient, char *tenantId, char *tenantTeamContactEnrollmentId, char *api_version, char *x_api_version, tenant_team_contact_enrollment_update_dto_t *tenant_team_contact_enrollment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTeamContactEnrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_team_contact_enrollment_update_dto** | **[tenant_team_contact_enrollment_update_dto_t](tenant_team_contact_enrollment_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

