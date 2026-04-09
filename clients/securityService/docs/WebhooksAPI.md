# WebhooksAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WebhooksAPI_getWebhookRequestsAsync**](WebhooksAPI.md#WebhooksAPI_getWebhookRequestsAsync) | **GET** /api/v2/SecurityService/Webhooks | Get all webhook requests
[**WebhooksAPI_getWebhookRequestsCountAsync**](WebhooksAPI.md#WebhooksAPI_getWebhookRequestsCountAsync) | **GET** /api/v2/SecurityService/Webhooks/Count | Get webhook requests count


# **WebhooksAPI_getWebhookRequestsAsync**
```c
// Get all webhook requests
//
// Retrieves all webhook requests for the specified tenant.
//
webhook_request_dto_list_envelope_t* WebhooksAPI_getWebhookRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[webhook_request_dto_list_envelope_t](webhook_request_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhooksAPI_getWebhookRequestsCountAsync**
```c
// Get webhook requests count
//
// Retrieves the count of webhook requests for the specified tenant.
//
int32_envelope_t* WebhooksAPI_getWebhookRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

