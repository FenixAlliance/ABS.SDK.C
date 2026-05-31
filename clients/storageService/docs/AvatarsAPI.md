# AvatarsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AvatarsAPI_getAvatar**](AvatarsAPI.md#AvatarsAPI_getAvatar) | **GET** /api/v2/StorageService/Avatars/{socialProfileId} | Get the avatar for a given social profile.
[**AvatarsAPI_getContactAvatar**](AvatarsAPI.md#AvatarsAPI_getContactAvatar) | **GET** /api/v2/StorageService/Avatars/Contact/{contactId} | Get the avatar for a given contact.
[**AvatarsAPI_getCurrentUserAvatar**](AvatarsAPI.md#AvatarsAPI_getCurrentUserAvatar) | **GET** /api/v2/StorageService/Avatars/User | Get the avatar for the current user.
[**AvatarsAPI_getTenantAvatar**](AvatarsAPI.md#AvatarsAPI_getTenantAvatar) | **GET** /api/v2/StorageService/Avatars/Tenant/{tenantId} | Get the avatar for a given tenant.
[**AvatarsAPI_getUserAvatar**](AvatarsAPI.md#AvatarsAPI_getUserAvatar) | **GET** /api/v2/StorageService/Avatars/User/{userId} | Get the avatar for a given user.
[**AvatarsAPI_updateContactAvatar**](AvatarsAPI.md#AvatarsAPI_updateContactAvatar) | **POST** /api/v2/StorageService/Avatars/Contacts/{contactId} | Update the avatar for a given contact.
[**AvatarsAPI_updateTenantAvatar**](AvatarsAPI.md#AvatarsAPI_updateTenantAvatar) | **POST** /api/v2/StorageService/Avatars/Tenant/{tenantId} | Update the avatar for a given tenant.
[**AvatarsAPI_updateUserAvatar**](AvatarsAPI.md#AvatarsAPI_updateUserAvatar) | **POST** /api/v2/StorageService/Avatars/User | Update the avatar for the current user.


# **AvatarsAPI_getAvatar**
```c
// Get the avatar for a given social profile.
//
empty_envelope_t* AvatarsAPI_getAvatar(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AvatarsAPI_getContactAvatar**
```c
// Get the avatar for a given contact.
//
empty_envelope_t* AvatarsAPI_getContactAvatar(apiClient_t *apiClient, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AvatarsAPI_getCurrentUserAvatar**
```c
// Get the avatar for the current user.
//
empty_envelope_t* AvatarsAPI_getCurrentUserAvatar(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AvatarsAPI_getTenantAvatar**
```c
// Get the avatar for a given tenant.
//
empty_envelope_t* AvatarsAPI_getTenantAvatar(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AvatarsAPI_getUserAvatar**
```c
// Get the avatar for a given user.
//
empty_envelope_t* AvatarsAPI_getUserAvatar(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version);
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
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AvatarsAPI_updateContactAvatar**
```c
// Update the avatar for a given contact.
//
empty_envelope_t* AvatarsAPI_updateContactAvatar(apiClient_t *apiClient, char *contactId, char *tenantId, char *api_version, char *x_api_version, binary_t* avatar);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**avatar** | **binary_t*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AvatarsAPI_updateTenantAvatar**
```c
// Update the avatar for a given tenant.
//
empty_envelope_t* AvatarsAPI_updateTenantAvatar(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* avatar);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**avatar** | **binary_t*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AvatarsAPI_updateUserAvatar**
```c
// Update the avatar for the current user.
//
empty_envelope_t* AvatarsAPI_updateUserAvatar(apiClient_t *apiClient, char *api_version, char *x_api_version, binary_t* avatar);
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

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

