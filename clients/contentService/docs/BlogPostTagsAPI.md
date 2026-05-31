# BlogPostTagsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BlogPostTagsAPI_countBlogPostTagsAsync**](BlogPostTagsAPI.md#BlogPostTagsAPI_countBlogPostTagsAsync) | **GET** /api/v2/ContentService/BlogPostTags/Count | Count blog post tags
[**BlogPostTagsAPI_createBlogPostTagAsync**](BlogPostTagsAPI.md#BlogPostTagsAPI_createBlogPostTagAsync) | **POST** /api/v2/ContentService/BlogPostTags | Create a blog post tag
[**BlogPostTagsAPI_deleteBlogPostTagAsync**](BlogPostTagsAPI.md#BlogPostTagsAPI_deleteBlogPostTagAsync) | **DELETE** /api/v2/ContentService/BlogPostTags/{blogPostTagId} | Delete a blog post tag
[**BlogPostTagsAPI_getBlogPostTagByIdAsync**](BlogPostTagsAPI.md#BlogPostTagsAPI_getBlogPostTagByIdAsync) | **GET** /api/v2/ContentService/BlogPostTags/{blogPostTagId} | Get blog post tag by ID
[**BlogPostTagsAPI_getBlogPostTagsAsync**](BlogPostTagsAPI.md#BlogPostTagsAPI_getBlogPostTagsAsync) | **GET** /api/v2/ContentService/BlogPostTags | Get blog post tags
[**BlogPostTagsAPI_updateBlogPostTagAsync**](BlogPostTagsAPI.md#BlogPostTagsAPI_updateBlogPostTagAsync) | **PUT** /api/v2/ContentService/BlogPostTags/{blogPostTagId} | Update a blog post tag


# **BlogPostTagsAPI_countBlogPostTagsAsync**
```c
// Count blog post tags
//
// Counts all blog post tags for the specified tenant.
//
int32_envelope_t* BlogPostTagsAPI_countBlogPostTagsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **BlogPostTagsAPI_createBlogPostTagAsync**
```c
// Create a blog post tag
//
// Creates a new blog post tag for the specified tenant.
//
empty_envelope_t* BlogPostTagsAPI_createBlogPostTagAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, blog_post_tag_create_dto_t *blog_post_tag_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**blog_post_tag_create_dto** | **[blog_post_tag_create_dto_t](blog_post_tag_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostTagsAPI_deleteBlogPostTagAsync**
```c
// Delete a blog post tag
//
// Deletes a blog post tag for the specified tenant.
//
empty_envelope_t* BlogPostTagsAPI_deleteBlogPostTagAsync(apiClient_t *apiClient, char *tenantId, char *blogPostTagId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostTagId** | **char \*** |  | 
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

# **BlogPostTagsAPI_getBlogPostTagByIdAsync**
```c
// Get blog post tag by ID
//
// Retrieves a specific blog post tag by its ID.
//
blog_post_tag_dto_envelope_t* BlogPostTagsAPI_getBlogPostTagByIdAsync(apiClient_t *apiClient, char *tenantId, char *blogPostTagId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostTagId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[blog_post_tag_dto_envelope_t](blog_post_tag_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostTagsAPI_getBlogPostTagsAsync**
```c
// Get blog post tags
//
// Retrieves all blog post tags for the specified tenant.
//
blog_post_tag_dto_list_envelope_t* BlogPostTagsAPI_getBlogPostTagsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[blog_post_tag_dto_list_envelope_t](blog_post_tag_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostTagsAPI_updateBlogPostTagAsync**
```c
// Update a blog post tag
//
// Updates an existing blog post tag for the specified tenant.
//
empty_envelope_t* BlogPostTagsAPI_updateBlogPostTagAsync(apiClient_t *apiClient, char *tenantId, char *blogPostTagId, char *api_version, char *x_api_version, blog_post_tag_update_dto_t *blog_post_tag_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostTagId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**blog_post_tag_update_dto** | **[blog_post_tag_update_dto_t](blog_post_tag_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

