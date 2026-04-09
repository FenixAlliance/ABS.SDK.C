# TypesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TypesAPI_createTenantType**](TypesAPI.md#TypesAPI_createTenantType) | **POST** /api/v2/TenantsService/Types | Create a new tenant type
[**TypesAPI_deleteTenantType**](TypesAPI.md#TypesAPI_deleteTenantType) | **DELETE** /api/v2/TenantsService/Types/{tenantTypeId} | Delete a tenant type
[**TypesAPI_getTenantTypeById**](TypesAPI.md#TypesAPI_getTenantTypeById) | **GET** /api/v2/TenantsService/Types/{tenantTypeId} | Retrieve a single tenant type by its ID
[**TypesAPI_getTenantTypes**](TypesAPI.md#TypesAPI_getTenantTypes) | **GET** /api/v2/TenantsService/Types | Retrieve a list of tenant types
[**TypesAPI_getTenantTypesCount**](TypesAPI.md#TypesAPI_getTenantTypesCount) | **GET** /api/v2/TenantsService/Types/Count | Get the count of tenant types
[**TypesAPI_updateTenantType**](TypesAPI.md#TypesAPI_updateTenantType) | **PUT** /api/v2/TenantsService/Types/{tenantTypeId} | Update a tenant type


# **TypesAPI_createTenantType**
```c
// Create a new tenant type
//
// Create a new tenant type
//
empty_envelope_t* TypesAPI_createTenantType(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_type_create_dto_t *tenant_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_type_create_dto** | **[tenant_type_create_dto_t](tenant_type_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TypesAPI_deleteTenantType**
```c
// Delete a tenant type
//
// Delete a tenant type
//
empty_envelope_t* TypesAPI_deleteTenantType(apiClient_t *apiClient, char *tenantId, char *tenantTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTypeId** | **char \*** |  | 
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

# **TypesAPI_getTenantTypeById**
```c
// Retrieve a single tenant type by its ID
//
// Retrieve a single tenant type by its ID
//
tenant_type_dto_envelope_t* TypesAPI_getTenantTypeById(apiClient_t *apiClient, char *tenantId, char *tenantTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_type_dto_envelope_t](tenant_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TypesAPI_getTenantTypes**
```c
// Retrieve a list of tenant types
//
// Retrieve a list of tenant types
//
tenant_type_dto_list_envelope_t* TypesAPI_getTenantTypes(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_type_dto_list_envelope_t](tenant_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TypesAPI_getTenantTypesCount**
```c
// Get the count of tenant types
//
// Get the count of tenant types
//
int32_envelope_t* TypesAPI_getTenantTypesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TypesAPI_updateTenantType**
```c
// Update a tenant type
//
// Update a tenant type
//
empty_envelope_t* TypesAPI_updateTenantType(apiClient_t *apiClient, char *tenantId, char *tenantTypeId, char *api_version, char *x_api_version, tenant_type_update_dto_t *tenant_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_type_update_dto** | **[tenant_type_update_dto_t](tenant_type_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

