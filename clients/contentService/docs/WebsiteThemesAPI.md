# WebsiteThemesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WebsiteThemesAPI_createWebsiteThemeAsync**](WebsiteThemesAPI.md#WebsiteThemesAPI_createWebsiteThemeAsync) | **POST** /api/v2/ContentService/WebsiteThemes | Create a new website theme
[**WebsiteThemesAPI_deleteWebsiteThemeAsync**](WebsiteThemesAPI.md#WebsiteThemesAPI_deleteWebsiteThemeAsync) | **DELETE** /api/v2/ContentService/WebsiteThemes/{id} | Delete a website theme
[**WebsiteThemesAPI_getWebsiteThemeByIdAsync**](WebsiteThemesAPI.md#WebsiteThemesAPI_getWebsiteThemeByIdAsync) | **GET** /api/v2/ContentService/WebsiteThemes/{id} | Get website theme by ID
[**WebsiteThemesAPI_getWebsiteThemesAsync**](WebsiteThemesAPI.md#WebsiteThemesAPI_getWebsiteThemesAsync) | **GET** /api/v2/ContentService/WebsiteThemes | Get all website themes
[**WebsiteThemesAPI_getWebsiteThemesCountAsync**](WebsiteThemesAPI.md#WebsiteThemesAPI_getWebsiteThemesCountAsync) | **GET** /api/v2/ContentService/WebsiteThemes/Count | Get website themes count
[**WebsiteThemesAPI_patchWebsiteThemeAsync**](WebsiteThemesAPI.md#WebsiteThemesAPI_patchWebsiteThemeAsync) | **PATCH** /api/v2/ContentService/WebsiteThemes/{id} | Patch a website theme
[**WebsiteThemesAPI_updateWebsiteThemeAsync**](WebsiteThemesAPI.md#WebsiteThemesAPI_updateWebsiteThemeAsync) | **PUT** /api/v2/ContentService/WebsiteThemes/{id} | Update a website theme


# **WebsiteThemesAPI_createWebsiteThemeAsync**
```c
// Create a new website theme
//
// Creates a new website theme for the specified tenant.
//
void WebsiteThemesAPI_createWebsiteThemeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, website_theme_create_dto_t *website_theme_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**website_theme_create_dto** | **[website_theme_create_dto_t](website_theme_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebsiteThemesAPI_deleteWebsiteThemeAsync**
```c
// Delete a website theme
//
// Deletes a website theme for the specified tenant.
//
void WebsiteThemesAPI_deleteWebsiteThemeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
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

# **WebsiteThemesAPI_getWebsiteThemeByIdAsync**
```c
// Get website theme by ID
//
// Retrieves a specific website theme by its identifier.
//
website_theme_dto_t* WebsiteThemesAPI_getWebsiteThemeByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[website_theme_dto_t](website_theme_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebsiteThemesAPI_getWebsiteThemesAsync**
```c
// Get all website themes
//
// Retrieves all website themes for the specified tenant.
//
website_theme_dto_list_envelope_t* WebsiteThemesAPI_getWebsiteThemesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[website_theme_dto_list_envelope_t](website_theme_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebsiteThemesAPI_getWebsiteThemesCountAsync**
```c
// Get website themes count
//
// Returns the count of website themes for the specified tenant.
//
int32_envelope_t* WebsiteThemesAPI_getWebsiteThemesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **WebsiteThemesAPI_patchWebsiteThemeAsync**
```c
// Patch a website theme
//
// Partially updates an existing website theme for the specified tenant.
//
void WebsiteThemesAPI_patchWebsiteThemeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebsiteThemesAPI_updateWebsiteThemeAsync**
```c
// Update a website theme
//
// Updates an existing website theme for the specified tenant.
//
void WebsiteThemesAPI_updateWebsiteThemeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, website_theme_update_dto_t *website_theme_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**website_theme_update_dto** | **[website_theme_update_dto_t](website_theme_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

