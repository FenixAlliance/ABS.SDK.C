# PaymentTermsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PaymentTermsAPI_createPaymentTermAsync**](PaymentTermsAPI.md#PaymentTermsAPI_createPaymentTermAsync) | **POST** /api/v2/PaymentsService/PaymentTerms | Creates a new payment term
[**PaymentTermsAPI_deletePaymentTermAsync**](PaymentTermsAPI.md#PaymentTermsAPI_deletePaymentTermAsync) | **DELETE** /api/v2/PaymentsService/PaymentTerms/{paymentTermId} | Deletes a payment term
[**PaymentTermsAPI_getPaymentTermDetailsAsync**](PaymentTermsAPI.md#PaymentTermsAPI_getPaymentTermDetailsAsync) | **GET** /api/v2/PaymentsService/PaymentTerms/{paymentTermId} | Gets a payment term by ID
[**PaymentTermsAPI_getPaymentTermsAsync**](PaymentTermsAPI.md#PaymentTermsAPI_getPaymentTermsAsync) | **GET** /api/v2/PaymentsService/PaymentTerms | Retrieves all payment terms
[**PaymentTermsAPI_getPaymentTermsCountAsync**](PaymentTermsAPI.md#PaymentTermsAPI_getPaymentTermsCountAsync) | **GET** /api/v2/PaymentsService/PaymentTerms/Count | Counts payment terms
[**PaymentTermsAPI_updatePaymentTermAsync**](PaymentTermsAPI.md#PaymentTermsAPI_updatePaymentTermAsync) | **PUT** /api/v2/PaymentsService/PaymentTerms/{paymentTermId} | Updates a payment term


# **PaymentTermsAPI_createPaymentTermAsync**
```c
// Creates a new payment term
//
// Creates a new payment term for the current tenant.
//
empty_envelope_t* PaymentTermsAPI_createPaymentTermAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, payment_term_create_dto_t *payment_term_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**payment_term_create_dto** | **[payment_term_create_dto_t](payment_term_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentTermsAPI_deletePaymentTermAsync**
```c
// Deletes a payment term
//
// Deletes the specified payment term.
//
empty_envelope_t* PaymentTermsAPI_deletePaymentTermAsync(apiClient_t *apiClient, char *tenantId, char *paymentTermId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentTermId** | **char \*** |  | 
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

# **PaymentTermsAPI_getPaymentTermDetailsAsync**
```c
// Gets a payment term by ID
//
// Retrieves the details of a payment term using its unique ID.
//
payment_term_dto_envelope_t* PaymentTermsAPI_getPaymentTermDetailsAsync(apiClient_t *apiClient, char *tenantId, char *paymentTermId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentTermId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_term_dto_envelope_t](payment_term_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentTermsAPI_getPaymentTermsAsync**
```c
// Retrieves all payment terms
//
// Gets all payment terms for the current tenant with OData support.
//
payment_term_dto_i_read_only_list_envelope_t* PaymentTermsAPI_getPaymentTermsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_term_dto_i_read_only_list_envelope_t](payment_term_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentTermsAPI_getPaymentTermsCountAsync**
```c
// Counts payment terms
//
// Gets the count of payment terms for the current tenant.
//
int32_envelope_t* PaymentTermsAPI_getPaymentTermsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **PaymentTermsAPI_updatePaymentTermAsync**
```c
// Updates a payment term
//
// Updates the specified payment term.
//
empty_envelope_t* PaymentTermsAPI_updatePaymentTermAsync(apiClient_t *apiClient, char *tenantId, char *paymentTermId, char *api_version, char *x_api_version, payment_term_update_dto_t *payment_term_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentTermId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**payment_term_update_dto** | **[payment_term_update_dto_t](payment_term_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

