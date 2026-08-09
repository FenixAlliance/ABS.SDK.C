# SigningRequestsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SigningRequestsAPI_addParticipantAsync**](SigningRequestsAPI.md#SigningRequestsAPI_addParticipantAsync) | **POST** /api/v2/TrustService/SigningRequests/{id}/participants | Add a participant to a signing request
[**SigningRequestsAPI_createFromDocumentAsync**](SigningRequestsAPI.md#SigningRequestsAPI_createFromDocumentAsync) | **POST** /api/v2/TrustService/SigningRequests/from-document/{signedDocumentId} | Create a signing request from a frozen document
[**SigningRequestsAPI_executeProviderAsync**](SigningRequestsAPI.md#SigningRequestsAPI_executeProviderAsync) | **POST** /api/v2/TrustService/SigningRequests/{id}/execute-provider | Run a signing provider to produce + finalize the signed artifact
[**SigningRequestsAPI_expireAsync**](SigningRequestsAPI.md#SigningRequestsAPI_expireAsync) | **POST** /api/v2/TrustService/SigningRequests/{id}/expire | Expire a signing request
[**SigningRequestsAPI_finalizeAsync**](SigningRequestsAPI.md#SigningRequestsAPI_finalizeAsync) | **POST** /api/v2/TrustService/SigningRequests/{id}/finalize | Finalize a completed request into a signed artifact
[**SigningRequestsAPI_getSigningRequestByIdAsync**](SigningRequestsAPI.md#SigningRequestsAPI_getSigningRequestByIdAsync) | **GET** /api/v2/TrustService/SigningRequests/{id} | Get signing request by ID
[**SigningRequestsAPI_getSigningRequestParticipantsAsync**](SigningRequestsAPI.md#SigningRequestsAPI_getSigningRequestParticipantsAsync) | **GET** /api/v2/TrustService/SigningRequests/{id}/Participants | Get participants of a signing request
[**SigningRequestsAPI_getSigningRequestsAsync**](SigningRequestsAPI.md#SigningRequestsAPI_getSigningRequestsAsync) | **GET** /api/v2/TrustService/SigningRequests | Get all signing requests
[**SigningRequestsAPI_getSigningRequestsCountAsync**](SigningRequestsAPI.md#SigningRequestsAPI_getSigningRequestsCountAsync) | **GET** /api/v2/TrustService/SigningRequests/Count | Get signing requests count
[**SigningRequestsAPI_prepareAndCreateAsync**](SigningRequestsAPI.md#SigningRequestsAPI_prepareAndCreateAsync) | **POST** /api/v2/TrustService/SigningRequests/prepare-and-create | Create, store, freeze a document and open a signing request in one call
[**SigningRequestsAPI_sendAsync**](SigningRequestsAPI.md#SigningRequestsAPI_sendAsync) | **POST** /api/v2/TrustService/SigningRequests/{id}/send | Send a signing request
[**SigningRequestsAPI_voidAsync**](SigningRequestsAPI.md#SigningRequestsAPI_voidAsync) | **POST** /api/v2/TrustService/SigningRequests/{id}/void | Void a signing request


# **SigningRequestsAPI_addParticipantAsync**
```c
// Add a participant to a signing request
//
signing_participant_dto_t* SigningRequestsAPI_addParticipantAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, create_signing_participant_dto_t *create_signing_participant_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**create_signing_participant_dto** | **[create_signing_participant_dto_t](create_signing_participant_dto.md) \*** |  | [optional] 

### Return type

[signing_participant_dto_t](signing_participant_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningRequestsAPI_createFromDocumentAsync**
```c
// Create a signing request from a frozen document
//
signing_request_dto_t* SigningRequestsAPI_createFromDocumentAsync(apiClient_t *apiClient, char *tenantId, char *signedDocumentId, char *api_version, char *x_api_version, create_signing_request_dto_t *create_signing_request_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**signedDocumentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**create_signing_request_dto** | **[create_signing_request_dto_t](create_signing_request_dto.md) \*** |  | [optional] 

### Return type

[signing_request_dto_t](signing_request_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningRequestsAPI_executeProviderAsync**
```c
// Run a signing provider to produce + finalize the signed artifact
//
void SigningRequestsAPI_executeProviderAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, execute_signing_request_dto_t *execute_signing_request_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**execute_signing_request_dto** | **[execute_signing_request_dto_t](execute_signing_request_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningRequestsAPI_expireAsync**
```c
// Expire a signing request
//
void SigningRequestsAPI_expireAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningRequestsAPI_finalizeAsync**
```c
// Finalize a completed request into a signed artifact
//
void SigningRequestsAPI_finalizeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, finalize_signing_request_dto_t *finalize_signing_request_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**finalize_signing_request_dto** | **[finalize_signing_request_dto_t](finalize_signing_request_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningRequestsAPI_getSigningRequestByIdAsync**
```c
// Get signing request by ID
//
signing_request_dto_t* SigningRequestsAPI_getSigningRequestByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[signing_request_dto_t](signing_request_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningRequestsAPI_getSigningRequestParticipantsAsync**
```c
// Get participants of a signing request
//
signing_participant_dto_list_envelope_t* SigningRequestsAPI_getSigningRequestParticipantsAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[signing_participant_dto_list_envelope_t](signing_participant_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningRequestsAPI_getSigningRequestsAsync**
```c
// Get all signing requests
//
signing_request_dto_list_envelope_t* SigningRequestsAPI_getSigningRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_request_dto_collection_query_parameters_t *signing_request_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_request_dto_collection_query_parameters** | **[signing_request_dto_collection_query_parameters_t](signing_request_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[signing_request_dto_list_envelope_t](signing_request_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningRequestsAPI_getSigningRequestsCountAsync**
```c
// Get signing requests count
//
int32_envelope_t* SigningRequestsAPI_getSigningRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_request_dto_collection_query_parameters_t *signing_request_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_request_dto_collection_query_parameters** | **[signing_request_dto_collection_query_parameters_t](signing_request_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningRequestsAPI_prepareAndCreateAsync**
```c
// Create, store, freeze a document and open a signing request in one call
//
// Server-owned flow (T-UX4): creates a SignedDocument from the uploaded source, stores it, freezes it, then creates a signing request over the frozen artifact and attaches its signers — all in one unit of work. Evidence truth (status/hashes/ids/tokens) is server-produced; the caller supplies intent only. The server generates the new document id.
//
signing_request_dto_t* SigningRequestsAPI_prepareAndCreateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file, char *title, char *contactId, trustservice_prepareAndCreateAsync_routingMode_e routingMode, char expiresAtUtc, char *message, char *correlationId, char *externalReference, char *signers);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**file** | **binary_t*** |  | [optional] 
**title** | **char \*** |  | [optional] 
**contactId** | **char \*** |  | [optional] 
**routingMode** | **trustservice_prepareAndCreateAsync_routingMode_e** |  | [optional] 
**expiresAtUtc** | **char** |  | [optional] 
**message** | **char \*** |  | [optional] 
**correlationId** | **char \*** |  | [optional] 
**externalReference** | **char \*** |  | [optional] 
**signers** | **char \*** |  | [optional] 

### Return type

[signing_request_dto_t](signing_request_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningRequestsAPI_sendAsync**
```c
// Send a signing request
//
void SigningRequestsAPI_sendAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningRequestsAPI_voidAsync**
```c
// Void a signing request
//
void SigningRequestsAPI_voidAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, void_signing_request_dto_t *void_signing_request_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**void_signing_request_dto** | **[void_signing_request_dto_t](void_signing_request_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

