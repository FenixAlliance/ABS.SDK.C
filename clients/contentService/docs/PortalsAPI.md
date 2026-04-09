# PortalsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PortalsAPI_createWebPortalAsync**](PortalsAPI.md#PortalsAPI_createWebPortalAsync) | **POST** /api/v2/ContentService/Portals | Create a new web portal
[**PortalsAPI_deleteWebPortalAsync**](PortalsAPI.md#PortalsAPI_deleteWebPortalAsync) | **DELETE** /api/v2/ContentService/Portals/{portalId} | Delete a web portal
[**PortalsAPI_getCurrentWebPortalAsync**](PortalsAPI.md#PortalsAPI_getCurrentWebPortalAsync) | **GET** /api/v2/ContentService/Portals/Current | Get the current portal
[**PortalsAPI_getCurrentWebPortalOptionsAsync**](PortalsAPI.md#PortalsAPI_getCurrentWebPortalOptionsAsync) | **GET** /api/v2/ContentService/Portals/Current/Options | Get the current portal&#39;s options
[**PortalsAPI_getRootWebPortalAsync**](PortalsAPI.md#PortalsAPI_getRootWebPortalAsync) | **GET** /api/v2/ContentService/Portals/Root | Get the root portal
[**PortalsAPI_getWebPortalByIdAsync**](PortalsAPI.md#PortalsAPI_getWebPortalByIdAsync) | **GET** /api/v2/ContentService/Portals/{portalId} | Get a web portal by its ID
[**PortalsAPI_getWebPortalOptionsAsync**](PortalsAPI.md#PortalsAPI_getWebPortalOptionsAsync) | **GET** /api/v2/ContentService/Portals/{portalId}/Options | Get a web portal&#39;s options by its ID
[**PortalsAPI_getWebPortalSettingsAsync**](PortalsAPI.md#PortalsAPI_getWebPortalSettingsAsync) | **GET** /api/v2/ContentService/Portals/{portalId}/Settings | Get a web portal&#39;s settings by its ID
[**PortalsAPI_initializeCurrentWebPortalAsync**](PortalsAPI.md#PortalsAPI_initializeCurrentWebPortalAsync) | **POST** /api/v2/ContentService/Portals/Initialize | Initialize the current portal
[**PortalsAPI_patchWebPortalAsync**](PortalsAPI.md#PortalsAPI_patchWebPortalAsync) | **PATCH** /api/v2/ContentService/Portals/{portalId} | Partially update a web portal
[**PortalsAPI_searchWebPortalAsync**](PortalsAPI.md#PortalsAPI_searchWebPortalAsync) | **GET** /api/v2/ContentService/Portals/Search | Search for a portal by its domain
[**PortalsAPI_updateWebPortalAsync**](PortalsAPI.md#PortalsAPI_updateWebPortalAsync) | **PUT** /api/v2/ContentService/Portals/{portalId} | Update an existing web portal


# **PortalsAPI_createWebPortalAsync**
```c
// Create a new web portal
//
// Create a new web portal
//
empty_envelope_t* PortalsAPI_createWebPortalAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_portal_create_dto_t *web_portal_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_portal_create_dto** | **[web_portal_create_dto_t](web_portal_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortalsAPI_deleteWebPortalAsync**
```c
// Delete a web portal
//
// Delete a web portal
//
empty_envelope_t* PortalsAPI_deleteWebPortalAsync(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**portalId** | **char \*** |  | 
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

# **PortalsAPI_getCurrentWebPortalAsync**
```c
// Get the current portal
//
// Get the current portal of the this server instance
//
web_portal_dto_envelope_t* PortalsAPI_getCurrentWebPortalAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_portal_dto_envelope_t](web_portal_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortalsAPI_getCurrentWebPortalOptionsAsync**
```c
// Get the current portal's options
//
// Get the current portal's options for the current user.
//
portal_options_envelope_t* PortalsAPI_getCurrentWebPortalOptionsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[portal_options_envelope_t](portal_options_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortalsAPI_getRootWebPortalAsync**
```c
// Get the root portal
//
// Get the root portal of the this server instance
//
web_portal_dto_envelope_t* PortalsAPI_getRootWebPortalAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_portal_dto_envelope_t](web_portal_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortalsAPI_getWebPortalByIdAsync**
```c
// Get a web portal by its ID
//
// Get a web portal by its ID
//
web_portal_dto_envelope_t* PortalsAPI_getWebPortalByIdAsync(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**portalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_portal_dto_envelope_t](web_portal_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortalsAPI_getWebPortalOptionsAsync**
```c
// Get a web portal's options by its ID
//
// Get a web portal's options by its ID
//
portal_options_envelope_t* PortalsAPI_getWebPortalOptionsAsync(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**portalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[portal_options_envelope_t](portal_options_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortalsAPI_getWebPortalSettingsAsync**
```c
// Get a web portal's settings by its ID
//
// Get a web portal's settings by its ID
//
portal_settings_envelope_t* PortalsAPI_getWebPortalSettingsAsync(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**portalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[portal_settings_envelope_t](portal_settings_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortalsAPI_initializeCurrentWebPortalAsync**
```c
// Initialize the current portal
//
// Initialize the current portal for the current user.
//
web_portal_dto_envelope_t* PortalsAPI_initializeCurrentWebPortalAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_portal_dto_envelope_t](web_portal_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortalsAPI_patchWebPortalAsync**
```c
// Partially update a web portal
//
// Partially update a web portal
//
empty_envelope_t* PortalsAPI_patchWebPortalAsync(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**portalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortalsAPI_searchWebPortalAsync**
```c
// Search for a portal by its domain
//
// Search for a portal by its domain
//
web_portal_dto_envelope_t* PortalsAPI_searchWebPortalAsync(apiClient_t *apiClient, char *domain, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**domain** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_portal_dto_envelope_t](web_portal_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortalsAPI_updateWebPortalAsync**
```c
// Update an existing web portal
//
// Update an existing web portal
//
empty_envelope_t* PortalsAPI_updateWebPortalAsync(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version, web_portal_update_dto_t *web_portal_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**portalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_portal_update_dto** | **[web_portal_update_dto_t](web_portal_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

