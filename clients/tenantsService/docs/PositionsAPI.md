# PositionsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PositionsAPI_createTenantPosition**](PositionsAPI.md#PositionsAPI_createTenantPosition) | **POST** /api/v2/TenantsService/Positions | Create a new tenant position
[**PositionsAPI_deleteTenantPosition**](PositionsAPI.md#PositionsAPI_deleteTenantPosition) | **DELETE** /api/v2/TenantsService/Positions/{tenantPositionId} | Delete a tenant position
[**PositionsAPI_getTenantPositionById**](PositionsAPI.md#PositionsAPI_getTenantPositionById) | **GET** /api/v2/TenantsService/Positions/{tenantPositionId} | Retrieve a single tenant position by its ID
[**PositionsAPI_getTenantPositions**](PositionsAPI.md#PositionsAPI_getTenantPositions) | **GET** /api/v2/TenantsService/Positions | Retrieve a list of tenant positions
[**PositionsAPI_getTenantPositionsCount**](PositionsAPI.md#PositionsAPI_getTenantPositionsCount) | **GET** /api/v2/TenantsService/Positions/Count | Get the count of tenant positions
[**PositionsAPI_updateTenantPosition**](PositionsAPI.md#PositionsAPI_updateTenantPosition) | **PUT** /api/v2/TenantsService/Positions/{tenantPositionId} | Update a tenant position


# **PositionsAPI_createTenantPosition**
```c
// Create a new tenant position
//
// Create a new tenant position
//
empty_envelope_t* PositionsAPI_createTenantPosition(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_position_create_dto_t *tenant_position_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_position_create_dto** | **[tenant_position_create_dto_t](tenant_position_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PositionsAPI_deleteTenantPosition**
```c
// Delete a tenant position
//
// Delete a tenant position
//
empty_envelope_t* PositionsAPI_deleteTenantPosition(apiClient_t *apiClient, char *tenantId, char *tenantPositionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantPositionId** | **char \*** |  | 
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

# **PositionsAPI_getTenantPositionById**
```c
// Retrieve a single tenant position by its ID
//
// Retrieve a single tenant position by its ID
//
tenant_position_dto_envelope_t* PositionsAPI_getTenantPositionById(apiClient_t *apiClient, char *tenantId, char *tenantPositionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantPositionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_position_dto_envelope_t](tenant_position_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PositionsAPI_getTenantPositions**
```c
// Retrieve a list of tenant positions
//
// Retrieve a list of tenant positions
//
tenant_position_dto_list_envelope_t* PositionsAPI_getTenantPositions(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_position_dto_list_envelope_t](tenant_position_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PositionsAPI_getTenantPositionsCount**
```c
// Get the count of tenant positions
//
// Get the count of tenant positions
//
int32_envelope_t* PositionsAPI_getTenantPositionsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **PositionsAPI_updateTenantPosition**
```c
// Update a tenant position
//
// Update a tenant position
//
empty_envelope_t* PositionsAPI_updateTenantPosition(apiClient_t *apiClient, char *tenantId, char *tenantPositionId, char *api_version, char *x_api_version, tenant_position_update_dto_t *tenant_position_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantPositionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_position_update_dto** | **[tenant_position_update_dto_t](tenant_position_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

