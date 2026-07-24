# accounting_entry_dto_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** |  | [optional] 
**tenant_id** | **char \*** |  | [optional] 
**enrollment_id** | **char \*** |  | [optional] 
**journal_entry_id** | **char \*** |  | [optional] 
**account_id** | **char \*** |  | [optional] 
**account_name** | **char \*** |  | [optional] 
**direction** | **accountingservice_accounting_entry_dto_DIRECTION_e** |  | [optional] 
**description** | **char \*** |  | [optional] 
**transaction_amount** | **double** |  | [optional] 
**transaction_currency_id** | **char \*** |  | [optional] 
**functional_amount** | **double** |  | [optional] 
**functional_currency_id** | **char \*** |  | [optional] 
**account_amount** | **double** |  | [optional] 
**account_currency_id** | **char \*** |  | [optional] 
**reporting_amount_in_usd** | **double** |  | [optional] 
**forex_rate** | **double** |  | [optional] 
**forex_rates_snapshot** | **char \*** |  | [optional] 
**cost_centre_id** | **char \*** |  | [optional] 
**project_id** | **char \*** |  | [optional] 
**timestamp** | **char \*** |  | [optional] 
**debit** | **double** |  | [optional] [readonly] 
**credit** | **double** |  | [optional] [readonly] 
**amount** | [**money_t**](money.md) \* |  | [optional] 
**amount_in_usd** | [**money_t**](money.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


