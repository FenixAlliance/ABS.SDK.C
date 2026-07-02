# NewsletterSubscriptionsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**NewsletterSubscriptionsAPI_getNewsletterSubscriptionsCountAsync**](NewsletterSubscriptionsAPI.md#NewsletterSubscriptionsAPI_getNewsletterSubscriptionsCountAsync) | **GET** /api/v2/MarketingService/NewsletterSubscriptions/Count | Get newsletter subscriptions count


# **NewsletterSubscriptionsAPI_getNewsletterSubscriptionsCountAsync**
```c
// Get newsletter subscriptions count
//
// Returns the count of newsletter subscriptions for the specified tenant using OData query options.
//
int32_envelope_t* NewsletterSubscriptionsAPI_getNewsletterSubscriptionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

