# PaymentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PaymentsAPI_createPaymentAsync**](PaymentsAPI.md#PaymentsAPI_createPaymentAsync) | **POST** /api/v2/PaymentsService/Payments | Creates a new payment
[**PaymentsAPI_deletePaymentAsync**](PaymentsAPI.md#PaymentsAPI_deletePaymentAsync) | **DELETE** /api/v2/PaymentsService/Payments/{paymentId} | Deletes a payment
[**PaymentsAPI_getPaymentAsync**](PaymentsAPI.md#PaymentsAPI_getPaymentAsync) | **GET** /api/v2/PaymentsService/Payments/{paymentId}/Details | Gets a payment by ID (deprecated)
[**PaymentsAPI_getPaymentAsyncV2**](PaymentsAPI.md#PaymentsAPI_getPaymentAsyncV2) | **GET** /api/v2/PaymentsService/Payments/{paymentId} | Gets a payment by ID
[**PaymentsAPI_getPaymentsAsync**](PaymentsAPI.md#PaymentsAPI_getPaymentsAsync) | **GET** /api/v2/PaymentsService/Payments | Retrieves all payments
[**PaymentsAPI_updatePaymentAsync**](PaymentsAPI.md#PaymentsAPI_updatePaymentAsync) | **PUT** /api/v2/PaymentsService/Payments/{paymentId} | Updates a payment


# **PaymentsAPI_createPaymentAsync**
```c
// Creates a new payment
//
// Creates a new payment for the current tenant.
//
empty_envelope_t* PaymentsAPI_createPaymentAsync(apiClient_t *apiClient, char *tenantId, payment_create_dto_t *payment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**payment_create_dto** | **[payment_create_dto_t](payment_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentsAPI_deletePaymentAsync**
```c
// Deletes a payment
//
// Deletes the specified payment.
//
empty_envelope_t* PaymentsAPI_deletePaymentAsync(apiClient_t *apiClient, char *tenantId, char *paymentId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentsAPI_getPaymentAsync**
```c
// Gets a payment by ID (deprecated)
//
// Retrieves a payment using the deprecated /Details route. Use GET {paymentId} instead.
//
payment_dto_list_envelope_t* PaymentsAPI_getPaymentAsync(apiClient_t *apiClient, char *paymentId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**paymentId** | **char \*** |  | 

### Return type

[payment_dto_list_envelope_t](payment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentsAPI_getPaymentAsyncV2**
```c
// Gets a payment by ID
//
// Retrieves the details of a payment using its unique identifier.
//
payment_dto_list_envelope_t* PaymentsAPI_getPaymentAsyncV2(apiClient_t *apiClient, char *paymentId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**paymentId** | **char \*** |  | 

### Return type

[payment_dto_list_envelope_t](payment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentsAPI_getPaymentsAsync**
```c
// Retrieves all payments
//
// Gets all payments for the current tenant with OData support.
//
payment_dto_list_envelope_t* PaymentsAPI_getPaymentsAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[payment_dto_list_envelope_t](payment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentsAPI_updatePaymentAsync**
```c
// Updates a payment
//
// Updates the specified payment.
//
empty_envelope_t* PaymentsAPI_updatePaymentAsync(apiClient_t *apiClient, char *tenantId, char *paymentId, payment_update_dto_t *payment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentId** | **char \*** |  | 
**payment_update_dto** | **[payment_update_dto_t](payment_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

