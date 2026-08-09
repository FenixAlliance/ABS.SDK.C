# LicenseTypesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LicenseTypesAPI_createLicenseTypeAsync**](LicenseTypesAPI.md#LicenseTypesAPI_createLicenseTypeAsync) | **POST** /api/v2/LicensingService/LicenseTypes | Create a new license type
[**LicenseTypesAPI_deleteLicenseTypeAsync**](LicenseTypesAPI.md#LicenseTypesAPI_deleteLicenseTypeAsync) | **DELETE** /api/v2/LicensingService/LicenseTypes/{id} | Delete a license type
[**LicenseTypesAPI_getLicenseTypeByIdAsync**](LicenseTypesAPI.md#LicenseTypesAPI_getLicenseTypeByIdAsync) | **GET** /api/v2/LicensingService/LicenseTypes/{id} | Get license type by ID
[**LicenseTypesAPI_getLicenseTypesAsync**](LicenseTypesAPI.md#LicenseTypesAPI_getLicenseTypesAsync) | **GET** /api/v2/LicensingService/LicenseTypes | Get all license types
[**LicenseTypesAPI_getLicenseTypesCountAsync**](LicenseTypesAPI.md#LicenseTypesAPI_getLicenseTypesCountAsync) | **GET** /api/v2/LicensingService/LicenseTypes/Count | Get license types count
[**LicenseTypesAPI_patchLicenseTypeAsync**](LicenseTypesAPI.md#LicenseTypesAPI_patchLicenseTypeAsync) | **PATCH** /api/v2/LicensingService/LicenseTypes/{id} | Patch a license type
[**LicenseTypesAPI_updateLicenseTypeAsync**](LicenseTypesAPI.md#LicenseTypesAPI_updateLicenseTypeAsync) | **PUT** /api/v2/LicensingService/LicenseTypes/{id} | Update a license type


# **LicenseTypesAPI_createLicenseTypeAsync**
```c
// Create a new license type
//
// Creates a new license type for the specified tenant.
//
void LicenseTypesAPI_createLicenseTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_type_create_dto_t *license_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_type_create_dto** | **[license_type_create_dto_t](license_type_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseTypesAPI_deleteLicenseTypeAsync**
```c
// Delete a license type
//
// Deletes a license type for the specified tenant.
//
void LicenseTypesAPI_deleteLicenseTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseTypesAPI_getLicenseTypeByIdAsync**
```c
// Get license type by ID
//
// Retrieves a specific license type by its identifier.
//
license_type_dto_t* LicenseTypesAPI_getLicenseTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[license_type_dto_t](license_type_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseTypesAPI_getLicenseTypesAsync**
```c
// Get all license types
//
// Retrieves all license types for the specified tenant.
//
license_type_dto_list_envelope_t* LicenseTypesAPI_getLicenseTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_type_dto_collection_query_parameters_t *license_type_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_type_dto_collection_query_parameters** | **[license_type_dto_collection_query_parameters_t](license_type_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[license_type_dto_list_envelope_t](license_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseTypesAPI_getLicenseTypesCountAsync**
```c
// Get license types count
//
// Returns the count of license types for the specified tenant.
//
int32_envelope_t* LicenseTypesAPI_getLicenseTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_type_dto_collection_query_parameters_t *license_type_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_type_dto_collection_query_parameters** | **[license_type_dto_collection_query_parameters_t](license_type_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseTypesAPI_patchLicenseTypeAsync**
```c
// Patch a license type
//
// Patch a license type for the specified tenant.
//
empty_envelope_t* LicenseTypesAPI_patchLicenseTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseTypesAPI_updateLicenseTypeAsync**
```c
// Update a license type
//
// Updates an existing license type for the specified tenant.
//
void LicenseTypesAPI_updateLicenseTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, license_type_update_dto_t *license_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_type_update_dto** | **[license_type_update_dto_t](license_type_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

