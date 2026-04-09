# AccountGroupsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AccountGroupsAPI_createAccountGroup**](AccountGroupsAPI.md#AccountGroupsAPI_createAccountGroup) | **POST** /api/v2/AccountingService/AccountGroups | Creates a new account group
[**AccountGroupsAPI_deleteAccountGroup**](AccountGroupsAPI.md#AccountGroupsAPI_deleteAccountGroup) | **DELETE** /api/v2/AccountingService/AccountGroups/{accountGroupId} | Deletes an existing account group
[**AccountGroupsAPI_getAccountGroup**](AccountGroupsAPI.md#AccountGroupsAPI_getAccountGroup) | **GET** /api/v2/AccountingService/AccountGroups/{accountGroupId} | Gets the current tenant account group
[**AccountGroupsAPI_getAccountGroups**](AccountGroupsAPI.md#AccountGroupsAPI_getAccountGroups) | **GET** /api/v2/AccountingService/AccountGroups | Gets the current tenant account groups
[**AccountGroupsAPI_getAccountGroupsCountAsync**](AccountGroupsAPI.md#AccountGroupsAPI_getAccountGroupsCountAsync) | **GET** /api/v2/AccountingService/AccountGroups/Count | Gets the current tenant accounts count
[**AccountGroupsAPI_updateAccountGroup**](AccountGroupsAPI.md#AccountGroupsAPI_updateAccountGroup) | **PUT** /api/v2/AccountingService/AccountGroups/{accountGroupId} | Updates an existing account group


# **AccountGroupsAPI_createAccountGroup**
```c
// Creates a new account group
//
// Creates a new account group.
//
account_group_dto_envelope_t* AccountGroupsAPI_createAccountGroup(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, account_group_create_dto_t *account_group_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**account_group_create_dto** | **[account_group_create_dto_t](account_group_create_dto.md) \*** |  | [optional] 

### Return type

[account_group_dto_envelope_t](account_group_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountGroupsAPI_deleteAccountGroup**
```c
// Deletes an existing account group
//
// Deletes an existing account group.
//
void AccountGroupsAPI_deleteAccountGroup(apiClient_t *apiClient, char *tenantId, char *accountGroupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountGroupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountGroupsAPI_getAccountGroup**
```c
// Gets the current tenant account group
//
// Get the currently acting tenant account group.
//
account_group_dto_envelope_t* AccountGroupsAPI_getAccountGroup(apiClient_t *apiClient, char *tenantId, char *accountGroupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountGroupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[account_group_dto_envelope_t](account_group_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountGroupsAPI_getAccountGroups**
```c
// Gets the current tenant account groups
//
// Get the currently acting tenant account groups.
//
account_group_dto_list_envelope_t* AccountGroupsAPI_getAccountGroups(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[account_group_dto_list_envelope_t](account_group_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountGroupsAPI_getAccountGroupsCountAsync**
```c
// Gets the current tenant accounts count
//
// Get the currently acting tenant accounts count.
//
int32_envelope_t* AccountGroupsAPI_getAccountGroupsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **AccountGroupsAPI_updateAccountGroup**
```c
// Updates an existing account group
//
// Updates an existing account group.
//
account_group_dto_envelope_t* AccountGroupsAPI_updateAccountGroup(apiClient_t *apiClient, char *tenantId, char *accountGroupId, char *api_version, char *x_api_version, account_group_update_dto_t *account_group_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**accountGroupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**account_group_update_dto** | **[account_group_update_dto_t](account_group_update_dto.md) \*** |  | [optional] 

### Return type

[account_group_dto_envelope_t](account_group_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

