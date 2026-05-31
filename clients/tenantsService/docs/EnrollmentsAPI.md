# EnrollmentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EnrollmentsAPI_createTenantEnrollment**](EnrollmentsAPI.md#EnrollmentsAPI_createTenantEnrollment) | **POST** /api/v2/TenantsService/Enrollments | Create a new tenant enrollment
[**EnrollmentsAPI_deleteTenantEnrollment**](EnrollmentsAPI.md#EnrollmentsAPI_deleteTenantEnrollment) | **DELETE** /api/v2/TenantsService/Enrollments/{enrollmentId} | Delete a tenant enrollment
[**EnrollmentsAPI_getExtendedTenantEnrollments**](EnrollmentsAPI.md#EnrollmentsAPI_getExtendedTenantEnrollments) | **GET** /api/v2/TenantsService/Enrollments/Extended | Retrieve a list of tenant enrollments
[**EnrollmentsAPI_getExtendedTenantEnrollmentsCount**](EnrollmentsAPI.md#EnrollmentsAPI_getExtendedTenantEnrollmentsCount) | **GET** /api/v2/TenantsService/Enrollments/Extended/Count | Get the count of tenant enrollments
[**EnrollmentsAPI_getTenantEnrollmentById**](EnrollmentsAPI.md#EnrollmentsAPI_getTenantEnrollmentById) | **GET** /api/v2/TenantsService/Enrollments/{enrollmentId} | Retrieve a single tenant enrollment by its ID
[**EnrollmentsAPI_getTenantEnrollments**](EnrollmentsAPI.md#EnrollmentsAPI_getTenantEnrollments) | **GET** /api/v2/TenantsService/Enrollments | Retrieve a list of tenant enrollments
[**EnrollmentsAPI_getTenantEnrollmentsCount**](EnrollmentsAPI.md#EnrollmentsAPI_getTenantEnrollmentsCount) | **GET** /api/v2/TenantsService/Enrollments/Count | Get the count of tenant enrollments
[**EnrollmentsAPI_updateTenantEnrollment**](EnrollmentsAPI.md#EnrollmentsAPI_updateTenantEnrollment) | **PUT** /api/v2/TenantsService/Enrollments/{enrollmentId} | Update a tenant enrollment


# **EnrollmentsAPI_createTenantEnrollment**
```c
// Create a new tenant enrollment
//
// Create a new tenant enrollment
//
empty_envelope_t* EnrollmentsAPI_createTenantEnrollment(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_enrollment_create_dto_t *tenant_enrollment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_enrollment_create_dto** | **[tenant_enrollment_create_dto_t](tenant_enrollment_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EnrollmentsAPI_deleteTenantEnrollment**
```c
// Delete a tenant enrollment
//
// Delete a tenant enrollment
//
empty_envelope_t* EnrollmentsAPI_deleteTenantEnrollment(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | 
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

# **EnrollmentsAPI_getExtendedTenantEnrollments**
```c
// Retrieve a list of tenant enrollments
//
// Retrieve a list of tenant enrollments
//
tenant_enrollment_dto_list_envelope_t* EnrollmentsAPI_getExtendedTenantEnrollments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_enrollment_dto_list_envelope_t](tenant_enrollment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EnrollmentsAPI_getExtendedTenantEnrollmentsCount**
```c
// Get the count of tenant enrollments
//
// Get the count of tenant enrollments
//
int32_envelope_t* EnrollmentsAPI_getExtendedTenantEnrollmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **EnrollmentsAPI_getTenantEnrollmentById**
```c
// Retrieve a single tenant enrollment by its ID
//
// Retrieve a single tenant enrollment by its ID
//
tenant_enrollment_dto_envelope_t* EnrollmentsAPI_getTenantEnrollmentById(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *userId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | 
**userId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_enrollment_dto_envelope_t](tenant_enrollment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EnrollmentsAPI_getTenantEnrollments**
```c
// Retrieve a list of tenant enrollments
//
// Retrieve a list of tenant enrollments
//
tenant_enrollment_dto_list_envelope_t* EnrollmentsAPI_getTenantEnrollments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_enrollment_dto_list_envelope_t](tenant_enrollment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EnrollmentsAPI_getTenantEnrollmentsCount**
```c
// Get the count of tenant enrollments
//
// Get the count of tenant enrollments
//
int32_envelope_t* EnrollmentsAPI_getTenantEnrollmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **EnrollmentsAPI_updateTenantEnrollment**
```c
// Update a tenant enrollment
//
// Update a tenant enrollment
//
empty_envelope_t* EnrollmentsAPI_updateTenantEnrollment(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version, tenant_enrollment_update_dto_t *tenant_enrollment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_enrollment_update_dto** | **[tenant_enrollment_update_dto_t](tenant_enrollment_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

