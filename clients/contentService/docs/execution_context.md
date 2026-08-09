# execution_context_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**is_authenticated** | **int** |  | [optional] 
**current_cart_id** | **char \*** |  | [optional] [readonly] 
**current_user_id** | **char \*** |  | [optional] [readonly] 
**current_tenant_id** | **char \*** |  | [optional] [readonly] 
**current_portal_id** | **char \*** |  | [optional] [readonly] 
**current_enrollment_id** | **char \*** |  | [optional] [readonly] 
**currency_id** | **char \*** |  | [optional] [readonly] 
**page_size** | **int** |  | [optional] 
**date_format** | **char \*** |  | [optional] 
**currency_format** | **char \*** |  | [optional] 
**date_time_format** | **char \*** |  | [optional] 
**to_date_data_summaries** | **char \*** |  | [optional] 
**from_date_data_summaries** | **char \*** |  | [optional] 
**authorization** | [**auth_result_t**](auth_result.md) \* |  | [optional] 
**user** | [**extended_user_dto_t**](extended_user_dto.md) \* |  | [optional] 
**current_tenant** | [**extended_tenant_dto_t**](extended_tenant_dto.md) \* |  | [optional] 
**current_enrollment** | [**tenant_enrollment_dto_t**](tenant_enrollment_dto.md) \* |  | [optional] 
**selected_tenant_mappings** | [**crm_context_t**](crm_context.md) \* |  | [optional] 
**portal_owner_mappings** | [**crm_context_t**](crm_context.md) \* |  | [optional] 
**root_tenant_mappings** | [**crm_context_t**](crm_context.md) \* |  | [optional] 
**cart** | [**cart_dto_t**](cart_dto.md) \* |  | [optional] 
**currency** | [**currency_dto_t**](currency_dto.md) \* |  | [optional] 
**forex_rates** | [**forex_rates_dto_t**](forex_rates_dto.md) \* |  | [optional] 
**exchange_rate** | [**money_t**](money.md) \* |  | [optional] 
**country** | [**country_dto_t**](country_dto.md) \* |  | [optional] 
**root_tenant** | [**tenant_dto_t**](tenant_dto.md) \* |  | [optional] 
**current_portal** | [**web_portal_dto_t**](web_portal_dto.md) \* |  | [optional] 
**tenants** | [**list_t**](extended_tenant_dto.md) \* |  | [optional] 
**enrollments** | [**list_t**](extended_tenant_enrollment_dto.md) \* |  | [optional] 
**available_portals** | [**list_t**](web_portal_dto.md) \* |  | [optional] 
**invitations** | [**list_t**](extended_invite_dto.md) \* |  | [optional] 
**granted_permissions** | **list_t \*** |  | [optional] 
**accessible_features** | [**list_t**](suite_license_feature_dto.md) \* |  | [optional] 
**culture_name** | **char \*** |  | [optional] [readonly] 
**timezone_id** | **char \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


