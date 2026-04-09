# PermissionsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PermissionsAPI_assignPermissionToBusinessApplicationAsync**](PermissionsAPI.md#PermissionsAPI_assignPermissionToBusinessApplicationAsync) | **POST** /api/v2/SecurityService/Permissions/{securityPermissionId}/Applications/{applicationId} | Assign a permission to a business application
[**PermissionsAPI_assignPermissionToEnrollmentAsync**](PermissionsAPI.md#PermissionsAPI_assignPermissionToEnrollmentAsync) | **POST** /api/v2/SecurityService/Permissions/{securityPermissionId}/Enrollments/{enrollmentId} | Assign a permission to an enrollment
[**PermissionsAPI_assignRoleToPermissionAsync**](PermissionsAPI.md#PermissionsAPI_assignRoleToPermissionAsync) | **POST** /api/v2/SecurityService/Permissions/{securityPermissionId}/Roles/{securityRoleId} | Assign a role to a permission
[**PermissionsAPI_createPermissionAsync**](PermissionsAPI.md#PermissionsAPI_createPermissionAsync) | **POST** /api/v2/SecurityService/Permissions | Create a new permission
[**PermissionsAPI_deletePermissionAsync**](PermissionsAPI.md#PermissionsAPI_deletePermissionAsync) | **DELETE** /api/v2/SecurityService/Permissions/{securityPermissionId} | Delete an existing permission
[**PermissionsAPI_getApplicationsByPermissionAsync**](PermissionsAPI.md#PermissionsAPI_getApplicationsByPermissionAsync) | **GET** /api/v2/SecurityService/Permissions/{securityPermissionId}/Applications | Get applications by permission
[**PermissionsAPI_getEnrollmentsByPermissionAsync**](PermissionsAPI.md#PermissionsAPI_getEnrollmentsByPermissionAsync) | **GET** /api/v2/SecurityService/Permissions/{securityPermissionId}/Enrollments | Get enrollments by permission
[**PermissionsAPI_getPermissionAsync**](PermissionsAPI.md#PermissionsAPI_getPermissionAsync) | **GET** /api/v2/SecurityService/Permissions/{securityPermissionId} | Get permission by ID
[**PermissionsAPI_getPermissionsAsync**](PermissionsAPI.md#PermissionsAPI_getPermissionsAsync) | **GET** /api/v2/SecurityService/Permissions | Get all permissions
[**PermissionsAPI_getPermissionsByEnrollmentAsync**](PermissionsAPI.md#PermissionsAPI_getPermissionsByEnrollmentAsync) | **GET** /api/v2/SecurityService/Permissions/ByEnrollment/{enrollmentId} | Get permissions by enrollment
[**PermissionsAPI_getPermissionsCountAsync**](PermissionsAPI.md#PermissionsAPI_getPermissionsCountAsync) | **GET** /api/v2/SecurityService/Permissions/Count | Get permissions count
[**PermissionsAPI_getRolesByPermissionAsync**](PermissionsAPI.md#PermissionsAPI_getRolesByPermissionAsync) | **GET** /api/v2/SecurityService/Permissions/{securityPermissionId}/Roles | Get roles by permission
[**PermissionsAPI_revokePermissionFromBusinessApplicationAsync**](PermissionsAPI.md#PermissionsAPI_revokePermissionFromBusinessApplicationAsync) | **DELETE** /api/v2/SecurityService/Permissions/{securityPermissionId}/Applications/{applicationId} | Revoke a permission from a business application
[**PermissionsAPI_revokePermissionFromEnrollmentAsync**](PermissionsAPI.md#PermissionsAPI_revokePermissionFromEnrollmentAsync) | **DELETE** /api/v2/SecurityService/Permissions/{securityPermissionId}/Enrollments/{enrollmentId} | Revoke a permission from an enrollment
[**PermissionsAPI_revokeRoleFromPermissionAsync**](PermissionsAPI.md#PermissionsAPI_revokeRoleFromPermissionAsync) | **DELETE** /api/v2/SecurityService/Permissions/{securityPermissionId}/Roles/{securityRoleId} | Revoke a role from a permission
[**PermissionsAPI_updatePermissionAsync**](PermissionsAPI.md#PermissionsAPI_updatePermissionAsync) | **PUT** /api/v2/SecurityService/Permissions/{securityPermissionId} | Update an existing permission


# **PermissionsAPI_assignPermissionToBusinessApplicationAsync**
```c
// Assign a permission to a business application
//
// Assigns a security permission to a business application.
//
empty_envelope_t* PermissionsAPI_assignPermissionToBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *applicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityPermissionId** | **char \*** |  | 
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

# **PermissionsAPI_assignPermissionToEnrollmentAsync**
```c
// Assign a permission to an enrollment
//
// Assigns a security permission to a tenant enrollment.
//
empty_envelope_t* PermissionsAPI_assignPermissionToEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *enrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityPermissionId** | **char \*** |  | 
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

# **PermissionsAPI_assignRoleToPermissionAsync**
```c
// Assign a role to a permission
//
// Assigns a security role to a security permission.
//
empty_envelope_t* PermissionsAPI_assignRoleToPermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *securityRoleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityPermissionId** | **char \*** |  | 
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

# **PermissionsAPI_createPermissionAsync**
```c
// Create a new permission
//
// Creates a new security permission for the specified tenant.
//
empty_envelope_t* PermissionsAPI_createPermissionAsync(apiClient_t *apiClient, char *tenantId, security_permission_create_dto_t *security_permission_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**security_permission_create_dto** | **[security_permission_create_dto_t](security_permission_create_dto.md) \*** |  | 
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

# **PermissionsAPI_deletePermissionAsync**
```c
// Delete an existing permission
//
// Deletes an existing security permission for the specified tenant.
//
empty_envelope_t* PermissionsAPI_deletePermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **PermissionsAPI_getApplicationsByPermissionAsync**
```c
// Get applications by permission
//
// Retrieves all business applications that have a specific permission granted.
//
business_application_simple_dto_list_envelope_t* PermissionsAPI_getApplicationsByPermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityPermissionId** | **char \*** |  | 
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

# **PermissionsAPI_getEnrollmentsByPermissionAsync**
```c
// Get enrollments by permission
//
// Retrieves all tenant enrollments that have a specific permission.
//
tenant_enrollment_dto_list_envelope_t* PermissionsAPI_getEnrollmentsByPermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityPermissionId** | **char \*** |  | 
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

# **PermissionsAPI_getPermissionAsync**
```c
// Get permission by ID
//
// Retrieves a specific security permission by its ID.
//
security_permission_dto_envelope_t* PermissionsAPI_getPermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityPermissionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[security_permission_dto_envelope_t](security_permission_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PermissionsAPI_getPermissionsAsync**
```c
// Get all permissions
//
// Retrieves all security permissions for the specified tenant.
//
security_permission_dto_list_envelope_t* PermissionsAPI_getPermissionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **PermissionsAPI_getPermissionsByEnrollmentAsync**
```c
// Get permissions by enrollment
//
// Retrieves all security permissions granted to a specific enrollment.
//
security_permission_dto_list_envelope_t* PermissionsAPI_getPermissionsByEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);
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

[security_permission_dto_list_envelope_t](security_permission_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PermissionsAPI_getPermissionsCountAsync**
```c
// Get permissions count
//
// Retrieves the count of security permissions for the specified tenant.
//
int32_envelope_t* PermissionsAPI_getPermissionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **PermissionsAPI_getRolesByPermissionAsync**
```c
// Get roles by permission
//
// Retrieves all security roles that have a specific permission granted.
//
security_role_dto_list_envelope_t* PermissionsAPI_getRolesByPermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityPermissionId** | **char \*** |  | 
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

# **PermissionsAPI_revokePermissionFromBusinessApplicationAsync**
```c
// Revoke a permission from a business application
//
// Revokes a security permission from a business application.
//
empty_envelope_t* PermissionsAPI_revokePermissionFromBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *applicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityPermissionId** | **char \*** |  | 
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

# **PermissionsAPI_revokePermissionFromEnrollmentAsync**
```c
// Revoke a permission from an enrollment
//
// Revokes a security permission from a tenant enrollment.
//
empty_envelope_t* PermissionsAPI_revokePermissionFromEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *enrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityPermissionId** | **char \*** |  | 
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

# **PermissionsAPI_revokeRoleFromPermissionAsync**
```c
// Revoke a role from a permission
//
// Revokes a security role from a security permission.
//
empty_envelope_t* PermissionsAPI_revokeRoleFromPermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, char *securityRoleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityPermissionId** | **char \*** |  | 
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

# **PermissionsAPI_updatePermissionAsync**
```c
// Update an existing permission
//
// Updates an existing security permission for the specified tenant.
//
empty_envelope_t* PermissionsAPI_updatePermissionAsync(apiClient_t *apiClient, char *tenantId, char *securityPermissionId, security_permission_update_dto_t *security_permission_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**securityPermissionId** | **char \*** |  | 
**security_permission_update_dto** | **[security_permission_update_dto_t](security_permission_update_dto.md) \*** |  | 
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

