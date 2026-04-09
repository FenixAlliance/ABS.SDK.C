# UsersAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UsersAPI_adminPreviewUserEmailTemplate**](UsersAPI.md#UsersAPI_adminPreviewUserEmailTemplate) | **POST** /api/v2/SystemService/Users/{userId}/Emails/Preview | Preview the rendered email for a user.
[**UsersAPI_adminSendUserEmail**](UsersAPI.md#UsersAPI_adminSendUserEmail) | **POST** /api/v2/SystemService/Users/{userId}/Emails/Send | Send an email to a user.
[**UsersAPI_createAccountHolderAsync**](UsersAPI.md#UsersAPI_createAccountHolderAsync) | **POST** /api/v2/SystemService/Users | Create a new user
[**UsersAPI_deleteAccountHolderAsync**](UsersAPI.md#UsersAPI_deleteAccountHolderAsync) | **DELETE** /api/v2/SystemService/Users/{userId} | Delete a user
[**UsersAPI_getExtendedAccountHolderAsync**](UsersAPI.md#UsersAPI_getExtendedAccountHolderAsync) | **GET** /api/v2/SystemService/Users/{userId}/Extended | Retrieve an extended user by ID
[**UsersAPI_getExtendedUsersAsync**](UsersAPI.md#UsersAPI_getExtendedUsersAsync) | **GET** /api/v2/SystemService/Users/Extended | Retrieve a list of extended users
[**UsersAPI_getExtendedUsersCountAsync**](UsersAPI.md#UsersAPI_getExtendedUsersCountAsync) | **GET** /api/v2/SystemService/Users/Extended/Count | Get the count of extended users
[**UsersAPI_getUserAsync**](UsersAPI.md#UsersAPI_getUserAsync) | **GET** /api/v2/SystemService/Users/{userId} | Retrieve a user by ID
[**UsersAPI_getUsersAsync**](UsersAPI.md#UsersAPI_getUsersAsync) | **GET** /api/v2/SystemService/Users | Retrieve a list of users
[**UsersAPI_getUsersCountAsync**](UsersAPI.md#UsersAPI_getUsersCountAsync) | **GET** /api/v2/SystemService/Users/Count | Get the count of users
[**UsersAPI_updateAccountHolderAsync**](UsersAPI.md#UsersAPI_updateAccountHolderAsync) | **PUT** /api/v2/SystemService/Users/{userId} | Update a user


# **UsersAPI_adminPreviewUserEmailTemplate**
```c
// Preview the rendered email for a user.
//
// This action is only available for users with the 'business_owner' role (global administrators).
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
// This action is only available for users with the 'business_owner' role (global administrators).
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
// This action is only available for users with the 'business_owner' role (global administrators).
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
// This action is only available for users with the 'business_owner' role (global administrators).
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
// This action is only available for users with the 'business_owner' role (global administrators).
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
// This action is only available for users with the 'business_owner' role (global administrators).
//
extended_user_dto_list_envelope_t* UsersAPI_getExtendedUsersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[extended_user_dto_list_envelope_t](extended_user_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getExtendedUsersCountAsync**
```c
// Get the count of extended users
//
// This action is only available for users with the 'business_owner' role (global administrators).
//
int32_envelope_t* UsersAPI_getExtendedUsersCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **UsersAPI_getUserAsync**
```c
// Retrieve a user by ID
//
// This action is only available for users with the 'business_owner' role (global administrators).
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
// This action is only available for users with the 'business_owner' role (global administrators).
//
user_dto_list_envelope_t* UsersAPI_getUsersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[user_dto_list_envelope_t](user_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getUsersCountAsync**
```c
// Get the count of users
//
// This action is only available for users with the 'business_owner' role (global administrators).
//
int32_envelope_t* UsersAPI_getUsersCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **UsersAPI_updateAccountHolderAsync**
```c
// Update a user
//
// This action is only available for users with the 'business_owner' role (global administrators).
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

