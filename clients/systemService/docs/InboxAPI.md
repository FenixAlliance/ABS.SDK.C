# InboxAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**InboxAPI_cancelInboxMessageRetry**](InboxAPI.md#InboxAPI_cancelInboxMessageRetry) | **POST** /api/v2/SystemService/Inbox/Messages/{id}/CancelRetry | Cancel a scheduled inbox retry
[**InboxAPI_deadLetterInboxMessage**](InboxAPI.md#InboxAPI_deadLetterInboxMessage) | **POST** /api/v2/SystemService/Inbox/Messages/{id}/DeadLetter | Manually dead-letter an inbox message
[**InboxAPI_expediteInboxMessage**](InboxAPI.md#InboxAPI_expediteInboxMessage) | **POST** /api/v2/SystemService/Inbox/Messages/{id}/Expedite | Expedite a retry-scheduled inbox message
[**InboxAPI_getDuplicateInboxMessages**](InboxAPI.md#InboxAPI_getDuplicateInboxMessages) | **GET** /api/v2/SystemService/Inbox/Duplicates | List duplicate-bearing inbox messages
[**InboxAPI_getDuplicateInboxMessagesCount**](InboxAPI.md#InboxAPI_getDuplicateInboxMessagesCount) | **GET** /api/v2/SystemService/Inbox/Duplicates/Count | Count duplicate-bearing inbox messages
[**InboxAPI_getInboxCorrelationChain**](InboxAPI.md#InboxAPI_getInboxCorrelationChain) | **GET** /api/v2/SystemService/Inbox/Correlations/{correlationId} | Get an inbox correlation chain
[**InboxAPI_getInboxHealth**](InboxAPI.md#InboxAPI_getInboxHealth) | **GET** /api/v2/SystemService/Inbox/Health | Get durable-inbox processor health
[**InboxAPI_getInboxMessage**](InboxAPI.md#InboxAPI_getInboxMessage) | **GET** /api/v2/SystemService/Inbox/Messages/{id} | Get one inbox message
[**InboxAPI_getInboxMessages**](InboxAPI.md#InboxAPI_getInboxMessages) | **GET** /api/v2/SystemService/Inbox/Messages | List inbox messages
[**InboxAPI_getInboxMessagesCount**](InboxAPI.md#InboxAPI_getInboxMessagesCount) | **GET** /api/v2/SystemService/Inbox/Messages/Count | Count inbox messages
[**InboxAPI_quarantineInboxMessage**](InboxAPI.md#InboxAPI_quarantineInboxMessage) | **POST** /api/v2/SystemService/Inbox/Messages/{id}/Quarantine | Manually quarantine an inbox message
[**InboxAPI_releaseInboxMessageLease**](InboxAPI.md#InboxAPI_releaseInboxMessageLease) | **POST** /api/v2/SystemService/Inbox/Messages/{id}/ReleaseLease | Release a stuck inbox lease
[**InboxAPI_replayInboxMessage**](InboxAPI.md#InboxAPI_replayInboxMessage) | **POST** /api/v2/SystemService/Inbox/Messages/{id}/Replay | Replay a terminal inbox message as a new generation


# **InboxAPI_cancelInboxMessageRetry**
```c
// Cancel a scheduled inbox retry
//
// Stops a RetryScheduled message from retrying by operator decision, moving it to the terminal Cancelled state (deliberately distinct from DeadLettered so the dead-letter gauge stays honest). The reason is audit-critical. Only a RetryScheduled message can be cancelled. Global-administrator only.
//
empty_envelope_t* InboxAPI_cancelInboxMessageRetry(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version, inbox_admin_reason_dto_t *inbox_admin_reason_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**inbox_admin_reason_dto** | **[inbox_admin_reason_dto_t](inbox_admin_reason_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InboxAPI_deadLetterInboxMessage**
```c
// Manually dead-letter an inbox message
//
// Manually moves a non-terminal message to the terminal DeadLettered state. The reason is audit-critical. Global-administrator only.
//
empty_envelope_t* InboxAPI_deadLetterInboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version, inbox_admin_reason_dto_t *inbox_admin_reason_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**inbox_admin_reason_dto** | **[inbox_admin_reason_dto_t](inbox_admin_reason_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InboxAPI_expediteInboxMessage**
```c
// Expedite a retry-scheduled inbox message
//
// Pulls a RetryScheduled message's scheduled instant forward to now so the processor claims it on the next poll, bypassing the remaining backoff. Same row, retry budget untouched. Only a RetryScheduled message can be expedited. Global-administrator only.
//
empty_envelope_t* InboxAPI_expediteInboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version);
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

# **InboxAPI_getDuplicateInboxMessages**
```c
// List duplicate-bearing inbox messages
//
// Lists inbox messages that have observed a re-delivery (DeliveryCount > 1) — durable evidence that a source is re-sending, surfaced with DeliveryCount / LastDuplicateReceivedAtUtc. Further OData filtering/paging applies. Global-administrator only.
//
inbox_message_dto_i_read_only_list_envelope_t* InboxAPI_getDuplicateInboxMessages(apiClient_t *apiClient, char *api_version, char *x_api_version, inbox_message_dto_collection_query_parameters_t *inbox_message_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**inbox_message_dto_collection_query_parameters** | **[inbox_message_dto_collection_query_parameters_t](inbox_message_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[inbox_message_dto_i_read_only_list_envelope_t](inbox_message_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InboxAPI_getDuplicateInboxMessagesCount**
```c
// Count duplicate-bearing inbox messages
//
// Returns the count of duplicate-bearing inbox messages under the same OData shaping as the duplicates list. Global-administrator only.
//
int32_envelope_t* InboxAPI_getDuplicateInboxMessagesCount(apiClient_t *apiClient, char *api_version, char *x_api_version, inbox_message_dto_collection_query_parameters_t *inbox_message_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**inbox_message_dto_collection_query_parameters** | **[inbox_message_dto_collection_query_parameters_t](inbox_message_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InboxAPI_getInboxCorrelationChain**
```c
// Get an inbox correlation chain
//
// Returns every inbox message that shares a correlation id — one logical inbound interaction end-to-end, including its replay generations — oldest-received first. Global-administrator only.
//
inbox_message_dto_i_read_only_list_envelope_t* InboxAPI_getInboxCorrelationChain(apiClient_t *apiClient, char *correlationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**correlationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[inbox_message_dto_i_read_only_list_envelope_t](inbox_message_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InboxAPI_getInboxHealth**
```c
// Get durable-inbox processor health
//
// Returns a single snapshot of the durable-inbox processor: whether it is enabled, the per-status counts (received/accepted/processing/retry-scheduled/rejected/quarantined/dead-lettered/cancelled), the age of the oldest accepted message, and the last successful processing instant. Global-administrator only.
//
inbox_health_dto_envelope_t* InboxAPI_getInboxHealth(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[inbox_health_dto_envelope_t](inbox_health_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InboxAPI_getInboxMessage**
```c
// Get one inbox message
//
// Returns one inbox message's payload-safe detail by id — both lifecycle axes (processing status + independent verification status), the dedup lineage, attempt/generation counters, the recorded failure, and the timestamps. Global-administrator only.
//
inbox_message_dto_envelope_t* InboxAPI_getInboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[inbox_message_dto_envelope_t](inbox_message_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InboxAPI_getInboxMessages**
```c
// List inbox messages
//
// Lists durable-inbox messages (payload-safe fields only). Use OData to scope by any projected field — e.g. $filter=Status eq 'Quarantined' for the quarantine review, Status eq 'DeadLettered' for terminal failures, VerificationStatus eq 'Failed' for forged/untrusted callbacks, SourceSystem eq 'stripe', or a ReceivedAtUtc range — and to page/order. Global-administrator only.
//
inbox_message_dto_i_read_only_list_envelope_t* InboxAPI_getInboxMessages(apiClient_t *apiClient, char *api_version, char *x_api_version, inbox_message_dto_collection_query_parameters_t *inbox_message_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**inbox_message_dto_collection_query_parameters** | **[inbox_message_dto_collection_query_parameters_t](inbox_message_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[inbox_message_dto_i_read_only_list_envelope_t](inbox_message_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InboxAPI_getInboxMessagesCount**
```c
// Count inbox messages
//
// Returns the count of durable-inbox messages under the same OData shaping as the list read (e.g. $filter=Status eq 'Quarantined'). Global-administrator only.
//
int32_envelope_t* InboxAPI_getInboxMessagesCount(apiClient_t *apiClient, char *api_version, char *x_api_version, inbox_message_dto_collection_query_parameters_t *inbox_message_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**inbox_message_dto_collection_query_parameters** | **[inbox_message_dto_collection_query_parameters_t](inbox_message_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InboxAPI_quarantineInboxMessage**
```c
// Manually quarantine an inbox message
//
// Manually holds a non-terminal message for review in the terminal Quarantined state (e.g. an operator judges it suspicious). The reason is audit-critical. Global-administrator only.
//
empty_envelope_t* InboxAPI_quarantineInboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version, inbox_admin_reason_dto_t *inbox_admin_reason_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**inbox_admin_reason_dto** | **[inbox_admin_reason_dto_t](inbox_admin_reason_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InboxAPI_releaseInboxMessageLease**
```c
// Release a stuck inbox lease
//
// Force-releases the lease on a message wedged in Processing (a crashed/hung processor) and returns it to the claimable Accepted state, due now, so the next poll re-drives it. The in-flight attempt is NOT counted — a crash is not a business failure. Only a Processing message can have its lease released. Global-administrator only.
//
empty_envelope_t* InboxAPI_releaseInboxMessageLease(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version);
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

# **InboxAPI_replayInboxMessage**
```c
// Replay a terminal inbox message as a new generation
//
// Replays a terminal message as a NEW processing generation over its immutable received evidence — the inbox's recovery lever (distinct from the outbox's same-row requeue). A selected replay-generation row is resolved back to its lineage root before replaying, so numbering stays global and collision-free; the new row is claimable at once with a fresh retry budget, and the root's evidence and budget are never mutated. Legal only from a terminal state whose authenticity passed. Returns the new generation's identity. The reason is audit-critical. Global-administrator only.
//
inbox_replay_result_dto_envelope_t* InboxAPI_replayInboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version, inbox_admin_reason_dto_t *inbox_admin_reason_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**inbox_admin_reason_dto** | **[inbox_admin_reason_dto_t](inbox_admin_reason_dto.md) \*** |  | [optional] 

### Return type

[inbox_replay_result_dto_envelope_t](inbox_replay_result_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

