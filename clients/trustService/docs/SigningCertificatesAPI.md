# SigningCertificatesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SigningCertificatesAPI_createSigningCertificateAsync**](SigningCertificatesAPI.md#SigningCertificatesAPI_createSigningCertificateAsync) | **POST** /api/v2/TrustService/SigningCertificates | Create a new signing certificate
[**SigningCertificatesAPI_deleteSigningCertificateAsync**](SigningCertificatesAPI.md#SigningCertificatesAPI_deleteSigningCertificateAsync) | **DELETE** /api/v2/TrustService/SigningCertificates/{id} | Delete a signing certificate
[**SigningCertificatesAPI_getSigningCertificateByIdAsync**](SigningCertificatesAPI.md#SigningCertificatesAPI_getSigningCertificateByIdAsync) | **GET** /api/v2/TrustService/SigningCertificates/{id} | Get signing certificate by ID
[**SigningCertificatesAPI_getSigningCertificatesAsync**](SigningCertificatesAPI.md#SigningCertificatesAPI_getSigningCertificatesAsync) | **GET** /api/v2/TrustService/SigningCertificates | Get all signing certificates
[**SigningCertificatesAPI_getSigningCertificatesCountAsync**](SigningCertificatesAPI.md#SigningCertificatesAPI_getSigningCertificatesCountAsync) | **GET** /api/v2/TrustService/SigningCertificates/Count | Get signing certificates count
[**SigningCertificatesAPI_importSigningCertificateAsync**](SigningCertificatesAPI.md#SigningCertificatesAPI_importSigningCertificateAsync) | **POST** /api/v2/TrustService/SigningCertificates/Import | Import a PFX/P12 signing certificate into custody
[**SigningCertificatesAPI_patchSigningCertificateAsync**](SigningCertificatesAPI.md#SigningCertificatesAPI_patchSigningCertificateAsync) | **PATCH** /api/v2/TrustService/SigningCertificates/{id} | Patch a signing certificate
[**SigningCertificatesAPI_updateSigningCertificateAsync**](SigningCertificatesAPI.md#SigningCertificatesAPI_updateSigningCertificateAsync) | **PUT** /api/v2/TrustService/SigningCertificates/{id} | Update a signing certificate


# **SigningCertificatesAPI_createSigningCertificateAsync**
```c
// Create a new signing certificate
//
// Creates a new signing certificate for the specified tenant.
//
void SigningCertificatesAPI_createSigningCertificateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_certificate_create_dto_t *signing_certificate_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_certificate_create_dto** | **[signing_certificate_create_dto_t](signing_certificate_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningCertificatesAPI_deleteSigningCertificateAsync**
```c
// Delete a signing certificate
//
// Deletes a signing certificate for the specified tenant.
//
void SigningCertificatesAPI_deleteSigningCertificateAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **SigningCertificatesAPI_getSigningCertificateByIdAsync**
```c
// Get signing certificate by ID
//
// Retrieves a specific signing certificate by its identifier.
//
signing_certificate_dto_t* SigningCertificatesAPI_getSigningCertificateByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[signing_certificate_dto_t](signing_certificate_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningCertificatesAPI_getSigningCertificatesAsync**
```c
// Get all signing certificates
//
// Retrieves all signing certificates for the specified tenant.
//
signing_certificate_dto_list_envelope_t* SigningCertificatesAPI_getSigningCertificatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_certificate_dto_collection_query_parameters_t *signing_certificate_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_certificate_dto_collection_query_parameters** | **[signing_certificate_dto_collection_query_parameters_t](signing_certificate_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[signing_certificate_dto_list_envelope_t](signing_certificate_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningCertificatesAPI_getSigningCertificatesCountAsync**
```c
// Get signing certificates count
//
// Returns the count of signing certificates for the specified tenant.
//
int32_envelope_t* SigningCertificatesAPI_getSigningCertificatesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_certificate_dto_collection_query_parameters_t *signing_certificate_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_certificate_dto_collection_query_parameters** | **[signing_certificate_dto_collection_query_parameters_t](signing_certificate_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningCertificatesAPI_importSigningCertificateAsync**
```c
// Import a PFX/P12 signing certificate into custody
//
// Parses the uploaded PFX/P12, imports the private material into the configured signing custody, and creates the certificate metadata record. The PFX and password are used only for the request — never returned or stored.
//
void SigningCertificatesAPI_importSigningCertificateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, char *id, binary_t* file, char *password, char *title, char *contactId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**id** | **char \*** |  | [optional] 
**file** | **binary_t*** |  | [optional] 
**password** | **char \*** |  | [optional] 
**title** | **char \*** |  | [optional] 
**contactId** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningCertificatesAPI_patchSigningCertificateAsync**
```c
// Patch a signing certificate
//
// Patch a signing certificate
//
empty_envelope_t* SigningCertificatesAPI_patchSigningCertificateAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);
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

# **SigningCertificatesAPI_updateSigningCertificateAsync**
```c
// Update a signing certificate
//
// Updates an existing signing certificate for the specified tenant.
//
void SigningCertificatesAPI_updateSigningCertificateAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, signing_certificate_update_dto_t *signing_certificate_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_certificate_update_dto** | **[signing_certificate_update_dto_t](signing_certificate_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

