# InvoicesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**InvoicesAPI_aggregateInvoiceDiscounts**](InvoicesAPI.md#InvoicesAPI_aggregateInvoiceDiscounts) | **POST** /api/v2/InvoicingService/Invoices/DiscountsAggregate | Aggregate invoice discounts.
[**InvoicesAPI_aggregateInvoiceGlobalSurcharges**](InvoicesAPI.md#InvoicesAPI_aggregateInvoiceGlobalSurcharges) | **POST** /api/v2/InvoicingService/Invoices/GlobalSurchargesAggregate | Aggregate invoice global surcharges.
[**InvoicesAPI_aggregateInvoiceTaxBases**](InvoicesAPI.md#InvoicesAPI_aggregateInvoiceTaxBases) | **POST** /api/v2/InvoicingService/Invoices/TaxBasesAggregate | Aggregate invoice tax bases.
[**InvoicesAPI_aggregateInvoiceTaxes**](InvoicesAPI.md#InvoicesAPI_aggregateInvoiceTaxes) | **POST** /api/v2/InvoicingService/Invoices/TaxesAggregate | Aggregate invoice taxes.
[**InvoicesAPI_aggregateInvoiceTotals**](InvoicesAPI.md#InvoicesAPI_aggregateInvoiceTotals) | **POST** /api/v2/InvoicingService/Invoices/TotalsAggregate | Aggregate invoice totals.
[**InvoicesAPI_calculateInvoice**](InvoicesAPI.md#InvoicesAPI_calculateInvoice) | **PUT** /api/v2/InvoicingService/Invoices/{invoiceId}/Calculate | Calculate an invoice.
[**InvoicesAPI_calculateInvoiceLine**](InvoicesAPI.md#InvoicesAPI_calculateInvoiceLine) | **PUT** /api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Calculate | Calculate an invoice line.
[**InvoicesAPI_createInvoice**](InvoicesAPI.md#InvoicesAPI_createInvoice) | **POST** /api/v2/InvoicingService/Invoices | Create a new invoice.
[**InvoicesAPI_createInvoiceAdjustment**](InvoicesAPI.md#InvoicesAPI_createInvoiceAdjustment) | **POST** /api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments | Create a new invoice adjustment.
[**InvoicesAPI_createInvoiceLine**](InvoicesAPI.md#InvoicesAPI_createInvoiceLine) | **POST** /api/v2/InvoicingService/Invoices/{invoiceId}/Lines | Create a new invoice line.
[**InvoicesAPI_createInvoiceLineTax**](InvoicesAPI.md#InvoicesAPI_createInvoiceLineTax) | **POST** /api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes | Create a new tax for an invoice line.
[**InvoicesAPI_createInvoiceReference**](InvoicesAPI.md#InvoicesAPI_createInvoiceReference) | **POST** /api/v2/InvoicingService/Invoices/{invoiceId}/References | Create a new invoice reference.
[**InvoicesAPI_deleteInvoice**](InvoicesAPI.md#InvoicesAPI_deleteInvoice) | **DELETE** /api/v2/InvoicingService/Invoices/{invoiceId} | Delete an invoice.
[**InvoicesAPI_deleteInvoiceAdjustment**](InvoicesAPI.md#InvoicesAPI_deleteInvoiceAdjustment) | **DELETE** /api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments/{invoiceAdjustmentId} | Delete an invoice adjustment.
[**InvoicesAPI_deleteInvoiceLine**](InvoicesAPI.md#InvoicesAPI_deleteInvoiceLine) | **DELETE** /api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId} | Delete an invoice line.
[**InvoicesAPI_deleteInvoiceLineTax**](InvoicesAPI.md#InvoicesAPI_deleteInvoiceLineTax) | **DELETE** /api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes/{invoiceLineTaxId} | Delete a tax from an invoice line.
[**InvoicesAPI_deleteInvoiceReference**](InvoicesAPI.md#InvoicesAPI_deleteInvoiceReference) | **DELETE** /api/v2/InvoicingService/Invoices/{invoiceId}/References/{invoiceReferenceId} | Delete an invoice reference.
[**InvoicesAPI_getExtendedInvoice**](InvoicesAPI.md#InvoicesAPI_getExtendedInvoice) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/Extended | Get an extended invoice by ID.
[**InvoicesAPI_getExtendedInvoices**](InvoicesAPI.md#InvoicesAPI_getExtendedInvoices) | **GET** /api/v2/InvoicingService/Invoices/Extended | Get a list of extended invoices.
[**InvoicesAPI_getExtendedInvoicesCount**](InvoicesAPI.md#InvoicesAPI_getExtendedInvoicesCount) | **GET** /api/v2/InvoicingService/Invoices/Extended/Count | Get the count of extended invoices.
[**InvoicesAPI_getInvoice**](InvoicesAPI.md#InvoicesAPI_getInvoice) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId} | Get an invoice by ID.
[**InvoicesAPI_getInvoiceAdjustment**](InvoicesAPI.md#InvoicesAPI_getInvoiceAdjustment) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments/{invoiceAdjustmentId} | Get an invoice adjustment by ID.
[**InvoicesAPI_getInvoiceAdjustments**](InvoicesAPI.md#InvoicesAPI_getInvoiceAdjustments) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments | Get invoice adjustments.
[**InvoicesAPI_getInvoiceAdjustmentsCount**](InvoicesAPI.md#InvoicesAPI_getInvoiceAdjustmentsCount) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments/Count | Get the count of invoice adjustments.
[**InvoicesAPI_getInvoiceLine**](InvoicesAPI.md#InvoicesAPI_getInvoiceLine) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId} | Get an invoice line by ID.
[**InvoicesAPI_getInvoiceLineTaxes**](InvoicesAPI.md#InvoicesAPI_getInvoiceLineTaxes) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes | Get taxes for an invoice line.
[**InvoicesAPI_getInvoiceLineTaxesCount**](InvoicesAPI.md#InvoicesAPI_getInvoiceLineTaxesCount) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes/Count | Get the count of taxes for an invoice line.
[**InvoicesAPI_getInvoiceLines**](InvoicesAPI.md#InvoicesAPI_getInvoiceLines) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/Lines | Get invoice lines.
[**InvoicesAPI_getInvoiceLinesCount**](InvoicesAPI.md#InvoicesAPI_getInvoiceLinesCount) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/Lines/Count | Get the count of invoice lines.
[**InvoicesAPI_getInvoicePayments**](InvoicesAPI.md#InvoicesAPI_getInvoicePayments) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/Payments | Get payments for an invoice.
[**InvoicesAPI_getInvoicePaymentsCount**](InvoicesAPI.md#InvoicesAPI_getInvoicePaymentsCount) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/Payments/Count | Get the count of payments for an invoice.
[**InvoicesAPI_getInvoiceReference**](InvoicesAPI.md#InvoicesAPI_getInvoiceReference) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/References/{invoiceReferenceId} | Get an invoice reference by ID.
[**InvoicesAPI_getInvoiceReferences**](InvoicesAPI.md#InvoicesAPI_getInvoiceReferences) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/References | Get invoice references.
[**InvoicesAPI_getInvoiceReferencesCount**](InvoicesAPI.md#InvoicesAPI_getInvoiceReferencesCount) | **GET** /api/v2/InvoicingService/Invoices/{invoiceId}/References/Count | Get the count of invoice references.
[**InvoicesAPI_getInvoices**](InvoicesAPI.md#InvoicesAPI_getInvoices) | **GET** /api/v2/InvoicingService/Invoices | Get a list of invoices.
[**InvoicesAPI_getInvoicesCount**](InvoicesAPI.md#InvoicesAPI_getInvoicesCount) | **GET** /api/v2/InvoicingService/Invoices/Count | Get the count of invoices.
[**InvoicesAPI_previewInvoiceEmail**](InvoicesAPI.md#InvoicesAPI_previewInvoiceEmail) | **POST** /api/v2/InvoicingService/Invoices/{invoiceId}/Emails/Preview | Preview the rendered email for an invoice.
[**InvoicesAPI_sendInvoiceEmail**](InvoicesAPI.md#InvoicesAPI_sendInvoiceEmail) | **POST** /api/v2/InvoicingService/Invoices/{invoiceId}/Emails/Send | Send an invoice transactional email to recipients.
[**InvoicesAPI_updateInvoice**](InvoicesAPI.md#InvoicesAPI_updateInvoice) | **PUT** /api/v2/InvoicingService/Invoices/{invoiceId} | Update an invoice.
[**InvoicesAPI_updateInvoiceAdjustment**](InvoicesAPI.md#InvoicesAPI_updateInvoiceAdjustment) | **PUT** /api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments/{invoiceAdjustmentId} | Update an invoice adjustment.
[**InvoicesAPI_updateInvoiceLine**](InvoicesAPI.md#InvoicesAPI_updateInvoiceLine) | **PUT** /api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId} | Update an invoice line.
[**InvoicesAPI_updateInvoiceLineTax**](InvoicesAPI.md#InvoicesAPI_updateInvoiceLineTax) | **PUT** /api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes/{invoiceLineTaxId} | Update a tax for an invoice line.
[**InvoicesAPI_updateInvoiceReference**](InvoicesAPI.md#InvoicesAPI_updateInvoiceReference) | **PUT** /api/v2/InvoicingService/Invoices/{invoiceId}/References/{invoiceReferenceId} | Update an invoice reference.


# **InvoicesAPI_aggregateInvoiceDiscounts**
```c
// Aggregate invoice discounts.
//
// Aggregates the discounts for the specified invoices.
//
money_envelope_t* InvoicesAPI_aggregateInvoiceDiscounts(apiClient_t *apiClient, list_t *request_body, char *currencyId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**request_body** | **[list_t](char.md) \*** |  | 
**currencyId** | **char \*** |  | [optional] 

### Return type

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_aggregateInvoiceGlobalSurcharges**
```c
// Aggregate invoice global surcharges.
//
// Aggregates the global surcharges for the specified invoices.
//
money_envelope_t* InvoicesAPI_aggregateInvoiceGlobalSurcharges(apiClient_t *apiClient, list_t *request_body, char *currencyId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**request_body** | **[list_t](char.md) \*** |  | 
**currencyId** | **char \*** |  | [optional] 

### Return type

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_aggregateInvoiceTaxBases**
```c
// Aggregate invoice tax bases.
//
// Aggregates the tax bases for the specified invoices.
//
money_envelope_t* InvoicesAPI_aggregateInvoiceTaxBases(apiClient_t *apiClient, list_t *request_body, char *currencyId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**request_body** | **[list_t](char.md) \*** |  | 
**currencyId** | **char \*** |  | [optional] 

### Return type

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_aggregateInvoiceTaxes**
```c
// Aggregate invoice taxes.
//
// Aggregates the taxes for the specified invoices.
//
money_envelope_t* InvoicesAPI_aggregateInvoiceTaxes(apiClient_t *apiClient, list_t *request_body, char *currencyId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**request_body** | **[list_t](char.md) \*** |  | 
**currencyId** | **char \*** |  | [optional] 

### Return type

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_aggregateInvoiceTotals**
```c
// Aggregate invoice totals.
//
// Aggregates the totals for the specified invoices.
//
money_envelope_t* InvoicesAPI_aggregateInvoiceTotals(apiClient_t *apiClient, list_t *request_body, char *currencyId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**request_body** | **[list_t](char.md) \*** |  | 
**currencyId** | **char \*** |  | [optional] 

### Return type

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_calculateInvoice**
```c
// Calculate an invoice.
//
// Calculates the totals and taxes for the specified invoice.
//
empty_envelope_t* InvoicesAPI_calculateInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_calculateInvoiceLine**
```c
// Calculate an invoice line.
//
// Calculates the totals and taxes for the specified invoice line.
//
empty_envelope_t* InvoicesAPI_calculateInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceLineId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_createInvoice**
```c
// Create a new invoice.
//
// Creates a new invoice for the specified tenant.
//
empty_envelope_t* InvoicesAPI_createInvoice(apiClient_t *apiClient, char *tenantId, invoice_create_dto_t *invoice_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoice_create_dto** | **[invoice_create_dto_t](invoice_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_createInvoiceAdjustment**
```c
// Create a new invoice adjustment.
//
// Creates a new adjustment for the specified invoice.
//
empty_envelope_t* InvoicesAPI_createInvoiceAdjustment(apiClient_t *apiClient, char *tenantId, char *invoiceId, invoice_adjustment_create_dto_t *invoice_adjustment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoice_adjustment_create_dto** | **[invoice_adjustment_create_dto_t](invoice_adjustment_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_createInvoiceLine**
```c
// Create a new invoice line.
//
// Creates a new invoice line for the specified invoice.
//
invoice_line_dto_i_read_only_list_envelope_t* InvoicesAPI_createInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, invoice_line_create_dto_t *invoice_line_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoice_line_create_dto** | **[invoice_line_create_dto_t](invoice_line_create_dto.md) \*** |  | [optional] 

### Return type

[invoice_line_dto_i_read_only_list_envelope_t](invoice_line_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_createInvoiceLineTax**
```c
// Create a new tax for an invoice line.
//
// Creates a new tax entry for the specified invoice line.
//
empty_envelope_t* InvoicesAPI_createInvoiceLineTax(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId, invoice_line_applied_tax_create_dto_t *invoice_line_applied_tax_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceLineId** | **char \*** |  | 
**invoice_line_applied_tax_create_dto** | **[invoice_line_applied_tax_create_dto_t](invoice_line_applied_tax_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_createInvoiceReference**
```c
// Create a new invoice reference.
//
// Creates a new reference for the specified invoice.
//
empty_envelope_t* InvoicesAPI_createInvoiceReference(apiClient_t *apiClient, char *tenantId, char *invoiceId, invoice_reference_create_dto_t *invoice_reference_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoice_reference_create_dto** | **[invoice_reference_create_dto_t](invoice_reference_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_deleteInvoice**
```c
// Delete an invoice.
//
// Deletes the specified invoice for the tenant.
//
empty_envelope_t* InvoicesAPI_deleteInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_deleteInvoiceAdjustment**
```c
// Delete an invoice adjustment.
//
// Deletes the specified adjustment from the invoice.
//
empty_envelope_t* InvoicesAPI_deleteInvoiceAdjustment(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceAdjustmentId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceAdjustmentId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_deleteInvoiceLine**
```c
// Delete an invoice line.
//
// Deletes the specified invoice line.
//
empty_envelope_t* InvoicesAPI_deleteInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceLineId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_deleteInvoiceLineTax**
```c
// Delete a tax from an invoice line.
//
// Deletes the specified tax entry from the invoice line.
//
empty_envelope_t* InvoicesAPI_deleteInvoiceLineTax(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId, char *invoiceLineTaxId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceLineId** | **char \*** |  | 
**invoiceLineTaxId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_deleteInvoiceReference**
```c
// Delete an invoice reference.
//
// Deletes the specified reference from the invoice.
//
empty_envelope_t* InvoicesAPI_deleteInvoiceReference(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceReferenceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceReferenceId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getExtendedInvoice**
```c
// Get an extended invoice by ID.
//
// Retrieves the extended invoice details for the specified invoice ID.
//
invoice_dto_envelope_t* InvoicesAPI_getExtendedInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 

### Return type

[invoice_dto_envelope_t](invoice_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getExtendedInvoices**
```c
// Get a list of extended invoices.
//
// Retrieves a list of extended invoice details for the specified tenant.
//
extended_invoice_dto_list_envelope_t* InvoicesAPI_getExtendedInvoices(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[extended_invoice_dto_list_envelope_t](extended_invoice_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getExtendedInvoicesCount**
```c
// Get the count of extended invoices.
//
// Retrieves the total count of extended invoices for the specified tenant.
//
int32_envelope_t* InvoicesAPI_getExtendedInvoicesCount(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoice**
```c
// Get an invoice by ID.
//
// Retrieves the invoice details for the specified invoice ID.
//
invoice_dto_envelope_t* InvoicesAPI_getInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 

### Return type

[invoice_dto_envelope_t](invoice_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoiceAdjustment**
```c
// Get an invoice adjustment by ID.
//
// Retrieves the adjustment details for the specified invoice adjustment ID.
//
invoice_adjustment_dto_envelope_t* InvoicesAPI_getInvoiceAdjustment(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceAdjustmentId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceAdjustmentId** | **char \*** |  | 

### Return type

[invoice_adjustment_dto_envelope_t](invoice_adjustment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoiceAdjustments**
```c
// Get invoice adjustments.
//
// Retrieves the adjustments for the specified invoice.
//
invoice_adjustment_dto_i_read_only_list_envelope_t* InvoicesAPI_getInvoiceAdjustments(apiClient_t *apiClient, char *tenantId, char *invoiceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 

### Return type

[invoice_adjustment_dto_i_read_only_list_envelope_t](invoice_adjustment_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoiceAdjustmentsCount**
```c
// Get the count of invoice adjustments.
//
// Retrieves the total count of adjustments for the specified invoice.
//
int32_envelope_t* InvoicesAPI_getInvoiceAdjustmentsCount(apiClient_t *apiClient, char *tenantId, char *invoiceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoiceLine**
```c
// Get an invoice line by ID.
//
// Retrieves the invoice line details for the specified invoice line ID.
//
invoice_line_dto_envelope_t* InvoicesAPI_getInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceLineId** | **char \*** |  | 

### Return type

[invoice_line_dto_envelope_t](invoice_line_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoiceLineTaxes**
```c
// Get taxes for an invoice line.
//
// Retrieves the taxes applied to the specified invoice line.
//
invoice_line_applied_tax_dto_i_read_only_list_envelope_t* InvoicesAPI_getInvoiceLineTaxes(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceLineId** | **char \*** |  | 

### Return type

[invoice_line_applied_tax_dto_i_read_only_list_envelope_t](invoice_line_applied_tax_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoiceLineTaxesCount**
```c
// Get the count of taxes for an invoice line.
//
// Retrieves the total count of taxes applied to the specified invoice line.
//
int32_envelope_t* InvoicesAPI_getInvoiceLineTaxesCount(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceLineId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoiceLines**
```c
// Get invoice lines.
//
// Retrieves the invoice lines for the specified invoice.
//
invoice_line_dto_list_envelope_t* InvoicesAPI_getInvoiceLines(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *itemId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**itemId** | **char \*** |  | [optional] 

### Return type

[invoice_line_dto_list_envelope_t](invoice_line_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoiceLinesCount**
```c
// Get the count of invoice lines.
//
// Retrieves the total count of invoice lines for the specified invoice.
//
int32_envelope_t* InvoicesAPI_getInvoiceLinesCount(apiClient_t *apiClient, char *tenantId, char *invoiceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoicePayments**
```c
// Get payments for an invoice.
//
// Retrieves the list of payments related to the specified invoice.
//
payment_dto_i_read_only_list_envelope_t* InvoicesAPI_getInvoicePayments(apiClient_t *apiClient, char *invoiceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**invoiceId** | **char \*** |  | 

### Return type

[payment_dto_i_read_only_list_envelope_t](payment_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoicePaymentsCount**
```c
// Get the count of payments for an invoice.
//
// Retrieves the total count of payments for the specified invoice.
//
int32_envelope_t* InvoicesAPI_getInvoicePaymentsCount(apiClient_t *apiClient, char *invoiceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**invoiceId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoiceReference**
```c
// Get an invoice reference by ID.
//
// Retrieves the reference details for the specified invoice reference ID.
//
invoice_reference_dto_envelope_t* InvoicesAPI_getInvoiceReference(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceReferenceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceReferenceId** | **char \*** |  | 

### Return type

[invoice_reference_dto_envelope_t](invoice_reference_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoiceReferences**
```c
// Get invoice references.
//
// Retrieves the references for the specified invoice.
//
invoice_reference_dto_i_read_only_list_envelope_t* InvoicesAPI_getInvoiceReferences(apiClient_t *apiClient, char *tenantId, char *invoiceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 

### Return type

[invoice_reference_dto_i_read_only_list_envelope_t](invoice_reference_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoiceReferencesCount**
```c
// Get the count of invoice references.
//
// Retrieves the total count of references for the specified invoice.
//
int32_envelope_t* InvoicesAPI_getInvoiceReferencesCount(apiClient_t *apiClient, char *tenantId, char *invoiceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoices**
```c
// Get a list of invoices.
//
// Retrieves a list of invoices for the specified tenant.
//
invoice_dto_list_envelope_t* InvoicesAPI_getInvoices(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[invoice_dto_list_envelope_t](invoice_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_getInvoicesCount**
```c
// Get the count of invoices.
//
// Retrieves the total count of invoices for the specified tenant.
//
int32_envelope_t* InvoicesAPI_getInvoicesCount(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_previewInvoiceEmail**
```c
// Preview the rendered email for an invoice.
//
// This action is only available for users with the 'send_email' permission.
//
void InvoicesAPI_previewInvoiceEmail(apiClient_t *apiClient, char *invoiceId, char *tenantId, email_dispatch_request_t *email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**invoiceId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**email_dispatch_request** | **[email_dispatch_request_t](email_dispatch_request.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_sendInvoiceEmail**
```c
// Send an invoice transactional email to recipients.
//
// This action is only available for users with the 'send_email' permission.
//
envelope_t* InvoicesAPI_sendInvoiceEmail(apiClient_t *apiClient, char *tenantId, char *invoiceId, email_dispatch_request_t *email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**email_dispatch_request** | **[email_dispatch_request_t](email_dispatch_request.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_updateInvoice**
```c
// Update an invoice.
//
// Updates the specified invoice for the tenant.
//
empty_envelope_t* InvoicesAPI_updateInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId, invoice_update_dto_t *invoice_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoice_update_dto** | **[invoice_update_dto_t](invoice_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_updateInvoiceAdjustment**
```c
// Update an invoice adjustment.
//
// Updates the specified adjustment for the invoice.
//
empty_envelope_t* InvoicesAPI_updateInvoiceAdjustment(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceAdjustmentId, invoice_adjustment_update_dto_t *invoice_adjustment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceAdjustmentId** | **char \*** |  | 
**invoice_adjustment_update_dto** | **[invoice_adjustment_update_dto_t](invoice_adjustment_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_updateInvoiceLine**
```c
// Update an invoice line.
//
// Updates the specified invoice line.
//
invoice_line_dto_envelope_t* InvoicesAPI_updateInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId, invoice_line_update_dto_t *invoice_line_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceLineId** | **char \*** |  | 
**invoice_line_update_dto** | **[invoice_line_update_dto_t](invoice_line_update_dto.md) \*** |  | [optional] 

### Return type

[invoice_line_dto_envelope_t](invoice_line_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_updateInvoiceLineTax**
```c
// Update a tax for an invoice line.
//
// Updates the specified tax entry for the invoice line.
//
empty_envelope_t* InvoicesAPI_updateInvoiceLineTax(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId, char *invoiceLineTaxId, invoice_line_applied_tax_update_dto_t *invoice_line_applied_tax_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceLineId** | **char \*** |  | 
**invoiceLineTaxId** | **char \*** |  | 
**invoice_line_applied_tax_update_dto** | **[invoice_line_applied_tax_update_dto_t](invoice_line_applied_tax_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvoicesAPI_updateInvoiceReference**
```c
// Update an invoice reference.
//
// Updates the specified reference for the invoice.
//
empty_envelope_t* InvoicesAPI_updateInvoiceReference(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceReferenceId, invoice_reference_update_dto_t *invoice_reference_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**invoiceReferenceId** | **char \*** |  | 
**invoice_reference_update_dto** | **[invoice_reference_update_dto_t](invoice_reference_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

