# event_info_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **char \*** |  | [optional] [readonly] 
**declaring_type** | [**type_t**](type.md) \* |  | [optional] 
**reflected_type** | [**type_t**](type.md) \* |  | [optional] 
**module** | [**module_t**](module.md) \* |  | [optional] 
**custom_attributes** | [**list_t**](custom_attribute_data.md) \* |  | [optional] [readonly] 
**is_collectible** | **int** |  | [optional] [readonly] 
**metadata_token** | **int** |  | [optional] [readonly] 
**member_type** | **blockchainsservice_event_info_MEMBERTYPE_e** |  | [optional] [readonly] 
**attributes** | **blockchainsservice_event_info_ATTRIBUTES_e** |  | [optional] [readonly] 
**is_special_name** | **int** |  | [optional] [readonly] 
**add_method** | [**method_info_t**](method_info.md) \* |  | [optional] 
**remove_method** | [**method_info_t**](method_info.md) \* |  | [optional] 
**raise_method** | [**method_info_t**](method_info.md) \* |  | [optional] 
**is_multicast** | **int** |  | [optional] [readonly] 
**event_handler_type** | [**type_t**](type.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


