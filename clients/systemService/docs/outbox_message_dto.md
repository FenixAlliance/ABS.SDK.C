# outbox_message_dto_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** |  | [optional] 
**timestamp** | **char \*** |  | [optional] 
**tenant_id** | **char \*** |  | [optional] 
**kind** | **systemservice_outbox_message_dto_KIND_e** |  | [optional] 
**message_type** | **char \*** |  | [optional] 
**status** | **systemservice_outbox_message_dto_STATUS_e** |  | [optional] 
**attempts** | **int** |  | [optional] 
**max_attempts** | **int** |  | [optional] 
**failure_code** | **char \*** |  | [optional] 
**failure_reason** | **char \*** |  | [optional] 
**idempotency_key** | **char \*** |  | [optional] 
**correlation_id** | **char \*** |  | [optional] 
**locked_by** | **char \*** |  | [optional] 
**locked_until_utc** | **char \*** |  | [optional] 
**available_at_utc** | **char \*** |  | [optional] 
**created_at_utc** | **char \*** |  | [optional] 
**last_attempt_at_utc** | **char \*** |  | [optional] 
**processed_at_utc** | **char \*** |  | [optional] 
**failed_at_utc** | **char \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


