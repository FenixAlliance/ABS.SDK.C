# SubscriptionsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscriptionsAPI_createSubscriptionAsync**](SubscriptionsAPI.md#SubscriptionsAPI_createSubscriptionAsync) | **POST** /api/v2/SubscriptionsService/Subscriptions | Create a subscription
[**SubscriptionsAPI_deleteSubscriptionAsync**](SubscriptionsAPI.md#SubscriptionsAPI_deleteSubscriptionAsync) | **DELETE** /api/v2/SubscriptionsService/Subscriptions/{subscriptionId} | Delete a subscription
[**SubscriptionsAPI_getSubscriptionByIdAsync**](SubscriptionsAPI.md#SubscriptionsAPI_getSubscriptionByIdAsync) | **GET** /api/v2/SubscriptionsService/Subscriptions/{subscriptionId} | Get a subscription by ID
[**SubscriptionsAPI_getSubscriptionsAsync**](SubscriptionsAPI.md#SubscriptionsAPI_getSubscriptionsAsync) | **GET** /api/v2/SubscriptionsService/Subscriptions | Get all subscriptions
[**SubscriptionsAPI_getSubscriptionsCountAsync**](SubscriptionsAPI.md#SubscriptionsAPI_getSubscriptionsCountAsync) | **GET** /api/v2/SubscriptionsService/Subscriptions/Count | Get subscriptions count
[**SubscriptionsAPI_updateSubscriptionAsync**](SubscriptionsAPI.md#SubscriptionsAPI_updateSubscriptionAsync) | **PUT** /api/v2/SubscriptionsService/Subscriptions/{subscriptionId} | Update a subscription


# **SubscriptionsAPI_createSubscriptionAsync**
```c
// Create a subscription
//
// Creates a new subscription for the specified tenant.
//
envelope_t* SubscriptionsAPI_createSubscriptionAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, subscription_create_dto_t *subscription_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**subscription_create_dto** | **[subscription_create_dto_t](subscription_create_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubscriptionsAPI_deleteSubscriptionAsync**
```c
// Delete a subscription
//
// Deletes a subscription by its identifier.
//
envelope_t* SubscriptionsAPI_deleteSubscriptionAsync(apiClient_t *apiClient, char *tenantId, char *subscriptionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**subscriptionId** | **char \*** |  | 
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

# **SubscriptionsAPI_getSubscriptionByIdAsync**
```c
// Get a subscription by ID
//
// Retrieves a subscription by its identifier.
//
subscription_dto_envelope_t* SubscriptionsAPI_getSubscriptionByIdAsync(apiClient_t *apiClient, char *tenantId, char *subscriptionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**subscriptionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[subscription_dto_envelope_t](subscription_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubscriptionsAPI_getSubscriptionsAsync**
```c
// Get all subscriptions
//
// Retrieves all subscriptions for the specified tenant.
//
subscription_dto_i_read_only_list_envelope_t* SubscriptionsAPI_getSubscriptionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[subscription_dto_i_read_only_list_envelope_t](subscription_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubscriptionsAPI_getSubscriptionsCountAsync**
```c
// Get subscriptions count
//
// Returns the count of subscriptions for the specified tenant.
//
int32_envelope_t* SubscriptionsAPI_getSubscriptionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SubscriptionsAPI_updateSubscriptionAsync**
```c
// Update a subscription
//
// Updates an existing subscription.
//
envelope_t* SubscriptionsAPI_updateSubscriptionAsync(apiClient_t *apiClient, char *tenantId, char *subscriptionId, char *api_version, char *x_api_version, subscription_update_dto_t *subscription_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**subscriptionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**subscription_update_dto** | **[subscription_update_dto_t](subscription_update_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

