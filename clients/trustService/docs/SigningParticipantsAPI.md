# SigningParticipantsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SigningParticipantsAPI_getSigningParticipantByIdAsync**](SigningParticipantsAPI.md#SigningParticipantsAPI_getSigningParticipantByIdAsync) | **GET** /api/v2/TrustService/SigningParticipants/{id} | Get signing participant by ID
[**SigningParticipantsAPI_getSigningParticipantsAsync**](SigningParticipantsAPI.md#SigningParticipantsAPI_getSigningParticipantsAsync) | **GET** /api/v2/TrustService/SigningParticipants | Get all signing participants
[**SigningParticipantsAPI_getSigningParticipantsCountAsync**](SigningParticipantsAPI.md#SigningParticipantsAPI_getSigningParticipantsCountAsync) | **GET** /api/v2/TrustService/SigningParticipants/Count | Get signing participants count
[**SigningParticipantsAPI_markViewedAsync**](SigningParticipantsAPI.md#SigningParticipantsAPI_markViewedAsync) | **POST** /api/v2/TrustService/SigningParticipants/{id}/viewed | Mark a participant as having viewed the request
[**SigningParticipantsAPI_recordOutcomeAsync**](SigningParticipantsAPI.md#SigningParticipantsAPI_recordOutcomeAsync) | **POST** /api/v2/TrustService/SigningParticipants/{id}/outcome | Record a manual/external participant outcome


# **SigningParticipantsAPI_getSigningParticipantByIdAsync**
```c
// Get signing participant by ID
//
signing_participant_dto_t* SigningParticipantsAPI_getSigningParticipantByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[signing_participant_dto_t](signing_participant_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningParticipantsAPI_getSigningParticipantsAsync**
```c
// Get all signing participants
//
signing_participant_dto_list_envelope_t* SigningParticipantsAPI_getSigningParticipantsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_participant_dto_collection_query_parameters_t *signing_participant_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_participant_dto_collection_query_parameters** | **[signing_participant_dto_collection_query_parameters_t](signing_participant_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[signing_participant_dto_list_envelope_t](signing_participant_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningParticipantsAPI_getSigningParticipantsCountAsync**
```c
// Get signing participants count
//
int32_envelope_t* SigningParticipantsAPI_getSigningParticipantsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_participant_dto_collection_query_parameters_t *signing_participant_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_participant_dto_collection_query_parameters** | **[signing_participant_dto_collection_query_parameters_t](signing_participant_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningParticipantsAPI_markViewedAsync**
```c
// Mark a participant as having viewed the request
//
void SigningParticipantsAPI_markViewedAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **SigningParticipantsAPI_recordOutcomeAsync**
```c
// Record a manual/external participant outcome
//
void SigningParticipantsAPI_recordOutcomeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, record_signing_participant_outcome_dto_t *record_signing_participant_outcome_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**record_signing_participant_outcome_dto** | **[record_signing_participant_outcome_dto_t](record_signing_participant_outcome_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

