# NewslettersAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**NewslettersAPI_createNewsletterAsync**](NewslettersAPI.md#NewslettersAPI_createNewsletterAsync) | **POST** /api/v2/MarketingService/Newsletters | Create a newsletter
[**NewslettersAPI_deleteNewsletterAsync**](NewslettersAPI.md#NewslettersAPI_deleteNewsletterAsync) | **DELETE** /api/v2/MarketingService/Newsletters/{newsletterId} | Delete a newsletter
[**NewslettersAPI_getNewsletterDetailsAsync**](NewslettersAPI.md#NewslettersAPI_getNewsletterDetailsAsync) | **GET** /api/v2/MarketingService/Newsletters/{newsletterId} | Get newsletter by ID
[**NewslettersAPI_getNewsletterODataAsync**](NewslettersAPI.md#NewslettersAPI_getNewsletterODataAsync) | **GET** /api/v2/MarketingService/Newsletters | Get newsletters
[**NewslettersAPI_getNewslettersCountAsync**](NewslettersAPI.md#NewslettersAPI_getNewslettersCountAsync) | **GET** /api/v2/MarketingService/Newsletters/Count | Get newsletters count
[**NewslettersAPI_updateNewsletterAsync**](NewslettersAPI.md#NewslettersAPI_updateNewsletterAsync) | **PUT** /api/v2/MarketingService/Newsletters/{newsletterId} | Update a newsletter


# **NewslettersAPI_createNewsletterAsync**
```c
// Create a newsletter
//
// Creates a new newsletter for the specified tenant.
//
empty_envelope_t* NewslettersAPI_createNewsletterAsync(apiClient_t *apiClient, char *tenantId, newsletter_create_dto_t *newsletter_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**newsletter_create_dto** | **[newsletter_create_dto_t](newsletter_create_dto.md) \*** |  | 
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

# **NewslettersAPI_deleteNewsletterAsync**
```c
// Delete a newsletter
//
// Deletes a newsletter by its ID.
//
empty_envelope_t* NewslettersAPI_deleteNewsletterAsync(apiClient_t *apiClient, char *tenantId, char *newsletterId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**newsletterId** | **char \*** |  | 
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

# **NewslettersAPI_getNewsletterDetailsAsync**
```c
// Get newsletter by ID
//
// Retrieves the details of a specific newsletter by its ID.
//
newsletter_dto_envelope_t* NewslettersAPI_getNewsletterDetailsAsync(apiClient_t *apiClient, char *tenantId, char *newsletterId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**newsletterId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[newsletter_dto_envelope_t](newsletter_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NewslettersAPI_getNewsletterODataAsync**
```c
// Get newsletters
//
// Retrieves a collection of newsletters for the specified tenant using OData query options.
//
void NewslettersAPI_getNewsletterODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NewslettersAPI_getNewslettersCountAsync**
```c
// Get newsletters count
//
// Returns the count of newsletters for the specified tenant using OData query options.
//
int32_envelope_t* NewslettersAPI_getNewslettersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **NewslettersAPI_updateNewsletterAsync**
```c
// Update a newsletter
//
// Updates an existing newsletter by its ID.
//
empty_envelope_t* NewslettersAPI_updateNewsletterAsync(apiClient_t *apiClient, char *tenantId, char *newsletterId, newsletter_update_dto_t *newsletter_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**newsletterId** | **char \*** |  | 
**newsletter_update_dto** | **[newsletter_update_dto_t](newsletter_update_dto.md) \*** |  | 
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

