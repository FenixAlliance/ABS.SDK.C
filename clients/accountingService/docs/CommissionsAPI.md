# CommissionsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CommissionsAPI_createCommissionAsync**](CommissionsAPI.md#CommissionsAPI_createCommissionAsync) | **POST** /api/v2/AccountingService/Commissions/Commissions | Create a commission
[**CommissionsAPI_createPaymentCommissionAsync**](CommissionsAPI.md#CommissionsAPI_createPaymentCommissionAsync) | **POST** /api/v2/AccountingService/Commissions/PaymentCommissions | Create a payment commission
[**CommissionsAPI_deleteCommissionAsync**](CommissionsAPI.md#CommissionsAPI_deleteCommissionAsync) | **DELETE** /api/v2/AccountingService/Commissions/Commissions/{commissionId} | Delete a commission
[**CommissionsAPI_deletePaymentCommissionAsync**](CommissionsAPI.md#CommissionsAPI_deletePaymentCommissionAsync) | **DELETE** /api/v2/AccountingService/Commissions/PaymentCommissions/{paymentCommissionId} | Delete a payment commission
[**CommissionsAPI_getCommissionAsync**](CommissionsAPI.md#CommissionsAPI_getCommissionAsync) | **GET** /api/v2/AccountingService/Commissions/Commissions/{commissionId} | Get a commission by id
[**CommissionsAPI_getCommissionsAsync**](CommissionsAPI.md#CommissionsAPI_getCommissionsAsync) | **GET** /api/v2/AccountingService/Commissions/Commissions | Get all commissions for a tenant
[**CommissionsAPI_getCommissionsCountAsync**](CommissionsAPI.md#CommissionsAPI_getCommissionsCountAsync) | **GET** /api/v2/AccountingService/Commissions/Commissions/Count | Get the count of commissions for a tenant
[**CommissionsAPI_getPaymentCommissionAsync**](CommissionsAPI.md#CommissionsAPI_getPaymentCommissionAsync) | **GET** /api/v2/AccountingService/Commissions/PaymentCommissions/{paymentCommissionId} | Get a payment commission by id
[**CommissionsAPI_getPaymentCommissionsAsync**](CommissionsAPI.md#CommissionsAPI_getPaymentCommissionsAsync) | **GET** /api/v2/AccountingService/Commissions/PaymentCommissions | Get all payment commissions for a tenant
[**CommissionsAPI_getPaymentCommissionsCountAsync**](CommissionsAPI.md#CommissionsAPI_getPaymentCommissionsCountAsync) | **GET** /api/v2/AccountingService/Commissions/PaymentCommissions/Count | Get the count of payment commissions for a tenant
[**CommissionsAPI_updateCommissionAsync**](CommissionsAPI.md#CommissionsAPI_updateCommissionAsync) | **PUT** /api/v2/AccountingService/Commissions/Commissions/{commissionId} | Update a commission
[**CommissionsAPI_updatePaymentCommissionAsync**](CommissionsAPI.md#CommissionsAPI_updatePaymentCommissionAsync) | **PUT** /api/v2/AccountingService/Commissions/PaymentCommissions/{paymentCommissionId} | Update a payment commission


# **CommissionsAPI_createCommissionAsync**
```c
// Create a commission
//
// Creates a new commission.
//
empty_envelope_t* CommissionsAPI_createCommissionAsync(apiClient_t *apiClient, char *tenantId, commission_create_dto_t *commission_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**commission_create_dto** | **[commission_create_dto_t](commission_create_dto.md) \*** |  | 
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

# **CommissionsAPI_createPaymentCommissionAsync**
```c
// Create a payment commission
//
// Creates a new payment commission.
//
empty_envelope_t* CommissionsAPI_createPaymentCommissionAsync(apiClient_t *apiClient, char *tenantId, payment_commission_create_dto_t *payment_commission_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**payment_commission_create_dto** | **[payment_commission_create_dto_t](payment_commission_create_dto.md) \*** |  | 
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

# **CommissionsAPI_deleteCommissionAsync**
```c
// Delete a commission
//
// Deletes a commission.
//
empty_envelope_t* CommissionsAPI_deleteCommissionAsync(apiClient_t *apiClient, char *tenantId, char *commissionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**commissionId** | **char \*** |  | 
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

# **CommissionsAPI_deletePaymentCommissionAsync**
```c
// Delete a payment commission
//
// Deletes a payment commission.
//
empty_envelope_t* CommissionsAPI_deletePaymentCommissionAsync(apiClient_t *apiClient, char *tenantId, char *paymentCommissionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentCommissionId** | **char \*** |  | 
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

# **CommissionsAPI_getCommissionAsync**
```c
// Get a commission by id
//
// Retrieves a commission by its identifier.
//
commission_dto_envelope_t* CommissionsAPI_getCommissionAsync(apiClient_t *apiClient, char *tenantId, char *commissionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**commissionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[commission_dto_envelope_t](commission_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CommissionsAPI_getCommissionsAsync**
```c
// Get all commissions for a tenant
//
// Retrieves all commissions for the specified tenant using OData query options.
//
commission_dto_list_envelope_t* CommissionsAPI_getCommissionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[commission_dto_list_envelope_t](commission_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CommissionsAPI_getCommissionsCountAsync**
```c
// Get the count of commissions for a tenant
//
// Retrieves the count of commissions for the specified tenant using OData query options.
//
int32_envelope_t* CommissionsAPI_getCommissionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CommissionsAPI_getPaymentCommissionAsync**
```c
// Get a payment commission by id
//
// Retrieves a payment commission by its identifier.
//
payment_commission_dto_envelope_t* CommissionsAPI_getPaymentCommissionAsync(apiClient_t *apiClient, char *tenantId, char *paymentCommissionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentCommissionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_commission_dto_envelope_t](payment_commission_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CommissionsAPI_getPaymentCommissionsAsync**
```c
// Get all payment commissions for a tenant
//
// Retrieves all payment commissions for the specified tenant using OData query options.
//
payment_commission_dto_list_envelope_t* CommissionsAPI_getPaymentCommissionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[payment_commission_dto_list_envelope_t](payment_commission_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CommissionsAPI_getPaymentCommissionsCountAsync**
```c
// Get the count of payment commissions for a tenant
//
// Retrieves the count of payment commissions for the specified tenant using OData query options.
//
int32_envelope_t* CommissionsAPI_getPaymentCommissionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CommissionsAPI_updateCommissionAsync**
```c
// Update a commission
//
// Updates an existing commission.
//
empty_envelope_t* CommissionsAPI_updateCommissionAsync(apiClient_t *apiClient, char *tenantId, char *commissionId, commission_update_dto_t *commission_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**commissionId** | **char \*** |  | 
**commission_update_dto** | **[commission_update_dto_t](commission_update_dto.md) \*** |  | 
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

# **CommissionsAPI_updatePaymentCommissionAsync**
```c
// Update a payment commission
//
// Updates an existing payment commission.
//
empty_envelope_t* CommissionsAPI_updatePaymentCommissionAsync(apiClient_t *apiClient, char *tenantId, char *paymentCommissionId, payment_commission_update_dto_t *payment_commission_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**paymentCommissionId** | **char \*** |  | 
**payment_commission_update_dto** | **[payment_commission_update_dto_t](payment_commission_update_dto.md) \*** |  | 
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

