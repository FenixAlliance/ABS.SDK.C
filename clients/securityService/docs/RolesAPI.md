# RolesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RolesAPI_assignPermissionToRoleAsync**](RolesAPI.md#RolesAPI_assignPermissionToRoleAsync) | **POST** /api/v2/SecurityService/Roles/{securityRoleId}/Permissions/{securityPermissionId} | Assign a permission to a role
[**RolesAPI_assignRoleToBusinessApplicationAsync**](RolesAPI.md#RolesAPI_assignRoleToBusinessApplicationAsync) | **POST** /api/v2/SecurityService/Roles/{securityRoleId}/Applications/{applicationId} | Assign a role to a business application
[**RolesAPI_assignRoleToEnrollmentAsync**](RolesAPI.md#RolesAPI_assignRoleToEnrollmentAsync) | **POST** /api/v2/SecurityService/Roles/{securityRoleId}/Enrollments/{enrollmentId} | Assign a role to an enrollment
[**RolesAPI_createRoleAsync**](RolesAPI.md#RolesAPI_createRoleAsync) | **POST** /api/v2/SecurityService/Roles | Create a new role
[**RolesAPI_deleteRoleAsync**](RolesAPI.md#RolesAPI_deleteRoleAsync) | **DELETE** /api/v2/SecurityService/Roles/{securityRoleId} | Delete an existing role
[**RolesAPI_getApplicationsByRoleAsync**](RolesAPI.md#RolesAPI_getApplicationsByRoleAsync) | **GET** /api/v2/SecurityService/Roles/{securityRoleId}/Applications | Get applications by role
[**RolesAPI_getEnrollmentsByRoleAsync**](RolesAPI.md#RolesAPI_getEnrollmentsByRoleAsync) | **GET** /api/v2/SecurityService/Roles/{securityRoleId}/Enrollments | Get enrollments by role
[**RolesAPI_getRoleAsync**](RolesAPI.md#RolesAPI_getRoleAsync) | **GET** /api/v2/SecurityService/Roles/{securityRoleId} | Get role by ID
[**RolesAPI_getRolePermissionsAsync**](RolesAPI.md#RolesAPI_getRolePermissionsAsync) | **GET** /api/v2/SecurityService/Roles/{securityRoleId}/Permissions | Get permissions by role
[**RolesAPI_getRolesAsync**](RolesAPI.md#RolesAPI_getRolesAsync) | **GET** /api/v2/SecurityService/Roles | Get all roles
[**RolesAPI_getRolesByEnrollmentAsync**](RolesAPI.md#RolesAPI_getRolesByEnrollmentAsync) | **GET** /api/v2/SecurityService/Roles/ByEnrollment/{enrollmentId} | Get roles by enrollment
[**RolesAPI_getRolesCountAsync**](RolesAPI.md#RolesAPI_getRolesCountAsync) | **GET** /api/v2/SecurityService/Roles/Count | Get roles count
[**RolesAPI_revokePermissionFromRoleAsync**](RolesAPI.md#RolesAPI_revokePermissionFromRoleAsync) | **DELETE** /api/v2/SecurityService/Roles/{securityRoleId}/Permissions/{securityPermissionId} | Revoke a permission from a role
[**RolesAPI_revokeRoleFromBusinessApplicationAsync**](RolesAPI.md#RolesAPI_revokeRoleFromBusinessApplicationAsync) | **DELETE** /api/v2/SecurityService/Roles/{securityRoleId}/Applications/{applicationId} | Revoke a role from a business application
[**RolesAPI_revokeRoleFromEnrollmentAsync**](RolesAPI.md#RolesAPI_revokeRoleFromEnrollmentAsync) | **DELETE** /api/v2/SecurityService/Roles/{securityRoleId}/Enrollments/{enrollmentId} | Revoke a role from an enrollment
[**RolesAPI_updateRoleAsync**](RolesAPI.md#RolesAPI_updateRoleAsync) | **PUT** /api/v2/SecurityService/Roles/{securityRoleId} | Update an existing role


# **RolesAPI_assignPermissionToRoleAsync**
```c
// Assign a permission to a role
//
// Assigns a security permission to a security role.
//
empty_envelope_t* RolesAPI_assignPermissionToRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *securityPermissionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityRoleId** | **char \*** |  | 
**securityPermissionId** | **char \*** |  | 
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

# **RolesAPI_assignRoleToBusinessApplicationAsync**
```c
// Assign a role to a business application
//
// Assigns a security role to a business application.
//
empty_envelope_t* RolesAPI_assignRoleToBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *applicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityRoleId** | **char \*** |  | 
**applicationId** | **char \*** |  | 
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

# **RolesAPI_assignRoleToEnrollmentAsync**
```c
// Assign a role to an enrollment
//
// Assigns a security role to a tenant enrollment.
//
empty_envelope_t* RolesAPI_assignRoleToEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *enrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityRoleId** | **char \*** |  | 
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

# **RolesAPI_createRoleAsync**
```c
// Create a new role
//
// Creates a new security role for the specified tenant.
//
empty_envelope_t* RolesAPI_createRoleAsync(apiClient_t *apiClient, char *tenantId, security_role_create_dto_t *security_role_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**security_role_create_dto** | **[security_role_create_dto_t](security_role_create_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RolesAPI_deleteRoleAsync**
```c
// Delete an existing role
//
// Deletes an existing security role for the specified tenant.
//
empty_envelope_t* RolesAPI_deleteRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityRoleId** | **char \*** |  | 
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

# **RolesAPI_getApplicationsByRoleAsync**
```c
// Get applications by role
//
// Retrieves all business applications that have a specific role granted.
//
business_application_simple_dto_list_envelope_t* RolesAPI_getApplicationsByRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityRoleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[business_application_simple_dto_list_envelope_t](business_application_simple_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RolesAPI_getEnrollmentsByRoleAsync**
```c
// Get enrollments by role
//
// Retrieves all tenant enrollments that have a specific role.
//
tenant_enrollment_dto_list_envelope_t* RolesAPI_getEnrollmentsByRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityRoleId** | **char \*** |  | 
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

# **RolesAPI_getRoleAsync**
```c
// Get role by ID
//
// Retrieves a specific security role by its ID.
//
security_role_dto_envelope_t* RolesAPI_getRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityRoleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[security_role_dto_envelope_t](security_role_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RolesAPI_getRolePermissionsAsync**
```c
// Get permissions by role
//
// Retrieves all security permissions assigned to a specific role.
//
security_permission_dto_list_envelope_t* RolesAPI_getRolePermissionsAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityRoleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[security_permission_dto_list_envelope_t](security_permission_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RolesAPI_getRolesAsync**
```c
// Get all roles
//
// Retrieves all security roles for the specified tenant.
//
security_role_dto_list_envelope_t* RolesAPI_getRolesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[security_role_dto_list_envelope_t](security_role_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RolesAPI_getRolesByEnrollmentAsync**
```c
// Get roles by enrollment
//
// Retrieves all security roles granted to a specific enrollment.
//
security_role_dto_list_envelope_t* RolesAPI_getRolesByEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);
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

[security_role_dto_list_envelope_t](security_role_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RolesAPI_getRolesCountAsync**
```c
// Get roles count
//
// Retrieves the count of security roles for the specified tenant.
//
int32_envelope_t* RolesAPI_getRolesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **RolesAPI_revokePermissionFromRoleAsync**
```c
// Revoke a permission from a role
//
// Revokes a security permission from a security role.
//
empty_envelope_t* RolesAPI_revokePermissionFromRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *securityPermissionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityRoleId** | **char \*** |  | 
**securityPermissionId** | **char \*** |  | 
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

# **RolesAPI_revokeRoleFromBusinessApplicationAsync**
```c
// Revoke a role from a business application
//
// Revokes a security role from a business application.
//
empty_envelope_t* RolesAPI_revokeRoleFromBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *applicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityRoleId** | **char \*** |  | 
**applicationId** | **char \*** |  | 
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

# **RolesAPI_revokeRoleFromEnrollmentAsync**
```c
// Revoke a role from an enrollment
//
// Revokes a security role from a tenant enrollment.
//
empty_envelope_t* RolesAPI_revokeRoleFromEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, char *enrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityRoleId** | **char \*** |  | 
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

# **RolesAPI_updateRoleAsync**
```c
// Update an existing role
//
// Updates an existing security role for the specified tenant.
//
empty_envelope_t* RolesAPI_updateRoleAsync(apiClient_t *apiClient, char *tenantId, char *securityRoleId, security_role_update_dto_t *security_role_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityRoleId** | **char \*** |  | 
**security_role_update_dto** | **[security_role_update_dto_t](security_role_update_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

