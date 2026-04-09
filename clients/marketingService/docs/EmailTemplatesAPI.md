# EmailTemplatesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EmailTemplatesAPI_createEmailTemplateAsync**](EmailTemplatesAPI.md#EmailTemplatesAPI_createEmailTemplateAsync) | **POST** /api/v2/MarketingService/EmailTemplates | Create an email template
[**EmailTemplatesAPI_deleteEmailTemplateAsync**](EmailTemplatesAPI.md#EmailTemplatesAPI_deleteEmailTemplateAsync) | **DELETE** /api/v2/MarketingService/EmailTemplates/{emailTemplateId} | Delete an email template
[**EmailTemplatesAPI_getEmailTemplateDetailsAsync**](EmailTemplatesAPI.md#EmailTemplatesAPI_getEmailTemplateDetailsAsync) | **GET** /api/v2/MarketingService/EmailTemplates/{emailTemplateId} | Get email template by ID
[**EmailTemplatesAPI_getEmailTemplatesCountAsync**](EmailTemplatesAPI.md#EmailTemplatesAPI_getEmailTemplatesCountAsync) | **GET** /api/v2/MarketingService/EmailTemplates/Count | Get email templates count
[**EmailTemplatesAPI_getEmailTemplatesODataAsync**](EmailTemplatesAPI.md#EmailTemplatesAPI_getEmailTemplatesODataAsync) | **GET** /api/v2/MarketingService/EmailTemplates | Get email templates
[**EmailTemplatesAPI_updateEmailTemplateAsync**](EmailTemplatesAPI.md#EmailTemplatesAPI_updateEmailTemplateAsync) | **PUT** /api/v2/MarketingService/EmailTemplates/{emailTemplateId} | Update an email template


# **EmailTemplatesAPI_createEmailTemplateAsync**
```c
// Create an email template
//
// Creates a new email template for the specified tenant.
//
empty_envelope_t* EmailTemplatesAPI_createEmailTemplateAsync(apiClient_t *apiClient, char *tenantId, email_template_create_dto_t *email_template_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**email_template_create_dto** | **[email_template_create_dto_t](email_template_create_dto.md) \*** |  | 
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

# **EmailTemplatesAPI_deleteEmailTemplateAsync**
```c
// Delete an email template
//
// Deletes an email template by its ID.
//
empty_envelope_t* EmailTemplatesAPI_deleteEmailTemplateAsync(apiClient_t *apiClient, char *tenantId, char *emailTemplateId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**emailTemplateId** | **char \*** |  | 
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

# **EmailTemplatesAPI_getEmailTemplateDetailsAsync**
```c
// Get email template by ID
//
// Retrieves the details of a specific email template by its ID.
//
email_template_dto_envelope_t* EmailTemplatesAPI_getEmailTemplateDetailsAsync(apiClient_t *apiClient, char *tenantId, char *emailTemplateId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**emailTemplateId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[email_template_dto_envelope_t](email_template_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmailTemplatesAPI_getEmailTemplatesCountAsync**
```c
// Get email templates count
//
// Returns the count of email templates for the specified tenant using OData query options.
//
int32_envelope_t* EmailTemplatesAPI_getEmailTemplatesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **EmailTemplatesAPI_getEmailTemplatesODataAsync**
```c
// Get email templates
//
// Retrieves a collection of email templates for the specified tenant using OData query options.
//
email_template_dto_list_envelope_t* EmailTemplatesAPI_getEmailTemplatesODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[email_template_dto_list_envelope_t](email_template_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmailTemplatesAPI_updateEmailTemplateAsync**
```c
// Update an email template
//
// Updates an existing email template by its ID.
//
empty_envelope_t* EmailTemplatesAPI_updateEmailTemplateAsync(apiClient_t *apiClient, char *tenantId, char *emailTemplateId, email_template_update_dto_t *email_template_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**emailTemplateId** | **char \*** |  | 
**email_template_update_dto** | **[email_template_update_dto_t](email_template_update_dto.md) \*** |  | 
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

