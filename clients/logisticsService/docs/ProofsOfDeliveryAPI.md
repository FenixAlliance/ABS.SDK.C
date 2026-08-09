# ProofsOfDeliveryAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ProofsOfDeliveryAPI_addProofOfDeliveryLineAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_addProofOfDeliveryLineAsync) | **POST** /api/v2/LogisticsService/ProofsOfDelivery/{podId}/Lines | Add a line to proof of delivery
[**ProofsOfDeliveryAPI_attachDeliveryNoteAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_attachDeliveryNoteAsync) | **POST** /api/v2/LogisticsService/ProofsOfDelivery/{podId}/DeliveryNotes/{noteId} | Attach a delivery note
[**ProofsOfDeliveryAPI_createProofOfDeliveryAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_createProofOfDeliveryAsync) | **POST** /api/v2/LogisticsService/ProofsOfDelivery | Create a proof of delivery
[**ProofsOfDeliveryAPI_deleteProofOfDeliveryAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_deleteProofOfDeliveryAsync) | **DELETE** /api/v2/LogisticsService/ProofsOfDelivery/{podId} | Delete a proof of delivery
[**ProofsOfDeliveryAPI_detachDeliveryNoteAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_detachDeliveryNoteAsync) | **DELETE** /api/v2/LogisticsService/ProofsOfDelivery/{podId}/DeliveryNotes/{noteId} | Detach a delivery note
[**ProofsOfDeliveryAPI_disputeProofOfDeliveryAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_disputeProofOfDeliveryAsync) | **POST** /api/v2/LogisticsService/ProofsOfDelivery/{podId}/Dispute | Dispute a proof of delivery
[**ProofsOfDeliveryAPI_getProofOfDeliveryByIdAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_getProofOfDeliveryByIdAsync) | **GET** /api/v2/LogisticsService/ProofsOfDelivery/{podId} | Get proof of delivery by ID
[**ProofsOfDeliveryAPI_getProofOfDeliveryDeliveryNotesAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_getProofOfDeliveryDeliveryNotesAsync) | **GET** /api/v2/LogisticsService/ProofsOfDelivery/{podId}/DeliveryNotes | Get attached delivery notes
[**ProofsOfDeliveryAPI_getProofOfDeliveryDeliveryNotesCountAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_getProofOfDeliveryDeliveryNotesCountAsync) | **GET** /api/v2/LogisticsService/ProofsOfDelivery/{podId}/DeliveryNotes/Count | Get delivery notes count
[**ProofsOfDeliveryAPI_getProofOfDeliveryLinesAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_getProofOfDeliveryLinesAsync) | **GET** /api/v2/LogisticsService/ProofsOfDelivery/{podId}/Lines | Get proof of delivery lines
[**ProofsOfDeliveryAPI_getProofOfDeliveryLinesCountAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_getProofOfDeliveryLinesCountAsync) | **GET** /api/v2/LogisticsService/ProofsOfDelivery/{podId}/Lines/Count | Get proof of delivery lines count
[**ProofsOfDeliveryAPI_getProofsOfDeliveryAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_getProofsOfDeliveryAsync) | **GET** /api/v2/LogisticsService/ProofsOfDelivery | Get all proofs of delivery
[**ProofsOfDeliveryAPI_getProofsOfDeliveryCountAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_getProofsOfDeliveryCountAsync) | **GET** /api/v2/LogisticsService/ProofsOfDelivery/Count | Get proofs of delivery count
[**ProofsOfDeliveryAPI_patchProofOfDeliveryAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_patchProofOfDeliveryAsync) | **PATCH** /api/v2/LogisticsService/ProofsOfDelivery/{podId} | Patch a proof of delivery
[**ProofsOfDeliveryAPI_patchProofOfDeliveryLineAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_patchProofOfDeliveryLineAsync) | **PATCH** /api/v2/LogisticsService/ProofsOfDelivery/{podId}/Lines/{lineId} | Patch a proof of delivery line
[**ProofsOfDeliveryAPI_rejectProofOfDeliveryAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_rejectProofOfDeliveryAsync) | **POST** /api/v2/LogisticsService/ProofsOfDelivery/{podId}/Reject | Reject a proof of delivery
[**ProofsOfDeliveryAPI_removeProofOfDeliveryLineAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_removeProofOfDeliveryLineAsync) | **DELETE** /api/v2/LogisticsService/ProofsOfDelivery/{podId}/Lines/{lineId} | Remove a proof of delivery line
[**ProofsOfDeliveryAPI_signProofOfDeliveryAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_signProofOfDeliveryAsync) | **POST** /api/v2/LogisticsService/ProofsOfDelivery/{podId}/Sign | Sign a proof of delivery
[**ProofsOfDeliveryAPI_updateProofOfDeliveryAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_updateProofOfDeliveryAsync) | **PUT** /api/v2/LogisticsService/ProofsOfDelivery/{podId} | Update a proof of delivery
[**ProofsOfDeliveryAPI_updateProofOfDeliveryLineAsync**](ProofsOfDeliveryAPI.md#ProofsOfDeliveryAPI_updateProofOfDeliveryLineAsync) | **PUT** /api/v2/LogisticsService/ProofsOfDelivery/{podId}/Lines/{lineId} | Update a proof of delivery line


# **ProofsOfDeliveryAPI_addProofOfDeliveryLineAsync**
```c
// Add a line to proof of delivery
//
// Adds a new line to a proof of delivery.
//
empty_envelope_t* ProofsOfDeliveryAPI_addProofOfDeliveryLineAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, proof_of_delivery_line_create_dto_t *proof_of_delivery_line_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**proof_of_delivery_line_create_dto** | **[proof_of_delivery_line_create_dto_t](proof_of_delivery_line_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProofsOfDeliveryAPI_attachDeliveryNoteAsync**
```c
// Attach a delivery note
//
// Attaches a delivery note to a proof of delivery.
//
empty_envelope_t* ProofsOfDeliveryAPI_attachDeliveryNoteAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *noteId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**noteId** | **char \*** |  | 
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

# **ProofsOfDeliveryAPI_createProofOfDeliveryAsync**
```c
// Create a proof of delivery
//
// Creates a new proof of delivery for the specified tenant.
//
empty_envelope_t* ProofsOfDeliveryAPI_createProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, proof_of_delivery_create_dto_t *proof_of_delivery_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**proof_of_delivery_create_dto** | **[proof_of_delivery_create_dto_t](proof_of_delivery_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProofsOfDeliveryAPI_deleteProofOfDeliveryAsync**
```c
// Delete a proof of delivery
//
// Deletes a proof of delivery.
//
empty_envelope_t* ProofsOfDeliveryAPI_deleteProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
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

# **ProofsOfDeliveryAPI_detachDeliveryNoteAsync**
```c
// Detach a delivery note
//
// Detaches a delivery note from a proof of delivery.
//
empty_envelope_t* ProofsOfDeliveryAPI_detachDeliveryNoteAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *noteId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**noteId** | **char \*** |  | 
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

# **ProofsOfDeliveryAPI_disputeProofOfDeliveryAsync**
```c
// Dispute a proof of delivery
//
// Disputes a proof of delivery.
//
empty_envelope_t* ProofsOfDeliveryAPI_disputeProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, dispute_proof_of_delivery_request_t *dispute_proof_of_delivery_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**dispute_proof_of_delivery_request** | **[dispute_proof_of_delivery_request_t](dispute_proof_of_delivery_request.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProofsOfDeliveryAPI_getProofOfDeliveryByIdAsync**
```c
// Get proof of delivery by ID
//
// Retrieves a specific proof of delivery by its identifier.
//
proof_of_delivery_dto_envelope_t* ProofsOfDeliveryAPI_getProofOfDeliveryByIdAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[proof_of_delivery_dto_envelope_t](proof_of_delivery_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProofsOfDeliveryAPI_getProofOfDeliveryDeliveryNotesAsync**
```c
// Get attached delivery notes
//
// Retrieves all delivery notes attached to a proof of delivery.
//
delivery_note_dto_list_envelope_t* ProofsOfDeliveryAPI_getProofOfDeliveryDeliveryNotesAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[delivery_note_dto_list_envelope_t](delivery_note_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProofsOfDeliveryAPI_getProofOfDeliveryDeliveryNotesCountAsync**
```c
// Get delivery notes count
//
// Returns the count of delivery notes attached to a proof of delivery.
//
int32_envelope_t* ProofsOfDeliveryAPI_getProofOfDeliveryDeliveryNotesCountAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
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

# **ProofsOfDeliveryAPI_getProofOfDeliveryLinesAsync**
```c
// Get proof of delivery lines
//
// Retrieves all lines for a specific proof of delivery.
//
proof_of_delivery_line_dto_list_envelope_t* ProofsOfDeliveryAPI_getProofOfDeliveryLinesAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, proof_of_delivery_line_dto_collection_query_parameters_t *proof_of_delivery_line_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**proof_of_delivery_line_dto_collection_query_parameters** | **[proof_of_delivery_line_dto_collection_query_parameters_t](proof_of_delivery_line_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[proof_of_delivery_line_dto_list_envelope_t](proof_of_delivery_line_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProofsOfDeliveryAPI_getProofOfDeliveryLinesCountAsync**
```c
// Get proof of delivery lines count
//
// Returns the count of lines for a specific proof of delivery.
//
int32_envelope_t* ProofsOfDeliveryAPI_getProofOfDeliveryLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, proof_of_delivery_line_dto_collection_query_parameters_t *proof_of_delivery_line_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**proof_of_delivery_line_dto_collection_query_parameters** | **[proof_of_delivery_line_dto_collection_query_parameters_t](proof_of_delivery_line_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProofsOfDeliveryAPI_getProofsOfDeliveryAsync**
```c
// Get all proofs of delivery
//
// Retrieves all proofs of delivery for the specified tenant.
//
proof_of_delivery_dto_list_envelope_t* ProofsOfDeliveryAPI_getProofsOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, proof_of_delivery_dto_collection_query_parameters_t *proof_of_delivery_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**proof_of_delivery_dto_collection_query_parameters** | **[proof_of_delivery_dto_collection_query_parameters_t](proof_of_delivery_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[proof_of_delivery_dto_list_envelope_t](proof_of_delivery_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProofsOfDeliveryAPI_getProofsOfDeliveryCountAsync**
```c
// Get proofs of delivery count
//
// Returns the count of proofs of delivery for the specified tenant.
//
int32_envelope_t* ProofsOfDeliveryAPI_getProofsOfDeliveryCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, proof_of_delivery_dto_collection_query_parameters_t *proof_of_delivery_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**proof_of_delivery_dto_collection_query_parameters** | **[proof_of_delivery_dto_collection_query_parameters_t](proof_of_delivery_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProofsOfDeliveryAPI_patchProofOfDeliveryAsync**
```c
// Patch a proof of delivery
//
// Partially updates an existing proof of delivery using JSON Patch.
//
empty_envelope_t* ProofsOfDeliveryAPI_patchProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
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

# **ProofsOfDeliveryAPI_patchProofOfDeliveryLineAsync**
```c
// Patch a proof of delivery line
//
// Partially updates an existing proof of delivery line using JSON Patch.
//
empty_envelope_t* ProofsOfDeliveryAPI_patchProofOfDeliveryLineAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *lineId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**lineId** | **char \*** |  | 
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

# **ProofsOfDeliveryAPI_rejectProofOfDeliveryAsync**
```c
// Reject a proof of delivery
//
// Rejects a proof of delivery.
//
empty_envelope_t* ProofsOfDeliveryAPI_rejectProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, reject_proof_of_delivery_request_t *reject_proof_of_delivery_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**reject_proof_of_delivery_request** | **[reject_proof_of_delivery_request_t](reject_proof_of_delivery_request.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProofsOfDeliveryAPI_removeProofOfDeliveryLineAsync**
```c
// Remove a proof of delivery line
//
// Removes a line from a proof of delivery.
//
empty_envelope_t* ProofsOfDeliveryAPI_removeProofOfDeliveryLineAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *lineId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**lineId** | **char \*** |  | 
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

# **ProofsOfDeliveryAPI_signProofOfDeliveryAsync**
```c
// Sign a proof of delivery
//
// Signs a proof of delivery.
//
empty_envelope_t* ProofsOfDeliveryAPI_signProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, sign_proof_of_delivery_request_t *sign_proof_of_delivery_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**sign_proof_of_delivery_request** | **[sign_proof_of_delivery_request_t](sign_proof_of_delivery_request.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProofsOfDeliveryAPI_updateProofOfDeliveryAsync**
```c
// Update a proof of delivery
//
// Updates an existing proof of delivery.
//
empty_envelope_t* ProofsOfDeliveryAPI_updateProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, proof_of_delivery_update_dto_t *proof_of_delivery_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**proof_of_delivery_update_dto** | **[proof_of_delivery_update_dto_t](proof_of_delivery_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProofsOfDeliveryAPI_updateProofOfDeliveryLineAsync**
```c
// Update a proof of delivery line
//
// Updates an existing line on a proof of delivery.
//
empty_envelope_t* ProofsOfDeliveryAPI_updateProofOfDeliveryLineAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *lineId, char *api_version, char *x_api_version, proof_of_delivery_line_update_dto_t *proof_of_delivery_line_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**podId** | **char \*** |  | 
**lineId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**proof_of_delivery_line_update_dto** | **[proof_of_delivery_line_update_dto_t](proof_of_delivery_line_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

