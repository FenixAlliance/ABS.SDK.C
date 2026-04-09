# UsersAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UsersAPI_countCurrentUserFollowersAsync**](UsersAPI.md#UsersAPI_countCurrentUserFollowersAsync) | **GET** /api/v2/Me/Followers/Count | Count the social profiles that follow the current user
[**UsersAPI_countCurrentUserFollowsAsync**](UsersAPI.md#UsersAPI_countCurrentUserFollowsAsync) | **GET** /api/v2/Me/Follows/Count | Count the social profiles that the current user follows
[**UsersAPI_countCurrentUserNotificationsAsync**](UsersAPI.md#UsersAPI_countCurrentUserNotificationsAsync) | **GET** /api/v2/Me/Notifications/Count | Count the notifications for the current user
[**UsersAPI_countCurrentUserTenantsAsync**](UsersAPI.md#UsersAPI_countCurrentUserTenantsAsync) | **GET** /api/v2/Me/Tenants/Count | Count the tenants that the current user is enrolled in
[**UsersAPI_getCurrentUserAddressesAsync**](UsersAPI.md#UsersAPI_getCurrentUserAddressesAsync) | **GET** /api/v2/Me/Addresses | Get the list of addresses for the current user
[**UsersAPI_getCurrentUserAsync**](UsersAPI.md#UsersAPI_getCurrentUserAsync) | **GET** /api/v2/Me | Gets the current user
[**UsersAPI_getCurrentUserAvatarAsync**](UsersAPI.md#UsersAPI_getCurrentUserAvatarAsync) | **GET** /api/v2/Me/Avatar | Get the current user&#39;s avatar
[**UsersAPI_getCurrentUserCartAsync**](UsersAPI.md#UsersAPI_getCurrentUserCartAsync) | **GET** /api/v2/Me/Cart | Get the current user&#39;s cart
[**UsersAPI_getCurrentUserEnrollmentsAsync**](UsersAPI.md#UsersAPI_getCurrentUserEnrollmentsAsync) | **GET** /api/v2/Me/Enrollments | Get the list of enrollments for the current user
[**UsersAPI_getCurrentUserEnrollmentsExtendedAsync**](UsersAPI.md#UsersAPI_getCurrentUserEnrollmentsExtendedAsync) | **GET** /api/v2/Me/Enrollments/Extended | Get the list of enrollments for the current user
[**UsersAPI_getCurrentUserFollowersAsync**](UsersAPI.md#UsersAPI_getCurrentUserFollowersAsync) | **GET** /api/v2/Me/Followers | Get the social profiles that follow the current user
[**UsersAPI_getCurrentUserFollowsAsync**](UsersAPI.md#UsersAPI_getCurrentUserFollowsAsync) | **GET** /api/v2/Me/Follows | Get the social profiles that the current user follows
[**UsersAPI_getCurrentUserInvitationAsync**](UsersAPI.md#UsersAPI_getCurrentUserInvitationAsync) | **GET** /api/v2/Me/Invitations | Get the list of tenant enrollment invitations for the current user
[**UsersAPI_getCurrentUserNotificationsAsync**](UsersAPI.md#UsersAPI_getCurrentUserNotificationsAsync) | **GET** /api/v2/Me/Notifications | Get the list of notifications for the current user
[**UsersAPI_getCurrentUserSettingsAsync**](UsersAPI.md#UsersAPI_getCurrentUserSettingsAsync) | **GET** /api/v2/Me/Settings | Get the settings for the current user
[**UsersAPI_getCurrentUserSocialProfileAsync**](UsersAPI.md#UsersAPI_getCurrentUserSocialProfileAsync) | **GET** /api/v2/Me/SocialProfile | Get the current user&#39;s social profile
[**UsersAPI_getCurrentUserTenantsAsync**](UsersAPI.md#UsersAPI_getCurrentUserTenantsAsync) | **GET** /api/v2/Me/Tenants | Get the tenants that the current user is enrolled in
[**UsersAPI_getCurrentUserTenantsExtendedAsync**](UsersAPI.md#UsersAPI_getCurrentUserTenantsExtendedAsync) | **GET** /api/v2/Me/Tenants/Extended | Get the tenants that the current user is enrolled in
[**UsersAPI_getCurrentUserWalletAsync**](UsersAPI.md#UsersAPI_getCurrentUserWalletAsync) | **GET** /api/v2/Me/Wallet | Get the current user&#39;s billing profile
[**UsersAPI_getEnrollmentAsync**](UsersAPI.md#UsersAPI_getEnrollmentAsync) | **GET** /api/v2/Me/Enrollments/{enrollmentId} | Get a single TenantEnrollment by its ID
[**UsersAPI_getExtendedCurrentUserAsync**](UsersAPI.md#UsersAPI_getExtendedCurrentUserAsync) | **GET** /api/v2/Me/Extended | Get the current user&#39;s extended profile
[**UsersAPI_patchCurrentUserAsync**](UsersAPI.md#UsersAPI_patchCurrentUserAsync) | **PATCH** /api/v2/Me | Partially update the current user&#39;s profile
[**UsersAPI_updateAvatarAsync**](UsersAPI.md#UsersAPI_updateAvatarAsync) | **POST** /api/v2/Me/Avatar | Update the current user&#39;s avatar
[**UsersAPI_updateCurrentUserAsync**](UsersAPI.md#UsersAPI_updateCurrentUserAsync) | **PUT** /api/v2/Me | Update the current user&#39;s profile
[**UsersAPI_updateCurrentUserSettingsAsync**](UsersAPI.md#UsersAPI_updateCurrentUserSettingsAsync) | **PUT** /api/v2/Me/Settings | Update the settings for the current user


# **UsersAPI_countCurrentUserFollowersAsync**
```c
// Count the social profiles that follow the current user
//
// Count the social profiles that follow the current user
//
int32_envelope_t* UsersAPI_countCurrentUserFollowersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
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
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_countCurrentUserFollowsAsync**
```c
// Count the social profiles that the current user follows
//
// Count the social profiles that the current user follows
//
int32_envelope_t* UsersAPI_countCurrentUserFollowsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
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
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_countCurrentUserNotificationsAsync**
```c
// Count the notifications for the current user
//
// Count the notifications for the current user
//
int32_envelope_t* UsersAPI_countCurrentUserNotificationsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
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
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_countCurrentUserTenantsAsync**
```c
// Count the tenants that the current user is enrolled in
//
// Count the tenants that the current user is enrolled in
//
int32_envelope_t* UsersAPI_countCurrentUserTenantsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
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
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserAddressesAsync**
```c
// Get the list of addresses for the current user
//
// Get the list of addresses for the current user
//
address_dto_list_envelope_t* UsersAPI_getCurrentUserAddressesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[address_dto_list_envelope_t](address_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserAsync**
```c
// Gets the current user
//
// Get the currently acting user.
//
user_dto_envelope_t* UsersAPI_getCurrentUserAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[user_dto_envelope_t](user_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserAvatarAsync**
```c
// Get the current user's avatar
//
// Get the current user's avatar
//
binary_t** UsersAPI_getCurrentUserAvatarAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

binary_t**



### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserCartAsync**
```c
// Get the current user's cart
//
// Get the current user's cart
//
cart_dto_envelope_t* UsersAPI_getCurrentUserCartAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cart_dto_envelope_t](cart_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserEnrollmentsAsync**
```c
// Get the list of enrollments for the current user
//
// Get the list of enrollments for the current user
//
tenant_enrollment_dto_list_envelope_t* UsersAPI_getCurrentUserEnrollmentsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_enrollment_dto_list_envelope_t](tenant_enrollment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserEnrollmentsExtendedAsync**
```c
// Get the list of enrollments for the current user
//
// Get the list of enrollments for the current user
//
extended_tenant_enrollment_dto_list_envelope_t* UsersAPI_getCurrentUserEnrollmentsExtendedAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[extended_tenant_enrollment_dto_list_envelope_t](extended_tenant_enrollment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserFollowersAsync**
```c
// Get the social profiles that follow the current user
//
// Get the social profiles that follow the current user
//
follow_record_dto_list_envelope_t* UsersAPI_getCurrentUserFollowersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[follow_record_dto_list_envelope_t](follow_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserFollowsAsync**
```c
// Get the social profiles that the current user follows
//
// Get the social profiles that the current user follows
//
follow_record_dto_list_envelope_t* UsersAPI_getCurrentUserFollowsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[follow_record_dto_list_envelope_t](follow_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserInvitationAsync**
```c
// Get the list of tenant enrollment invitations for the current user
//
// Get the list of tenant enrollment invitations for the current user
//
tenant_invitation_dto_list_envelope_t* UsersAPI_getCurrentUserInvitationAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_invitation_dto_list_envelope_t](tenant_invitation_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserNotificationsAsync**
```c
// Get the list of notifications for the current user
//
// Get the list of notifications for the current user
//
notification_dto_list_envelope_t* UsersAPI_getCurrentUserNotificationsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[notification_dto_list_envelope_t](notification_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserSettingsAsync**
```c
// Get the settings for the current user
//
// Get the settings for the current user
//
user_settings_dto_envelope_t* UsersAPI_getCurrentUserSettingsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[user_settings_dto_envelope_t](user_settings_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserSocialProfileAsync**
```c
// Get the current user's social profile
//
// Get the current user's social profile
//
social_profile_dto_envelope_t* UsersAPI_getCurrentUserSocialProfileAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_profile_dto_envelope_t](social_profile_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserTenantsAsync**
```c
// Get the tenants that the current user is enrolled in
//
// Get the tenants that the current user is enrolled in
//
tenant_dto_list_envelope_t* UsersAPI_getCurrentUserTenantsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_dto_list_envelope_t](tenant_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserTenantsExtendedAsync**
```c
// Get the tenants that the current user is enrolled in
//
// Get the tenants that the current user is enrolled in
//
extended_tenant_dto_list_envelope_t* UsersAPI_getCurrentUserTenantsExtendedAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[extended_tenant_dto_list_envelope_t](extended_tenant_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getCurrentUserWalletAsync**
```c
// Get the current user's billing profile
//
// Get the current user's billing profile
//
wallet_dto_envelope_t* UsersAPI_getCurrentUserWalletAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[wallet_dto_envelope_t](wallet_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getEnrollmentAsync**
```c
// Get a single TenantEnrollment by its ID
//
// Get a single TenantEnrollment by its ID
//
tenant_enrollment_dto_envelope_t* UsersAPI_getEnrollmentAsync(apiClient_t *apiClient, char *enrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**enrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_enrollment_dto_envelope_t](tenant_enrollment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_getExtendedCurrentUserAsync**
```c
// Get the current user's extended profile
//
// Get the current user's extended profile
//
extended_user_dto_envelope_t* UsersAPI_getExtendedCurrentUserAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[extended_user_dto_envelope_t](extended_user_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_patchCurrentUserAsync**
```c
// Partially update the current user's profile
//
// Partially update the current user's profile
//
empty_envelope_t* UsersAPI_patchCurrentUserAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml, multipart/form-data
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_updateAvatarAsync**
```c
// Update the current user's avatar
//
// Update the current user's avatar
//
empty_envelope_t* UsersAPI_updateAvatarAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, binary_t* avatar);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**avatar** | **binary_t*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json, application/xml
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_updateCurrentUserAsync**
```c
// Update the current user's profile
//
// Update the current user's profile
//
empty_envelope_t* UsersAPI_updateCurrentUserAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, user_update_dto_t *user_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**user_update_dto** | **[user_update_dto_t](user_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml, multipart/form-data
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_updateCurrentUserSettingsAsync**
```c
// Update the settings for the current user
//
// Update the settings for the current user
//
user_settings_dto_envelope_t* UsersAPI_updateCurrentUserSettingsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, user_settings_update_dto_t *user_settings_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**user_settings_update_dto** | **[user_settings_update_dto_t](user_settings_update_dto.md) \*** |  | [optional] 

### Return type

[user_settings_dto_envelope_t](user_settings_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml, multipart/form-data
 - **Accept**: application/json, application/xml, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

