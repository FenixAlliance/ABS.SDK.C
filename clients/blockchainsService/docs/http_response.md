# http_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**http_context** | [**http_context_t**](http_context.md) \* |  | [optional] 
**status_code** | **int** |  | [optional] 
**headers** | **list_t*** |  | [optional] [readonly] 
**body** | **binary_t*** |  | [optional] 
**body_writer** | [**pipe_writer_t**](pipe_writer.md) \* |  | [optional] 
**content_length** | **long** |  | [optional] 
**content_type** | **char \*** |  | [optional] 
**cookies** | [**object_t**](.md) \* |  | [optional] 
**has_started** | **int** |  | [optional] [readonly] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


