# SocialGroupsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SocialGroupsAPI_countSocialGroupsAsync**](SocialGroupsAPI.md#SocialGroupsAPI_countSocialGroupsAsync) | **GET** /api/v2/SocialService/SocialGroups/Count | Count social groups
[**SocialGroupsAPI_createSocialGroupAsync**](SocialGroupsAPI.md#SocialGroupsAPI_createSocialGroupAsync) | **POST** /api/v2/SocialService/SocialGroups | Create a social group
[**SocialGroupsAPI_deleteSocialGroupAsync**](SocialGroupsAPI.md#SocialGroupsAPI_deleteSocialGroupAsync) | **DELETE** /api/v2/SocialService/SocialGroups/{socialGroupId} | Delete a social group
[**SocialGroupsAPI_getSocialGroupByIdAsync**](SocialGroupsAPI.md#SocialGroupsAPI_getSocialGroupByIdAsync) | **GET** /api/v2/SocialService/SocialGroups/{socialGroupId} | Get social group by ID
[**SocialGroupsAPI_getSocialGroupsAsync**](SocialGroupsAPI.md#SocialGroupsAPI_getSocialGroupsAsync) | **GET** /api/v2/SocialService/SocialGroups | Get social groups
[**SocialGroupsAPI_updateSocialGroupAsync**](SocialGroupsAPI.md#SocialGroupsAPI_updateSocialGroupAsync) | **PUT** /api/v2/SocialService/SocialGroups/{socialGroupId} | Update a social group


# **SocialGroupsAPI_countSocialGroupsAsync**
```c
// Count social groups
//
// Counts all social groups for the specified tenant.
//
int32_envelope_t* SocialGroupsAPI_countSocialGroupsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SocialGroupsAPI_createSocialGroupAsync**
```c
// Create a social group
//
// Creates a new social group for the specified tenant.
//
empty_envelope_t* SocialGroupsAPI_createSocialGroupAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, social_group_create_dto_t *social_group_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**social_group_create_dto** | **[social_group_create_dto_t](social_group_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialGroupsAPI_deleteSocialGroupAsync**
```c
// Delete a social group
//
// Deletes a social group for the specified tenant.
//
empty_envelope_t* SocialGroupsAPI_deleteSocialGroupAsync(apiClient_t *apiClient, char *tenantId, char *socialGroupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**socialGroupId** | **char \*** |  | 
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

# **SocialGroupsAPI_getSocialGroupByIdAsync**
```c
// Get social group by ID
//
// Retrieves a specific social group by its ID.
//
social_group_dto_envelope_t* SocialGroupsAPI_getSocialGroupByIdAsync(apiClient_t *apiClient, char *tenantId, char *socialGroupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**socialGroupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_group_dto_envelope_t](social_group_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialGroupsAPI_getSocialGroupsAsync**
```c
// Get social groups
//
// Retrieves all social groups for the specified tenant.
//
social_group_dto_list_envelope_t* SocialGroupsAPI_getSocialGroupsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_group_dto_list_envelope_t](social_group_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialGroupsAPI_updateSocialGroupAsync**
```c
// Update a social group
//
// Updates an existing social group for the specified tenant.
//
empty_envelope_t* SocialGroupsAPI_updateSocialGroupAsync(apiClient_t *apiClient, char *tenantId, char *socialGroupId, char *api_version, char *x_api_version, social_group_update_dto_t *social_group_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**socialGroupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**social_group_update_dto** | **[social_group_update_dto_t](social_group_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

