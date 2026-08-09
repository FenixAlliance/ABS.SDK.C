# NewsletterSubscriptionsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**NewsletterSubscriptionsAPI_createNewsletterSubscriptionAsync**](NewsletterSubscriptionsAPI.md#NewsletterSubscriptionsAPI_createNewsletterSubscriptionAsync) | **POST** /api/v2/MarketingService/NewsletterSubscriptions | Create a newsletter subscription
[**NewsletterSubscriptionsAPI_deleteNewsletterSubscriptionAsync**](NewsletterSubscriptionsAPI.md#NewsletterSubscriptionsAPI_deleteNewsletterSubscriptionAsync) | **DELETE** /api/v2/MarketingService/NewsletterSubscriptions/{newsletterSubscriptionId} | Delete a newsletter subscription
[**NewsletterSubscriptionsAPI_getNewsletterSubscriptionByIdAsync**](NewsletterSubscriptionsAPI.md#NewsletterSubscriptionsAPI_getNewsletterSubscriptionByIdAsync) | **GET** /api/v2/MarketingService/NewsletterSubscriptions/{newsletterSubscriptionId} | Get newsletter subscription by ID
[**NewsletterSubscriptionsAPI_getNewsletterSubscriptionsAsync**](NewsletterSubscriptionsAPI.md#NewsletterSubscriptionsAPI_getNewsletterSubscriptionsAsync) | **GET** /api/v2/MarketingService/NewsletterSubscriptions | Get newsletter subscriptions
[**NewsletterSubscriptionsAPI_getNewsletterSubscriptionsCountAsync**](NewsletterSubscriptionsAPI.md#NewsletterSubscriptionsAPI_getNewsletterSubscriptionsCountAsync) | **GET** /api/v2/MarketingService/NewsletterSubscriptions/Count | Get newsletter subscriptions count
[**NewsletterSubscriptionsAPI_updateNewsletterSubscriptionAsync**](NewsletterSubscriptionsAPI.md#NewsletterSubscriptionsAPI_updateNewsletterSubscriptionAsync) | **PUT** /api/v2/MarketingService/NewsletterSubscriptions/{newsletterSubscriptionId} | Update a newsletter subscription


# **NewsletterSubscriptionsAPI_createNewsletterSubscriptionAsync**
```c
// Create a newsletter subscription
//
// Creates a new newsletter subscription for the specified tenant.
//
empty_envelope_t* NewsletterSubscriptionsAPI_createNewsletterSubscriptionAsync(apiClient_t *apiClient, char *tenantId, newsletter_subscription_create_dto_t *newsletter_subscription_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**newsletter_subscription_create_dto** | **[newsletter_subscription_create_dto_t](newsletter_subscription_create_dto.md) \*** |  | 
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

# **NewsletterSubscriptionsAPI_deleteNewsletterSubscriptionAsync**
```c
// Delete a newsletter subscription
//
// Deletes a newsletter subscription by its ID.
//
empty_envelope_t* NewsletterSubscriptionsAPI_deleteNewsletterSubscriptionAsync(apiClient_t *apiClient, char *tenantId, char *newsletterSubscriptionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**newsletterSubscriptionId** | **char \*** |  | 
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

# **NewsletterSubscriptionsAPI_getNewsletterSubscriptionByIdAsync**
```c
// Get newsletter subscription by ID
//
// Retrieves the details of a specific newsletter subscription by its ID.
//
newsletter_subscription_dto_envelope_t* NewsletterSubscriptionsAPI_getNewsletterSubscriptionByIdAsync(apiClient_t *apiClient, char *tenantId, char *newsletterSubscriptionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**newsletterSubscriptionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[newsletter_subscription_dto_envelope_t](newsletter_subscription_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NewsletterSubscriptionsAPI_getNewsletterSubscriptionsAsync**
```c
// Get newsletter subscriptions
//
// Retrieves a collection of newsletter subscriptions for the specified tenant using OData query options.
//
newsletter_subscription_dto_list_envelope_t* NewsletterSubscriptionsAPI_getNewsletterSubscriptionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, newsletter_subscription_dto_collection_query_parameters_t *newsletter_subscription_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**newsletter_subscription_dto_collection_query_parameters** | **[newsletter_subscription_dto_collection_query_parameters_t](newsletter_subscription_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[newsletter_subscription_dto_list_envelope_t](newsletter_subscription_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NewsletterSubscriptionsAPI_getNewsletterSubscriptionsCountAsync**
```c
// Get newsletter subscriptions count
//
// Returns the count of newsletter subscriptions for the specified tenant using OData query options.
//
int32_envelope_t* NewsletterSubscriptionsAPI_getNewsletterSubscriptionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, newsletter_subscription_dto_collection_query_parameters_t *newsletter_subscription_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**newsletter_subscription_dto_collection_query_parameters** | **[newsletter_subscription_dto_collection_query_parameters_t](newsletter_subscription_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NewsletterSubscriptionsAPI_updateNewsletterSubscriptionAsync**
```c
// Update a newsletter subscription
//
// Updates an existing newsletter subscription by its ID.
//
empty_envelope_t* NewsletterSubscriptionsAPI_updateNewsletterSubscriptionAsync(apiClient_t *apiClient, char *tenantId, char *newsletterSubscriptionId, newsletter_subscription_update_dto_t *newsletter_subscription_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**newsletterSubscriptionId** | **char \*** |  | 
**newsletter_subscription_update_dto** | **[newsletter_subscription_update_dto_t](newsletter_subscription_update_dto.md) \*** |  | 
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

