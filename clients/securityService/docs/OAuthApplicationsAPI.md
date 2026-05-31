# OAuthApplicationsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OAuthApplicationsAPI_createOAuthApplicationAsync**](OAuthApplicationsAPI.md#OAuthApplicationsAPI_createOAuthApplicationAsync) | **POST** /api/v2/SecurityService/OAuthApplications | Create a new OAuth application
[**OAuthApplicationsAPI_deleteOAuthApplicationAsync**](OAuthApplicationsAPI.md#OAuthApplicationsAPI_deleteOAuthApplicationAsync) | **DELETE** /api/v2/SecurityService/OAuthApplications/{applicationId} | Delete an OAuth application
[**OAuthApplicationsAPI_getOAuthApplicationByIdAsync**](OAuthApplicationsAPI.md#OAuthApplicationsAPI_getOAuthApplicationByIdAsync) | **GET** /api/v2/SecurityService/OAuthApplications/{applicationId} | Get OAuth application by ID
[**OAuthApplicationsAPI_getOAuthApplicationsAsync**](OAuthApplicationsAPI.md#OAuthApplicationsAPI_getOAuthApplicationsAsync) | **GET** /api/v2/SecurityService/OAuthApplications | Get all OAuth applications
[**OAuthApplicationsAPI_getOAuthApplicationsCountAsync**](OAuthApplicationsAPI.md#OAuthApplicationsAPI_getOAuthApplicationsCountAsync) | **GET** /api/v2/SecurityService/OAuthApplications/Count | Get OAuth applications count
[**OAuthApplicationsAPI_getOAuthAuthorizationByIdAsync**](OAuthApplicationsAPI.md#OAuthApplicationsAPI_getOAuthAuthorizationByIdAsync) | **GET** /api/v2/SecurityService/OAuthApplications/Authorizations/{authorizationId} | Get OAuth authorization by ID
[**OAuthApplicationsAPI_getOAuthAuthorizationsAsync**](OAuthApplicationsAPI.md#OAuthApplicationsAPI_getOAuthAuthorizationsAsync) | **GET** /api/v2/SecurityService/OAuthApplications/Authorizations | Get all OAuth authorizations
[**OAuthApplicationsAPI_getOAuthAuthorizationsCountAsync**](OAuthApplicationsAPI.md#OAuthApplicationsAPI_getOAuthAuthorizationsCountAsync) | **GET** /api/v2/SecurityService/OAuthApplications/Authorizations/Count | Get OAuth authorizations count
[**OAuthApplicationsAPI_updateOAuthApplicationAsync**](OAuthApplicationsAPI.md#OAuthApplicationsAPI_updateOAuthApplicationAsync) | **PUT** /api/v2/SecurityService/OAuthApplications/{applicationId} | Update an existing OAuth application


# **OAuthApplicationsAPI_createOAuthApplicationAsync**
```c
// Create a new OAuth application
//
// Creates a new OAuth application for the specified tenant.
//
empty_envelope_t* OAuthApplicationsAPI_createOAuthApplicationAsync(apiClient_t *apiClient, char *tenantId, o_auth_application_create_dto_t *o_auth_application_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**o_auth_application_create_dto** | **[o_auth_application_create_dto_t](o_auth_application_create_dto.md) \*** |  | 
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

# **OAuthApplicationsAPI_deleteOAuthApplicationAsync**
```c
// Delete an OAuth application
//
// Deletes an existing OAuth application.
//
empty_envelope_t* OAuthApplicationsAPI_deleteOAuthApplicationAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);
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

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OAuthApplicationsAPI_getOAuthApplicationByIdAsync**
```c
// Get OAuth application by ID
//
// Retrieves a specific OAuth application by its identifier.
//
o_auth_application_dto_envelope_t* OAuthApplicationsAPI_getOAuthApplicationByIdAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);
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

[o_auth_application_dto_envelope_t](o_auth_application_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OAuthApplicationsAPI_getOAuthApplicationsAsync**
```c
// Get all OAuth applications
//
// Retrieves all OAuth applications for the specified tenant.
//
o_auth_application_dto_list_envelope_t* OAuthApplicationsAPI_getOAuthApplicationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[o_auth_application_dto_list_envelope_t](o_auth_application_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OAuthApplicationsAPI_getOAuthApplicationsCountAsync**
```c
// Get OAuth applications count
//
// Retrieves the count of OAuth applications for the specified tenant.
//
int32_envelope_t* OAuthApplicationsAPI_getOAuthApplicationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **OAuthApplicationsAPI_getOAuthAuthorizationByIdAsync**
```c
// Get OAuth authorization by ID
//
// Retrieves a specific OAuth authorization by its identifier.
//
o_auth_authorization_dto_envelope_t* OAuthApplicationsAPI_getOAuthAuthorizationByIdAsync(apiClient_t *apiClient, char *tenantId, char *authorizationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**authorizationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[o_auth_authorization_dto_envelope_t](o_auth_authorization_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OAuthApplicationsAPI_getOAuthAuthorizationsAsync**
```c
// Get all OAuth authorizations
//
// Retrieves all OAuth authorizations for the specified user.
//
o_auth_authorization_dto_list_envelope_t* OAuthApplicationsAPI_getOAuthAuthorizationsAsync(apiClient_t *apiClient, char *tenantId, char *userId, char *api_version, char *x_api_version);
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

[o_auth_authorization_dto_list_envelope_t](o_auth_authorization_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OAuthApplicationsAPI_getOAuthAuthorizationsCountAsync**
```c
// Get OAuth authorizations count
//
// Retrieves the count of OAuth authorizations for the specified user.
//
int32_envelope_t* OAuthApplicationsAPI_getOAuthAuthorizationsCountAsync(apiClient_t *apiClient, char *tenantId, char *userId, char *api_version, char *x_api_version);
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

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OAuthApplicationsAPI_updateOAuthApplicationAsync**
```c
// Update an existing OAuth application
//
// Updates an existing OAuth application.
//
empty_envelope_t* OAuthApplicationsAPI_updateOAuthApplicationAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, o_auth_application_update_dto_t *o_auth_application_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**applicationId** | **char \*** |  | 
**o_auth_application_update_dto** | **[o_auth_application_update_dto_t](o_auth_application_update_dto.md) \*** |  | 
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

