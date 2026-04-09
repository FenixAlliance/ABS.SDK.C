# SocialFeedsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SocialFeedsAPI_createFeedPostAsync**](SocialFeedsAPI.md#SocialFeedsAPI_createFeedPostAsync) | **POST** /api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts | Create a social feed post
[**SocialFeedsAPI_deleteFeedPostAsync**](SocialFeedsAPI.md#SocialFeedsAPI_deleteFeedPostAsync) | **DELETE** /api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts/{feedPostId} | Delete a social feed post
[**SocialFeedsAPI_getFeedNotifications**](SocialFeedsAPI.md#SocialFeedsAPI_getFeedNotifications) | **GET** /api/v2/SocialService/SocialFeeds | Get social feeds
[**SocialFeedsAPI_getFeedPostAsync**](SocialFeedsAPI.md#SocialFeedsAPI_getFeedPostAsync) | **GET** /api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts/{feedPostId} | Get social feed post by ID
[**SocialFeedsAPI_getFeedPostsAsync**](SocialFeedsAPI.md#SocialFeedsAPI_getFeedPostsAsync) | **GET** /api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts | Get social feed posts
[**SocialFeedsAPI_getFeedPostsCountAsync**](SocialFeedsAPI.md#SocialFeedsAPI_getFeedPostsCountAsync) | **GET** /api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts/Count | Count social feed posts
[**SocialFeedsAPI_getNotificationAsync**](SocialFeedsAPI.md#SocialFeedsAPI_getNotificationAsync) | **GET** /api/v2/SocialService/SocialFeeds/{socialFeedId} | Get social feed by ID
[**SocialFeedsAPI_getNotificationsCountAsync**](SocialFeedsAPI.md#SocialFeedsAPI_getNotificationsCountAsync) | **GET** /api/v2/SocialService/SocialFeeds/Count | Count social feeds
[**SocialFeedsAPI_updateFeedPostAsync**](SocialFeedsAPI.md#SocialFeedsAPI_updateFeedPostAsync) | **PUT** /api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts/{feedPostId} | Update a social feed post


# **SocialFeedsAPI_createFeedPostAsync**
```c
// Create a social feed post
//
// Creates a new post in a specific social feed.
//
social_feed_post_dto_envelope_t* SocialFeedsAPI_createFeedPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *api_version, char *x_api_version, social_feed_post_create_dto_t *social_feed_post_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialFeedId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**social_feed_post_create_dto** | **[social_feed_post_create_dto_t](social_feed_post_create_dto.md) \*** |  | [optional] 

### Return type

[social_feed_post_dto_envelope_t](social_feed_post_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialFeedsAPI_deleteFeedPostAsync**
```c
// Delete a social feed post
//
// Deletes a post from a specific social feed.
//
empty_envelope_t* SocialFeedsAPI_deleteFeedPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *feedPostId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialFeedId** | **char \*** |  | 
**feedPostId** | **char \*** |  | 
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

# **SocialFeedsAPI_getFeedNotifications**
```c
// Get social feeds
//
// Retrieves a list of social feeds for the specified social profile.
//
social_feed_dto_list_envelope_t* SocialFeedsAPI_getFeedNotifications(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_feed_dto_list_envelope_t](social_feed_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialFeedsAPI_getFeedPostAsync**
```c
// Get social feed post by ID
//
// Retrieves a specific post from a social feed by its ID.
//
social_feed_post_dto_envelope_t* SocialFeedsAPI_getFeedPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *feedPostId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialFeedId** | **char \*** |  | 
**feedPostId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_feed_post_dto_envelope_t](social_feed_post_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialFeedsAPI_getFeedPostsAsync**
```c
// Get social feed posts
//
// Retrieves a list of posts for a specific social feed.
//
social_feed_post_dto_list_envelope_t* SocialFeedsAPI_getFeedPostsAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialFeedId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_feed_post_dto_list_envelope_t](social_feed_post_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialFeedsAPI_getFeedPostsCountAsync**
```c
// Count social feed posts
//
// Returns the count of posts for a specific social feed.
//
int32_envelope_t* SocialFeedsAPI_getFeedPostsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialFeedId** | **char \*** |  | 
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

# **SocialFeedsAPI_getNotificationAsync**
```c
// Get social feed by ID
//
// Retrieves a specific social feed by its ID.
//
social_feed_dto_envelope_t* SocialFeedsAPI_getNotificationAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialFeedId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_feed_dto_envelope_t](social_feed_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialFeedsAPI_getNotificationsCountAsync**
```c
// Count social feeds
//
// Returns the count of social feeds for the specified social profile.
//
int32_envelope_t* SocialFeedsAPI_getNotificationsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
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

# **SocialFeedsAPI_updateFeedPostAsync**
```c
// Update a social feed post
//
// Updates an existing post in a specific social feed.
//
social_feed_post_dto_envelope_t* SocialFeedsAPI_updateFeedPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *feedPostId, char *api_version, char *x_api_version, social_feed_post_update_dto_t *social_feed_post_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**socialFeedId** | **char \*** |  | 
**feedPostId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**social_feed_post_update_dto** | **[social_feed_post_update_dto_t](social_feed_post_update_dto.md) \*** |  | [optional] 

### Return type

[social_feed_post_dto_envelope_t](social_feed_post_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

