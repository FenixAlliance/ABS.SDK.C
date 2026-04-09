# TerritoriesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TerritoriesAPI_createTenantTerritory**](TerritoriesAPI.md#TerritoriesAPI_createTenantTerritory) | **POST** /api/v2/TenantsService/Territories | Create a new tenant territory
[**TerritoriesAPI_deleteTenantTerritory**](TerritoriesAPI.md#TerritoriesAPI_deleteTenantTerritory) | **DELETE** /api/v2/TenantsService/Territories/{tenantTerritoryId} | Delete a tenant territory
[**TerritoriesAPI_getTenantTerritories**](TerritoriesAPI.md#TerritoriesAPI_getTenantTerritories) | **GET** /api/v2/TenantsService/Territories | Retrieve a list of tenant territories
[**TerritoriesAPI_getTenantTerritoriesCount**](TerritoriesAPI.md#TerritoriesAPI_getTenantTerritoriesCount) | **GET** /api/v2/TenantsService/Territories/Count | Get the count of tenant territories
[**TerritoriesAPI_getTenantTerritoryById**](TerritoriesAPI.md#TerritoriesAPI_getTenantTerritoryById) | **GET** /api/v2/TenantsService/Territories/{tenantTerritoryId} | Retrieve a single tenant territory by its ID
[**TerritoriesAPI_updateTenantTerritory**](TerritoriesAPI.md#TerritoriesAPI_updateTenantTerritory) | **PUT** /api/v2/TenantsService/Territories/{tenantTerritoryId} | Update a tenant territory


# **TerritoriesAPI_createTenantTerritory**
```c
// Create a new tenant territory
//
// Create a new tenant territory
//
empty_envelope_t* TerritoriesAPI_createTenantTerritory(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_territory_create_dto_t *tenant_territory_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_territory_create_dto** | **[tenant_territory_create_dto_t](tenant_territory_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TerritoriesAPI_deleteTenantTerritory**
```c
// Delete a tenant territory
//
// Delete a tenant territory
//
empty_envelope_t* TerritoriesAPI_deleteTenantTerritory(apiClient_t *apiClient, char *tenantId, char *tenantTerritoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTerritoryId** | **char \*** |  | 
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

# **TerritoriesAPI_getTenantTerritories**
```c
// Retrieve a list of tenant territories
//
// Retrieve a list of tenant territories
//
tenant_territory_dto_list_envelope_t* TerritoriesAPI_getTenantTerritories(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_territory_dto_list_envelope_t](tenant_territory_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TerritoriesAPI_getTenantTerritoriesCount**
```c
// Get the count of tenant territories
//
// Get the count of tenant territories
//
int32_envelope_t* TerritoriesAPI_getTenantTerritoriesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TerritoriesAPI_getTenantTerritoryById**
```c
// Retrieve a single tenant territory by its ID
//
// Retrieve a single tenant territory by its ID
//
tenant_territory_dto_envelope_t* TerritoriesAPI_getTenantTerritoryById(apiClient_t *apiClient, char *tenantId, char *tenantTerritoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTerritoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_territory_dto_envelope_t](tenant_territory_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TerritoriesAPI_updateTenantTerritory**
```c
// Update a tenant territory
//
// Update a tenant territory
//
empty_envelope_t* TerritoriesAPI_updateTenantTerritory(apiClient_t *apiClient, char *tenantId, char *tenantTerritoryId, char *api_version, char *x_api_version, tenant_territory_update_dto_t *tenant_territory_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTerritoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_territory_update_dto** | **[tenant_territory_update_dto_t](tenant_territory_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

