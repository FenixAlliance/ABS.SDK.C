# LicensesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LicensesAPI_createLicenseAsync**](LicensesAPI.md#LicensesAPI_createLicenseAsync) | **POST** /api/v2/LicensingService/Licenses | Create a new license
[**LicensesAPI_deleteLicenseAsync**](LicensesAPI.md#LicensesAPI_deleteLicenseAsync) | **DELETE** /api/v2/LicensingService/Licenses/{licenseId} | Delete a license
[**LicensesAPI_getLicenseByIdAsync**](LicensesAPI.md#LicensesAPI_getLicenseByIdAsync) | **GET** /api/v2/LicensingService/Licenses/{licenseId} | Get license by ID
[**LicensesAPI_getLicensesAsync**](LicensesAPI.md#LicensesAPI_getLicensesAsync) | **GET** /api/v2/LicensingService/Licenses | Get licenses
[**LicensesAPI_getLicensesCountAsync**](LicensesAPI.md#LicensesAPI_getLicensesCountAsync) | **GET** /api/v2/LicensingService/Licenses/Count | Get licenses count
[**LicensesAPI_updateLicenseAsync**](LicensesAPI.md#LicensesAPI_updateLicenseAsync) | **PUT** /api/v2/LicensingService/Licenses/{licenseId} | Update a license


# **LicensesAPI_createLicenseAsync**
```c
// Create a new license
//
// Creates a new license instance for the specified tenant.
//
void LicensesAPI_createLicenseAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_create_dto_t *license_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_create_dto** | **[license_create_dto_t](license_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_deleteLicenseAsync**
```c
// Delete a license
//
// Deletes a license instance for the specified tenant.
//
void LicensesAPI_deleteLicenseAsync(apiClient_t *apiClient, char *tenantId, char *licenseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**licenseId** | **char \*** |  | 
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

# **LicensesAPI_getLicenseByIdAsync**
```c
// Get license by ID
//
// Retrieves a specific license instance by its identifier.
//
license_dto_t* LicensesAPI_getLicenseByIdAsync(apiClient_t *apiClient, char *tenantId, char *licenseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**licenseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[license_dto_t](license_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_getLicensesAsync**
```c
// Get licenses
//
// Retrieves the license instances owned by the specified tenant, filtered via OData query options.
//
license_dto_list_envelope_t* LicensesAPI_getLicensesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_dto_collection_query_parameters_t *license_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_dto_collection_query_parameters** | **[license_dto_collection_query_parameters_t](license_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[license_dto_list_envelope_t](license_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_getLicensesCountAsync**
```c
// Get licenses count
//
// Returns the count of license instances owned by the specified tenant.
//
int32_envelope_t* LicensesAPI_getLicensesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_dto_collection_query_parameters_t *license_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_dto_collection_query_parameters** | **[license_dto_collection_query_parameters_t](license_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_updateLicenseAsync**
```c
// Update a license
//
// Updates an existing license instance for the specified tenant.
//
void LicensesAPI_updateLicenseAsync(apiClient_t *apiClient, char *tenantId, char *licenseId, char *api_version, char *x_api_version, license_update_dto_t *license_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**licenseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_update_dto** | **[license_update_dto_t](license_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

