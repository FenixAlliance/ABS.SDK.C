# TeamRecordsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TeamRecordsAPI_createTenantTeamRecord**](TeamRecordsAPI.md#TeamRecordsAPI_createTenantTeamRecord) | **POST** /api/v2/TenantsService/TeamRecords | Create a new tenant team record
[**TeamRecordsAPI_deleteTenantTeamRecord**](TeamRecordsAPI.md#TeamRecordsAPI_deleteTenantTeamRecord) | **DELETE** /api/v2/TenantsService/TeamRecords/{tenantTeamRecordId} | Delete a tenant team record
[**TeamRecordsAPI_getTenantTeamRecordById**](TeamRecordsAPI.md#TeamRecordsAPI_getTenantTeamRecordById) | **GET** /api/v2/TenantsService/TeamRecords/{tenantTeamRecordId} | Retrieve a single tenant team record by its ID
[**TeamRecordsAPI_getTenantTeamRecords**](TeamRecordsAPI.md#TeamRecordsAPI_getTenantTeamRecords) | **GET** /api/v2/TenantsService/TeamRecords | Retrieve a list of tenant team records
[**TeamRecordsAPI_getTenantTeamRecordsCount**](TeamRecordsAPI.md#TeamRecordsAPI_getTenantTeamRecordsCount) | **GET** /api/v2/TenantsService/TeamRecords/Count | Get the count of tenant team records
[**TeamRecordsAPI_updateTenantTeamRecord**](TeamRecordsAPI.md#TeamRecordsAPI_updateTenantTeamRecord) | **PUT** /api/v2/TenantsService/TeamRecords/{tenantTeamRecordId} | Update a tenant team record


# **TeamRecordsAPI_createTenantTeamRecord**
```c
// Create a new tenant team record
//
// Create a new tenant team record
//
empty_envelope_t* TeamRecordsAPI_createTenantTeamRecord(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_team_record_create_dto_t *tenant_team_record_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_team_record_create_dto** | **[tenant_team_record_create_dto_t](tenant_team_record_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TeamRecordsAPI_deleteTenantTeamRecord**
```c
// Delete a tenant team record
//
// Delete a tenant team record
//
empty_envelope_t* TeamRecordsAPI_deleteTenantTeamRecord(apiClient_t *apiClient, char *tenantId, char *tenantTeamRecordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTeamRecordId** | **char \*** |  | 
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

# **TeamRecordsAPI_getTenantTeamRecordById**
```c
// Retrieve a single tenant team record by its ID
//
// Retrieve a single tenant team record by its ID
//
tenant_team_record_dto_envelope_t* TeamRecordsAPI_getTenantTeamRecordById(apiClient_t *apiClient, char *tenantId, char *tenantTeamRecordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTeamRecordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_team_record_dto_envelope_t](tenant_team_record_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TeamRecordsAPI_getTenantTeamRecords**
```c
// Retrieve a list of tenant team records
//
// Retrieve a list of tenant team records
//
tenant_team_record_dto_list_envelope_t* TeamRecordsAPI_getTenantTeamRecords(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_team_record_dto_list_envelope_t](tenant_team_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TeamRecordsAPI_getTenantTeamRecordsCount**
```c
// Get the count of tenant team records
//
// Get the count of tenant team records
//
int32_envelope_t* TeamRecordsAPI_getTenantTeamRecordsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TeamRecordsAPI_updateTenantTeamRecord**
```c
// Update a tenant team record
//
// Update a tenant team record
//
empty_envelope_t* TeamRecordsAPI_updateTenantTeamRecord(apiClient_t *apiClient, char *tenantId, char *tenantTeamRecordId, char *api_version, char *x_api_version, tenant_team_record_update_dto_t *tenant_team_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantTeamRecordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_team_record_update_dto** | **[tenant_team_record_update_dto_t](tenant_team_record_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

