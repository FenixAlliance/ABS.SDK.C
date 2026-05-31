# method_info_t

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
**attributes** | **contentservice_method_info_ATTRIBUTES_e** |  | [optional] [readonly] 
**method_implementation_flags** | **contentservice_method_info_METHODIMPLEMENTATIONFLAGS_e** |  | [optional] [readonly] 
**calling_convention** | **contentservice_method_info_CALLINGCONVENTION_e** |  | [optional] [readonly] 
**is_abstract** | **int** |  | [optional] [readonly] 
**is_constructor** | **int** |  | [optional] [readonly] 
**is_final** | **int** |  | [optional] [readonly] 
**is_hide_by_sig** | **int** |  | [optional] [readonly] 
**is_special_name** | **int** |  | [optional] [readonly] 
**is_static** | **int** |  | [optional] [readonly] 
**is_virtual** | **int** |  | [optional] [readonly] 
**is_assembly** | **int** |  | [optional] [readonly] 
**is_family** | **int** |  | [optional] [readonly] 
**is_family_and_assembly** | **int** |  | [optional] [readonly] 
**is_family_or_assembly** | **int** |  | [optional] [readonly] 
**is_private** | **int** |  | [optional] [readonly] 
**is_public** | **int** |  | [optional] [readonly] 
**is_constructed_generic_method** | **int** |  | [optional] [readonly] 
**is_generic_method** | **int** |  | [optional] [readonly] 
**is_generic_method_definition** | **int** |  | [optional] [readonly] 
**contains_generic_parameters** | **int** |  | [optional] [readonly] 
**method_handle** | [**runtime_method_handle_t**](runtime_method_handle.md) \* |  | [optional] 
**is_security_critical** | **int** |  | [optional] [readonly] 
**is_security_safe_critical** | **int** |  | [optional] [readonly] 
**is_security_transparent** | **int** |  | [optional] [readonly] 
**member_type** | **contentservice_method_info_MEMBERTYPE_e** |  | [optional] [readonly] 
**return_parameter** | [**parameter_info_t**](parameter_info.md) \* |  | [optional] 
**return_type** | [**type_t**](type.md) \* |  | [optional] 
**return_type_custom_attributes** | [**object_t**](.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


