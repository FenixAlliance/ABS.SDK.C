# SocialProfilesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SocialProfilesAPI_countConversationsAsync**](SocialProfilesAPI.md#SocialProfilesAPI_countConversationsAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Conversations/Count | Count Conversations
[**SocialProfilesAPI_countFollowedProfilesAsync**](SocialProfilesAPI.md#SocialProfilesAPI_countFollowedProfilesAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/Profiles/Count | Count Followed Profiles
[**SocialProfilesAPI_countFollowerProfilesAsync**](SocialProfilesAPI.md#SocialProfilesAPI_countFollowerProfilesAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Followers/Profiles/Count | Count Follower Profiles
[**SocialProfilesAPI_countFollowersAsync**](SocialProfilesAPI.md#SocialProfilesAPI_countFollowersAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Followers/Count | Count Followers
[**SocialProfilesAPI_countFollowsAsync**](SocialProfilesAPI.md#SocialProfilesAPI_countFollowsAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/Count | Count Follows
[**SocialProfilesAPI_countMessagesAsync**](SocialProfilesAPI.md#SocialProfilesAPI_countMessagesAsync) | **GET** /api/v2/SocialService/SocialProfiles/{conversationId}/Messages/Count | Count Messages
[**SocialProfilesAPI_countNotificationsAsync**](SocialProfilesAPI.md#SocialProfilesAPI_countNotificationsAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Notifications/Count | Count Notifications
[**SocialProfilesAPI_countSocialProfilesAsync**](SocialProfilesAPI.md#SocialProfilesAPI_countSocialProfilesAsync) | **GET** /api/v2/SocialService/SocialProfiles/Count | Count Social Profiles
[**SocialProfilesAPI_createConversationAsync**](SocialProfilesAPI.md#SocialProfilesAPI_createConversationAsync) | **POST** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Conversations | Create Conversation
[**SocialProfilesAPI_createMessageAsync**](SocialProfilesAPI.md#SocialProfilesAPI_createMessageAsync) | **POST** /api/v2/SocialService/SocialProfiles/{conversationId}/Messages | Create Message
[**SocialProfilesAPI_deleteMessageAsync**](SocialProfilesAPI.md#SocialProfilesAPI_deleteMessageAsync) | **DELETE** /api/v2/SocialService/SocialProfiles/{conversationId}/Messages/{messageId} | Delete Message
[**SocialProfilesAPI_followAsync**](SocialProfilesAPI.md#SocialProfilesAPI_followAsync) | **POST** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/{followedSocialProfileId} | Follow
[**SocialProfilesAPI_followExistsAsync**](SocialProfilesAPI.md#SocialProfilesAPI_followExistsAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/{followedSocialProfileId} | Check if Follow Exists
[**SocialProfilesAPI_getConversationsAsync**](SocialProfilesAPI.md#SocialProfilesAPI_getConversationsAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Conversations | Get Conversations
[**SocialProfilesAPI_getFollowedProfilesAsync**](SocialProfilesAPI.md#SocialProfilesAPI_getFollowedProfilesAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/Profiles | Get Followed Profiles
[**SocialProfilesAPI_getFollowerProfilesAsync**](SocialProfilesAPI.md#SocialProfilesAPI_getFollowerProfilesAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Followers/Profiles | Get Follower Profiles
[**SocialProfilesAPI_getFollowersAsync**](SocialProfilesAPI.md#SocialProfilesAPI_getFollowersAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Followers | Get Followers
[**SocialProfilesAPI_getFollowsAsync**](SocialProfilesAPI.md#SocialProfilesAPI_getFollowsAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows | Get Follows
[**SocialProfilesAPI_getMessagesAsync**](SocialProfilesAPI.md#SocialProfilesAPI_getMessagesAsync) | **GET** /api/v2/SocialService/SocialProfiles/{conversationId}/Messages | Get Messages
[**SocialProfilesAPI_getNotificationsAsync**](SocialProfilesAPI.md#SocialProfilesAPI_getNotificationsAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Notifications | Get Notifications
[**SocialProfilesAPI_getSocialProfileAsync**](SocialProfilesAPI.md#SocialProfilesAPI_getSocialProfileAsync) | **GET** /api/v2/SocialService/SocialProfiles/{socialProfileId} | Get Social Profile
[**SocialProfilesAPI_getSocialProfilesAsync**](SocialProfilesAPI.md#SocialProfilesAPI_getSocialProfilesAsync) | **GET** /api/v2/SocialService/SocialProfiles | Get Social Profiles
[**SocialProfilesAPI_unfollowAsync**](SocialProfilesAPI.md#SocialProfilesAPI_unfollowAsync) | **DELETE** /api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/{followedSocialProfileId} | Unfollow
[**SocialProfilesAPI_updateMessageAsync**](SocialProfilesAPI.md#SocialProfilesAPI_updateMessageAsync) | **PUT** /api/v2/SocialService/SocialProfiles/{conversationId}/Messages/{messageId} | Update Message


# **SocialProfilesAPI_countConversationsAsync**
```c
// Count Conversations
//
// Count conversations for a social profile.
//
int32_envelope_t* SocialProfilesAPI_countConversationsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
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

# **SocialProfilesAPI_countFollowedProfilesAsync**
```c
// Count Followed Profiles
//
// Count followed profiles for a social profile.
//
int32_envelope_t* SocialProfilesAPI_countFollowedProfilesAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
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

# **SocialProfilesAPI_countFollowerProfilesAsync**
```c
// Count Follower Profiles
//
// Count follower profiles for a social profile.
//
int32_envelope_t* SocialProfilesAPI_countFollowerProfilesAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
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

# **SocialProfilesAPI_countFollowersAsync**
```c
// Count Followers
//
// Count followers for a social profile.
//
int32_envelope_t* SocialProfilesAPI_countFollowersAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
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

# **SocialProfilesAPI_countFollowsAsync**
```c
// Count Follows
//
// Count follows for a social profile.
//
int32_envelope_t* SocialProfilesAPI_countFollowsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
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

# **SocialProfilesAPI_countMessagesAsync**
```c
// Count Messages
//
// Count messages for a conversation.
//
int32_envelope_t* SocialProfilesAPI_countMessagesAsync(apiClient_t *apiClient, char *conversationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**conversationId** | **char \*** |  | 
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

# **SocialProfilesAPI_countNotificationsAsync**
```c
// Count Notifications
//
// Count notifications for a social profile.
//
int32_envelope_t* SocialProfilesAPI_countNotificationsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
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

# **SocialProfilesAPI_countSocialProfilesAsync**
```c
// Count Social Profiles
//
// Count social profiles.
//
int32_envelope_t* SocialProfilesAPI_countSocialProfilesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **SocialProfilesAPI_createConversationAsync**
```c
// Create Conversation
//
// Create a new conversation.
//
empty_envelope_t* SocialProfilesAPI_createConversationAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version, conversation_create_dto_t *conversation_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**conversation_create_dto** | **[conversation_create_dto_t](conversation_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialProfilesAPI_createMessageAsync**
```c
// Create Message
//
// Create a new message.
//
empty_envelope_t* SocialProfilesAPI_createMessageAsync(apiClient_t *apiClient, char *socialProfileId, char *conversationId, char *api_version, char *x_api_version, private_message_create_dto_t *private_message_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**conversationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**private_message_create_dto** | **[private_message_create_dto_t](private_message_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialProfilesAPI_deleteMessageAsync**
```c
// Delete Message
//
// Delete a message.
//
empty_envelope_t* SocialProfilesAPI_deleteMessageAsync(apiClient_t *apiClient, char *socialProfileId, char *conversationId, char *messageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**conversationId** | **char \*** |  | 
**messageId** | **char \*** |  | 
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

# **SocialProfilesAPI_followAsync**
```c
// Follow
//
// Follow a social profile.
//
empty_envelope_t* SocialProfilesAPI_followAsync(apiClient_t *apiClient, char *socialProfileId, char *followedSocialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**followedSocialProfileId** | **char \*** |  | 
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

# **SocialProfilesAPI_followExistsAsync**
```c
// Check if Follow Exists
//
// Check if a follow record exists between two social profiles.
//
boolean_envelope_t* SocialProfilesAPI_followExistsAsync(apiClient_t *apiClient, char *socialProfileId, char *followedSocialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**followedSocialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[boolean_envelope_t](boolean_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialProfilesAPI_getConversationsAsync**
```c
// Get Conversations
//
// Get a list of conversations for a social profile.
//
conversation_dto_list_envelope_t* SocialProfilesAPI_getConversationsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[conversation_dto_list_envelope_t](conversation_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialProfilesAPI_getFollowedProfilesAsync**
```c
// Get Followed Profiles
//
// Get a list of followed profiles for a social profile.
//
social_profile_dto_list_envelope_t* SocialProfilesAPI_getFollowedProfilesAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_profile_dto_list_envelope_t](social_profile_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialProfilesAPI_getFollowerProfilesAsync**
```c
// Get Follower Profiles
//
// Get a list of follower profiles for a social profile.
//
social_profile_dto_list_envelope_t* SocialProfilesAPI_getFollowerProfilesAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_profile_dto_list_envelope_t](social_profile_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialProfilesAPI_getFollowersAsync**
```c
// Get Followers
//
// Get a list of followers for a social profile.
//
follow_record_dto_list_envelope_t* SocialProfilesAPI_getFollowersAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[follow_record_dto_list_envelope_t](follow_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialProfilesAPI_getFollowsAsync**
```c
// Get Follows
//
// Get a list of follows for a social profile.
//
follow_record_dto_list_envelope_t* SocialProfilesAPI_getFollowsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[follow_record_dto_list_envelope_t](follow_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialProfilesAPI_getMessagesAsync**
```c
// Get Messages
//
// Get a list of messages for a conversation.
//
private_message_dto_list_envelope_t* SocialProfilesAPI_getMessagesAsync(apiClient_t *apiClient, char *conversationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**conversationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[private_message_dto_list_envelope_t](private_message_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialProfilesAPI_getNotificationsAsync**
```c
// Get Notifications
//
// Get a list of notifications for a social profile.
//
notification_dto_list_envelope_t* SocialProfilesAPI_getNotificationsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[notification_dto_list_envelope_t](notification_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialProfilesAPI_getSocialProfileAsync**
```c
// Get Social Profile
//
// Get a social profile by ID.
//
social_profile_dto_envelope_t* SocialProfilesAPI_getSocialProfileAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_profile_dto_envelope_t](social_profile_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialProfilesAPI_getSocialProfilesAsync**
```c
// Get Social Profiles
//
// Get a list of social profiles.
//
social_profile_dto_list_envelope_t* SocialProfilesAPI_getSocialProfilesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_profile_dto_list_envelope_t](social_profile_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialProfilesAPI_unfollowAsync**
```c
// Unfollow
//
// Unfollow a social profile.
//
empty_envelope_t* SocialProfilesAPI_unfollowAsync(apiClient_t *apiClient, char *socialProfileId, char *followedSocialProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**followedSocialProfileId** | **char \*** |  | 
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

# **SocialProfilesAPI_updateMessageAsync**
```c
// Update Message
//
// Update a message.
//
empty_envelope_t* SocialProfilesAPI_updateMessageAsync(apiClient_t *apiClient, char *socialProfileId, char *conversationId, char *messageId, char *api_version, char *x_api_version, private_message_update_dto_t *private_message_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**socialProfileId** | **char \*** |  | 
**conversationId** | **char \*** |  | 
**messageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**private_message_update_dto** | **[private_message_update_dto_t](private_message_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

