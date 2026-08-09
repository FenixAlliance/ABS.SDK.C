# journal_entry_dto_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** |  | [optional] 
**timestamp** | **char \*** |  | [optional] 
**tenant_id** | **char \*** |  | [optional] 
**enrollment_id** | **char \*** |  | [optional] 
**journal_id** | **char \*** |  | [optional] 
**journal_name** | **char \*** |  | [optional] 
**journal_code** | **char \*** |  | [optional] 
**fiscal_period_id** | **char \*** |  | [optional] 
**financial_book_id** | **char \*** |  | [optional] 
**description** | **char \*** |  | [optional] 
**entry_type** | **accountingservice_journal_entry_dto_ENTRYTYPE_e** |  | [optional] 
**status** | **accountingservice_journal_entry_dto_STATUS_e** |  | [optional] 
**posting_date** | **char \*** |  | [optional] 
**is_opening_balance** | **int** |  | [optional] 
**transaction_currency_id** | **char \*** |  | [optional] 
**source_document_type** | **char \*** |  | [optional] 
**source_document_id** | **char \*** |  | [optional] 
**idempotency_key** | **char \*** |  | [optional] 
**reversal_of_journal_entry_id** | **char \*** |  | [optional] 
**posted_by** | **char \*** |  | [optional] 
**forex_rate** | **double** |  | [optional] 
**forex_rates_snapshot** | **char \*** |  | [optional] 
**debit_in_usd** | **double** |  | [optional] 
**credit_in_usd** | **double** |  | [optional] 
**accounting_entries** | [**list_t**](accounting_entry_dto.md) \* |  | [optional] 
**total_debit** | **double** |  | [optional] [readonly] 
**total_credit** | **double** |  | [optional] [readonly] 
**total_debit_amount** | [**money_t**](money.md) \* |  | [optional] 
**total_credit_amount** | [**money_t**](money.md) \* |  | [optional] 
**debit_in_usd_amount** | [**money_t**](money.md) \* |  | [optional] 
**credit_in_usd_amount** | [**money_t**](money.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


