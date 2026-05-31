# BlogPostCategoriesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BlogPostCategoriesAPI_countBlogPostCategoriesAsync**](BlogPostCategoriesAPI.md#BlogPostCategoriesAPI_countBlogPostCategoriesAsync) | **GET** /api/v2/ContentService/BlogPostCategories/Count | Count blog post categories
[**BlogPostCategoriesAPI_createBlogPostCategoryAsync**](BlogPostCategoriesAPI.md#BlogPostCategoriesAPI_createBlogPostCategoryAsync) | **POST** /api/v2/ContentService/BlogPostCategories | Create a blog post category
[**BlogPostCategoriesAPI_deleteBlogPostCategoryAsync**](BlogPostCategoriesAPI.md#BlogPostCategoriesAPI_deleteBlogPostCategoryAsync) | **DELETE** /api/v2/ContentService/BlogPostCategories/{blogPostCategoryId} | Delete a blog post category
[**BlogPostCategoriesAPI_getBlogPostCategoriesAsync**](BlogPostCategoriesAPI.md#BlogPostCategoriesAPI_getBlogPostCategoriesAsync) | **GET** /api/v2/ContentService/BlogPostCategories | Get blog post categories
[**BlogPostCategoriesAPI_getBlogPostCategoryByIdAsync**](BlogPostCategoriesAPI.md#BlogPostCategoriesAPI_getBlogPostCategoryByIdAsync) | **GET** /api/v2/ContentService/BlogPostCategories/{blogPostCategoryId} | Get blog post category by ID
[**BlogPostCategoriesAPI_updateBlogPostCategoryAsync**](BlogPostCategoriesAPI.md#BlogPostCategoriesAPI_updateBlogPostCategoryAsync) | **PUT** /api/v2/ContentService/BlogPostCategories/{blogPostCategoryId} | Update a blog post category


# **BlogPostCategoriesAPI_countBlogPostCategoriesAsync**
```c
// Count blog post categories
//
// Counts all blog post categories for the specified tenant.
//
int32_envelope_t* BlogPostCategoriesAPI_countBlogPostCategoriesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **BlogPostCategoriesAPI_createBlogPostCategoryAsync**
```c
// Create a blog post category
//
// Creates a new blog post category for the specified tenant.
//
empty_envelope_t* BlogPostCategoriesAPI_createBlogPostCategoryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, blog_post_category_create_dto_t *blog_post_category_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**blog_post_category_create_dto** | **[blog_post_category_create_dto_t](blog_post_category_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostCategoriesAPI_deleteBlogPostCategoryAsync**
```c
// Delete a blog post category
//
// Deletes a blog post category for the specified tenant.
//
empty_envelope_t* BlogPostCategoriesAPI_deleteBlogPostCategoryAsync(apiClient_t *apiClient, char *tenantId, char *blogPostCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostCategoryId** | **char \*** |  | 
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

# **BlogPostCategoriesAPI_getBlogPostCategoriesAsync**
```c
// Get blog post categories
//
// Retrieves all blog post categories for the specified tenant.
//
blog_post_category_dto_list_envelope_t* BlogPostCategoriesAPI_getBlogPostCategoriesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[blog_post_category_dto_list_envelope_t](blog_post_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostCategoriesAPI_getBlogPostCategoryByIdAsync**
```c
// Get blog post category by ID
//
// Retrieves a specific blog post category by its ID.
//
blog_post_category_dto_envelope_t* BlogPostCategoriesAPI_getBlogPostCategoryByIdAsync(apiClient_t *apiClient, char *tenantId, char *blogPostCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[blog_post_category_dto_envelope_t](blog_post_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostCategoriesAPI_updateBlogPostCategoryAsync**
```c
// Update a blog post category
//
// Updates an existing blog post category for the specified tenant.
//
empty_envelope_t* BlogPostCategoriesAPI_updateBlogPostCategoryAsync(apiClient_t *apiClient, char *tenantId, char *blogPostCategoryId, char *api_version, char *x_api_version, blog_post_category_update_dto_t *blog_post_category_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**blog_post_category_update_dto** | **[blog_post_category_update_dto_t](blog_post_category_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

