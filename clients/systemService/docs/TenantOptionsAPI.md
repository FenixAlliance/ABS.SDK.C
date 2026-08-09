# TenantOptionsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TenantOptionsAPI_createSystemTenantOption**](TenantOptionsAPI.md#TenantOptionsAPI_createSystemTenantOption) | **POST** /api/v2/SystemService/Tenants/{tenantId}/Options | Create a new tenant option (admin)
[**TenantOptionsAPI_deleteSystemTenantOption**](TenantOptionsAPI.md#TenantOptionsAPI_deleteSystemTenantOption) | **DELETE** /api/v2/SystemService/Tenants/{tenantId}/Options/{optionId} | Delete a tenant option (admin)
[**TenantOptionsAPI_getSystemTenantOptionById**](TenantOptionsAPI.md#TenantOptionsAPI_getSystemTenantOptionById) | **GET** /api/v2/SystemService/Tenants/{tenantId}/Options/{optionId} | Retrieve a single tenant option by its ID (admin)
[**TenantOptionsAPI_getSystemTenantOptions**](TenantOptionsAPI.md#TenantOptionsAPI_getSystemTenantOptions) | **GET** /api/v2/SystemService/Tenants/{tenantId}/Options | Retrieve a list of tenant options (admin)
[**TenantOptionsAPI_getSystemTenantOptionsCount**](TenantOptionsAPI.md#TenantOptionsAPI_getSystemTenantOptionsCount) | **GET** /api/v2/SystemService/Tenants/{tenantId}/Options/Count | Get the count of tenant options (admin)
[**TenantOptionsAPI_patchSystemTenantOption**](TenantOptionsAPI.md#TenantOptionsAPI_patchSystemTenantOption) | **PATCH** /api/v2/SystemService/Tenants/{tenantId}/Options/{optionId} | Partially update a tenant option (admin)
[**TenantOptionsAPI_updateSystemTenantOption**](TenantOptionsAPI.md#TenantOptionsAPI_updateSystemTenantOption) | **PUT** /api/v2/SystemService/Tenants/{tenantId}/Options/{optionId} | Update a tenant option (admin)


# **TenantOptionsAPI_createSystemTenantOption**
```c
// Create a new tenant option (admin)
//
// Admin endpoint to create an option for any tenant
//
empty_envelope_t* TenantOptionsAPI_createSystemTenantOption(apiClient_t *apiClient, char *tenantId, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**key** | **char \*** |  | 
**portalId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**option_create_dto** | **[option_create_dto_t](option_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantOptionsAPI_deleteSystemTenantOption**
```c
// Delete a tenant option (admin)
//
// Admin endpoint to delete an option for any tenant
//
empty_envelope_t* TenantOptionsAPI_deleteSystemTenantOption(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**optionId** | **char \*** |  | 
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

# **TenantOptionsAPI_getSystemTenantOptionById**
```c
// Retrieve a single tenant option by its ID (admin)
//
// Admin endpoint to retrieve a single option for any tenant
//
option_dto_envelope_t* TenantOptionsAPI_getSystemTenantOptionById(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**optionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[option_dto_envelope_t](option_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantOptionsAPI_getSystemTenantOptions**
```c
// Retrieve a list of tenant options (admin)
//
// Admin endpoint to retrieve options for any tenant
//
option_dto_list_envelope_t* TenantOptionsAPI_getSystemTenantOptions(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version, option_dto_collection_query_parameters_t *option_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**portalId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**option_dto_collection_query_parameters** | **[option_dto_collection_query_parameters_t](option_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[option_dto_list_envelope_t](option_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantOptionsAPI_getSystemTenantOptionsCount**
```c
// Get the count of tenant options (admin)
//
// Admin endpoint to get the count of options for any tenant
//
int32_envelope_t* TenantOptionsAPI_getSystemTenantOptionsCount(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version, option_dto_collection_query_parameters_t *option_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**portalId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**option_dto_collection_query_parameters** | **[option_dto_collection_query_parameters_t](option_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantOptionsAPI_patchSystemTenantOption**
```c
// Partially update a tenant option (admin)
//
// Admin endpoint to partially update an option for any tenant using a JSON Patch document
//
empty_envelope_t* TenantOptionsAPI_patchSystemTenantOption(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**optionId** | **char \*** |  | 
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

# **TenantOptionsAPI_updateSystemTenantOption**
```c
// Update a tenant option (admin)
//
// Admin endpoint to update an option for any tenant
//
empty_envelope_t* TenantOptionsAPI_updateSystemTenantOption(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**optionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**option_update_dto** | **[option_update_dto_t](option_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

