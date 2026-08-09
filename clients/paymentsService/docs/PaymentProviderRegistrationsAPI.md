# PaymentProviderRegistrationsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PaymentProviderRegistrationsAPI_createAsync**](PaymentProviderRegistrationsAPI.md#PaymentProviderRegistrationsAPI_createAsync) | **POST** /api/v2/PaymentsService/PaymentProviderRegistrations | Provisions a provider webhook registration
[**PaymentProviderRegistrationsAPI_getAsync**](PaymentProviderRegistrationsAPI.md#PaymentProviderRegistrationsAPI_getAsync) | **GET** /api/v2/PaymentsService/PaymentProviderRegistrations | Lists the tenant&#39;s provider registrations
[**PaymentProviderRegistrationsAPI_getCountAsync**](PaymentProviderRegistrationsAPI.md#PaymentProviderRegistrationsAPI_getCountAsync) | **GET** /api/v2/PaymentsService/PaymentProviderRegistrations/Count | Counts the tenant&#39;s provider registrations
[**PaymentProviderRegistrationsAPI_rotateKeyAsync**](PaymentProviderRegistrationsAPI.md#PaymentProviderRegistrationsAPI_rotateKeyAsync) | **POST** /api/v2/PaymentsService/PaymentProviderRegistrations/{registrationId}/RotateKey | Rotates a registration&#39;s webhook key


# **PaymentProviderRegistrationsAPI_createAsync**
```c
// Provisions a provider webhook registration
//
// Stores the BYO signing secret in the tenant options store, creates + activates the registration, and reveals the one-time plaintext webhook key plus its fully-composed inbound URL.
//
provider_webhook_registration_created_dto_envelope_t* PaymentProviderRegistrationsAPI_createAsync(apiClient_t *apiClient, char *tenantId, create_provider_webhook_registration_request_t *create_provider_webhook_registration_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**create_provider_webhook_registration_request** | **[create_provider_webhook_registration_request_t](create_provider_webhook_registration_request.md) \*** |  | [optional] 

### Return type

[provider_webhook_registration_created_dto_envelope_t](provider_webhook_registration_created_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentProviderRegistrationsAPI_getAsync**
```c
// Lists the tenant's provider registrations
//
// Gets all provider registrations for the current tenant with OData support (no secret is ever returned).
//
payment_provider_registration_dto_list_envelope_t* PaymentProviderRegistrationsAPI_getAsync(apiClient_t *apiClient, char *tenantId, payment_provider_registration_dto_collection_query_parameters_t *payment_provider_registration_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**payment_provider_registration_dto_collection_query_parameters** | **[payment_provider_registration_dto_collection_query_parameters_t](payment_provider_registration_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[payment_provider_registration_dto_list_envelope_t](payment_provider_registration_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentProviderRegistrationsAPI_getCountAsync**
```c
// Counts the tenant's provider registrations
//
// Gets the count of provider registrations for the current tenant (OData sibling of the list).
//
int32_envelope_t* PaymentProviderRegistrationsAPI_getCountAsync(apiClient_t *apiClient, char *tenantId, payment_provider_registration_dto_collection_query_parameters_t *payment_provider_registration_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**payment_provider_registration_dto_collection_query_parameters** | **[payment_provider_registration_dto_collection_query_parameters_t](payment_provider_registration_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PaymentProviderRegistrationsAPI_rotateKeyAsync**
```c
// Rotates a registration's webhook key
//
// Mints a fresh webhook key (invalidating the previous one) and reveals it once, plus its composed URL.
//
provider_webhook_registration_created_dto_envelope_t* PaymentProviderRegistrationsAPI_rotateKeyAsync(apiClient_t *apiClient, char *tenantId, char *registrationId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**registrationId** | **char \*** |  | 

### Return type

[provider_webhook_registration_created_dto_envelope_t](provider_webhook_registration_created_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

