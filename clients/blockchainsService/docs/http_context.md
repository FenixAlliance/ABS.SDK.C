# http_context_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**features** | [**list_t**](type_object_key_value_pair.md) \* |  | [optional] [readonly] 
**request** | [**http_request_t**](http_request.md) \* |  | [optional] 
**response** | [**http_response_t**](http_response.md) \* |  | [optional] 
**connection** | [**connection_info_t**](connection_info.md) \* |  | [optional] 
**web_sockets** | [**web_socket_manager_t**](web_socket_manager.md) \* |  | [optional] 
**user** | [**claims_principal_t**](claims_principal.md) \* |  | [optional] 
**items** | **list_t*** |  | [optional] 
**request_services** | [**object_t**](.md) \* |  | [optional] 
**request_aborted** | [**cancellation_token_t**](cancellation_token.md) \* |  | [optional] 
**trace_identifier** | **char \*** |  | [optional] 
**session** | [**i_session_t**](i_session.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


