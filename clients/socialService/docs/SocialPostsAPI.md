# SocialPostsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SocialPostsAPI_createSocialPostAsync**](SocialPostsAPI.md#SocialPostsAPI_createSocialPostAsync) | **POST** /api/v2/SocialService/SocialPosts | Create a social post
[**SocialPostsAPI_createSocialPostAttachmentAsync**](SocialPostsAPI.md#SocialPostsAPI_createSocialPostAttachmentAsync) | **POST** /api/v2/SocialService/SocialPosts/{socialPostId}/Attachments | Create a social post attachment
[**SocialPostsAPI_createSocialPostCommentAsync**](SocialPostsAPI.md#SocialPostsAPI_createSocialPostCommentAsync) | **POST** /api/v2/SocialService/SocialPosts/{socialPostId}/Comments | Create a social post comment
[**SocialPostsAPI_createSocialPostReactionAsync**](SocialPostsAPI.md#SocialPostsAPI_createSocialPostReactionAsync) | **POST** /api/v2/SocialService/SocialPosts/{socialPostId}/Reactions | Create a social post reaction
[**SocialPostsAPI_deleteSocialPostAsync**](SocialPostsAPI.md#SocialPostsAPI_deleteSocialPostAsync) | **DELETE** /api/v2/SocialService/SocialPosts/{socialPostId} | Delete a social post
[**SocialPostsAPI_deleteSocialPostAttachmentAsync**](SocialPostsAPI.md#SocialPostsAPI_deleteSocialPostAttachmentAsync) | **DELETE** /api/v2/SocialService/SocialPosts/{socialPostId}/Attachments/{attachmentId} | Delete a social post attachment
[**SocialPostsAPI_deleteSocialPostCommentAsync**](SocialPostsAPI.md#SocialPostsAPI_deleteSocialPostCommentAsync) | **DELETE** /api/v2/SocialService/SocialPosts/{socialPostId}/Comments/{commentId} | Delete a social post comment
[**SocialPostsAPI_deleteSocialPostReactionAsync**](SocialPostsAPI.md#SocialPostsAPI_deleteSocialPostReactionAsync) | **DELETE** /api/v2/SocialService/SocialPosts/{socialPostId}/Reactions/{reactionId} | Delete a social post reaction
[**SocialPostsAPI_getSocialPostAsync**](SocialPostsAPI.md#SocialPostsAPI_getSocialPostAsync) | **GET** /api/v2/SocialService/SocialPosts/{socialPostId} | Get social post by ID
[**SocialPostsAPI_getSocialPostAttachmentAsync**](SocialPostsAPI.md#SocialPostsAPI_getSocialPostAttachmentAsync) | **GET** /api/v2/SocialService/SocialPosts/{socialPostId}/Attachments/{attachmentId} | Get social post attachment by ID
[**SocialPostsAPI_getSocialPostAttachmentsAsync**](SocialPostsAPI.md#SocialPostsAPI_getSocialPostAttachmentsAsync) | **GET** /api/v2/SocialService/SocialPosts/{socialPostId}/Attachments | Get social post attachments
[**SocialPostsAPI_getSocialPostAttachmentsCountAsync**](SocialPostsAPI.md#SocialPostsAPI_getSocialPostAttachmentsCountAsync) | **GET** /api/v2/SocialService/SocialPosts/{socialPostId}/Attachments/Count | Count social post attachments
[**SocialPostsAPI_getSocialPostCommentAsync**](SocialPostsAPI.md#SocialPostsAPI_getSocialPostCommentAsync) | **GET** /api/v2/SocialService/SocialPosts/{socialPostId}/Comments/{commentId} | Get social post comment by ID
[**SocialPostsAPI_getSocialPostCommentsAsync**](SocialPostsAPI.md#SocialPostsAPI_getSocialPostCommentsAsync) | **GET** /api/v2/SocialService/SocialPosts/{socialPostId}/Comments | Get social post comments
[**SocialPostsAPI_getSocialPostCommentsCountAsync**](SocialPostsAPI.md#SocialPostsAPI_getSocialPostCommentsCountAsync) | **GET** /api/v2/SocialService/SocialPosts/{socialPostId}/Comments/Count | Count social post comments
[**SocialPostsAPI_getSocialPostReactionAsync**](SocialPostsAPI.md#SocialPostsAPI_getSocialPostReactionAsync) | **GET** /api/v2/SocialService/SocialPosts/{socialPostId}/Reactions/{reactionId} | Get social post reaction by ID
[**SocialPostsAPI_getSocialPostReactionsAsync**](SocialPostsAPI.md#SocialPostsAPI_getSocialPostReactionsAsync) | **GET** /api/v2/SocialService/SocialPosts/{socialPostId}/Reactions | Get social post reactions
[**SocialPostsAPI_getSocialPostReactionsCountAsync**](SocialPostsAPI.md#SocialPostsAPI_getSocialPostReactionsCountAsync) | **GET** /api/v2/SocialService/SocialPosts/{socialPostId}/Reactions/Count | Count social post reactions
[**SocialPostsAPI_getSocialPostsAsync**](SocialPostsAPI.md#SocialPostsAPI_getSocialPostsAsync) | **GET** /api/v2/SocialService/SocialPosts | Get social posts
[**SocialPostsAPI_getSocialPostsCountAsync**](SocialPostsAPI.md#SocialPostsAPI_getSocialPostsCountAsync) | **GET** /api/v2/SocialService/SocialPosts/Count | Count social posts
[**SocialPostsAPI_updateSocialPostAsync**](SocialPostsAPI.md#SocialPostsAPI_updateSocialPostAsync) | **PUT** /api/v2/SocialService/SocialPosts/{socialPostId} | Update a social post
[**SocialPostsAPI_updateSocialPostAttachmentAsync**](SocialPostsAPI.md#SocialPostsAPI_updateSocialPostAttachmentAsync) | **PUT** /api/v2/SocialService/SocialPosts/{socialPostId}/Attachments/{attachmentId} | Update a social post attachment
[**SocialPostsAPI_updateSocialPostCommentAsync**](SocialPostsAPI.md#SocialPostsAPI_updateSocialPostCommentAsync) | **PUT** /api/v2/SocialService/SocialPosts/{socialPostId}/Comments/{commentId} | Update a social post comment
[**SocialPostsAPI_updateSocialPostReactionAsync**](SocialPostsAPI.md#SocialPostsAPI_updateSocialPostReactionAsync) | **PUT** /api/v2/SocialService/SocialPosts/{socialPostId}/Reactions/{reactionId} | Update a social post reaction


# **SocialPostsAPI_createSocialPostAsync**
```c
// Create a social post
//
// Creates a new social post for the specified social profile.
//
social_post_dto_envelope_t* SocialPostsAPI_createSocialPostAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version, social_post_create_dto_t *social_post_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**social_post_create_dto** | **[social_post_create_dto_t](social_post_create_dto.md) \*** |  | [optional] 

### Return type

[social_post_dto_envelope_t](social_post_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_createSocialPostAttachmentAsync**
```c
// Create a social post attachment
//
// Creates a new attachment for a specific social post.
//
social_post_attachment_dto_envelope_t* SocialPostsAPI_createSocialPostAttachmentAsync(apiClient_t *apiClient, char *socialPostId, char *socialProfileId, char *api_version, char *x_api_version, social_post_attachment_create_dto_t *social_post_attachment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialPostId** | **char \*** |  | 
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**social_post_attachment_create_dto** | **[social_post_attachment_create_dto_t](social_post_attachment_create_dto.md) \*** |  | [optional] 

### Return type

[social_post_attachment_dto_envelope_t](social_post_attachment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_createSocialPostCommentAsync**
```c
// Create a social post comment
//
// Creates a new comment on a specific social post.
//
empty_envelope_t* SocialPostsAPI_createSocialPostCommentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version, social_post_comment_create_dto_t *social_post_comment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialPostId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**social_post_comment_create_dto** | **[social_post_comment_create_dto_t](social_post_comment_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_createSocialPostReactionAsync**
```c
// Create a social post reaction
//
// Creates a new reaction on a specific social post.
//
social_reaction_dto_envelope_t* SocialPostsAPI_createSocialPostReactionAsync(apiClient_t *apiClient, char *socialPostId, char *socialProfileId, char *api_version, char *x_api_version, social_reaction_create_dto_t *social_reaction_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialPostId** | **char \*** |  | 
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**social_reaction_create_dto** | **[social_reaction_create_dto_t](social_reaction_create_dto.md) \*** |  | [optional] 

### Return type

[social_reaction_dto_envelope_t](social_reaction_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_deleteSocialPostAsync**
```c
// Delete a social post
//
// Deletes a social post by its ID.
//
empty_envelope_t* SocialPostsAPI_deleteSocialPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialPostId** | **char \*** |  | 
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

# **SocialPostsAPI_deleteSocialPostAttachmentAsync**
```c
// Delete a social post attachment
//
// Deletes an attachment from a specific social post.
//
empty_envelope_t* SocialPostsAPI_deleteSocialPostAttachmentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *attachmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialPostId** | **char \*** |  | 
**attachmentId** | **char \*** |  | 
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

# **SocialPostsAPI_deleteSocialPostCommentAsync**
```c
// Delete a social post comment
//
// Deletes a comment from a specific social post.
//
empty_envelope_t* SocialPostsAPI_deleteSocialPostCommentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *commentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialPostId** | **char \*** |  | 
**commentId** | **char \*** |  | 
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

# **SocialPostsAPI_deleteSocialPostReactionAsync**
```c
// Delete a social post reaction
//
// Deletes a reaction from a specific social post.
//
empty_envelope_t* SocialPostsAPI_deleteSocialPostReactionAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *reactionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialPostId** | **char \*** |  | 
**reactionId** | **char \*** |  | 
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

# **SocialPostsAPI_getSocialPostAsync**
```c
// Get social post by ID
//
// Retrieves a specific social post by its ID.
//
social_post_dto_envelope_t* SocialPostsAPI_getSocialPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialPostId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_post_dto_envelope_t](social_post_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_getSocialPostAttachmentAsync**
```c
// Get social post attachment by ID
//
// Retrieves a specific attachment from a social post by its ID.
//
empty_envelope_t* SocialPostsAPI_getSocialPostAttachmentAsync(apiClient_t *apiClient, char *socialPostId, char *attachmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialPostId** | **char \*** |  | 
**attachmentId** | **char \*** |  | 
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

# **SocialPostsAPI_getSocialPostAttachmentsAsync**
```c
// Get social post attachments
//
// Retrieves a list of attachments for a specific social post.
//
social_post_attachment_dto_list_envelope_t* SocialPostsAPI_getSocialPostAttachmentsAsync(apiClient_t *apiClient, char *socialPostId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialPostId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_post_attachment_dto_list_envelope_t](social_post_attachment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_getSocialPostAttachmentsCountAsync**
```c
// Count social post attachments
//
// Returns the count of attachments for a specific social post.
//
int32_envelope_t* SocialPostsAPI_getSocialPostAttachmentsCountAsync(apiClient_t *apiClient, char *socialPostId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialPostId** | **char \*** |  | 
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

# **SocialPostsAPI_getSocialPostCommentAsync**
```c
// Get social post comment by ID
//
// Retrieves a specific comment from a social post by its ID.
//
social_post_comment_dto_envelope_t* SocialPostsAPI_getSocialPostCommentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *commentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialPostId** | **char \*** |  | 
**commentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_post_comment_dto_envelope_t](social_post_comment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_getSocialPostCommentsAsync**
```c
// Get social post comments
//
// Retrieves a list of comments for a specific social post.
//
social_post_comment_dto_list_envelope_t* SocialPostsAPI_getSocialPostCommentsAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialPostId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_post_comment_dto_list_envelope_t](social_post_comment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_getSocialPostCommentsCountAsync**
```c
// Count social post comments
//
// Returns the count of comments for a specific social post.
//
int32_envelope_t* SocialPostsAPI_getSocialPostCommentsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialPostId** | **char \*** |  | 
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

# **SocialPostsAPI_getSocialPostReactionAsync**
```c
// Get social post reaction by ID
//
// Retrieves a specific reaction from a social post by its ID.
//
social_reaction_dto_envelope_t* SocialPostsAPI_getSocialPostReactionAsync(apiClient_t *apiClient, char *socialPostId, char *reactionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialPostId** | **char \*** |  | 
**reactionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_reaction_dto_envelope_t](social_reaction_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_getSocialPostReactionsAsync**
```c
// Get social post reactions
//
// Retrieves a list of reactions for a specific social post.
//
social_reaction_dto_list_envelope_t* SocialPostsAPI_getSocialPostReactionsAsync(apiClient_t *apiClient, char *socialPostId, char *socialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialPostId** | **char \*** |  | 
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_reaction_dto_list_envelope_t](social_reaction_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_getSocialPostReactionsCountAsync**
```c
// Count social post reactions
//
// Returns the count of reactions for a specific social post.
//
int32_envelope_t* SocialPostsAPI_getSocialPostReactionsCountAsync(apiClient_t *apiClient, char *socialPostId, char *socialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialPostId** | **char \*** |  | 
**socialProfileId** | **char \*** |  | 
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

# **SocialPostsAPI_getSocialPostsAsync**
```c
// Get social posts
//
// Retrieves a list of social posts for the specified social profile.
//
social_post_dto_list_envelope_t* SocialPostsAPI_getSocialPostsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_post_dto_list_envelope_t](social_post_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_getSocialPostsCountAsync**
```c
// Count social posts
//
// Returns the count of social posts for the specified social profile.
//
int32_envelope_t* SocialPostsAPI_getSocialPostsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
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

# **SocialPostsAPI_updateSocialPostAsync**
```c
// Update a social post
//
// Updates an existing social post by its ID.
//
empty_envelope_t* SocialPostsAPI_updateSocialPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version, social_post_update_dto_t *social_post_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialPostId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**social_post_update_dto** | **[social_post_update_dto_t](social_post_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_updateSocialPostAttachmentAsync**
```c
// Update a social post attachment
//
// Updates an existing attachment on a specific social post.
//
empty_envelope_t* SocialPostsAPI_updateSocialPostAttachmentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *attachmentId, char *api_version, char *x_api_version, social_post_attachment_update_dto_t *social_post_attachment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialPostId** | **char \*** |  | 
**attachmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**social_post_attachment_update_dto** | **[social_post_attachment_update_dto_t](social_post_attachment_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_updateSocialPostCommentAsync**
```c
// Update a social post comment
//
// Updates an existing comment on a specific social post.
//
empty_envelope_t* SocialPostsAPI_updateSocialPostCommentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *commentId, char *api_version, char *x_api_version, social_post_comment_update_dto_t *social_post_comment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialPostId** | **char \*** |  | 
**commentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**social_post_comment_update_dto** | **[social_post_comment_update_dto_t](social_post_comment_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostsAPI_updateSocialPostReactionAsync**
```c
// Update a social post reaction
//
// Updates an existing reaction on a specific social post.
//
empty_envelope_t* SocialPostsAPI_updateSocialPostReactionAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *reactionId, char *api_version, char *x_api_version, social_reaction_update_dto_t *social_reaction_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialPostId** | **char \*** |  | 
**reactionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**social_reaction_update_dto** | **[social_reaction_update_dto_t](social_reaction_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

