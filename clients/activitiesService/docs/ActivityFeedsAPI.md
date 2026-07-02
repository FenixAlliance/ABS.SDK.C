# ActivityFeedsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ActivityFeedsAPI_countActivityTypesAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_countActivityTypesAsync) | **GET** /api/v2/ActivitiesService/ActivityTypes/Count | Count Activity Types
[**ActivityFeedsAPI_createActivityAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_createActivityAsync) | **POST** /api/v2/ActivitiesService/ActivityFeeds/{activityFeedId}/Activities | Create an activity
[**ActivityFeedsAPI_createActivityTypeAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_createActivityTypeAsync) | **POST** /api/v2/ActivitiesService/ActivityTypes | Create Activity Type
[**ActivityFeedsAPI_deleteActivityAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_deleteActivityAsync) | **DELETE** /api/v2/ActivitiesService/ActivityFeeds/{activityFeedId}/Activities/{activityId} | Delete an activity
[**ActivityFeedsAPI_deleteActivityTypeAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_deleteActivityTypeAsync) | **DELETE** /api/v2/ActivitiesService/ActivityTypes/{activityTypeId} | Delete Activity Type
[**ActivityFeedsAPI_getActivitiesAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_getActivitiesAsync) | **GET** /api/v2/ActivitiesService/ActivityFeeds/{activityFeedId}/Activities | Get activities
[**ActivityFeedsAPI_getActivitiesCountAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_getActivitiesCountAsync) | **GET** /api/v2/ActivitiesService/ActivityFeeds/{activityFeedId}/Activities/Count | Count activities
[**ActivityFeedsAPI_getActivityAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_getActivityAsync) | **GET** /api/v2/ActivitiesService/ActivityFeeds/{activityFeedId}/Activities/{activityId} | Get activity by ID
[**ActivityFeedsAPI_getActivityFeedAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_getActivityFeedAsync) | **GET** /api/v2/ActivitiesService/ActivityFeeds/{activityFeedId} | Get activity feed by ID
[**ActivityFeedsAPI_getActivityFeedsAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_getActivityFeedsAsync) | **GET** /api/v2/ActivitiesService/ActivityFeeds | Get activity feeds
[**ActivityFeedsAPI_getActivityFeedsCountAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_getActivityFeedsCountAsync) | **GET** /api/v2/ActivitiesService/ActivityFeeds/Count | Count activity feeds
[**ActivityFeedsAPI_getActivityTypeByIdAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_getActivityTypeByIdAsync) | **GET** /api/v2/ActivitiesService/ActivityTypes/{activityTypeId} | Get Activity Type
[**ActivityFeedsAPI_getActivityTypesAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_getActivityTypesAsync) | **GET** /api/v2/ActivitiesService/ActivityTypes | Get Activity Types
[**ActivityFeedsAPI_patchActivityAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_patchActivityAsync) | **PATCH** /api/v2/ActivitiesService/ActivityFeeds/{activityFeedId}/Activities/{activityId} | Patch an activity
[**ActivityFeedsAPI_patchActivityTypeAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_patchActivityTypeAsync) | **PATCH** /api/v2/ActivitiesService/ActivityTypes/{activityTypeId} | Patch Activity Type
[**ActivityFeedsAPI_updateActivityAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_updateActivityAsync) | **PUT** /api/v2/ActivitiesService/ActivityFeeds/{activityFeedId}/Activities/{activityId} | Update an activity
[**ActivityFeedsAPI_updateActivityTypeAsync**](ActivityFeedsAPI.md#ActivityFeedsAPI_updateActivityTypeAsync) | **PUT** /api/v2/ActivitiesService/ActivityTypes/{activityTypeId} | Update Activity Type


# **ActivityFeedsAPI_countActivityTypesAsync**
```c
// Count Activity Types
//
// Count activity types for the current tenant.
//
int32_envelope_t* ActivityFeedsAPI_countActivityTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ActivityFeedsAPI_createActivityAsync**
```c
// Create an activity
//
// Creates a new activity in a specific activity feed.
//
activity_record_dto_envelope_t* ActivityFeedsAPI_createActivityAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *api_version, char *x_api_version, activity_record_create_dto_t *activity_record_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**activityFeedId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**activity_record_create_dto** | **[activity_record_create_dto_t](activity_record_create_dto.md) \*** |  | [optional] 

### Return type

[activity_record_dto_envelope_t](activity_record_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ActivityFeedsAPI_createActivityTypeAsync**
```c
// Create Activity Type
//
// Create a new activity type.
//
envelope_t* ActivityFeedsAPI_createActivityTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, activity_type_create_dto_t *activity_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**activity_type_create_dto** | **[activity_type_create_dto_t](activity_type_create_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ActivityFeedsAPI_deleteActivityAsync**
```c
// Delete an activity
//
// Deletes an activity from an activity feed.
//
empty_envelope_t* ActivityFeedsAPI_deleteActivityAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *activityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**activityFeedId** | **char \*** |  | 
**activityId** | **char \*** |  | 
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

# **ActivityFeedsAPI_deleteActivityTypeAsync**
```c
// Delete Activity Type
//
// Delete an activity type.
//
envelope_t* ActivityFeedsAPI_deleteActivityTypeAsync(apiClient_t *apiClient, char *tenantId, char *activityTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**activityTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ActivityFeedsAPI_getActivitiesAsync**
```c
// Get activities
//
// Retrieves activities for a specific activity feed.
//
activity_record_dto_list_envelope_t* ActivityFeedsAPI_getActivitiesAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**activityFeedId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[activity_record_dto_list_envelope_t](activity_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ActivityFeedsAPI_getActivitiesCountAsync**
```c
// Count activities
//
// Returns the count of activities for a specific activity feed.
//
int32_envelope_t* ActivityFeedsAPI_getActivitiesCountAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**activityFeedId** | **char \*** |  | 
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

# **ActivityFeedsAPI_getActivityAsync**
```c
// Get activity by ID
//
// Retrieves a specific activity by its ID.
//
activity_record_dto_envelope_t* ActivityFeedsAPI_getActivityAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *activityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**activityFeedId** | **char \*** |  | 
**activityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[activity_record_dto_envelope_t](activity_record_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ActivityFeedsAPI_getActivityFeedAsync**
```c
// Get activity feed by ID
//
// Retrieves a specific activity feed by its ID.
//
activity_feed_dto_envelope_t* ActivityFeedsAPI_getActivityFeedAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**activityFeedId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[activity_feed_dto_envelope_t](activity_feed_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ActivityFeedsAPI_getActivityFeedsAsync**
```c
// Get activity feeds
//
// Retrieves a list of activity feeds for the specified tenant.
//
activity_feed_dto_list_envelope_t* ActivityFeedsAPI_getActivityFeedsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[activity_feed_dto_list_envelope_t](activity_feed_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ActivityFeedsAPI_getActivityFeedsCountAsync**
```c
// Count activity feeds
//
// Returns the count of activity feeds for the specified tenant.
//
int32_envelope_t* ActivityFeedsAPI_getActivityFeedsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ActivityFeedsAPI_getActivityTypeByIdAsync**
```c
// Get Activity Type
//
// Get an activity type by ID.
//
activity_type_dto_envelope_t* ActivityFeedsAPI_getActivityTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *activityTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**activityTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[activity_type_dto_envelope_t](activity_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ActivityFeedsAPI_getActivityTypesAsync**
```c
// Get Activity Types
//
// Get a list of activity types for the current tenant.
//
activity_type_dto_list_envelope_t* ActivityFeedsAPI_getActivityTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[activity_type_dto_list_envelope_t](activity_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ActivityFeedsAPI_patchActivityAsync**
```c
// Patch an activity
//
// Patch an activity
//
empty_envelope_t* ActivityFeedsAPI_patchActivityAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *activityId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**activityFeedId** | **char \*** |  | 
**activityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ActivityFeedsAPI_patchActivityTypeAsync**
```c
// Patch Activity Type
//
// Patch an activity type
//
empty_envelope_t* ActivityFeedsAPI_patchActivityTypeAsync(apiClient_t *apiClient, char *tenantId, char *activityTypeId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**activityTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ActivityFeedsAPI_updateActivityAsync**
```c
// Update an activity
//
// Updates an existing activity.
//
activity_record_dto_envelope_t* ActivityFeedsAPI_updateActivityAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *activityId, char *api_version, char *x_api_version, activity_record_update_dto_t *activity_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**activityFeedId** | **char \*** |  | 
**activityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**activity_record_update_dto** | **[activity_record_update_dto_t](activity_record_update_dto.md) \*** |  | [optional] 

### Return type

[activity_record_dto_envelope_t](activity_record_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ActivityFeedsAPI_updateActivityTypeAsync**
```c
// Update Activity Type
//
// Update an existing activity type.
//
envelope_t* ActivityFeedsAPI_updateActivityTypeAsync(apiClient_t *apiClient, char *tenantId, char *activityTypeId, char *api_version, char *x_api_version, activity_type_update_dto_t *activity_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**activityTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**activity_type_update_dto** | **[activity_type_update_dto_t](activity_type_update_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

