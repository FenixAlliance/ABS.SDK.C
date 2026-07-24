# SignedDocumentArtifactsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SignedDocumentArtifactsAPI_freezeAsync**](SignedDocumentArtifactsAPI.md#SignedDocumentArtifactsAPI_freezeAsync) | **POST** /api/v2/TrustService/SignedDocumentArtifacts/{signedDocumentId}/freeze | Freeze the source for signature
[**SignedDocumentArtifactsAPI_getReferenceAsync**](SignedDocumentArtifactsAPI.md#SignedDocumentArtifactsAPI_getReferenceAsync) | **GET** /api/v2/TrustService/SignedDocumentArtifacts/reference/{fileUploadId} | Get an artifact reference
[**SignedDocumentArtifactsAPI_setPrimaryAuthoringFileAsync**](SignedDocumentArtifactsAPI.md#SignedDocumentArtifactsAPI_setPrimaryAuthoringFileAsync) | **PUT** /api/v2/TrustService/SignedDocumentArtifacts/{signedDocumentId}/primary-file/{fileUploadId} | Set the primary authoring file
[**SignedDocumentArtifactsAPI_verifyAsync**](SignedDocumentArtifactsAPI.md#SignedDocumentArtifactsAPI_verifyAsync) | **GET** /api/v2/TrustService/SignedDocumentArtifacts/reference/{fileUploadId}/verify | Verify an artifact hash


# **SignedDocumentArtifactsAPI_freezeAsync**
```c
// Freeze the source for signature
//
// Copies the primary authoring artifact into a new Sealed frozen-source artifact, hashes it, and binds it to the document (LockState = FrozenForSignature).
//
trust_artifact_reference_dto_envelope_t* SignedDocumentArtifactsAPI_freezeAsync(apiClient_t *apiClient, char *tenantId, char *signedDocumentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**signedDocumentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[trust_artifact_reference_dto_envelope_t](trust_artifact_reference_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignedDocumentArtifactsAPI_getReferenceAsync**
```c
// Get an artifact reference
//
// Resolves a stored artifact's reference (FileUpload id + key + hash + media hints).
//
trust_artifact_reference_dto_envelope_t* SignedDocumentArtifactsAPI_getReferenceAsync(apiClient_t *apiClient, char *tenantId, char *fileUploadId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**fileUploadId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[trust_artifact_reference_dto_envelope_t](trust_artifact_reference_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SignedDocumentArtifactsAPI_setPrimaryAuthoringFileAsync**
```c
// Set the primary authoring file
//
// Links an existing scan-gated FileUpload as the document's mutable authoring artifact (only while editable).
//
void SignedDocumentArtifactsAPI_setPrimaryAuthoringFileAsync(apiClient_t *apiClient, char *tenantId, char *signedDocumentId, char *fileUploadId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**signedDocumentId** | **char \*** |  | 
**fileUploadId** | **char \*** |  | 
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

# **SignedDocumentArtifactsAPI_verifyAsync**
```c
// Verify an artifact hash
//
// Re-reads the artifact bytes and verifies them against the recorded SHA-256. Returns true on match.
//
boolean_envelope_t* SignedDocumentArtifactsAPI_verifyAsync(apiClient_t *apiClient, char *tenantId, char *fileUploadId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**fileUploadId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[boolean_envelope_t](boolean_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

