# PostingExecutionsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PostingExecutionsAPI_countPostingExecutionsAsync**](PostingExecutionsAPI.md#PostingExecutionsAPI_countPostingExecutionsAsync) | **GET** /api/v2/AccountingService/PostingExecutions/Count | Count posting executions
[**PostingExecutionsAPI_getPostingExecutionsAsync**](PostingExecutionsAPI.md#PostingExecutionsAPI_getPostingExecutionsAsync) | **GET** /api/v2/AccountingService/PostingExecutions | List posting executions


# **PostingExecutionsAPI_countPostingExecutionsAsync**
```c
// Count posting executions
//
// Returns the count of the tenant's posting-inbox executions under the same OData shaping as the list read (e.g. $filter=Status eq 'Rejected' to count rejected intents). Requires journals_read.
//
int32_envelope_t* PostingExecutionsAPI_countPostingExecutionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**posting_execution_dto_collection_query_parameters** | **[posting_execution_dto_collection_query_parameters_t](posting_execution_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostingExecutionsAPI_getPostingExecutionsAsync**
```c
// List posting executions
//
// Lists the tenant's posting-inbox executions (the durable evidence of every posting intent). Use OData to scope to a state — e.g. $filter=Status eq 'Rejected' for rejected intents, or Status eq 'PendingMapping'/'PendingPeriod'/'PendingRate' for the retryable pending set — and to page/order. Requires journals_read.
//
posting_execution_dto_i_read_only_list_envelope_t* PostingExecutionsAPI_getPostingExecutionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**posting_execution_dto_collection_query_parameters** | **[posting_execution_dto_collection_query_parameters_t](posting_execution_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[posting_execution_dto_i_read_only_list_envelope_t](posting_execution_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

