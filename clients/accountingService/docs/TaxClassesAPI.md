# TaxClassesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TaxClassesAPI_createTaxClass**](TaxClassesAPI.md#TaxClassesAPI_createTaxClass) | **POST** /api/v2/AccountingService/TaxClasses | Create a tax class
[**TaxClassesAPI_deleteTaxClass**](TaxClassesAPI.md#TaxClassesAPI_deleteTaxClass) | **DELETE** /api/v2/AccountingService/TaxClasses/{id} | Delete a tax class
[**TaxClassesAPI_getTaxClass**](TaxClassesAPI.md#TaxClassesAPI_getTaxClass) | **GET** /api/v2/AccountingService/TaxClasses/{id} | Get tax class by ID
[**TaxClassesAPI_getTaxClasses**](TaxClassesAPI.md#TaxClassesAPI_getTaxClasses) | **GET** /api/v2/AccountingService/TaxClasses | Get all tax classes for a tenant
[**TaxClassesAPI_getTaxClassesCount**](TaxClassesAPI.md#TaxClassesAPI_getTaxClassesCount) | **GET** /api/v2/AccountingService/TaxClasses/Count | Get tax classes count
[**TaxClassesAPI_patchTaxClass**](TaxClassesAPI.md#TaxClassesAPI_patchTaxClass) | **PATCH** /api/v2/AccountingService/TaxClasses/{id} | Patch a tax class
[**TaxClassesAPI_updateTaxClass**](TaxClassesAPI.md#TaxClassesAPI_updateTaxClass) | **PUT** /api/v2/AccountingService/TaxClasses/{id} | Update a tax class


# **TaxClassesAPI_createTaxClass**
```c
// Create a tax class
//
// Creates a new tax class for the specified tenant.
//
empty_envelope_t* TaxClassesAPI_createTaxClass(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tax_class_create_dto_t *tax_class_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tax_class_create_dto** | **[tax_class_create_dto_t](tax_class_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxClassesAPI_deleteTaxClass**
```c
// Delete a tax class
//
// Deletes a tax class identified by its unique identifier.
//
empty_envelope_t* TaxClassesAPI_deleteTaxClass(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **TaxClassesAPI_getTaxClass**
```c
// Get tax class by ID
//
// Retrieves a specific tax class by its unique identifier.
//
tax_class_dto_envelope_t* TaxClassesAPI_getTaxClass(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[tax_class_dto_envelope_t](tax_class_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxClassesAPI_getTaxClasses**
```c
// Get all tax classes for a tenant
//
// Retrieves all tax classes for the specified tenant using OData query options.
//
tax_class_dto_list_envelope_t* TaxClassesAPI_getTaxClasses(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tax_class_dto_list_envelope_t](tax_class_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxClassesAPI_getTaxClassesCount**
```c
// Get tax classes count
//
// Returns the count of tax classes for the specified tenant.
//
int32_envelope_t* TaxClassesAPI_getTaxClassesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TaxClassesAPI_patchTaxClass**
```c
// Patch a tax class
//
// Partially updates an existing tax class identified by its unique identifier.
//
empty_envelope_t* TaxClassesAPI_patchTaxClass(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxClassesAPI_updateTaxClass**
```c
// Update a tax class
//
// Updates an existing tax class identified by its unique identifier.
//
empty_envelope_t* TaxClassesAPI_updateTaxClass(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, tax_class_update_dto_t *tax_class_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tax_class_update_dto** | **[tax_class_update_dto_t](tax_class_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

