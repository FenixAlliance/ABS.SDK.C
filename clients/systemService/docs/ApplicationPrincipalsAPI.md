# ApplicationPrincipalsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ApplicationPrincipalsAPI_disableGlobalApplicationPrincipal**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_disableGlobalApplicationPrincipal) | **POST** /api/v2/SystemService/ApplicationPrincipals/{principalId}/Disable | Disable an application principal (global)
[**ApplicationPrincipalsAPI_enableGlobalApplicationPrincipal**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_enableGlobalApplicationPrincipal) | **POST** /api/v2/SystemService/ApplicationPrincipals/{principalId}/Enable | Enable an application principal (global)
[**ApplicationPrincipalsAPI_getGlobalApplicationPrincipal**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_getGlobalApplicationPrincipal) | **GET** /api/v2/SystemService/ApplicationPrincipals/{principalId} | Get one application principal (any tenant)
[**ApplicationPrincipalsAPI_getGlobalApplicationPrincipals**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_getGlobalApplicationPrincipals) | **GET** /api/v2/SystemService/ApplicationPrincipals | List application principals across all tenants
[**ApplicationPrincipalsAPI_getGlobalApplicationPrincipalsCount**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_getGlobalApplicationPrincipalsCount) | **GET** /api/v2/SystemService/ApplicationPrincipals/Count | Count application principals across all tenants
[**ApplicationPrincipalsAPI_grantGlobalApplicationPrincipalPermission**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_grantGlobalApplicationPrincipalPermission) | **POST** /api/v2/SystemService/ApplicationPrincipals/{principalId}/Permissions | Grant a permission to an application principal (any tenant)
[**ApplicationPrincipalsAPI_provisionGlobalApplicationPrincipal**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_provisionGlobalApplicationPrincipal) | **POST** /api/v2/SystemService/ApplicationPrincipals/Provision | Provision an application principal (any tenant, incl. system-locked)
[**ApplicationPrincipalsAPI_provisionPaymentsConnector**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_provisionPaymentsConnector) | **POST** /api/v2/SystemService/ApplicationPrincipals/PaymentsConnector | Provision the platform payments-connector identity
[**ApplicationPrincipalsAPI_revokeGlobalApplicationPrincipalPermission**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_revokeGlobalApplicationPrincipalPermission) | **DELETE** /api/v2/SystemService/ApplicationPrincipals/{principalId}/Permissions/{permission} | Revoke a permission from an application principal (any tenant)
[**ApplicationPrincipalsAPI_suspendGlobalApplicationPrincipal**](ApplicationPrincipalsAPI.md#ApplicationPrincipalsAPI_suspendGlobalApplicationPrincipal) | **POST** /api/v2/SystemService/ApplicationPrincipals/{principalId}/Suspend | Suspend an application principal (global)


# **ApplicationPrincipalsAPI_disableGlobalApplicationPrincipal**
```c
// Disable an application principal (global)
//
// Disables the application principal; dependent unattended execution fails closed (applies to system-locked principals here). tenantId scopes the action to a tenant the principal is enrolled in (required). Global-administrator only.
//
empty_envelope_t* ApplicationPrincipalsAPI_disableGlobalApplicationPrincipal(apiClient_t *apiClient, char *principalId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**principalId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
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

# **ApplicationPrincipalsAPI_enableGlobalApplicationPrincipal**
```c
// Enable an application principal (global)
//
// Reinstates the application principal to the Active lifecycle state (applies to system-locked principals here). tenantId scopes the action to a tenant the principal is enrolled in (required). Global-administrator only.
//
empty_envelope_t* ApplicationPrincipalsAPI_enableGlobalApplicationPrincipal(apiClient_t *apiClient, char *principalId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**principalId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
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

# **ApplicationPrincipalsAPI_getGlobalApplicationPrincipal**
```c
// Get one application principal (any tenant)
//
// Returns one application principal's detail by id: owning application, an enrollment, the system-locked flag, lifecycle status, and that enrollment's explicit least-privilege grants. Pass tenantId to select the enrollment for a multi-tenant principal; when omitted the principal's first enrollment is used. Global-administrator only.
//
application_principal_detail_dto_envelope_t* ApplicationPrincipalsAPI_getGlobalApplicationPrincipal(apiClient_t *apiClient, char *principalId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**principalId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
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

# **ApplicationPrincipalsAPI_getGlobalApplicationPrincipals**
```c
// List application principals across all tenants
//
// Lists every non-human application principal enrollment across ALL tenants (payload-safe fields only), including the platform-managed (system-locked) connectors. Use OData to scope — e.g. $filter=SystemLocked eq true for the platform connectors or TenantId eq '{guid}' for one tenant — and to page/order. Global-administrator only.
//
application_principal_dto_i_read_only_list_envelope_t* ApplicationPrincipalsAPI_getGlobalApplicationPrincipals(apiClient_t *apiClient, char *api_version, char *x_api_version, application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**application_principal_dto_collection_query_parameters** | **[application_principal_dto_collection_query_parameters_t](application_principal_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[application_principal_dto_i_read_only_list_envelope_t](application_principal_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationPrincipalsAPI_getGlobalApplicationPrincipalsCount**
```c
// Count application principals across all tenants
//
// Returns the count of application principal enrollments across ALL tenants under the same OData shaping as the list read (e.g. $filter=SystemLocked eq true). Global-administrator only.
//
int32_envelope_t* ApplicationPrincipalsAPI_getGlobalApplicationPrincipalsCount(apiClient_t *apiClient, char *api_version, char *x_api_version, application_principal_dto_collection_query_parameters_t *application_principal_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **ApplicationPrincipalsAPI_grantGlobalApplicationPrincipalPermission**
```c
// Grant a permission to an application principal (any tenant)
//
// Grants a single least-privilege permission to the application principal's enrollment in the tenantId tenant (grants are per-tenant, so tenantId is required). Owner/admin/wildcard/*_manage permissions are rejected even for a global admin (least-privilege by construction). Global-administrator only.
//
empty_envelope_t* ApplicationPrincipalsAPI_grantGlobalApplicationPrincipalPermission(apiClient_t *apiClient, char *principalId, char *tenantId, application_principal_permission_request_dto_t *application_principal_permission_request_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**principalId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
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

# **ApplicationPrincipalsAPI_provisionGlobalApplicationPrincipal**
```c
// Provision an application principal (any tenant, incl. system-locked)
//
// Idempotently provisions the application principal (and its own least-privilege enrollment) for a governed business application. tenantId selects the target tenant (defaults to the platform/root tenant). Unlike the per-tenant lane, a system-locked platform application is provisionable here. Global-administrator only.
//
application_principal_provisioning_result_dto_envelope_t* ApplicationPrincipalsAPI_provisionGlobalApplicationPrincipal(apiClient_t *apiClient, application_principal_provision_request_dto_t *application_principal_provision_request_dto, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**application_principal_provision_request_dto** | **[application_principal_provision_request_dto_t](application_principal_provision_request_dto.md) \*** |  | 
**tenantId** | **char \*** |  | [optional] 
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

# **ApplicationPrincipalsAPI_provisionPaymentsConnector**
```c
// Provision the platform payments-connector identity
//
// Idempotently stands up the platform payments-connector identity — its well-known business application, its application principal, and its own least-privilege enrollment (payments_create/payments_update/journals_post). tenantId selects the target tenant (defaults to the platform/root tenant). The provisioned connector then appears in this global list and (for its tenant) the per-tenant list. Global-administrator only.
//
application_principal_provisioning_result_dto_envelope_t* ApplicationPrincipalsAPI_provisionPaymentsConnector(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[application_principal_provisioning_result_dto_envelope_t](application_principal_provisioning_result_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationPrincipalsAPI_revokeGlobalApplicationPrincipalPermission**
```c
// Revoke a permission from an application principal (any tenant)
//
// Revokes a direct permission grant from the application principal's enrollment in the tenantId tenant (required). Idempotent. Global-administrator only.
//
empty_envelope_t* ApplicationPrincipalsAPI_revokeGlobalApplicationPrincipalPermission(apiClient_t *apiClient, char *principalId, char *permission, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**principalId** | **char \*** |  | 
**permission** | **char \*** |  | 
**tenantId** | **char \*** |  | 
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

# **ApplicationPrincipalsAPI_suspendGlobalApplicationPrincipal**
```c
// Suspend an application principal (global)
//
// Temporarily suspends the application principal; its identity is retained but it cannot act until reinstated (applies to system-locked principals here). tenantId scopes the action to a tenant the principal is enrolled in (required). Global-administrator only.
//
empty_envelope_t* ApplicationPrincipalsAPI_suspendGlobalApplicationPrincipal(apiClient_t *apiClient, char *principalId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**principalId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
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

