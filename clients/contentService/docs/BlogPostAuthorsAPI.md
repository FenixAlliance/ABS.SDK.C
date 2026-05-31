# BlogPostAuthorsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BlogPostAuthorsAPI_countBlogPostsByAuthorAsync**](BlogPostAuthorsAPI.md#BlogPostAuthorsAPI_countBlogPostsByAuthorAsync) | **GET** /api/v2/ContentService/BlogPostAuthors/{authorId}/BlogPosts/Count | Count blog posts by author
[**BlogPostAuthorsAPI_getBlogAuthorByIdAsync**](BlogPostAuthorsAPI.md#BlogPostAuthorsAPI_getBlogAuthorByIdAsync) | **GET** /api/v2/ContentService/BlogPostAuthors/{authorId} | Get blog author by ID
[**BlogPostAuthorsAPI_getBlogAuthorsAsync**](BlogPostAuthorsAPI.md#BlogPostAuthorsAPI_getBlogAuthorsAsync) | **GET** /api/v2/ContentService/BlogPostAuthors | Get blog authors
[**BlogPostAuthorsAPI_getBlogPostsByAuthorAsync**](BlogPostAuthorsAPI.md#BlogPostAuthorsAPI_getBlogPostsByAuthorAsync) | **GET** /api/v2/ContentService/BlogPostAuthors/{authorId}/BlogPosts | Get blog posts by author


# **BlogPostAuthorsAPI_countBlogPostsByAuthorAsync**
```c
// Count blog posts by author
//
// Returns the count of blog posts written by a specific author.
//
int32_envelope_t* BlogPostAuthorsAPI_countBlogPostsByAuthorAsync(apiClient_t *apiClient, char *authorId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**authorId** | **char \*** |  | 
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

# **BlogPostAuthorsAPI_getBlogAuthorByIdAsync**
```c
// Get blog author by ID
//
// Retrieves a specific blog author by their identifier.
//
blog_author_dto_envelope_t* BlogPostAuthorsAPI_getBlogAuthorByIdAsync(apiClient_t *apiClient, char *authorId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**authorId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[blog_author_dto_envelope_t](blog_author_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostAuthorsAPI_getBlogAuthorsAsync**
```c
// Get blog authors
//
// Retrieves all blog authors, optionally filtered by tenant.
//
blog_author_dto_list_envelope_t* BlogPostAuthorsAPI_getBlogAuthorsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[blog_author_dto_list_envelope_t](blog_author_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostAuthorsAPI_getBlogPostsByAuthorAsync**
```c
// Get blog posts by author
//
// Retrieves all blog posts written by a specific author.
//
blog_post_dto_list_envelope_t* BlogPostAuthorsAPI_getBlogPostsByAuthorAsync(apiClient_t *apiClient, char *authorId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**authorId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[blog_post_dto_list_envelope_t](blog_post_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

