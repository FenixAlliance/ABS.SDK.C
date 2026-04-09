# WebContentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WebContentsAPI_countWebContentsAsync**](WebContentsAPI.md#WebContentsAPI_countWebContentsAsync) | **GET** /api/v2/ContentService/WebContents/Count | Count web contents
[**WebContentsAPI_createWebContentAsync**](WebContentsAPI.md#WebContentsAPI_createWebContentAsync) | **POST** /api/v2/ContentService/WebContents | Create a web content
[**WebContentsAPI_deleteWebContentAsync**](WebContentsAPI.md#WebContentsAPI_deleteWebContentAsync) | **DELETE** /api/v2/ContentService/WebContents/{webContentId} | Delete a web content
[**WebContentsAPI_getWebContentByIdAsync**](WebContentsAPI.md#WebContentsAPI_getWebContentByIdAsync) | **GET** /api/v2/ContentService/WebContents/{webContentId} | Get web content by ID
[**WebContentsAPI_getWebContentsAsync**](WebContentsAPI.md#WebContentsAPI_getWebContentsAsync) | **GET** /api/v2/ContentService/WebContents | Get web contents
[**WebContentsAPI_updateWebContentAsync**](WebContentsAPI.md#WebContentsAPI_updateWebContentAsync) | **PUT** /api/v2/ContentService/WebContents/{webContentId} | Update a web content


# **WebContentsAPI_countWebContentsAsync**
```c
// Count web contents
//
// Counts all web contents for the specified tenant.
//
int32_envelope_t* WebContentsAPI_countWebContentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **WebContentsAPI_createWebContentAsync**
```c
// Create a web content
//
// Creates a new web content for the specified tenant.
//
empty_envelope_t* WebContentsAPI_createWebContentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_content_create_dto_t *web_content_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_content_create_dto** | **[web_content_create_dto_t](web_content_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebContentsAPI_deleteWebContentAsync**
```c
// Delete a web content
//
// Deletes a web content for the specified tenant.
//
empty_envelope_t* WebContentsAPI_deleteWebContentAsync(apiClient_t *apiClient, char *tenantId, char *webContentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webContentId** | **char \*** |  | 
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

# **WebContentsAPI_getWebContentByIdAsync**
```c
// Get web content by ID
//
// Retrieves a specific web content by its ID.
//
web_content_dto_envelope_t* WebContentsAPI_getWebContentByIdAsync(apiClient_t *apiClient, char *tenantId, char *webContentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webContentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_content_dto_envelope_t](web_content_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebContentsAPI_getWebContentsAsync**
```c
// Get web contents
//
// Retrieves all web contents for the specified tenant.
//
web_content_dto_list_envelope_t* WebContentsAPI_getWebContentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_content_dto_list_envelope_t](web_content_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebContentsAPI_updateWebContentAsync**
```c
// Update a web content
//
// Updates an existing web content for the specified tenant.
//
empty_envelope_t* WebContentsAPI_updateWebContentAsync(apiClient_t *apiClient, char *tenantId, char *webContentId, char *api_version, char *x_api_version, web_content_update_dto_t *web_content_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webContentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_content_update_dto** | **[web_content_update_dto_t](web_content_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

