# OAuthAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OAuthAPI_checkPasswordSignInAsync**](OAuthAPI.md#OAuthAPI_checkPasswordSignInAsync) | **GET** /api/v2/OAuth/SignIn | Check password sign-in
[**OAuthAPI_get**](OAuthAPI.md#OAuthAPI_get) | **GET** /api/v2/OAuth/WhoAmI | Get current user identity
[**OAuthAPI_getJwKs**](OAuthAPI.md#OAuthAPI_getJwKs) | **GET** /api/v2/OAuth/{applicationId}/Keys | Get JSON Web Key Set
[**OAuthAPI_getOpenIdConfiguration**](OAuthAPI.md#OAuthAPI_getOpenIdConfiguration) | **GET** /api/v2/OAuth/{tenantId}/{applicationId}/.Well-Known/OpenId-Configuration | Get OpenID configuration
[**OAuthAPI_getPermissions**](OAuthAPI.md#OAuthAPI_getPermissions) | **GET** /api/v2/OAuth/Permissions | Get user permissions
[**OAuthAPI_passwordSignInAsync**](OAuthAPI.md#OAuthAPI_passwordSignInAsync) | **POST** /api/v2/OAuth/SignIn | Sign in with password
[**OAuthAPI_token**](OAuthAPI.md#OAuthAPI_token) | **POST** /api/v2/OAuth/Token | Get OAuth token


# **OAuthAPI_checkPasswordSignInAsync**
```c
// Check password sign-in
//
// Verifies sign-in credentials and returns user details without creating a session.
//
user_create_dto_envelope_t* OAuthAPI_checkPasswordSignInAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[user_create_dto_envelope_t](user_create_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OAuthAPI_get**
```c
// Get current user identity
//
// Returns the authorization result for the authenticated user, including identity and tenant context.
//
authorization_result_envelope_t* OAuthAPI_get(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[authorization_result_envelope_t](authorization_result_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OAuthAPI_getJwKs**
```c
// Get JSON Web Key Set
//
// Retrieves the signing keys (JWKS) for a specific application.
//
json_web_key_set_envelope_t* OAuthAPI_getJwKs(apiClient_t *apiClient, char *applicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**applicationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[json_web_key_set_envelope_t](json_web_key_set_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OAuthAPI_getOpenIdConfiguration**
```c
// Get OpenID configuration
//
// Retrieves the OpenID Connect discovery document for a specific application within a tenant.
//
open_id_configuration_envelope_t* OAuthAPI_getOpenIdConfiguration(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**applicationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[open_id_configuration_envelope_t](open_id_configuration_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OAuthAPI_getPermissions**
```c
// Get user permissions
//
// Retrieves the list of permission identifiers for a specific user within a tenant context.
//
string_list_envelope_t* OAuthAPI_getPermissions(apiClient_t *apiClient, char *tenantId, char *userId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**userId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[string_list_envelope_t](string_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OAuthAPI_passwordSignInAsync**
```c
// Sign in with password
//
// Authenticates a user using email and password credentials.
//
json_web_token_envelope_t* OAuthAPI_passwordSignInAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, signin_model_t *signin_model);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signin_model** | **[signin_model_t](signin_model.md) \*** |  | [optional] 

### Return type

[json_web_token_envelope_t](json_web_token_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OAuthAPI_token**
```c
// Get OAuth token
//
// Generates an OAuth token based on the provided credentials or grant type.
//
json_web_token_envelope_t* OAuthAPI_token(apiClient_t *apiClient, char *api_version, char *x_api_version, o_auth_token_request_t *o_auth_token_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**o_auth_token_request** | **[o_auth_token_request_t](o_auth_token_request.md) \*** |  | [optional] 

### Return type

[json_web_token_envelope_t](json_web_token_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

