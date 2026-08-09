# OutboxAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OutboxAPI_cancelOutboxMessage**](OutboxAPI.md#OutboxAPI_cancelOutboxMessage) | **POST** /api/v2/SystemService/Outbox/Messages/{id}/Cancel | Cancel an outbox message
[**OutboxAPI_deadLetterOutboxMessage**](OutboxAPI.md#OutboxAPI_deadLetterOutboxMessage) | **POST** /api/v2/SystemService/Outbox/Messages/{id}/DeadLetter | Manually dead-letter an outbox message
[**OutboxAPI_expediteOutboxMessage**](OutboxAPI.md#OutboxAPI_expediteOutboxMessage) | **POST** /api/v2/SystemService/Outbox/Messages/{id}/Expedite | Expedite a failed (retry-eligible) outbox message
[**OutboxAPI_getOutboxCorrelationChain**](OutboxAPI.md#OutboxAPI_getOutboxCorrelationChain) | **GET** /api/v2/SystemService/Outbox/Correlations/{correlationId} | Get an outbox correlation chain
[**OutboxAPI_getOutboxHealth**](OutboxAPI.md#OutboxAPI_getOutboxHealth) | **GET** /api/v2/SystemService/Outbox/Health | Get durable-outbox relay health
[**OutboxAPI_getOutboxMessage**](OutboxAPI.md#OutboxAPI_getOutboxMessage) | **GET** /api/v2/SystemService/Outbox/Messages/{id} | Get one outbox message
[**OutboxAPI_getOutboxMessages**](OutboxAPI.md#OutboxAPI_getOutboxMessages) | **GET** /api/v2/SystemService/Outbox/Messages | List outbox messages
[**OutboxAPI_getOutboxMessagesCount**](OutboxAPI.md#OutboxAPI_getOutboxMessagesCount) | **GET** /api/v2/SystemService/Outbox/Messages/Count | Count outbox messages
[**OutboxAPI_releaseOutboxMessageLease**](OutboxAPI.md#OutboxAPI_releaseOutboxMessageLease) | **POST** /api/v2/SystemService/Outbox/Messages/{id}/ReleaseLease | Release a stuck outbox lease
[**OutboxAPI_replayOutboxMessage**](OutboxAPI.md#OutboxAPI_replayOutboxMessage) | **POST** /api/v2/SystemService/Outbox/Messages/{id}/Replay | Replay a dead-lettered or failed outbox message


# **OutboxAPI_cancelOutboxMessage**
```c
// Cancel an outbox message
//
// Stops a Pending or Failed message by operator decision, moving it to the terminal Cancelled state (deliberately distinct from DeadLettered so the dead-letter gauge stays honest). The reason is audit-critical. An in-flight (Processing) or already-terminal message is rejected. Global-administrator only.
//
empty_envelope_t* OutboxAPI_cancelOutboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version, outbox_admin_reason_dto_t *outbox_admin_reason_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**outbox_admin_reason_dto** | **[outbox_admin_reason_dto_t](outbox_admin_reason_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OutboxAPI_deadLetterOutboxMessage**
```c
// Manually dead-letter an outbox message
//
// Manually moves a Processing or Failed message to the terminal DeadLettered state. The reason is audit-critical. Global-administrator only.
//
empty_envelope_t* OutboxAPI_deadLetterOutboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version, outbox_admin_reason_dto_t *outbox_admin_reason_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**outbox_admin_reason_dto** | **[outbox_admin_reason_dto_t](outbox_admin_reason_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OutboxAPI_expediteOutboxMessage**
```c
// Expedite a failed (retry-eligible) outbox message
//
// Pulls a Failed message's scheduled instant forward to now so the relay claims it on the next poll, bypassing the remaining backoff. Same row, retry budget untouched (the lighter-touch counterpart to Replay, which also clears the recorded error). Only a Failed message can be expedited. Global-administrator only.
//
empty_envelope_t* OutboxAPI_expediteOutboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **OutboxAPI_getOutboxCorrelationChain**
```c
// Get an outbox correlation chain
//
// Returns every outbox message that shares a correlation id — one logical unit of async work end-to-end (e.g. a command and the events its handler in turn staged) — oldest-created first. Global-administrator only.
//
outbox_message_dto_i_read_only_list_envelope_t* OutboxAPI_getOutboxCorrelationChain(apiClient_t *apiClient, char *correlationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**correlationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[outbox_message_dto_i_read_only_list_envelope_t](outbox_message_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OutboxAPI_getOutboxHealth**
```c
// Get durable-outbox relay health
//
// Returns a single snapshot of the durable-outbox relay: whether it is enabled, the per-status counts (pending/processing/failed/dead-lettered), the age of the oldest pending message, and the last successful dispatch instant. Global-administrator only.
//
outbox_health_dto_envelope_t* OutboxAPI_getOutboxHealth(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[outbox_health_dto_envelope_t](outbox_health_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OutboxAPI_getOutboxMessage**
```c
// Get one outbox message
//
// Returns one outbox message's payload-safe detail by id — its lifecycle status, the two classification axes (kind + message type), the attempt/ceiling budget, the recorded failure, the idempotency + correlation lineage, and the timestamps. Global-administrator only.
//
outbox_message_dto_envelope_t* OutboxAPI_getOutboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[outbox_message_dto_envelope_t](outbox_message_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OutboxAPI_getOutboxMessages**
```c
// List outbox messages
//
// Lists durable-outbox messages (payload-safe fields only). Use OData to scope to a state — e.g. $filter=Status eq 'DeadLettered' for the dead-letter set or Status eq 'Failed' for retry-eligible rows — and to page/order. Global-administrator only.
//
outbox_message_dto_i_read_only_list_envelope_t* OutboxAPI_getOutboxMessages(apiClient_t *apiClient, char *api_version, char *x_api_version, outbox_message_dto_collection_query_parameters_t *outbox_message_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**outbox_message_dto_collection_query_parameters** | **[outbox_message_dto_collection_query_parameters_t](outbox_message_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[outbox_message_dto_i_read_only_list_envelope_t](outbox_message_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OutboxAPI_getOutboxMessagesCount**
```c
// Count outbox messages
//
// Returns the count of durable-outbox messages under the same OData shaping as the list read (e.g. $filter=Status eq 'DeadLettered'). Global-administrator only.
//
int32_envelope_t* OutboxAPI_getOutboxMessagesCount(apiClient_t *apiClient, char *api_version, char *x_api_version, outbox_message_dto_collection_query_parameters_t *outbox_message_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**outbox_message_dto_collection_query_parameters** | **[outbox_message_dto_collection_query_parameters_t](outbox_message_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OutboxAPI_releaseOutboxMessageLease**
```c
// Release a stuck outbox lease
//
// Force-releases the lease on a message wedged in Processing (a crashed/hung relay) and returns it to the claimable Pending state, due now, so the next poll re-drives it. The in-flight attempt is NOT counted — a crash is not a business failure. The relay auto-reclaims a crashed row once its lease expires; this manual lever forces the release immediately. Only a Processing message can have its lease released. Global-administrator only.
//
empty_envelope_t* OutboxAPI_releaseOutboxMessageLease(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **OutboxAPI_replayOutboxMessage**
```c
// Replay a dead-lettered or failed outbox message
//
// Requeues a DeadLettered or Failed message back to Pending so the relay re-drives it immediately (clearing the lease and recorded error, and bypassing the remaining backoff). The attempt budget is preserved — a replay grants one more pass, not a fresh budget. Replaying a message that is already Pending/Processing or is Succeeded/Cancelled is rejected. Global-administrator only.
//
empty_envelope_t* OutboxAPI_replayOutboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

