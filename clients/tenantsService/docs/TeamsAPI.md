# TeamsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TeamsAPI_createTenantTeam**](TeamsAPI.md#TeamsAPI_createTenantTeam) | **POST** /api/v2/TenantsService/Teams | Create a new tenant team
[**TeamsAPI_deleteTenantTeam**](TeamsAPI.md#TeamsAPI_deleteTenantTeam) | **DELETE** /api/v2/TenantsService/Teams/{tenantTeamId} | Delete a tenant team
[**TeamsAPI_getTenantTeamById**](TeamsAPI.md#TeamsAPI_getTenantTeamById) | **GET** /api/v2/TenantsService/Teams/{tenantTeamId} | Retrieve a single tenant team by its ID
[**TeamsAPI_getTenantTeams**](TeamsAPI.md#TeamsAPI_getTenantTeams) | **GET** /api/v2/TenantsService/Teams | Retrieve a list of tenant teams
[**TeamsAPI_getTenantTeamsCount**](TeamsAPI.md#TeamsAPI_getTenantTeamsCount) | **GET** /api/v2/TenantsService/Teams/Count | Get the count of tenant teams
[**TeamsAPI_updateTenantTeam**](TeamsAPI.md#TeamsAPI_updateTenantTeam) | **PUT** /api/v2/TenantsService/Teams/{tenantTeamId} | Update a tenant team


# **TeamsAPI_createTenantTeam**
```c
// Create a new tenant team
//
// Create a new tenant team
//
empty_envelope_t* TeamsAPI_createTenantTeam(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_team_create_dto_t *tenant_team_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_team_create_dto** | **[tenant_team_create_dto_t](tenant_team_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TeamsAPI_deleteTenantTeam**
```c
// Delete a tenant team
//
// Delete a tenant team
//
empty_envelope_t* TeamsAPI_deleteTenantTeam(apiClient_t *apiClient, char *tenantId, char *tenantTeamId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTeamId** | **char \*** |  | 
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

# **TeamsAPI_getTenantTeamById**
```c
// Retrieve a single tenant team by its ID
//
// Retrieve a single tenant team by its ID
//
tenant_team_dto_envelope_t* TeamsAPI_getTenantTeamById(apiClient_t *apiClient, char *tenantId, char *tenantTeamId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTeamId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_team_dto_envelope_t](tenant_team_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TeamsAPI_getTenantTeams**
```c
// Retrieve a list of tenant teams
//
// Retrieve a list of tenant teams
//
tenant_team_dto_list_envelope_t* TeamsAPI_getTenantTeams(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_team_dto_list_envelope_t](tenant_team_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TeamsAPI_getTenantTeamsCount**
```c
// Get the count of tenant teams
//
// Get the count of tenant teams
//
int32_envelope_t* TeamsAPI_getTenantTeamsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TeamsAPI_updateTenantTeam**
```c
// Update a tenant team
//
// Update a tenant team
//
empty_envelope_t* TeamsAPI_updateTenantTeam(apiClient_t *apiClient, char *tenantId, char *tenantTeamId, char *api_version, char *x_api_version, tenant_team_update_dto_t *tenant_team_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTeamId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_team_update_dto** | **[tenant_team_update_dto_t](tenant_team_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

