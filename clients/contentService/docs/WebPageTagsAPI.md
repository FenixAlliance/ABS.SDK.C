# WebPageTagsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WebPageTagsAPI_createWebPageTagAsync**](WebPageTagsAPI.md#WebPageTagsAPI_createWebPageTagAsync) | **POST** /api/v2/ContentService/WebPageTags | Create a web page tag
[**WebPageTagsAPI_deleteWebPageTagAsync**](WebPageTagsAPI.md#WebPageTagsAPI_deleteWebPageTagAsync) | **DELETE** /api/v2/ContentService/WebPageTags/{webPageTagId} | Delete a web page tag
[**WebPageTagsAPI_getWebPageTagByIdAsync**](WebPageTagsAPI.md#WebPageTagsAPI_getWebPageTagByIdAsync) | **GET** /api/v2/ContentService/WebPageTags/{webPageTagId} | Get web page tag by ID
[**WebPageTagsAPI_getWebPageTagsAsync**](WebPageTagsAPI.md#WebPageTagsAPI_getWebPageTagsAsync) | **GET** /api/v2/ContentService/WebPageTags | Get web page tags
[**WebPageTagsAPI_updateWebPageTagAsync**](WebPageTagsAPI.md#WebPageTagsAPI_updateWebPageTagAsync) | **PUT** /api/v2/ContentService/WebPageTags/{webPageTagId} | Update a web page tag


# **WebPageTagsAPI_createWebPageTagAsync**
```c
// Create a web page tag
//
// Creates a new web page tag for the specified tenant.
//
empty_envelope_t* WebPageTagsAPI_createWebPageTagAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_page_tag_create_dto_t *web_page_tag_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_page_tag_create_dto** | **[web_page_tag_create_dto_t](web_page_tag_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebPageTagsAPI_deleteWebPageTagAsync**
```c
// Delete a web page tag
//
// Deletes a web page tag for the specified tenant.
//
empty_envelope_t* WebPageTagsAPI_deleteWebPageTagAsync(apiClient_t *apiClient, char *tenantId, char *webPageTagId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageTagId** | **char \*** |  | 
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

# **WebPageTagsAPI_getWebPageTagByIdAsync**
```c
// Get web page tag by ID
//
// Retrieves a specific web page tag by its ID.
//
web_page_tag_dto_envelope_t* WebPageTagsAPI_getWebPageTagByIdAsync(apiClient_t *apiClient, char *tenantId, char *webPageTagId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageTagId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_page_tag_dto_envelope_t](web_page_tag_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebPageTagsAPI_getWebPageTagsAsync**
```c
// Get web page tags
//
// Retrieves all web page tags for the specified tenant.
//
web_page_tag_dto_list_envelope_t* WebPageTagsAPI_getWebPageTagsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_page_tag_dto_list_envelope_t](web_page_tag_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebPageTagsAPI_updateWebPageTagAsync**
```c
// Update a web page tag
//
// Updates an existing web page tag for the specified tenant.
//
empty_envelope_t* WebPageTagsAPI_updateWebPageTagAsync(apiClient_t *apiClient, char *tenantId, char *webPageTagId, char *api_version, char *x_api_version, web_page_tag_update_dto_t *web_page_tag_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageTagId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_page_tag_update_dto** | **[web_page_tag_update_dto_t](web_page_tag_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

