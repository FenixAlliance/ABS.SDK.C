# http_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**http_context** | [**http_context_t**](http_context.md) \* |  | [optional] 
**method** | **char \*** |  | [optional] 
**scheme** | **char \*** |  | [optional] 
**is_https** | **int** |  | [optional] 
**host** | [**host_string_t**](host_string.md) \* |  | [optional] 
**path_base** | [**path_string_t**](path_string.md) \* |  | [optional] 
**path** | [**path_string_t**](path_string.md) \* |  | [optional] 
**query_string** | [**query_string_t**](query_string.md) \* |  | [optional] 
**query** | [**list_t**](string_string_values_key_value_pair.md) \* |  | [optional] 
**protocol** | **char \*** |  | [optional] 
**headers** | **list_t*** |  | [optional] [readonly] 
**cookies** | [**list_t**](string_string_key_value_pair.md) \* |  | [optional] 
**content_length** | **long** |  | [optional] 
**content_type** | **char \*** |  | [optional] 
**body** | **binary_t*** |  | [optional] 
**body_reader** | **binary_t*** |  | [optional] [readonly] 
**has_form_content_type** | **int** |  | [optional] [readonly] 
**form** | [**list_t**](string_string_values_key_value_pair.md) \* |  | [optional] 
**route_values** | **list_t*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


