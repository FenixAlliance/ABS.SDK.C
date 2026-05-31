# UnitsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UnitsAPI_createTenantUnit**](UnitsAPI.md#UnitsAPI_createTenantUnit) | **POST** /api/v2/TenantsService/Units | Create a new tenant unit
[**UnitsAPI_deleteTenantUnit**](UnitsAPI.md#UnitsAPI_deleteTenantUnit) | **DELETE** /api/v2/TenantsService/Units/{tenantUnitId} | Delete a tenant unit
[**UnitsAPI_getTenantUnitById**](UnitsAPI.md#UnitsAPI_getTenantUnitById) | **GET** /api/v2/TenantsService/Units/{tenantUnitId} | Retrieve a single tenant unit by its ID
[**UnitsAPI_getTenantUnits**](UnitsAPI.md#UnitsAPI_getTenantUnits) | **GET** /api/v2/TenantsService/Units | Retrieve a list of tenant units
[**UnitsAPI_getTenantUnitsCount**](UnitsAPI.md#UnitsAPI_getTenantUnitsCount) | **GET** /api/v2/TenantsService/Units/Count | Get the count of tenant units
[**UnitsAPI_updateTenantUnit**](UnitsAPI.md#UnitsAPI_updateTenantUnit) | **PUT** /api/v2/TenantsService/Units/{tenantUnitId} | Update a tenant unit


# **UnitsAPI_createTenantUnit**
```c
// Create a new tenant unit
//
// Create a new tenant unit
//
empty_envelope_t* UnitsAPI_createTenantUnit(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_unit_create_dto_t *tenant_unit_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_unit_create_dto** | **[tenant_unit_create_dto_t](tenant_unit_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UnitsAPI_deleteTenantUnit**
```c
// Delete a tenant unit
//
// Delete a tenant unit
//
empty_envelope_t* UnitsAPI_deleteTenantUnit(apiClient_t *apiClient, char *tenantId, char *tenantUnitId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantUnitId** | **char \*** |  | 
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

# **UnitsAPI_getTenantUnitById**
```c
// Retrieve a single tenant unit by its ID
//
// Retrieve a single tenant unit by its ID
//
tenant_unit_dto_envelope_t* UnitsAPI_getTenantUnitById(apiClient_t *apiClient, char *tenantId, char *tenantUnitId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantUnitId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_unit_dto_envelope_t](tenant_unit_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UnitsAPI_getTenantUnits**
```c
// Retrieve a list of tenant units
//
// Retrieve a list of tenant units
//
tenant_unit_dto_list_envelope_t* UnitsAPI_getTenantUnits(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_unit_dto_list_envelope_t](tenant_unit_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UnitsAPI_getTenantUnitsCount**
```c
// Get the count of tenant units
//
// Get the count of tenant units
//
int32_envelope_t* UnitsAPI_getTenantUnitsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **UnitsAPI_updateTenantUnit**
```c
// Update a tenant unit
//
// Update a tenant unit
//
empty_envelope_t* UnitsAPI_updateTenantUnit(apiClient_t *apiClient, char *tenantId, char *tenantUnitId, char *api_version, char *x_api_version, tenant_unit_update_dto_t *tenant_unit_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantUnitId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_unit_update_dto** | **[tenant_unit_update_dto_t](tenant_unit_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

