# PaymentMethodsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PaymentMethodsAPI_createPaymentMethodAsync**](PaymentMethodsAPI.md#PaymentMethodsAPI_createPaymentMethodAsync) | **POST** /api/v2/PaymentsService/PaymentMethods | Creates a new payment method
[**PaymentMethodsAPI_deletePaymentMethodAsync**](PaymentMethodsAPI.md#PaymentMethodsAPI_deletePaymentMethodAsync) | **DELETE** /api/v2/PaymentsService/PaymentMethods/{paymentMethodId} | Deletes a payment method
[**PaymentMethodsAPI_getPaymentMethodDetailsAsync**](PaymentMethodsAPI.md#PaymentMethodsAPI_getPaymentMethodDetailsAsync) | **GET** /api/v2/PaymentsService/PaymentMethods/{paymentMethodId} | Gets a payment method by ID
[**PaymentMethodsAPI_getPaymentMethodsAsync**](PaymentMethodsAPI.md#PaymentMethodsAPI_getPaymentMethodsAsync) | **GET** /api/v2/PaymentsService/PaymentMethods | Retrieves all payment methods
[**PaymentMethodsAPI_getPaymentMethodsCountAsync**](PaymentMethodsAPI.md#PaymentMethodsAPI_getPaymentMethodsCountAsync) | **GET** /api/v2/PaymentsService/PaymentMethods/Count | Counts payment methods
[**PaymentMethodsAPI_updatePaymentMethodAsync**](PaymentMethodsAPI.md#PaymentMethodsAPI_updatePaymentMethodAsync) | **PUT** /api/v2/PaymentsService/PaymentMethods/{paymentMethodId} | Updates a payment method


# **PaymentMethodsAPI_createPaymentMethodAsync**
```c
// Creates a new payment method
//
// Creates a new payment method for the current tenant.
//
empty_envelope_t* PaymentMethodsAPI_createPaymentMethodAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, payment_method_create_dto_t *payment_method_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**payment_method_create_dto** | **[payment_method_create_dto_t](payment_method_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentMethodsAPI_deletePaymentMethodAsync**
```c
// Deletes a payment method
//
// Deletes the specified payment method.
//
empty_envelope_t* PaymentMethodsAPI_deletePaymentMethodAsync(apiClient_t *apiClient, char *tenantId, char *paymentMethodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentMethodId** | **char \*** |  | 
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

# **PaymentMethodsAPI_getPaymentMethodDetailsAsync**
```c
// Gets a payment method by ID
//
// Retrieves the details of a payment method using its unique ID.
//
payment_method_dto_envelope_t* PaymentMethodsAPI_getPaymentMethodDetailsAsync(apiClient_t *apiClient, char *tenantId, char *paymentMethodId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentMethodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_method_dto_envelope_t](payment_method_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentMethodsAPI_getPaymentMethodsAsync**
```c
// Retrieves all payment methods
//
// Gets all payment methods for the current tenant with OData support.
//
payment_method_dto_i_read_only_list_envelope_t* PaymentMethodsAPI_getPaymentMethodsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_method_dto_i_read_only_list_envelope_t](payment_method_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentMethodsAPI_getPaymentMethodsCountAsync**
```c
// Counts payment methods
//
// Gets the count of payment methods for the current tenant.
//
int32_envelope_t* PaymentMethodsAPI_getPaymentMethodsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **PaymentMethodsAPI_updatePaymentMethodAsync**
```c
// Updates a payment method
//
// Updates the specified payment method.
//
empty_envelope_t* PaymentMethodsAPI_updatePaymentMethodAsync(apiClient_t *apiClient, char *tenantId, char *paymentMethodId, char *api_version, char *x_api_version, payment_method_update_dto_t *payment_method_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentMethodId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**payment_method_update_dto** | **[payment_method_update_dto_t](payment_method_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

