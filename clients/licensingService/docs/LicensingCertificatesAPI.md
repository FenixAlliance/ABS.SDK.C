# LicensingCertificatesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LicensingCertificatesAPI_createLicensingCertificateAsync**](LicensingCertificatesAPI.md#LicensingCertificatesAPI_createLicensingCertificateAsync) | **POST** /api/v2/LicensingService/LicensingCertificates | Create a new licensing certificate
[**LicensingCertificatesAPI_deleteLicensingCertificateAsync**](LicensingCertificatesAPI.md#LicensingCertificatesAPI_deleteLicensingCertificateAsync) | **DELETE** /api/v2/LicensingService/LicensingCertificates/{id} | Delete a licensing certificate
[**LicensingCertificatesAPI_getLicensingCertificateByIdAsync**](LicensingCertificatesAPI.md#LicensingCertificatesAPI_getLicensingCertificateByIdAsync) | **GET** /api/v2/LicensingService/LicensingCertificates/{id} | Get licensing certificate by ID
[**LicensingCertificatesAPI_getLicensingCertificatesAsync**](LicensingCertificatesAPI.md#LicensingCertificatesAPI_getLicensingCertificatesAsync) | **GET** /api/v2/LicensingService/LicensingCertificates | Get all licensing certificates
[**LicensingCertificatesAPI_getLicensingCertificatesCountAsync**](LicensingCertificatesAPI.md#LicensingCertificatesAPI_getLicensingCertificatesCountAsync) | **GET** /api/v2/LicensingService/LicensingCertificates/Count | Get licensing certificates count
[**LicensingCertificatesAPI_patchLicensingCertificateAsync**](LicensingCertificatesAPI.md#LicensingCertificatesAPI_patchLicensingCertificateAsync) | **PATCH** /api/v2/LicensingService/LicensingCertificates/{id} | Patch a licensing certificate
[**LicensingCertificatesAPI_updateLicensingCertificateAsync**](LicensingCertificatesAPI.md#LicensingCertificatesAPI_updateLicensingCertificateAsync) | **PUT** /api/v2/LicensingService/LicensingCertificates/{id} | Update a licensing certificate


# **LicensingCertificatesAPI_createLicensingCertificateAsync**
```c
// Create a new licensing certificate
//
// Creates a new licensing certificate for the specified tenant.
//
void LicensingCertificatesAPI_createLicensingCertificateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, licensing_certificate_create_dto_t *licensing_certificate_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**licensing_certificate_create_dto** | **[licensing_certificate_create_dto_t](licensing_certificate_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensingCertificatesAPI_deleteLicensingCertificateAsync**
```c
// Delete a licensing certificate
//
// Deletes a licensing certificate for the specified tenant.
//
void LicensingCertificatesAPI_deleteLicensingCertificateAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **LicensingCertificatesAPI_getLicensingCertificateByIdAsync**
```c
// Get licensing certificate by ID
//
// Retrieves a specific licensing certificate by its identifier.
//
licensing_certificate_dto_t* LicensingCertificatesAPI_getLicensingCertificateByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[licensing_certificate_dto_t](licensing_certificate_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensingCertificatesAPI_getLicensingCertificatesAsync**
```c
// Get all licensing certificates
//
// Retrieves all licensing certificates for the specified tenant.
//
licensing_certificate_dto_list_envelope_t* LicensingCertificatesAPI_getLicensingCertificatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, licensing_certificate_dto_collection_query_parameters_t *licensing_certificate_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**licensing_certificate_dto_collection_query_parameters** | **[licensing_certificate_dto_collection_query_parameters_t](licensing_certificate_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[licensing_certificate_dto_list_envelope_t](licensing_certificate_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensingCertificatesAPI_getLicensingCertificatesCountAsync**
```c
// Get licensing certificates count
//
// Returns the count of licensing certificates for the specified tenant.
//
int32_envelope_t* LicensingCertificatesAPI_getLicensingCertificatesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, licensing_certificate_dto_collection_query_parameters_t *licensing_certificate_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**licensing_certificate_dto_collection_query_parameters** | **[licensing_certificate_dto_collection_query_parameters_t](licensing_certificate_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensingCertificatesAPI_patchLicensingCertificateAsync**
```c
// Patch a licensing certificate
//
// Patch a licensing certificate for the specified tenant.
//
empty_envelope_t* LicensingCertificatesAPI_patchLicensingCertificateAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);
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

# **LicensingCertificatesAPI_updateLicensingCertificateAsync**
```c
// Update a licensing certificate
//
// Updates an existing licensing certificate for the specified tenant.
//
void LicensingCertificatesAPI_updateLicensingCertificateAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, licensing_certificate_update_dto_t *licensing_certificate_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**licensing_certificate_update_dto** | **[licensing_certificate_update_dto_t](licensing_certificate_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

