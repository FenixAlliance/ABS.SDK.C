# WebPagesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WebPagesAPI_countWebPagesAsync**](WebPagesAPI.md#WebPagesAPI_countWebPagesAsync) | **GET** /api/v2/ContentService/WebPages/Count | Count web pages
[**WebPagesAPI_createWebPageAsync**](WebPagesAPI.md#WebPagesAPI_createWebPageAsync) | **POST** /api/v2/ContentService/WebPages | Create a web page
[**WebPagesAPI_createWebPageCategoryRelationAsync**](WebPagesAPI.md#WebPagesAPI_createWebPageCategoryRelationAsync) | **POST** /api/v2/ContentService/WebPages/{webPageId}/Categories | Create a web page category relation
[**WebPagesAPI_createWebPageTagRelationAsync**](WebPagesAPI.md#WebPagesAPI_createWebPageTagRelationAsync) | **POST** /api/v2/ContentService/WebPages/{webPageId}/Tags | Create a web page tag relation
[**WebPagesAPI_deleteWebPageAsync**](WebPagesAPI.md#WebPagesAPI_deleteWebPageAsync) | **DELETE** /api/v2/ContentService/WebPages/{webPageId} | Delete a web page
[**WebPagesAPI_getCategoriesByWebPageAsync**](WebPagesAPI.md#WebPagesAPI_getCategoriesByWebPageAsync) | **GET** /api/v2/ContentService/WebPages/{webPageId}/Categories | Get categories by web page
[**WebPagesAPI_getTagsByWebPageAsync**](WebPagesAPI.md#WebPagesAPI_getTagsByWebPageAsync) | **GET** /api/v2/ContentService/WebPages/{webPageId}/Tags | Get tags by web page
[**WebPagesAPI_getWebPageByIdAsync**](WebPagesAPI.md#WebPagesAPI_getWebPageByIdAsync) | **GET** /api/v2/ContentService/WebPages/{webPageId} | Get web page by ID
[**WebPagesAPI_getWebPagesAsync**](WebPagesAPI.md#WebPagesAPI_getWebPagesAsync) | **GET** /api/v2/ContentService/WebPages | Get web pages
[**WebPagesAPI_relateWebPageToCategoryAsync**](WebPagesAPI.md#WebPagesAPI_relateWebPageToCategoryAsync) | **POST** /api/v2/ContentService/WebPages/{webPageId}/Categories/{categoryId} | Relate web page to category
[**WebPagesAPI_relateWebPageToTagAsync**](WebPagesAPI.md#WebPagesAPI_relateWebPageToTagAsync) | **POST** /api/v2/ContentService/WebPages/{webPageId}/Tags/{tagId} | Relate web page to tag
[**WebPagesAPI_unrelateWebPageCategoryAsync**](WebPagesAPI.md#WebPagesAPI_unrelateWebPageCategoryAsync) | **DELETE** /api/v2/ContentService/WebPages/{webPageId}/Categories/{categoryId} | Unrelate web page from category
[**WebPagesAPI_unrelateWebPageTagAsync**](WebPagesAPI.md#WebPagesAPI_unrelateWebPageTagAsync) | **DELETE** /api/v2/ContentService/WebPages/{webPageId}/Tags/{tagId} | Unrelate web page from tag
[**WebPagesAPI_updateWebPageAsync**](WebPagesAPI.md#WebPagesAPI_updateWebPageAsync) | **PUT** /api/v2/ContentService/WebPages/{webPageId} | Update a web page


# **WebPagesAPI_countWebPagesAsync**
```c
// Count web pages
//
// Counts all web pages for the specified tenant.
//
int32_envelope_t* WebPagesAPI_countWebPagesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **WebPagesAPI_createWebPageAsync**
```c
// Create a web page
//
// Creates a new web page for the specified tenant.
//
void WebPagesAPI_createWebPageAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_page_create_dto_t *web_page_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_page_create_dto** | **[web_page_create_dto_t](web_page_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebPagesAPI_createWebPageCategoryRelationAsync**
```c
// Create a web page category relation
//
// Creates a new category and relates it to a web page.
//
void WebPagesAPI_createWebPageCategoryRelationAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *api_version, char *x_api_version, web_page_category_create_dto_t *web_page_category_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_page_category_create_dto** | **[web_page_category_create_dto_t](web_page_category_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebPagesAPI_createWebPageTagRelationAsync**
```c
// Create a web page tag relation
//
// Creates a new tag and relates it to a web page.
//
void WebPagesAPI_createWebPageTagRelationAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *api_version, char *x_api_version, web_page_tag_create_dto_t *web_page_tag_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_page_tag_create_dto** | **[web_page_tag_create_dto_t](web_page_tag_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebPagesAPI_deleteWebPageAsync**
```c
// Delete a web page
//
// Deletes a web page for the specified tenant.
//
void WebPagesAPI_deleteWebPageAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageId** | **char \*** |  | 
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

# **WebPagesAPI_getCategoriesByWebPageAsync**
```c
// Get categories by web page
//
// Retrieves all categories related to a specific web page.
//
web_page_category_dto_list_envelope_t* WebPagesAPI_getCategoriesByWebPageAsync(apiClient_t *apiClient, char *webPageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**webPageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_page_category_dto_list_envelope_t](web_page_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebPagesAPI_getTagsByWebPageAsync**
```c
// Get tags by web page
//
// Retrieves all tags related to a specific web page.
//
web_page_tag_dto_list_envelope_t* WebPagesAPI_getTagsByWebPageAsync(apiClient_t *apiClient, char *webPageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**webPageId** | **char \*** |  | 
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

# **WebPagesAPI_getWebPageByIdAsync**
```c
// Get web page by ID
//
// Retrieves a specific web page by its identifier.
//
web_page_dto_envelope_t* WebPagesAPI_getWebPageByIdAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_page_dto_envelope_t](web_page_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebPagesAPI_getWebPagesAsync**
```c
// Get web pages
//
// Retrieves all web pages for the specified tenant.
//
web_page_dto_list_envelope_t* WebPagesAPI_getWebPagesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_page_dto_list_envelope_t](web_page_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebPagesAPI_relateWebPageToCategoryAsync**
```c
// Relate web page to category
//
// Relates an existing category to a web page.
//
void WebPagesAPI_relateWebPageToCategoryAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *categoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageId** | **char \*** |  | 
**categoryId** | **char \*** |  | 
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

# **WebPagesAPI_relateWebPageToTagAsync**
```c
// Relate web page to tag
//
// Relates an existing tag to a web page.
//
void WebPagesAPI_relateWebPageToTagAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *tagId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageId** | **char \*** |  | 
**tagId** | **char \*** |  | 
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

# **WebPagesAPI_unrelateWebPageCategoryAsync**
```c
// Unrelate web page from category
//
// Removes the relationship between a web page and a category.
//
void WebPagesAPI_unrelateWebPageCategoryAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *categoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageId** | **char \*** |  | 
**categoryId** | **char \*** |  | 
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

# **WebPagesAPI_unrelateWebPageTagAsync**
```c
// Unrelate web page from tag
//
// Removes the relationship between a web page and a tag.
//
void WebPagesAPI_unrelateWebPageTagAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *tagId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageId** | **char \*** |  | 
**tagId** | **char \*** |  | 
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

# **WebPagesAPI_updateWebPageAsync**
```c
// Update a web page
//
// Updates an existing web page for the specified tenant.
//
void WebPagesAPI_updateWebPageAsync(apiClient_t *apiClient, char *tenantId, char *webPageId, char *api_version, char *x_api_version, web_page_update_dto_t *web_page_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_page_update_dto** | **[web_page_update_dto_t](web_page_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

