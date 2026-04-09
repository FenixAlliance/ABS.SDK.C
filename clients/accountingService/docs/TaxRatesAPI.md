# TaxRatesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TaxRatesAPI_createTaxRate**](TaxRatesAPI.md#TaxRatesAPI_createTaxRate) | **POST** /api/v2/AccountingService/TaxRates | Create a tax rate
[**TaxRatesAPI_deleteTaxRate**](TaxRatesAPI.md#TaxRatesAPI_deleteTaxRate) | **DELETE** /api/v2/AccountingService/TaxRates/{id} | Delete a tax rate
[**TaxRatesAPI_getTaxRate**](TaxRatesAPI.md#TaxRatesAPI_getTaxRate) | **GET** /api/v2/AccountingService/TaxRates/{id} | Get tax rate by ID
[**TaxRatesAPI_getTaxRates**](TaxRatesAPI.md#TaxRatesAPI_getTaxRates) | **GET** /api/v2/AccountingService/TaxRates | Get all tax rates for a tenant
[**TaxRatesAPI_getTaxRatesCount**](TaxRatesAPI.md#TaxRatesAPI_getTaxRatesCount) | **GET** /api/v2/AccountingService/TaxRates/Count | Get tax rates count
[**TaxRatesAPI_updateTaxRate**](TaxRatesAPI.md#TaxRatesAPI_updateTaxRate) | **PUT** /api/v2/AccountingService/TaxRates/{id} | Update a tax rate


# **TaxRatesAPI_createTaxRate**
```c
// Create a tax rate
//
// Creates a new tax rate for the specified tenant.
//
empty_envelope_t* TaxRatesAPI_createTaxRate(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tax_rate_create_dto_t *tax_rate_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tax_rate_create_dto** | **[tax_rate_create_dto_t](tax_rate_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxRatesAPI_deleteTaxRate**
```c
// Delete a tax rate
//
// Deletes a tax rate identified by its unique identifier.
//
empty_envelope_t* TaxRatesAPI_deleteTaxRate(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
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

# **TaxRatesAPI_getTaxRate**
```c
// Get tax rate by ID
//
// Retrieves a specific tax rate by its unique identifier.
//
tax_rate_dto_envelope_t* TaxRatesAPI_getTaxRate(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tax_rate_dto_envelope_t](tax_rate_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxRatesAPI_getTaxRates**
```c
// Get all tax rates for a tenant
//
// Retrieves all tax rates for the specified tenant using OData query options.
//
tax_rate_dto_list_envelope_t* TaxRatesAPI_getTaxRates(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tax_rate_dto_list_envelope_t](tax_rate_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxRatesAPI_getTaxRatesCount**
```c
// Get tax rates count
//
// Returns the count of tax rates for the specified tenant.
//
int32_envelope_t* TaxRatesAPI_getTaxRatesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TaxRatesAPI_updateTaxRate**
```c
// Update a tax rate
//
// Updates an existing tax rate identified by its unique identifier.
//
empty_envelope_t* TaxRatesAPI_updateTaxRate(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, tax_rate_update_dto_t *tax_rate_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tax_rate_update_dto** | **[tax_rate_update_dto_t](tax_rate_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

