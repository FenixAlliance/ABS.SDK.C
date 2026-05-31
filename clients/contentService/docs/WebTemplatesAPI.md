# WebTemplatesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WebTemplatesAPI_countWebTemplatesAsync**](WebTemplatesAPI.md#WebTemplatesAPI_countWebTemplatesAsync) | **GET** /api/v2/ContentService/WebTemplates/Count | Count web templates
[**WebTemplatesAPI_createWebTemplateAsync**](WebTemplatesAPI.md#WebTemplatesAPI_createWebTemplateAsync) | **POST** /api/v2/ContentService/WebTemplates | Create a web template
[**WebTemplatesAPI_deleteWebTemplateAsync**](WebTemplatesAPI.md#WebTemplatesAPI_deleteWebTemplateAsync) | **DELETE** /api/v2/ContentService/WebTemplates/{webTemplateId} | Delete a web template
[**WebTemplatesAPI_getWebTemplateByIdAsync**](WebTemplatesAPI.md#WebTemplatesAPI_getWebTemplateByIdAsync) | **GET** /api/v2/ContentService/WebTemplates/{webTemplateId} | Get web template by ID
[**WebTemplatesAPI_getWebTemplatesAsync**](WebTemplatesAPI.md#WebTemplatesAPI_getWebTemplatesAsync) | **GET** /api/v2/ContentService/WebTemplates | Get web templates
[**WebTemplatesAPI_updateWebTemplateAsync**](WebTemplatesAPI.md#WebTemplatesAPI_updateWebTemplateAsync) | **PUT** /api/v2/ContentService/WebTemplates/{webTemplateId} | Update a web template


# **WebTemplatesAPI_countWebTemplatesAsync**
```c
// Count web templates
//
// Counts all web templates for the specified tenant.
//
int32_envelope_t* WebTemplatesAPI_countWebTemplatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **WebTemplatesAPI_createWebTemplateAsync**
```c
// Create a web template
//
// Creates a new web template for the specified tenant.
//
void WebTemplatesAPI_createWebTemplateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_template_create_dto_t *web_template_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_template_create_dto** | **[web_template_create_dto_t](web_template_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebTemplatesAPI_deleteWebTemplateAsync**
```c
// Delete a web template
//
// Deletes a web template for the specified tenant.
//
void WebTemplatesAPI_deleteWebTemplateAsync(apiClient_t *apiClient, char *tenantId, char *webTemplateId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webTemplateId** | **char \*** |  | 
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

# **WebTemplatesAPI_getWebTemplateByIdAsync**
```c
// Get web template by ID
//
// Retrieves a specific web template by its identifier.
//
web_template_dto_envelope_t* WebTemplatesAPI_getWebTemplateByIdAsync(apiClient_t *apiClient, char *tenantId, char *webTemplateId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webTemplateId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_template_dto_envelope_t](web_template_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebTemplatesAPI_getWebTemplatesAsync**
```c
// Get web templates
//
// Retrieves all web templates for the specified tenant.
//
web_template_dto_list_envelope_t* WebTemplatesAPI_getWebTemplatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_template_dto_list_envelope_t](web_template_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebTemplatesAPI_updateWebTemplateAsync**
```c
// Update a web template
//
// Updates an existing web template for the specified tenant.
//
void WebTemplatesAPI_updateWebTemplateAsync(apiClient_t *apiClient, char *tenantId, char *webTemplateId, char *api_version, char *x_api_version, web_template_update_dto_t *web_template_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webTemplateId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_template_update_dto** | **[web_template_update_dto_t](web_template_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

