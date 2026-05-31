# SocialMediaPostsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SocialMediaPostsAPI_createSocialMediaPostAsync**](SocialMediaPostsAPI.md#SocialMediaPostsAPI_createSocialMediaPostAsync) | **POST** /api/v2/MarketingService/SocialMediaPosts | Create a social media post
[**SocialMediaPostsAPI_deleteSocialMediaPostAsync**](SocialMediaPostsAPI.md#SocialMediaPostsAPI_deleteSocialMediaPostAsync) | **DELETE** /api/v2/MarketingService/SocialMediaPosts/{socialmediapostId} | Delete a social media post
[**SocialMediaPostsAPI_getSocialMediaPostDetailsAsync**](SocialMediaPostsAPI.md#SocialMediaPostsAPI_getSocialMediaPostDetailsAsync) | **GET** /api/v2/MarketingService/SocialMediaPosts/{socialmediapostId} | Get social media post by ID
[**SocialMediaPostsAPI_getSocialMediaPostsCountAsync**](SocialMediaPostsAPI.md#SocialMediaPostsAPI_getSocialMediaPostsCountAsync) | **GET** /api/v2/MarketingService/SocialMediaPosts/Count | Get social media posts count
[**SocialMediaPostsAPI_getSocialMediaPostsODataAsync**](SocialMediaPostsAPI.md#SocialMediaPostsAPI_getSocialMediaPostsODataAsync) | **GET** /api/v2/MarketingService/SocialMediaPosts | Get social media posts
[**SocialMediaPostsAPI_updateSocialMediaPostAsync**](SocialMediaPostsAPI.md#SocialMediaPostsAPI_updateSocialMediaPostAsync) | **PUT** /api/v2/MarketingService/SocialMediaPosts/{socialmediapostId} | Update a social media post


# **SocialMediaPostsAPI_createSocialMediaPostAsync**
```c
// Create a social media post
//
// Creates a new social media post for the specified tenant.
//
empty_envelope_t* SocialMediaPostsAPI_createSocialMediaPostAsync(apiClient_t *apiClient, char *tenantId, social_media_post_create_dto_t *social_media_post_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**social_media_post_create_dto** | **[social_media_post_create_dto_t](social_media_post_create_dto.md) \*** |  | 
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

# **SocialMediaPostsAPI_deleteSocialMediaPostAsync**
```c
// Delete a social media post
//
// Deletes a social media post by its ID.
//
empty_envelope_t* SocialMediaPostsAPI_deleteSocialMediaPostAsync(apiClient_t *apiClient, char *tenantId, char *socialmediapostId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**socialmediapostId** | **char \*** |  | 
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

# **SocialMediaPostsAPI_getSocialMediaPostDetailsAsync**
```c
// Get social media post by ID
//
// Retrieves the details of a specific social media post by its ID.
//
social_media_post_dto_envelope_t* SocialMediaPostsAPI_getSocialMediaPostDetailsAsync(apiClient_t *apiClient, char *tenantId, char *socialmediapostId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**socialmediapostId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_media_post_dto_envelope_t](social_media_post_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialMediaPostsAPI_getSocialMediaPostsCountAsync**
```c
// Get social media posts count
//
// Returns the count of social media posts for the specified tenant using OData query options.
//
int32_envelope_t* SocialMediaPostsAPI_getSocialMediaPostsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SocialMediaPostsAPI_getSocialMediaPostsODataAsync**
```c
// Get social media posts
//
// Retrieves a collection of social media posts for the specified tenant using OData query options.
//
social_media_post_dto_list_envelope_t* SocialMediaPostsAPI_getSocialMediaPostsODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_media_post_dto_list_envelope_t](social_media_post_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialMediaPostsAPI_updateSocialMediaPostAsync**
```c
// Update a social media post
//
// Updates an existing social media post by its ID.
//
empty_envelope_t* SocialMediaPostsAPI_updateSocialMediaPostAsync(apiClient_t *apiClient, char *tenantId, char *socialmediapostId, social_media_post_update_dto_t *social_media_post_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**socialmediapostId** | **char \*** |  | 
**social_media_post_update_dto** | **[social_media_post_update_dto_t](social_media_post_update_dto.md) \*** |  | 
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

