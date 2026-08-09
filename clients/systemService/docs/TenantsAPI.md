# TenantsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TenantsAPI_adminPreviewTenantEmail**](TenantsAPI.md#TenantsAPI_adminPreviewTenantEmail) | **POST** /api/v2/SystemService/Tenants/{tenantId}/Emails/Preview | Preview the rendered email for a tenant.
[**TenantsAPI_adminSendTenantEmail**](TenantsAPI.md#TenantsAPI_adminSendTenantEmail) | **POST** /api/v2/SystemService/Tenants/{tenantId}/Emails/Send | Send an email to a tenant.
[**TenantsAPI_createTenant**](TenantsAPI.md#TenantsAPI_createTenant) | **POST** /api/v2/SystemService/Tenants | Create a new tenant.
[**TenantsAPI_deleteTenant**](TenantsAPI.md#TenantsAPI_deleteTenant) | **DELETE** /api/v2/SystemService/Tenants/{tenantId} | Delete a specific tenant by ID.
[**TenantsAPI_getAllExtendedTenants**](TenantsAPI.md#TenantsAPI_getAllExtendedTenants) | **GET** /api/v2/SystemService/Tenants/Extended | Get all extended tenants available on this suite server instance.
[**TenantsAPI_getAllTenants**](TenantsAPI.md#TenantsAPI_getAllTenants) | **GET** /api/v2/SystemService/Tenants | Get all tenants available on this suite server instance.
[**TenantsAPI_getExtendedTenantsCount**](TenantsAPI.md#TenantsAPI_getExtendedTenantsCount) | **GET** /api/v2/SystemService/Tenants/Extended/Count | Get the total count of extended tenants available on this suite server instance.
[**TenantsAPI_getTenant**](TenantsAPI.md#TenantsAPI_getTenant) | **GET** /api/v2/SystemService/Tenants/{tenantId} | Get a specific tenant by ID.
[**TenantsAPI_getTenantModuleGrants**](TenantsAPI.md#TenantsAPI_getTenantModuleGrants) | **GET** /api/v2/SystemService/Tenants/{tenantId}/ModuleGrants | Get the per-tenant admin module grants for a specific tenant.
[**TenantsAPI_getTenantsCount**](TenantsAPI.md#TenantsAPI_getTenantsCount) | **GET** /api/v2/SystemService/Tenants/Count | Get the total count of tenants available on this suite server instance.
[**TenantsAPI_patchTenant**](TenantsAPI.md#TenantsAPI_patchTenant) | **PATCH** /api/v2/SystemService/Tenants/{tenantId} | Partially update a specific tenant by ID.
[**TenantsAPI_setTenantModuleGrants**](TenantsAPI.md#TenantsAPI_setTenantModuleGrants) | **PUT** /api/v2/SystemService/Tenants/{tenantId}/ModuleGrants | Replace the per-tenant admin module grants for a specific tenant.
[**TenantsAPI_updateTenant**](TenantsAPI.md#TenantsAPI_updateTenant) | **PUT** /api/v2/SystemService/Tenants/{tenantId} | Update a specific tenant by ID.


# **TenantsAPI_adminPreviewTenantEmail**
```c
// Preview the rendered email for a tenant.
//
// This action is only available for global administrators.
//
void TenantsAPI_adminPreviewTenantEmail(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**email_dispatch_request** | **[email_dispatch_request_t](email_dispatch_request.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_adminSendTenantEmail**
```c
// Send an email to a tenant.
//
// This action is only available for global administrators.
//
void TenantsAPI_adminSendTenantEmail(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**email_dispatch_request** | **[email_dispatch_request_t](email_dispatch_request.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_createTenant**
```c
// Create a new tenant.
//
// This action is only available for global administrators.
//
tenant_dto_envelope_t* TenantsAPI_createTenant(apiClient_t *apiClient, char *api_version, char *x_api_version, tenant_create_dto_t *tenant_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_create_dto** | **[tenant_create_dto_t](tenant_create_dto.md) \*** |  | [optional] 

### Return type

[tenant_dto_envelope_t](tenant_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_deleteTenant**
```c
// Delete a specific tenant by ID.
//
// This action is only available for global administrators.
//
empty_envelope_t* TenantsAPI_deleteTenant(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **TenantsAPI_getAllExtendedTenants**
```c
// Get all extended tenants available on this suite server instance.
//
// This action is only available for global administrators.
//
extended_tenant_dto_list_envelope_t* TenantsAPI_getAllExtendedTenants(apiClient_t *apiClient, char *api_version, char *x_api_version, extended_tenant_dto_collection_query_parameters_t *extended_tenant_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**extended_tenant_dto_collection_query_parameters** | **[extended_tenant_dto_collection_query_parameters_t](extended_tenant_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[extended_tenant_dto_list_envelope_t](extended_tenant_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getAllTenants**
```c
// Get all tenants available on this suite server instance.
//
// This action is only available for global administrators.
//
tenant_dto_list_envelope_t* TenantsAPI_getAllTenants(apiClient_t *apiClient, char *api_version, char *x_api_version, tenant_dto_collection_query_parameters_t *tenant_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_dto_collection_query_parameters** | **[tenant_dto_collection_query_parameters_t](tenant_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[tenant_dto_list_envelope_t](tenant_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getExtendedTenantsCount**
```c
// Get the total count of extended tenants available on this suite server instance.
//
// This action is only available for global administrators.
//
int32_envelope_t* TenantsAPI_getExtendedTenantsCount(apiClient_t *apiClient, char *api_version, char *x_api_version, extended_tenant_dto_collection_query_parameters_t *extended_tenant_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**extended_tenant_dto_collection_query_parameters** | **[extended_tenant_dto_collection_query_parameters_t](extended_tenant_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenant**
```c
// Get a specific tenant by ID.
//
// This action is only available for global administrators.
//
tenant_dto_envelope_t* TenantsAPI_getTenant(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_dto_envelope_t](tenant_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantModuleGrants**
```c
// Get the per-tenant admin module grants for a specific tenant.
//
// This action is only available for global administrators.
//
module_grant_dto_list_envelope_t* TenantsAPI_getTenantModuleGrants(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[module_grant_dto_list_envelope_t](module_grant_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantsCount**
```c
// Get the total count of tenants available on this suite server instance.
//
// This action is only available for global administrators.
//
int32_envelope_t* TenantsAPI_getTenantsCount(apiClient_t *apiClient, char *api_version, char *x_api_version, tenant_dto_collection_query_parameters_t *tenant_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_dto_collection_query_parameters** | **[tenant_dto_collection_query_parameters_t](tenant_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_patchTenant**
```c
// Partially update a specific tenant by ID.
//
// This action is only available for global administrators.
//
empty_envelope_t* TenantsAPI_patchTenant(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_setTenantModuleGrants**
```c
// Replace the per-tenant admin module grants for a specific tenant.
//
// This action is only available for global administrators. Grants supplement licensing.
//
empty_envelope_t* TenantsAPI_setTenantModuleGrants(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, list_t *module_grant_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**module_grant_dto** | **[list_t](module_grant_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_updateTenant**
```c
// Update a specific tenant by ID.
//
// This action is only available for global administrators.
//
tenant_dto_envelope_t* TenantsAPI_updateTenant(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_update_dto_t *tenant_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_update_dto** | **[tenant_update_dto_t](tenant_update_dto.md) \*** |  | [optional] 

### Return type

[tenant_dto_envelope_t](tenant_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

