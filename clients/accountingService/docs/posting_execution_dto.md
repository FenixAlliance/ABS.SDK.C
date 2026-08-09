# posting_execution_dto_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** |  | [optional] 
**timestamp** | **char \*** |  | [optional] 
**tenant_id** | **char \*** |  | [optional] 
**enrollment_id** | **char \*** |  | [optional] 
**posting_intent_id** | **char \*** |  | [optional] 
**posting_idempotency_key** | **char \*** |  | [optional] 
**intent_type** | **char \*** |  | [optional] 
**posting_operation** | **char \*** |  | [optional] 
**source_document_type** | **char \*** |  | [optional] 
**source_document_id** | **char \*** |  | [optional] 
**status** | **accountingservice_posting_execution_dto_STATUS_e** |  | [optional] 
**failure_kind** | **accountingservice_posting_execution_dto_FAILUREKIND_e** |  | [optional] 
**failure_code** | **char \*** |  | [optional] 
**retryable** | **int** |  | [optional] 
**correlation_id** | **char \*** |  | [optional] 
**causation_id** | **char \*** |  | [optional] 
**received_at_utc** | **char \*** |  | [optional] 
**processing_started_at_utc** | **char \*** |  | [optional] 
**completed_at_utc** | **char \*** |  | [optional] 
**book_results** | [**list_t**](posting_book_result_dto.md) \* |  | [optional] 
**failure_class** | **accountingservice_posting_execution_dto_FAILURECLASS_e** |  | [optional] [readonly] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


