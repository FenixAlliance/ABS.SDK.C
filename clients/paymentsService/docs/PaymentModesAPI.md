# PaymentModesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PaymentModesAPI_createPaymentModeAsync**](PaymentModesAPI.md#PaymentModesAPI_createPaymentModeAsync) | **POST** /api/v2/PaymentsService/PaymentModes | Creates a new payment mode
[**PaymentModesAPI_deletePaymentModeAsync**](PaymentModesAPI.md#PaymentModesAPI_deletePaymentModeAsync) | **DELETE** /api/v2/PaymentsService/PaymentModes/{paymentModeId} | Deletes a payment mode
[**PaymentModesAPI_getPaymentModeDetailsAsync**](PaymentModesAPI.md#PaymentModesAPI_getPaymentModeDetailsAsync) | **GET** /api/v2/PaymentsService/PaymentModes/{paymentModeId} | Gets a payment mode by ID
[**PaymentModesAPI_getPaymentModesAsync**](PaymentModesAPI.md#PaymentModesAPI_getPaymentModesAsync) | **GET** /api/v2/PaymentsService/PaymentModes | Retrieves all payment modes
[**PaymentModesAPI_getPaymentModesCountAsync**](PaymentModesAPI.md#PaymentModesAPI_getPaymentModesCountAsync) | **GET** /api/v2/PaymentsService/PaymentModes/Count | Counts payment modes
[**PaymentModesAPI_updatePaymentModeAsync**](PaymentModesAPI.md#PaymentModesAPI_updatePaymentModeAsync) | **PUT** /api/v2/PaymentsService/PaymentModes/{paymentModeId} | Updates a payment mode


# **PaymentModesAPI_createPaymentModeAsync**
```c
// Creates a new payment mode
//
// Creates a new payment mode for the current tenant.
//
empty_envelope_t* PaymentModesAPI_createPaymentModeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, payment_mode_create_dto_t *payment_mode_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**payment_mode_create_dto** | **[payment_mode_create_dto_t](payment_mode_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentModesAPI_deletePaymentModeAsync**
```c
// Deletes a payment mode
//
// Deletes the specified payment mode.
//
empty_envelope_t* PaymentModesAPI_deletePaymentModeAsync(apiClient_t *apiClient, char *tenantId, char *paymentModeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentModeId** | **char \*** |  | 
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

# **PaymentModesAPI_getPaymentModeDetailsAsync**
```c
// Gets a payment mode by ID
//
// Retrieves the details of a payment mode using its unique ID.
//
payment_mode_dto_envelope_t* PaymentModesAPI_getPaymentModeDetailsAsync(apiClient_t *apiClient, char *tenantId, char *paymentModeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentModeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_mode_dto_envelope_t](payment_mode_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentModesAPI_getPaymentModesAsync**
```c
// Retrieves all payment modes
//
// Gets all payment modes for the current tenant with OData support.
//
payment_mode_dto_i_read_only_list_envelope_t* PaymentModesAPI_getPaymentModesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_mode_dto_i_read_only_list_envelope_t](payment_mode_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentModesAPI_getPaymentModesCountAsync**
```c
// Counts payment modes
//
// Gets the count of payment modes for the current tenant.
//
int32_envelope_t* PaymentModesAPI_getPaymentModesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **PaymentModesAPI_updatePaymentModeAsync**
```c
// Updates a payment mode
//
// Updates the specified payment mode.
//
empty_envelope_t* PaymentModesAPI_updatePaymentModeAsync(apiClient_t *apiClient, char *tenantId, char *paymentModeId, char *api_version, char *x_api_version, payment_mode_update_dto_t *payment_mode_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentModeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**payment_mode_update_dto** | **[payment_mode_update_dto_t](payment_mode_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

