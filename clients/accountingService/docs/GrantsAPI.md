# GrantsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GrantsAPI_createGrantAsync**](GrantsAPI.md#GrantsAPI_createGrantAsync) | **POST** /api/v2/AccountingService/Grants | Create grant
[**GrantsAPI_deleteGrantAsync**](GrantsAPI.md#GrantsAPI_deleteGrantAsync) | **DELETE** /api/v2/AccountingService/Grants/{grantId} | Delete grant
[**GrantsAPI_getGrantDetailsAsync**](GrantsAPI.md#GrantsAPI_getGrantDetailsAsync) | **GET** /api/v2/AccountingService/Grants/{grantId} | Get grant by ID
[**GrantsAPI_getGrantsAsync**](GrantsAPI.md#GrantsAPI_getGrantsAsync) | **GET** /api/v2/AccountingService/Grants | Get all grants
[**GrantsAPI_getGrantsCountAsync**](GrantsAPI.md#GrantsAPI_getGrantsCountAsync) | **GET** /api/v2/AccountingService/Grants/Count | Count grants
[**GrantsAPI_updateGrantAsync**](GrantsAPI.md#GrantsAPI_updateGrantAsync) | **PUT** /api/v2/AccountingService/Grants/{grantId} | Update grant


# **GrantsAPI_createGrantAsync**
```c
// Create grant
//
// Creates a new grant entry.
//
empty_envelope_t* GrantsAPI_createGrantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, grant_create_dto_t *grant_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**grant_create_dto** | **[grant_create_dto_t](grant_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GrantsAPI_deleteGrantAsync**
```c
// Delete grant
//
// Deletes a grant identified by its ID.
//
empty_envelope_t* GrantsAPI_deleteGrantAsync(apiClient_t *apiClient, char *tenantId, char *grantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**grantId** | **char \*** |  | 
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

# **GrantsAPI_getGrantDetailsAsync**
```c
// Get grant by ID
//
// Gets detailed information for a specific grant.
//
grant_dto_envelope_t* GrantsAPI_getGrantDetailsAsync(apiClient_t *apiClient, char *tenantId, char *grantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**grantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[grant_dto_envelope_t](grant_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GrantsAPI_getGrantsAsync**
```c
// Get all grants
//
// Retrieves a list of grants associated with the tenant.
//
grant_dto_i_read_only_list_envelope_t* GrantsAPI_getGrantsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[grant_dto_i_read_only_list_envelope_t](grant_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GrantsAPI_getGrantsCountAsync**
```c
// Count grants
//
// Returns the number of grants for the tenant.
//
int32_envelope_t* GrantsAPI_getGrantsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **GrantsAPI_updateGrantAsync**
```c
// Update grant
//
// Updates an existing grant identified by its ID.
//
empty_envelope_t* GrantsAPI_updateGrantAsync(apiClient_t *apiClient, char *tenantId, char *grantId, char *api_version, char *x_api_version, grant_update_dto_t *grant_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**grantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**grant_update_dto** | **[grant_update_dto_t](grant_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

