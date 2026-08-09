# ApplicationPrincipalsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ApplicationPrincipalsAPI_disableApplicationPrincipalAsync**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_disableApplicationPrincipalAsync) | **POST** /api/v2/SecurityService/ApplicationPrincipals/{principalId}/Disable | Disable an application principal
[**ApplicationPrincipalsAPI_enableApplicationPrincipalAsync**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_enableApplicationPrincipalAsync) | **POST** /api/v2/SecurityService/ApplicationPrincipals/{principalId}/Enable | Enable an application principal
[**ApplicationPrincipalsAPI_getApplicationPrincipalAsync**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_getApplicationPrincipalAsync) | **GET** /api/v2/SecurityService/ApplicationPrincipals/{principalId} | Get application principal by ID
[**ApplicationPrincipalsAPI_getApplicationPrincipalsAsync**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_getApplicationPrincipalsAsync) | **GET** /api/v2/SecurityService/ApplicationPrincipals | Get all application principals
[**ApplicationPrincipalsAPI_getApplicationPrincipalsCountAsync**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_getApplicationPrincipalsCountAsync) | **GET** /api/v2/SecurityService/ApplicationPrincipals/Count | Get application principals count
[**ApplicationPrincipalsAPI_grantPermissionAsync**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_grantPermissionAsync) | **POST** /api/v2/SecurityService/ApplicationPrincipals/{principalId}/Permissions | Grant a permission to an application principal
[**ApplicationPrincipalsAPI_provisionApplicationPrincipalAsync**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_provisionApplicationPrincipalAsync) | **POST** /api/v2/SecurityService/ApplicationPrincipals/Provision | Provision an application principal
[**ApplicationPrincipalsAPI_revokePermissionAsync**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_revokePermissionAsync) | **DELETE** /api/v2/SecurityService/ApplicationPrincipals/{principalId}/Permissions/{permission} | Revoke a permission from an application principal
[**ApplicationPrincipalsAPI_suspendApplicationPrincipalAsync**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_suspendApplicationPrincipalAsync) | **POST** /api/v2/SecurityService/ApplicationPrincipals/{principalId}/Suspend | Suspend an application principal


# **ApplicationPrincipalsAPI_disableApplicationPrincipalAsync**
```c
// Disable an application principal
//
// Disables the application principal; dependent unattended execution fails closed.
//
empty_envelope_t* ApplicationPrincipalsAPI_disableApplicationPrincipalAsync(apiClient_t *apiClient, char *tenantId, char *principalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**principalId** | **char \*** |  | 
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

# **ApplicationPrincipalsAPI_enableApplicationPrincipalAsync**
```c
// Enable an application principal
//
// Reinstates the application principal to the Active lifecycle state.
//
empty_envelope_t* ApplicationPrincipalsAPI_enableApplicationPrincipalAsync(apiClient_t *apiClient, char *tenantId, char *principalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**principalId** | **char \*** |  | 
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

# **ApplicationPrincipalsAPI_getApplicationPrincipalAsync**
```c
// Get application principal by ID
//
// Retrieves a specific application principal: owning application, tenant enrollment, lifecycle status, system-locked flag, and its explicit least-privilege permission grants.
//
application_principal_detail_dto_envelope_t* ApplicationPrincipalsAPI_getApplicationPrincipalAsync(apiClient_t *apiClient, char *tenantId, char *principalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**principalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[application_principal_detail_dto_envelope_t](application_principal_detail_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationPrincipalsAPI_getApplicationPrincipalsAsync**
```c
// Get all application principals
//
// Retrieves the non-human application principals enrolled in the specified tenant (including read-only system-locked platform principals).
//
application_principal_dto_list_envelope_t* ApplicationPrincipalsAPI_getApplicationPrincipalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**application_principal_dto_collection_query_parameters** | **[application_principal_dto_collection_query_parameters_t](application_principal_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[application_principal_dto_list_envelope_t](application_principal_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationPrincipalsAPI_getApplicationPrincipalsCountAsync**
```c
// Get application principals count
//
// Retrieves the count of application principals enrolled in the specified tenant.
//
int32_envelope_t* ApplicationPrincipalsAPI_getApplicationPrincipalsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**application_principal_dto_collection_query_parameters** | **[application_principal_dto_collection_query_parameters_t](application_principal_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationPrincipalsAPI_grantPermissionAsync**
```c
// Grant a permission to an application principal
//
// Grants a single least-privilege permission to the application principal's enrollment. Owner/admin/wildcard/*_manage permissions are rejected; system-locked principals require a platform administrator.
//
empty_envelope_t* ApplicationPrincipalsAPI_grantPermissionAsync(apiClient_t *apiClient, char *tenantId, char *principalId, application_principal_permission_request_dto_t *application_principal_permission_request_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**principalId** | **char \*** |  | 
**application_principal_permission_request_dto** | **[application_principal_permission_request_dto_t](application_principal_permission_request_dto.md) \*** |  | 
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

# **ApplicationPrincipalsAPI_provisionApplicationPrincipalAsync**
```c
// Provision an application principal
//
// Idempotently provisions the application principal (and its own least-privilege enrollment) for a governed business application in the specified tenant. System-locked platform applications require a platform administrator.
//
application_principal_provisioning_result_dto_envelope_t* ApplicationPrincipalsAPI_provisionApplicationPrincipalAsync(apiClient_t *apiClient, char *tenantId, application_principal_provision_request_dto_t *application_principal_provision_request_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**application_principal_provision_request_dto** | **[application_principal_provision_request_dto_t](application_principal_provision_request_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[application_principal_provisioning_result_dto_envelope_t](application_principal_provisioning_result_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationPrincipalsAPI_revokePermissionAsync**
```c
// Revoke a permission from an application principal
//
// Revokes a direct permission grant from the application principal's enrollment. System-locked principals require a platform administrator.
//
empty_envelope_t* ApplicationPrincipalsAPI_revokePermissionAsync(apiClient_t *apiClient, char *tenantId, char *principalId, char *permission, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**principalId** | **char \*** |  | 
**permission** | **char \*** |  | 
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

# **ApplicationPrincipalsAPI_suspendApplicationPrincipalAsync**
```c
// Suspend an application principal
//
// Temporarily suspends the application principal; its identity is retained but it cannot act until reinstated.
//
empty_envelope_t* ApplicationPrincipalsAPI_suspendApplicationPrincipalAsync(apiClient_t *apiClient, char *tenantId, char *principalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**principalId** | **char \*** |  | 
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

