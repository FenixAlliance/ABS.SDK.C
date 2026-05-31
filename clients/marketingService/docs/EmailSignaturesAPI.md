# EmailSignaturesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EmailSignaturesAPI_createEmailSignatureAsync**](EmailSignaturesAPI.md#EmailSignaturesAPI_createEmailSignatureAsync) | **POST** /api/v2/MarketingService/EmailSignatures | Create an email signature
[**EmailSignaturesAPI_deleteEmailSignatureAsync**](EmailSignaturesAPI.md#EmailSignaturesAPI_deleteEmailSignatureAsync) | **DELETE** /api/v2/MarketingService/EmailSignatures/{emailsignatureId} | Delete an email signature
[**EmailSignaturesAPI_getEmailSignatureDetailsAsync**](EmailSignaturesAPI.md#EmailSignaturesAPI_getEmailSignatureDetailsAsync) | **GET** /api/v2/MarketingService/EmailSignatures/{emailsignatureId} | Get email signature by ID
[**EmailSignaturesAPI_getEmailSignaturesCountAsync**](EmailSignaturesAPI.md#EmailSignaturesAPI_getEmailSignaturesCountAsync) | **GET** /api/v2/MarketingService/EmailSignatures/Count | Get email signatures count
[**EmailSignaturesAPI_getEmailSignaturesODataAsync**](EmailSignaturesAPI.md#EmailSignaturesAPI_getEmailSignaturesODataAsync) | **GET** /api/v2/MarketingService/EmailSignatures | Get email signatures
[**EmailSignaturesAPI_updateEmailSignatureAsync**](EmailSignaturesAPI.md#EmailSignaturesAPI_updateEmailSignatureAsync) | **PUT** /api/v2/MarketingService/EmailSignatures/{emailsignatureId} | Update an email signature


# **EmailSignaturesAPI_createEmailSignatureAsync**
```c
// Create an email signature
//
// Creates a new email signature for the specified tenant.
//
empty_envelope_t* EmailSignaturesAPI_createEmailSignatureAsync(apiClient_t *apiClient, char *tenantId, email_signature_create_dto_t *email_signature_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**email_signature_create_dto** | **[email_signature_create_dto_t](email_signature_create_dto.md) \*** |  | 
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

# **EmailSignaturesAPI_deleteEmailSignatureAsync**
```c
// Delete an email signature
//
// Deletes an email signature by its ID.
//
empty_envelope_t* EmailSignaturesAPI_deleteEmailSignatureAsync(apiClient_t *apiClient, char *tenantId, char *emailsignatureId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**emailsignatureId** | **char \*** |  | 
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

# **EmailSignaturesAPI_getEmailSignatureDetailsAsync**
```c
// Get email signature by ID
//
// Retrieves the details of a specific email signature by its ID.
//
email_signature_dto_envelope_t* EmailSignaturesAPI_getEmailSignatureDetailsAsync(apiClient_t *apiClient, char *tenantId, char *emailsignatureId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**emailsignatureId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[email_signature_dto_envelope_t](email_signature_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmailSignaturesAPI_getEmailSignaturesCountAsync**
```c
// Get email signatures count
//
// Returns the count of email signatures for the specified tenant using OData query options.
//
int32_envelope_t* EmailSignaturesAPI_getEmailSignaturesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **EmailSignaturesAPI_getEmailSignaturesODataAsync**
```c
// Get email signatures
//
// Retrieves a collection of email signatures for the specified tenant using OData query options.
//
email_signature_dto_list_envelope_t* EmailSignaturesAPI_getEmailSignaturesODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[email_signature_dto_list_envelope_t](email_signature_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EmailSignaturesAPI_updateEmailSignatureAsync**
```c
// Update an email signature
//
// Updates an existing email signature by its ID.
//
empty_envelope_t* EmailSignaturesAPI_updateEmailSignatureAsync(apiClient_t *apiClient, char *tenantId, char *emailsignatureId, email_signature_update_dto_t *email_signature_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**emailsignatureId** | **char \*** |  | 
**email_signature_update_dto** | **[email_signature_update_dto_t](email_signature_update_dto.md) \*** |  | 
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

