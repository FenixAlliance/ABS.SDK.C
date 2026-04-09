# WebPageCategoriesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WebPageCategoriesAPI_createWebPageCategoryAsync**](WebPageCategoriesAPI.md#WebPageCategoriesAPI_createWebPageCategoryAsync) | **POST** /api/v2/ContentService/WebPageCategories | Create a web page category
[**WebPageCategoriesAPI_deleteWebPageCategoryAsync**](WebPageCategoriesAPI.md#WebPageCategoriesAPI_deleteWebPageCategoryAsync) | **DELETE** /api/v2/ContentService/WebPageCategories/{webPageCategoryId} | Delete a web page category
[**WebPageCategoriesAPI_getWebPageCategoriesAsync**](WebPageCategoriesAPI.md#WebPageCategoriesAPI_getWebPageCategoriesAsync) | **GET** /api/v2/ContentService/WebPageCategories | Get web page categories
[**WebPageCategoriesAPI_getWebPageCategoryByIdAsync**](WebPageCategoriesAPI.md#WebPageCategoriesAPI_getWebPageCategoryByIdAsync) | **GET** /api/v2/ContentService/WebPageCategories/{webPageCategoryId} | Get web page category by ID
[**WebPageCategoriesAPI_updateWebPageCategoryAsync**](WebPageCategoriesAPI.md#WebPageCategoriesAPI_updateWebPageCategoryAsync) | **PUT** /api/v2/ContentService/WebPageCategories/{webPageCategoryId} | Update a web page category


# **WebPageCategoriesAPI_createWebPageCategoryAsync**
```c
// Create a web page category
//
// Creates a new web page category for the specified tenant.
//
empty_envelope_t* WebPageCategoriesAPI_createWebPageCategoryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_page_category_create_dto_t *web_page_category_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_page_category_create_dto** | **[web_page_category_create_dto_t](web_page_category_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebPageCategoriesAPI_deleteWebPageCategoryAsync**
```c
// Delete a web page category
//
// Deletes a web page category for the specified tenant.
//
empty_envelope_t* WebPageCategoriesAPI_deleteWebPageCategoryAsync(apiClient_t *apiClient, char *tenantId, char *webPageCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageCategoryId** | **char \*** |  | 
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

# **WebPageCategoriesAPI_getWebPageCategoriesAsync**
```c
// Get web page categories
//
// Retrieves all web page categories for the specified tenant.
//
web_page_category_dto_list_envelope_t* WebPageCategoriesAPI_getWebPageCategoriesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **WebPageCategoriesAPI_getWebPageCategoryByIdAsync**
```c
// Get web page category by ID
//
// Retrieves a specific web page category by its ID.
//
web_page_category_dto_envelope_t* WebPageCategoriesAPI_getWebPageCategoryByIdAsync(apiClient_t *apiClient, char *tenantId, char *webPageCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_page_category_dto_envelope_t](web_page_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebPageCategoriesAPI_updateWebPageCategoryAsync**
```c
// Update a web page category
//
// Updates an existing web page category for the specified tenant.
//
empty_envelope_t* WebPageCategoriesAPI_updateWebPageCategoryAsync(apiClient_t *apiClient, char *tenantId, char *webPageCategoryId, char *api_version, char *x_api_version, web_page_category_update_dto_t *web_page_category_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**webPageCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_page_category_update_dto** | **[web_page_category_update_dto_t](web_page_category_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

