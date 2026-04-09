# BlogPostsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BlogPostsAPI_createBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_createBlogPostAsync) | **POST** /api/v2/ContentService/BlogPosts | Create a new blog post
[**BlogPostsAPI_createCategoryForBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_createCategoryForBlogPostAsync) | **POST** /api/v2/ContentService/BlogPosts/{blogPostId}/Categories | Create a category for a blog post
[**BlogPostsAPI_createCommentForBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_createCommentForBlogPostAsync) | **POST** /api/v2/ContentService/BlogPosts/{blogPostId}/Comments | Create a comment for a blog post
[**BlogPostsAPI_createTagForBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_createTagForBlogPostAsync) | **POST** /api/v2/ContentService/BlogPosts/{blogPostId}/Tags | Create a tag for a blog post
[**BlogPostsAPI_deleteBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_deleteBlogPostAsync) | **DELETE** /api/v2/ContentService/BlogPosts/{blogPostId} | Delete a blog post
[**BlogPostsAPI_deleteCommentFromBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_deleteCommentFromBlogPostAsync) | **DELETE** /api/v2/ContentService/BlogPosts/{blogPostId}/Comments/{commentId} | Delete a blog post comment
[**BlogPostsAPI_getBlogPostByIdAsync**](BlogPostsAPI.md#BlogPostsAPI_getBlogPostByIdAsync) | **GET** /api/v2/ContentService/BlogPosts/{blogPostId} | Get a blog post by ID
[**BlogPostsAPI_getBlogPostsAsync**](BlogPostsAPI.md#BlogPostsAPI_getBlogPostsAsync) | **GET** /api/v2/ContentService/BlogPosts | Retrieve a list of blog posts
[**BlogPostsAPI_getBlogPostsCountAsync**](BlogPostsAPI.md#BlogPostsAPI_getBlogPostsCountAsync) | **GET** /api/v2/ContentService/BlogPosts/Count | Get the count of blog posts
[**BlogPostsAPI_getCategoriesForBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_getCategoriesForBlogPostAsync) | **GET** /api/v2/ContentService/BlogPosts/{blogPostId}/Categories | Get categories for a blog post
[**BlogPostsAPI_getCommentsForBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_getCommentsForBlogPostAsync) | **GET** /api/v2/ContentService/BlogPosts/{blogPostId}/Comments | Get comments for a blog post
[**BlogPostsAPI_getRepliesForCommentAsync**](BlogPostsAPI.md#BlogPostsAPI_getRepliesForCommentAsync) | **GET** /api/v2/ContentService/BlogPosts/{blogPostId}/Comments/{commentId}/Replies | Get replies for a comment
[**BlogPostsAPI_getTagsForBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_getTagsForBlogPostAsync) | **GET** /api/v2/ContentService/BlogPosts/{blogPostId}/Tags | Get tags for a blog post
[**BlogPostsAPI_relateCategoryToBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_relateCategoryToBlogPostAsync) | **POST** /api/v2/ContentService/BlogPosts/{blogPostId}/Categories/{categoryId} | Relate an existing category to a blog post
[**BlogPostsAPI_relateTagToBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_relateTagToBlogPostAsync) | **POST** /api/v2/ContentService/BlogPosts/{blogPostId}/Tags/{tagId} | Relate an existing tag to a blog post
[**BlogPostsAPI_replyToCommentAsync**](BlogPostsAPI.md#BlogPostsAPI_replyToCommentAsync) | **POST** /api/v2/ContentService/BlogPosts/{blogPostId}/Comments/{commentId}/Reply | Reply to a blog post comment
[**BlogPostsAPI_unrelateCategoryFromBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_unrelateCategoryFromBlogPostAsync) | **DELETE** /api/v2/ContentService/BlogPosts/{blogPostId}/Categories/{categoryId} | Remove a category from a blog post
[**BlogPostsAPI_unrelateTagFromBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_unrelateTagFromBlogPostAsync) | **DELETE** /api/v2/ContentService/BlogPosts/{blogPostId}/Tags/{tagId} | Remove a tag from a blog post
[**BlogPostsAPI_updateBlogPostAsync**](BlogPostsAPI.md#BlogPostsAPI_updateBlogPostAsync) | **PUT** /api/v2/ContentService/BlogPosts/{blogPostId} | Update a blog post


# **BlogPostsAPI_createBlogPostAsync**
```c
// Create a new blog post
//
// Creates a new blog post for the specified tenant.
//
empty_envelope_t* BlogPostsAPI_createBlogPostAsync(apiClient_t *apiClient, char *tenantId, blog_post_create_dto_t *blog_post_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blog_post_create_dto** | **[blog_post_create_dto_t](blog_post_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_createCategoryForBlogPostAsync**
```c
// Create a category for a blog post
//
// Creates a new category and relates it to a specific blog post.
//
empty_envelope_t* BlogPostsAPI_createCategoryForBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, blog_post_category_create_dto_t *blog_post_category_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostId** | **char \*** |  | 
**blog_post_category_create_dto** | **[blog_post_category_create_dto_t](blog_post_category_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_createCommentForBlogPostAsync**
```c
// Create a comment for a blog post
//
// Creates a new comment on a specific blog post.
//
empty_envelope_t* BlogPostsAPI_createCommentForBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, blog_post_comment_create_dto_t *blog_post_comment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostId** | **char \*** |  | 
**blog_post_comment_create_dto** | **[blog_post_comment_create_dto_t](blog_post_comment_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_createTagForBlogPostAsync**
```c
// Create a tag for a blog post
//
// Creates a new tag and relates it to a specific blog post.
//
empty_envelope_t* BlogPostsAPI_createTagForBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, blog_post_tag_create_dto_t *blog_post_tag_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostId** | **char \*** |  | 
**blog_post_tag_create_dto** | **[blog_post_tag_create_dto_t](blog_post_tag_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_deleteBlogPostAsync**
```c
// Delete a blog post
//
// Deletes a blog post for the specified tenant.
//
empty_envelope_t* BlogPostsAPI_deleteBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_deleteCommentFromBlogPostAsync**
```c
// Delete a blog post comment
//
// Deletes a comment from a specific blog post.
//
empty_envelope_t* BlogPostsAPI_deleteCommentFromBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *commentId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostId** | **char \*** |  | 
**commentId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_getBlogPostByIdAsync**
```c
// Get a blog post by ID
//
// Retrieves a single blog post by its unique identifier.
//
blog_post_dto_envelope_t* BlogPostsAPI_getBlogPostByIdAsync(apiClient_t *apiClient, char *blogPostId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**blogPostId** | **char \*** |  | 

### Return type

[blog_post_dto_envelope_t](blog_post_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_getBlogPostsAsync**
```c
// Retrieve a list of blog posts
//
// Retrieves all blog posts, optionally filtered by tenant using OData query options.
//
blog_post_dto_list_envelope_t* BlogPostsAPI_getBlogPostsAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 

### Return type

[blog_post_dto_list_envelope_t](blog_post_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_getBlogPostsCountAsync**
```c
// Get the count of blog posts
//
// Returns the total count of blog posts, optionally filtered by tenant using OData query options.
//
int32_envelope_t* BlogPostsAPI_getBlogPostsCountAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_getCategoriesForBlogPostAsync**
```c
// Get categories for a blog post
//
// Retrieves all categories related to a specific blog post.
//
blog_post_category_dto_list_envelope_t* BlogPostsAPI_getCategoriesForBlogPostAsync(apiClient_t *apiClient, char *blogPostId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**blogPostId** | **char \*** |  | 

### Return type

[blog_post_category_dto_list_envelope_t](blog_post_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_getCommentsForBlogPostAsync**
```c
// Get comments for a blog post
//
// Retrieves all comments for a specific blog post.
//
blog_post_comment_dto_list_envelope_t* BlogPostsAPI_getCommentsForBlogPostAsync(apiClient_t *apiClient, char *blogPostId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**blogPostId** | **char \*** |  | 

### Return type

[blog_post_comment_dto_list_envelope_t](blog_post_comment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_getRepliesForCommentAsync**
```c
// Get replies for a comment
//
// Retrieves all replies for a specific blog post comment.
//
blog_post_comment_dto_list_envelope_t* BlogPostsAPI_getRepliesForCommentAsync(apiClient_t *apiClient, char *commentId, char *blogPostId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**commentId** | **char \*** |  | 
**blogPostId** | **char \*** |  | 

### Return type

[blog_post_comment_dto_list_envelope_t](blog_post_comment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_getTagsForBlogPostAsync**
```c
// Get tags for a blog post
//
// Retrieves all tags related to a specific blog post.
//
blog_post_tag_dto_list_envelope_t* BlogPostsAPI_getTagsForBlogPostAsync(apiClient_t *apiClient, char *blogPostId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**blogPostId** | **char \*** |  | 

### Return type

[blog_post_tag_dto_list_envelope_t](blog_post_tag_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_relateCategoryToBlogPostAsync**
```c
// Relate an existing category to a blog post
//
// Creates a relationship between an existing category and a blog post.
//
empty_envelope_t* BlogPostsAPI_relateCategoryToBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *categoryId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostId** | **char \*** |  | 
**categoryId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_relateTagToBlogPostAsync**
```c
// Relate an existing tag to a blog post
//
// Creates a relationship between an existing tag and a blog post.
//
empty_envelope_t* BlogPostsAPI_relateTagToBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *tagId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostId** | **char \*** |  | 
**tagId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_replyToCommentAsync**
```c
// Reply to a blog post comment
//
// Creates a reply to an existing comment on a blog post.
//
empty_envelope_t* BlogPostsAPI_replyToCommentAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *commentId, blog_post_comment_create_dto_t *blog_post_comment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostId** | **char \*** |  | 
**commentId** | **char \*** |  | 
**blog_post_comment_create_dto** | **[blog_post_comment_create_dto_t](blog_post_comment_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_unrelateCategoryFromBlogPostAsync**
```c
// Remove a category from a blog post
//
// Removes the relationship between a category and a blog post.
//
empty_envelope_t* BlogPostsAPI_unrelateCategoryFromBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *categoryId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostId** | **char \*** |  | 
**categoryId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_unrelateTagFromBlogPostAsync**
```c
// Remove a tag from a blog post
//
// Removes the relationship between a tag and a blog post.
//
empty_envelope_t* BlogPostsAPI_unrelateTagFromBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *tagId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostId** | **char \*** |  | 
**tagId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlogPostsAPI_updateBlogPostAsync**
```c
// Update a blog post
//
// Updates an existing blog post for the specified tenant.
//
empty_envelope_t* BlogPostsAPI_updateBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, blog_post_update_dto_t *blog_post_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blogPostId** | **char \*** |  | 
**blog_post_update_dto** | **[blog_post_update_dto_t](blog_post_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

