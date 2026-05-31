# ApplicationsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ApplicationsAPI_getApplication**](ApplicationsAPI.md#ApplicationsAPI_getApplication) | **GET** /api/v2/Applications/{appId} | Get application by ID
[**ApplicationsAPI_getGrantedEnrollmentPermissions**](ApplicationsAPI.md#ApplicationsAPI_getGrantedEnrollmentPermissions) | **GET** /api/v2/Applications/{appId}/GrantedRoles/{securityRoleId}/GrantedPermissions | Get granted permissions for an application role
[**ApplicationsAPI_getGrantedTenantPermissions**](ApplicationsAPI.md#ApplicationsAPI_getGrantedTenantPermissions) | **GET** /api/v2/Applications/{appId}/GrantedPermissions | Get granted tenant permissions for an application
[**ApplicationsAPI_getGrantedTenantRoles**](ApplicationsAPI.md#ApplicationsAPI_getGrantedTenantRoles) | **GET** /api/v2/Applications/{appId}/GrantedRoles | Get granted tenant roles for an application
[**ApplicationsAPI_getRequiredPermissions**](ApplicationsAPI.md#ApplicationsAPI_getRequiredPermissions) | **GET** /api/v2/Applications/{appId}/RequiredPermissions | Get required permissions for an application


# **ApplicationsAPI_getApplication**
```c
// Get application by ID
//
// Retrieves an application by its unique identifier.
//
void ApplicationsAPI_getApplication(apiClient_t *apiClient, char *appId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationsAPI_getGrantedEnrollmentPermissions**
```c
// Get granted permissions for an application role
//
// Retrieves the list of permissions granted through a specific security role for the specified application.
//
void ApplicationsAPI_getGrantedEnrollmentPermissions(apiClient_t *apiClient, char *appId, char *securityRoleId, char *enrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appId** | **char \*** |  | 
**securityRoleId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationsAPI_getGrantedTenantPermissions**
```c
// Get granted tenant permissions for an application
//
// Retrieves the list of permissions granted to the specified application within a tenant context.
//
void ApplicationsAPI_getGrantedTenantPermissions(apiClient_t *apiClient, char *appId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationsAPI_getGrantedTenantRoles**
```c
// Get granted tenant roles for an application
//
// Retrieves the list of security roles granted to the specified application within a tenant context.
//
void ApplicationsAPI_getGrantedTenantRoles(apiClient_t *apiClient, char *appId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationsAPI_getRequiredPermissions**
```c
// Get required permissions for an application
//
// Retrieves the list of permissions required by the specified application.
//
void ApplicationsAPI_getRequiredPermissions(apiClient_t *apiClient, char *appId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

