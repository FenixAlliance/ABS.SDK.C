# SocialPostBucketsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SocialPostBucketsAPI_createSocialPostBucketAsync**](SocialPostBucketsAPI.md#SocialPostBucketsAPI_createSocialPostBucketAsync) | **POST** /api/v2/MarketingService/SocialPostBuckets | Create a social post bucket
[**SocialPostBucketsAPI_deleteSocialPostBucketAsync**](SocialPostBucketsAPI.md#SocialPostBucketsAPI_deleteSocialPostBucketAsync) | **DELETE** /api/v2/MarketingService/SocialPostBuckets/{socialpostbucketId} | Delete a social post bucket
[**SocialPostBucketsAPI_getSocialPostBucketDetailsAsync**](SocialPostBucketsAPI.md#SocialPostBucketsAPI_getSocialPostBucketDetailsAsync) | **GET** /api/v2/MarketingService/SocialPostBuckets/{socialpostbucketId} | Get social post bucket by ID
[**SocialPostBucketsAPI_getSocialPostBucketsCountAsync**](SocialPostBucketsAPI.md#SocialPostBucketsAPI_getSocialPostBucketsCountAsync) | **GET** /api/v2/MarketingService/SocialPostBuckets/Count | Get social post buckets count
[**SocialPostBucketsAPI_getSocialPostBucketsODataAsync**](SocialPostBucketsAPI.md#SocialPostBucketsAPI_getSocialPostBucketsODataAsync) | **GET** /api/v2/MarketingService/SocialPostBuckets | Get social post buckets
[**SocialPostBucketsAPI_updateSocialPostBucketAsync**](SocialPostBucketsAPI.md#SocialPostBucketsAPI_updateSocialPostBucketAsync) | **PUT** /api/v2/MarketingService/SocialPostBuckets/{socialpostbucketId} | Update a social post bucket


# **SocialPostBucketsAPI_createSocialPostBucketAsync**
```c
// Create a social post bucket
//
// Creates a new social post bucket for the specified tenant.
//
empty_envelope_t* SocialPostBucketsAPI_createSocialPostBucketAsync(apiClient_t *apiClient, char *tenantId, social_post_bucket_create_dto_t *social_post_bucket_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**social_post_bucket_create_dto** | **[social_post_bucket_create_dto_t](social_post_bucket_create_dto.md) \*** |  | 
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

# **SocialPostBucketsAPI_deleteSocialPostBucketAsync**
```c
// Delete a social post bucket
//
// Deletes a social post bucket by its ID.
//
empty_envelope_t* SocialPostBucketsAPI_deleteSocialPostBucketAsync(apiClient_t *apiClient, char *tenantId, char *socialpostbucketId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**socialpostbucketId** | **char \*** |  | 
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

# **SocialPostBucketsAPI_getSocialPostBucketDetailsAsync**
```c
// Get social post bucket by ID
//
// Retrieves the details of a specific social post bucket by its ID.
//
social_post_bucket_dto_envelope_t* SocialPostBucketsAPI_getSocialPostBucketDetailsAsync(apiClient_t *apiClient, char *tenantId, char *socialpostbucketId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**socialpostbucketId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_post_bucket_dto_envelope_t](social_post_bucket_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostBucketsAPI_getSocialPostBucketsCountAsync**
```c
// Get social post buckets count
//
// Returns the count of social post buckets for the specified tenant using OData query options.
//
int32_envelope_t* SocialPostBucketsAPI_getSocialPostBucketsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SocialPostBucketsAPI_getSocialPostBucketsODataAsync**
```c
// Get social post buckets
//
// Retrieves a collection of social post buckets for the specified tenant using OData query options.
//
social_post_bucket_dto_list_envelope_t* SocialPostBucketsAPI_getSocialPostBucketsODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_post_bucket_dto_list_envelope_t](social_post_bucket_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SocialPostBucketsAPI_updateSocialPostBucketAsync**
```c
// Update a social post bucket
//
// Updates an existing social post bucket by its ID.
//
empty_envelope_t* SocialPostBucketsAPI_updateSocialPostBucketAsync(apiClient_t *apiClient, char *tenantId, char *socialpostbucketId, social_post_bucket_update_dto_t *social_post_bucket_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**socialpostbucketId** | **char \*** |  | 
**social_post_bucket_update_dto** | **[social_post_bucket_update_dto_t](social_post_bucket_update_dto.md) \*** |  | 
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

