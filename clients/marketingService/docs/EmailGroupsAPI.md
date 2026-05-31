# EmailGroupsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EmailGroupsAPI_createEmailGroupAsync**](EmailGroupsAPI.md#EmailGroupsAPI_createEmailGroupAsync) | **POST** /api/v2/MarketingService/EmailGroups | Create an email group
[**EmailGroupsAPI_deleteEmailGroupAsync**](EmailGroupsAPI.md#EmailGroupsAPI_deleteEmailGroupAsync) | **DELETE** /api/v2/MarketingService/EmailGroups/{emailgroupId} | Delete an email group
[**EmailGroupsAPI_getEmailGroupDetailsAsync**](EmailGroupsAPI.md#EmailGroupsAPI_getEmailGroupDetailsAsync) | **GET** /api/v2/MarketingService/EmailGroups/{emailgroupId} | Get email group by ID
[**EmailGroupsAPI_getEmailGroupsCountAsync**](EmailGroupsAPI.md#EmailGroupsAPI_getEmailGroupsCountAsync) | **GET** /api/v2/MarketingService/EmailGroups/Count | Get email groups count
[**EmailGroupsAPI_getEmailGroupsODataAsync**](EmailGroupsAPI.md#EmailGroupsAPI_getEmailGroupsODataAsync) | **GET** /api/v2/MarketingService/EmailGroups | Get email groups
[**EmailGroupsAPI_updateEmailGroupAsync**](EmailGroupsAPI.md#EmailGroupsAPI_updateEmailGroupAsync) | **PUT** /api/v2/MarketingService/EmailGroups/{emailgroupId} | Update an email group


# **EmailGroupsAPI_createEmailGroupAsync**
```c
// Create an email group
//
// Creates a new email group for the specified tenant.
//
empty_envelope_t* EmailGroupsAPI_createEmailGroupAsync(apiClient_t *apiClient, char *tenantId, email_group_create_dto_t *email_group_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**email_group_create_dto** | **[email_group_create_dto_t](email_group_create_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmailGroupsAPI_deleteEmailGroupAsync**
```c
// Delete an email group
//
// Deletes an email group by its ID.
//
empty_envelope_t* EmailGroupsAPI_deleteEmailGroupAsync(apiClient_t *apiClient, char *tenantId, char *emailgroupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**emailgroupId** | **char \*** |  | 
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

# **EmailGroupsAPI_getEmailGroupDetailsAsync**
```c
// Get email group by ID
//
// Retrieves the details of a specific email group by its ID.
//
email_group_dto_envelope_t* EmailGroupsAPI_getEmailGroupDetailsAsync(apiClient_t *apiClient, char *tenantId, char *emailgroupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**emailgroupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[email_group_dto_envelope_t](email_group_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmailGroupsAPI_getEmailGroupsCountAsync**
```c
// Get email groups count
//
// Returns the count of email groups for the specified tenant using OData query options.
//
int32_envelope_t* EmailGroupsAPI_getEmailGroupsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **EmailGroupsAPI_getEmailGroupsODataAsync**
```c
// Get email groups
//
// Retrieves a collection of email groups for the specified tenant using OData query options.
//
email_group_dto_list_envelope_t* EmailGroupsAPI_getEmailGroupsODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[email_group_dto_list_envelope_t](email_group_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmailGroupsAPI_updateEmailGroupAsync**
```c
// Update an email group
//
// Updates an existing email group by its ID.
//
empty_envelope_t* EmailGroupsAPI_updateEmailGroupAsync(apiClient_t *apiClient, char *tenantId, char *emailgroupId, email_group_update_dto_t *email_group_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**emailgroupId** | **char \*** |  | 
**email_group_update_dto** | **[email_group_update_dto_t](email_group_update_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

