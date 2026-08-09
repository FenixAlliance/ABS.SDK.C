# SignedDocumentsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SignedDocumentsAPI_createSignedDocumentAsync**](SignedDocumentsAPI.md#SignedDocumentsAPI_createSignedDocumentAsync) | **POST** /api/v2/TrustService/SignedDocuments | Create a new signed document
[**SignedDocumentsAPI_deleteSignedDocumentAsync**](SignedDocumentsAPI.md#SignedDocumentsAPI_deleteSignedDocumentAsync) | **DELETE** /api/v2/TrustService/SignedDocuments/{id} | Delete a signed document
[**SignedDocumentsAPI_getSignedDocumentByIdAsync**](SignedDocumentsAPI.md#SignedDocumentsAPI_getSignedDocumentByIdAsync) | **GET** /api/v2/TrustService/SignedDocuments/{id} | Get signed document by ID
[**SignedDocumentsAPI_getSignedDocumentsAsync**](SignedDocumentsAPI.md#SignedDocumentsAPI_getSignedDocumentsAsync) | **GET** /api/v2/TrustService/SignedDocuments | Get all signed documents
[**SignedDocumentsAPI_getSignedDocumentsCountAsync**](SignedDocumentsAPI.md#SignedDocumentsAPI_getSignedDocumentsCountAsync) | **GET** /api/v2/TrustService/SignedDocuments/Count | Get signed documents count
[**SignedDocumentsAPI_patchSignedDocumentAsync**](SignedDocumentsAPI.md#SignedDocumentsAPI_patchSignedDocumentAsync) | **PATCH** /api/v2/TrustService/SignedDocuments/{id} | Patch a signed document
[**SignedDocumentsAPI_prepareAndQuickSignAsync**](SignedDocumentsAPI.md#SignedDocumentsAPI_prepareAndQuickSignAsync) | **POST** /api/v2/TrustService/SignedDocuments/prepare-and-quick-sign | Create, freeze, and quick-sign a document in one call
[**SignedDocumentsAPI_quickSignSignedDocumentAsync**](SignedDocumentsAPI.md#SignedDocumentsAPI_quickSignSignedDocumentAsync) | **POST** /api/v2/TrustService/SignedDocuments/{id}/quick-sign | Quick-sign a frozen document
[**SignedDocumentsAPI_updateSignedDocumentAsync**](SignedDocumentsAPI.md#SignedDocumentsAPI_updateSignedDocumentAsync) | **PUT** /api/v2/TrustService/SignedDocuments/{id} | Update a signed document
[**SignedDocumentsAPI_verifySignedDocumentSignatureAsync**](SignedDocumentsAPI.md#SignedDocumentsAPI_verifySignedDocumentSignatureAsync) | **GET** /api/v2/TrustService/SignedDocuments/{id}/verify-signature | Verify a signed document&#39;s signature


# **SignedDocumentsAPI_createSignedDocumentAsync**
```c
// Create a new signed document
//
// Creates a new signed document for the specified tenant.
//
void SignedDocumentsAPI_createSignedDocumentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signed_document_create_dto_t *signed_document_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signed_document_create_dto** | **[signed_document_create_dto_t](signed_document_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignedDocumentsAPI_deleteSignedDocumentAsync**
```c
// Delete a signed document
//
// Deletes a signed document for the specified tenant.
//
void SignedDocumentsAPI_deleteSignedDocumentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **SignedDocumentsAPI_getSignedDocumentByIdAsync**
```c
// Get signed document by ID
//
// Retrieves a specific signed document by its identifier.
//
signed_document_dto_t* SignedDocumentsAPI_getSignedDocumentByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[signed_document_dto_t](signed_document_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignedDocumentsAPI_getSignedDocumentsAsync**
```c
// Get all signed documents
//
// Retrieves all signed documents for the specified tenant.
//
signed_document_dto_list_envelope_t* SignedDocumentsAPI_getSignedDocumentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signed_document_dto_collection_query_parameters** | **[signed_document_dto_collection_query_parameters_t](signed_document_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[signed_document_dto_list_envelope_t](signed_document_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignedDocumentsAPI_getSignedDocumentsCountAsync**
```c
// Get signed documents count
//
// Returns the count of signed documents for the specified tenant.
//
int32_envelope_t* SignedDocumentsAPI_getSignedDocumentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signed_document_dto_collection_query_parameters** | **[signed_document_dto_collection_query_parameters_t](signed_document_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignedDocumentsAPI_patchSignedDocumentAsync**
```c
// Patch a signed document
//
// Patch a signed document
//
empty_envelope_t* SignedDocumentsAPI_patchSignedDocumentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);
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

# **SignedDocumentsAPI_prepareAndQuickSignAsync**
```c
// Create, freeze, and quick-sign a document in one call
//
// Server-side single-signer flow: creates a SignedDocument from the uploaded source, stores it, freezes it, signs it with the chosen certificate + provider, and seals it — all in one unit of work. Returns the sealed document. Evidence truth (signed/status/hashes/artifact ids) is server-produced and cannot be supplied by the caller.
//
signed_document_dto_t* SignedDocumentsAPI_prepareAndQuickSignAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, char *id, binary_t* file, char *title, char *contactId, char *signingCertificateId, char *signingProfileId, char *providerName);
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
**title** | **char \*** |  | [optional] 
**contactId** | **char \*** |  | [optional] 
**signingCertificateId** | **char \*** |  | [optional] 
**signingProfileId** | **char \*** |  | [optional] 
**providerName** | **char \*** |  | [optional] 

### Return type

[signed_document_dto_t](signed_document_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignedDocumentsAPI_quickSignSignedDocumentAsync**
```c
// Quick-sign a frozen document
//
// Signs a frozen signed document directly with a chosen certificate + provider (no signing-request workflow) and seals it. Returns the sealed document.
//
void SignedDocumentsAPI_quickSignSignedDocumentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, quick_sign_signed_document_dto_t *quick_sign_signed_document_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**quick_sign_signed_document_dto** | **[quick_sign_signed_document_dto_t](quick_sign_signed_document_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignedDocumentsAPI_updateSignedDocumentAsync**
```c
// Update a signed document
//
// Updates an existing signed document for the specified tenant.
//
void SignedDocumentsAPI_updateSignedDocumentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, signed_document_update_dto_t *signed_document_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signed_document_update_dto** | **[signed_document_update_dto_t](signed_document_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignedDocumentsAPI_verifySignedDocumentSignatureAsync**
```c
// Verify a signed document's signature
//
// Re-verifies the document's signature against its stored signed artifact (bytes intact + signed by the embedded certificate; certificate trust is a separate concern).
//
signature_verification_dto_t* SignedDocumentsAPI_verifySignedDocumentSignatureAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[signature_verification_dto_t](signature_verification_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

