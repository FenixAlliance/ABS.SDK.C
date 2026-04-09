# SyncAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SyncAPI_syncCurrentHolderToCurrentTenantCrm**](SyncAPI.md#SyncAPI_syncCurrentHolderToCurrentTenantCrm) | **POST** /api/v2/CrmService/Sync | Sync the current user into the current tenant&#39;s contact list
[**SyncAPI_syncCurrentHolderToTenantCrm**](SyncAPI.md#SyncAPI_syncCurrentHolderToTenantCrm) | **POST** /api/v2/CrmService/Sync/Me | Sync the current user into a tenant&#39;s contact list
[**SyncAPI_syncHolderToTenantCrmAsync**](SyncAPI.md#SyncAPI_syncHolderToTenantCrmAsync) | **POST** /api/v2/CrmService/Sync/User | Sync a user into a tenant&#39;s contact list
[**SyncAPI_syncTenantToTenantCrm**](SyncAPI.md#SyncAPI_syncTenantToTenantCrm) | **POST** /api/v2/CrmService/Sync/Tenant | Sync a tenant into another tenant&#39;s contact list


# **SyncAPI_syncCurrentHolderToCurrentTenantCrm**
```c
// Sync the current user into the current tenant's contact list
//
// Synchronizes the currently authenticated user into the current tenant's CRM contact list.
//
envelope_t* SyncAPI_syncCurrentHolderToCurrentTenantCrm(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SyncAPI_syncCurrentHolderToTenantCrm**
```c
// Sync the current user into a tenant's contact list
//
// Synchronizes the currently authenticated user into the specified tenant's CRM contact list.
//
envelope_t* SyncAPI_syncCurrentHolderToTenantCrm(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SyncAPI_syncHolderToTenantCrmAsync**
```c
// Sync a user into a tenant's contact list
//
// Synchronizes a specified user into the tenant's CRM contact list.
//
envelope_t* SyncAPI_syncHolderToTenantCrmAsync(apiClient_t *apiClient, char *tenantId, char *relatedUserId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**relatedUserId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SyncAPI_syncTenantToTenantCrm**
```c
// Sync a tenant into another tenant's contact list
//
// Synchronizes a tenant into another tenant's CRM contact list.
//
empty_envelope_t* SyncAPI_syncTenantToTenantCrm(apiClient_t *apiClient, char *tenantId, char *relatedTenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**relatedTenantId** | **char \*** |  | 
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

