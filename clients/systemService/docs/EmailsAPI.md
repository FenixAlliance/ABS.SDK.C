# EmailsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EmailsAPI_adminPreviewBasicEmailTemplate**](EmailsAPI.md#EmailsAPI_adminPreviewBasicEmailTemplate) | **POST** /api/v2/SystemService/Emails/Preview | Preview a rendered basic email template.
[**EmailsAPI_adminSendBasicEmail**](EmailsAPI.md#EmailsAPI_adminSendBasicEmail) | **POST** /api/v2/SystemService/Emails/SendBasic | Send a basic transactional email to recipients.


# **EmailsAPI_adminPreviewBasicEmailTemplate**
```c
// Preview a rendered basic email template.
//
// This action is only available for global administrators (business_owner role).
//
void EmailsAPI_adminPreviewBasicEmailTemplate(apiClient_t *apiClient, char *api_version, char *x_api_version, object_email_dispatch_request_t *object_email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**object_email_dispatch_request** | **[object_email_dispatch_request_t](object_email_dispatch_request.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmailsAPI_adminSendBasicEmail**
```c
// Send a basic transactional email to recipients.
//
// This action is only available for global administrators (business_owner role).
//
tenant_dto_list_envelope_t* EmailsAPI_adminSendBasicEmail(apiClient_t *apiClient, char *api_version, char *x_api_version, object_email_dispatch_request_t *object_email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**object_email_dispatch_request** | **[object_email_dispatch_request_t](object_email_dispatch_request.md) \*** |  | [optional] 

### Return type

[tenant_dto_list_envelope_t](tenant_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

