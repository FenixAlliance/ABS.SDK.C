# UsersAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UsersAPI_adminPreviewUserEmailTemplate**](UsersAPI.md#UsersAPI_adminPreviewUserEmailTemplate) | **POST** /api/v2/SystemService/Users/{userId}/Emails/Preview | Preview the rendered email for a user.
[**UsersAPI_adminSendUserEmail**](UsersAPI.md#UsersAPI_adminSendUserEmail) | **POST** /api/v2/SystemService/Users/{userId}/Emails/Send | Send an email to a user.
[**UsersAPI_createAccountHolderAsync**](UsersAPI.md#UsersAPI_createAccountHolderAsync) | **POST** /api/v2/SystemService/Users | Create a new user
[**UsersAPI_deleteAccountHolderAsync**](UsersAPI.md#UsersAPI_deleteAccountHolderAsync) | **DELETE** /api/v2/SystemService/Users/{userId} | Delete a user
[**UsersAPI_getExtendedAccountHolderAsync**](UsersAPI.md#UsersAPI_getExtendedAccountHolderAsync) | **GET** /api/v2/SystemService/Users/{userId}/Extended | Retrieve an extended user by ID
[**UsersAPI_getExtendedUsersAsync**](UsersAPI.md#UsersAPI_getExtendedUsersAsync) | **GET** /api/v2/SystemService/Users/Extended | Retrieve a list of extended users
[**UsersAPI_getExtendedUsersCountAsync**](UsersAPI.md#UsersAPI_getExtendedUsersCountAsync) | **GET** /api/v2/SystemService/Users/Extended/Count | Get the count of extended users
[**UsersAPI_getUserAdminDetailAsync**](UsersAPI.md#UsersAPI_getUserAdminDetailAsync) | **GET** /api/v2/SystemService/Users/{userId}/AdminDetail | Retrieve the admin detail aggregate for a user
[**UsersAPI_getUserAsync**](UsersAPI.md#UsersAPI_getUserAsync) | **GET** /api/v2/SystemService/Users/{userId} | Retrieve a user by ID
[**UsersAPI_getUsersAsync**](UsersAPI.md#UsersAPI_getUsersAsync) | **GET** /api/v2/SystemService/Users | Retrieve a list of users
[**UsersAPI_getUsersCountAsync**](UsersAPI.md#UsersAPI_getUsersCountAsync) | **GET** /api/v2/SystemService/Users/Count | Get the count of users
[**UsersAPI_patchAccountHolderAsync**](UsersAPI.md#UsersAPI_patchAccountHolderAsync) | **PATCH** /api/v2/SystemService/Users/{userId} | Partially update a user
[**UsersAPI_setUserPasswordAsync**](UsersAPI.md#UsersAPI_setUserPasswordAsync) | **POST** /api/v2/SystemService/Users/{userId}/Password | Set a user&#39;s password
[**UsersAPI_updateAccountHolderAdminProfileAsync**](UsersAPI.md#UsersAPI_updateAccountHolderAdminProfileAsync) | **PUT** /api/v2/SystemService/Users/{userId}/AdminProfile | Update a user&#39;s admin-managed profile
[**UsersAPI_updateAccountHolderAsync**](UsersAPI.md#UsersAPI_updateAccountHolderAsync) | **PUT** /api/v2/SystemService/Users/{userId} | Update a user


# **UsersAPI_adminPreviewUserEmailTemplate**
```c
// Preview the rendered email for a user.
//
// This action is only available for global administrators.
//
void UsersAPI_adminPreviewUserEmailTemplate(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**email_dispatch_request** | **[email_dispatch_request_t](email_dispatch_request.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_adminSendUserEmail**
```c
// Send an email to a user.
//
// This action is only available for global administrators.
//
empty_envelope_t* UsersAPI_adminSendUserEmail(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**email_dispatch_request** | **[email_dispatch_request_t](email_dispatch_request.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_createAccountHolderAsync**
```c
// Create a new user
//
// This action is only available for global administrators.
//
empty_envelope_t* UsersAPI_createAccountHolderAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, user_create_dto_t *user_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**user_create_dto** | **[user_create_dto_t](user_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_deleteAccountHolderAsync**
```c
// Delete a user
//
// This action is only available for global administrators.
//
empty_envelope_t* UsersAPI_deleteAccountHolderAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
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

# **UsersAPI_getExtendedAccountHolderAsync**
```c
// Retrieve an extended user by ID
//
// This action is only available for global administrators.
//
extended_user_dto_envelope_t* UsersAPI_getExtendedAccountHolderAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[extended_user_dto_envelope_t](extended_user_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getExtendedUsersAsync**
```c
// Retrieve a list of extended users
//
// This action is only available for global administrators.
//
extended_user_dto_list_envelope_t* UsersAPI_getExtendedUsersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, extended_user_dto_collection_query_parameters_t *extended_user_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**extended_user_dto_collection_query_parameters** | **[extended_user_dto_collection_query_parameters_t](extended_user_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[extended_user_dto_list_envelope_t](extended_user_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getExtendedUsersCountAsync**
```c
// Get the count of extended users
//
// This action is only available for global administrators.
//
int32_envelope_t* UsersAPI_getExtendedUsersCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, extended_user_dto_collection_query_parameters_t *extended_user_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**extended_user_dto_collection_query_parameters** | **[extended_user_dto_collection_query_parameters_t](extended_user_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getUserAdminDetailAsync**
```c
// Retrieve the admin detail aggregate for a user
//
// Returns the user's orders, external logins, and — for the supplied tenant — the enrollment with its granted roles/permissions and the tenant role/permission catalogs. Global administrators only.
//
user_admin_detail_dto_envelope_t* UsersAPI_getUserAdminDetailAsync(apiClient_t *apiClient, char *userId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[user_admin_detail_dto_envelope_t](user_admin_detail_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getUserAsync**
```c
// Retrieve a user by ID
//
// This action is only available for global administrators.
//
user_dto_envelope_t* UsersAPI_getUserAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[user_dto_envelope_t](user_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getUsersAsync**
```c
// Retrieve a list of users
//
// This action is only available for global administrators.
//
user_dto_list_envelope_t* UsersAPI_getUsersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, user_dto_collection_query_parameters_t *user_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**user_dto_collection_query_parameters** | **[user_dto_collection_query_parameters_t](user_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[user_dto_list_envelope_t](user_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getUsersCountAsync**
```c
// Get the count of users
//
// This action is only available for global administrators.
//
int32_envelope_t* UsersAPI_getUsersCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, user_dto_collection_query_parameters_t *user_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**user_dto_collection_query_parameters** | **[user_dto_collection_query_parameters_t](user_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_patchAccountHolderAsync**
```c
// Partially update a user
//
// This action is only available for global administrators.
//
empty_envelope_t* UsersAPI_patchAccountHolderAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_setUserPasswordAsync**
```c
// Set a user's password
//
// Replaces the user's password with the supplied value. Global administrators only.
//
empty_envelope_t* UsersAPI_setUserPasswordAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, set_user_password_dto_t *set_user_password_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**set_user_password_dto** | **[set_user_password_dto_t](set_user_password_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_updateAccountHolderAdminProfileAsync**
```c
// Update a user's admin-managed profile
//
// Updates the identity fields (email/username, re-normalized by Identity) and display fields a global administrator may change on a user, and toggles two-factor and lockout. Normalized email/username and the access-failed count are never accepted. This action is only available for global administrators.
//
empty_envelope_t* UsersAPI_updateAccountHolderAdminProfileAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, user_admin_update_dto_t *user_admin_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**user_admin_update_dto** | **[user_admin_update_dto_t](user_admin_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_updateAccountHolderAsync**
```c
// Update a user
//
// This action is only available for global administrators.
//
empty_envelope_t* UsersAPI_updateAccountHolderAsync(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version, user_update_dto_t *user_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**user_update_dto** | **[user_update_dto_t](user_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

