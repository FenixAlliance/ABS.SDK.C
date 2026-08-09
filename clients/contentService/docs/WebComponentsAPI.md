# WebComponentsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WebComponentsAPI_countWebComponentsAsync**](WebComponentsAPI.md#WebComponentsAPI_countWebComponentsAsync) | **GET** /api/v2/ContentService/WebComponents/Count | Count web components
[**WebComponentsAPI_createWebComponentAsync**](WebComponentsAPI.md#WebComponentsAPI_createWebComponentAsync) | **POST** /api/v2/ContentService/WebComponents | Create a web component
[**WebComponentsAPI_deleteWebComponentAsync**](WebComponentsAPI.md#WebComponentsAPI_deleteWebComponentAsync) | **DELETE** /api/v2/ContentService/WebComponents/{webComponentId} | Delete a web component
[**WebComponentsAPI_getWebComponentByIdAsync**](WebComponentsAPI.md#WebComponentsAPI_getWebComponentByIdAsync) | **GET** /api/v2/ContentService/WebComponents/{webComponentId} | Get web component by ID
[**WebComponentsAPI_getWebComponentsAsync**](WebComponentsAPI.md#WebComponentsAPI_getWebComponentsAsync) | **GET** /api/v2/ContentService/WebComponents | Get web components
[**WebComponentsAPI_updateWebComponentAsync**](WebComponentsAPI.md#WebComponentsAPI_updateWebComponentAsync) | **PUT** /api/v2/ContentService/WebComponents/{webComponentId} | Update a web component


# **WebComponentsAPI_countWebComponentsAsync**
```c
// Count web components
//
// Counts all web components for the specified tenant.
//
int32_envelope_t* WebComponentsAPI_countWebComponentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_component_dto_collection_query_parameters_t *web_component_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_component_dto_collection_query_parameters** | **[web_component_dto_collection_query_parameters_t](web_component_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebComponentsAPI_createWebComponentAsync**
```c
// Create a web component
//
// Creates a new web component for the specified tenant.
//
empty_envelope_t* WebComponentsAPI_createWebComponentAsync(apiClient_t *apiClient, char *tenantId, web_component_create_dto_t *web_component_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**web_component_create_dto** | **[web_component_create_dto_t](web_component_create_dto.md) \*** |  | 
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

# **WebComponentsAPI_deleteWebComponentAsync**
```c
// Delete a web component
//
// Deletes a web component for the specified tenant.
//
empty_envelope_t* WebComponentsAPI_deleteWebComponentAsync(apiClient_t *apiClient, char *tenantId, char *webComponentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webComponentId** | **char \*** |  | 
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

# **WebComponentsAPI_getWebComponentByIdAsync**
```c
// Get web component by ID
//
// Retrieves a specific web component by its identifier.
//
web_component_dto_envelope_t* WebComponentsAPI_getWebComponentByIdAsync(apiClient_t *apiClient, char *tenantId, char *webComponentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webComponentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_component_dto_envelope_t](web_component_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebComponentsAPI_getWebComponentsAsync**
```c
// Get web components
//
// Retrieves all web components for the specified tenant.
//
web_component_dto_list_envelope_t* WebComponentsAPI_getWebComponentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_component_dto_collection_query_parameters_t *web_component_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_component_dto_collection_query_parameters** | **[web_component_dto_collection_query_parameters_t](web_component_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[web_component_dto_list_envelope_t](web_component_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebComponentsAPI_updateWebComponentAsync**
```c
// Update a web component
//
// Updates an existing web component for the specified tenant.
//
empty_envelope_t* WebComponentsAPI_updateWebComponentAsync(apiClient_t *apiClient, char *tenantId, char *webComponentId, web_component_update_dto_t *web_component_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webComponentId** | **char \*** |  | 
**web_component_update_dto** | **[web_component_update_dto_t](web_component_update_dto.md) \*** |  | 
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

