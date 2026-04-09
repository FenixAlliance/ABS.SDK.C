#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/email_dispatch_request.h"
#include "../model/empty_envelope.h"
#include "../model/envelope.h"
#include "../model/error_envelope.h"
#include "../model/extended_invoice_dto_list_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/invoice_adjustment_create_dto.h"
#include "../model/invoice_adjustment_dto_envelope.h"
#include "../model/invoice_adjustment_dto_i_read_only_list_envelope.h"
#include "../model/invoice_adjustment_update_dto.h"
#include "../model/invoice_create_dto.h"
#include "../model/invoice_dto_envelope.h"
#include "../model/invoice_dto_list_envelope.h"
#include "../model/invoice_line_applied_tax_create_dto.h"
#include "../model/invoice_line_applied_tax_dto_i_read_only_list_envelope.h"
#include "../model/invoice_line_applied_tax_update_dto.h"
#include "../model/invoice_line_create_dto.h"
#include "../model/invoice_line_dto_envelope.h"
#include "../model/invoice_line_dto_i_read_only_list_envelope.h"
#include "../model/invoice_line_dto_list_envelope.h"
#include "../model/invoice_line_update_dto.h"
#include "../model/invoice_reference_create_dto.h"
#include "../model/invoice_reference_dto_envelope.h"
#include "../model/invoice_reference_dto_i_read_only_list_envelope.h"
#include "../model/invoice_reference_update_dto.h"
#include "../model/invoice_update_dto.h"
#include "../model/money_envelope.h"
#include "../model/payment_dto_i_read_only_list_envelope.h"


// Aggregate invoice discounts.
//
// Aggregates the discounts for the specified invoices.
//
money_envelope_t*
InvoicesAPI_aggregateInvoiceDiscounts(apiClient_t *apiClient, list_t *request_body, char *currencyId);


// Aggregate invoice global surcharges.
//
// Aggregates the global surcharges for the specified invoices.
//
money_envelope_t*
InvoicesAPI_aggregateInvoiceGlobalSurcharges(apiClient_t *apiClient, list_t *request_body, char *currencyId);


// Aggregate invoice tax bases.
//
// Aggregates the tax bases for the specified invoices.
//
money_envelope_t*
InvoicesAPI_aggregateInvoiceTaxBases(apiClient_t *apiClient, list_t *request_body, char *currencyId);


// Aggregate invoice taxes.
//
// Aggregates the taxes for the specified invoices.
//
money_envelope_t*
InvoicesAPI_aggregateInvoiceTaxes(apiClient_t *apiClient, list_t *request_body, char *currencyId);


// Aggregate invoice totals.
//
// Aggregates the totals for the specified invoices.
//
money_envelope_t*
InvoicesAPI_aggregateInvoiceTotals(apiClient_t *apiClient, list_t *request_body, char *currencyId);


// Calculate an invoice.
//
// Calculates the totals and taxes for the specified invoice.
//
empty_envelope_t*
InvoicesAPI_calculateInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId);


// Calculate an invoice line.
//
// Calculates the totals and taxes for the specified invoice line.
//
empty_envelope_t*
InvoicesAPI_calculateInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId);


// Create a new invoice.
//
// Creates a new invoice for the specified tenant.
//
empty_envelope_t*
InvoicesAPI_createInvoice(apiClient_t *apiClient, char *tenantId, invoice_create_dto_t *invoice_create_dto);


// Create a new invoice adjustment.
//
// Creates a new adjustment for the specified invoice.
//
empty_envelope_t*
InvoicesAPI_createInvoiceAdjustment(apiClient_t *apiClient, char *tenantId, char *invoiceId, invoice_adjustment_create_dto_t *invoice_adjustment_create_dto);


// Create a new invoice line.
//
// Creates a new invoice line for the specified invoice.
//
invoice_line_dto_i_read_only_list_envelope_t*
InvoicesAPI_createInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, invoice_line_create_dto_t *invoice_line_create_dto);


// Create a new tax for an invoice line.
//
// Creates a new tax entry for the specified invoice line.
//
empty_envelope_t*
InvoicesAPI_createInvoiceLineTax(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId, invoice_line_applied_tax_create_dto_t *invoice_line_applied_tax_create_dto);


// Create a new invoice reference.
//
// Creates a new reference for the specified invoice.
//
empty_envelope_t*
InvoicesAPI_createInvoiceReference(apiClient_t *apiClient, char *tenantId, char *invoiceId, invoice_reference_create_dto_t *invoice_reference_create_dto);


// Delete an invoice.
//
// Deletes the specified invoice for the tenant.
//
empty_envelope_t*
InvoicesAPI_deleteInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId);


// Delete an invoice adjustment.
//
// Deletes the specified adjustment from the invoice.
//
empty_envelope_t*
InvoicesAPI_deleteInvoiceAdjustment(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceAdjustmentId);


// Delete an invoice line.
//
// Deletes the specified invoice line.
//
empty_envelope_t*
InvoicesAPI_deleteInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId);


// Delete a tax from an invoice line.
//
// Deletes the specified tax entry from the invoice line.
//
empty_envelope_t*
InvoicesAPI_deleteInvoiceLineTax(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId, char *invoiceLineTaxId);


// Delete an invoice reference.
//
// Deletes the specified reference from the invoice.
//
empty_envelope_t*
InvoicesAPI_deleteInvoiceReference(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceReferenceId);


// Get an extended invoice by ID.
//
// Retrieves the extended invoice details for the specified invoice ID.
//
invoice_dto_envelope_t*
InvoicesAPI_getExtendedInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId);


// Get a list of extended invoices.
//
// Retrieves a list of extended invoice details for the specified tenant.
//
extended_invoice_dto_list_envelope_t*
InvoicesAPI_getExtendedInvoices(apiClient_t *apiClient, char *tenantId);


// Get the count of extended invoices.
//
// Retrieves the total count of extended invoices for the specified tenant.
//
int32_envelope_t*
InvoicesAPI_getExtendedInvoicesCount(apiClient_t *apiClient, char *tenantId);


// Get an invoice by ID.
//
// Retrieves the invoice details for the specified invoice ID.
//
invoice_dto_envelope_t*
InvoicesAPI_getInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId);


// Get an invoice adjustment by ID.
//
// Retrieves the adjustment details for the specified invoice adjustment ID.
//
invoice_adjustment_dto_envelope_t*
InvoicesAPI_getInvoiceAdjustment(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceAdjustmentId);


// Get invoice adjustments.
//
// Retrieves the adjustments for the specified invoice.
//
invoice_adjustment_dto_i_read_only_list_envelope_t*
InvoicesAPI_getInvoiceAdjustments(apiClient_t *apiClient, char *tenantId, char *invoiceId);


// Get the count of invoice adjustments.
//
// Retrieves the total count of adjustments for the specified invoice.
//
int32_envelope_t*
InvoicesAPI_getInvoiceAdjustmentsCount(apiClient_t *apiClient, char *tenantId, char *invoiceId);


// Get an invoice line by ID.
//
// Retrieves the invoice line details for the specified invoice line ID.
//
invoice_line_dto_envelope_t*
InvoicesAPI_getInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId);


// Get taxes for an invoice line.
//
// Retrieves the taxes applied to the specified invoice line.
//
invoice_line_applied_tax_dto_i_read_only_list_envelope_t*
InvoicesAPI_getInvoiceLineTaxes(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId);


// Get the count of taxes for an invoice line.
//
// Retrieves the total count of taxes applied to the specified invoice line.
//
int32_envelope_t*
InvoicesAPI_getInvoiceLineTaxesCount(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId);


// Get invoice lines.
//
// Retrieves the invoice lines for the specified invoice.
//
invoice_line_dto_list_envelope_t*
InvoicesAPI_getInvoiceLines(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *itemId);


// Get the count of invoice lines.
//
// Retrieves the total count of invoice lines for the specified invoice.
//
int32_envelope_t*
InvoicesAPI_getInvoiceLinesCount(apiClient_t *apiClient, char *tenantId, char *invoiceId);


// Get payments for an invoice.
//
// Retrieves the list of payments related to the specified invoice.
//
payment_dto_i_read_only_list_envelope_t*
InvoicesAPI_getInvoicePayments(apiClient_t *apiClient, char *invoiceId);


// Get the count of payments for an invoice.
//
// Retrieves the total count of payments for the specified invoice.
//
int32_envelope_t*
InvoicesAPI_getInvoicePaymentsCount(apiClient_t *apiClient, char *invoiceId);


// Get an invoice reference by ID.
//
// Retrieves the reference details for the specified invoice reference ID.
//
invoice_reference_dto_envelope_t*
InvoicesAPI_getInvoiceReference(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceReferenceId);


// Get invoice references.
//
// Retrieves the references for the specified invoice.
//
invoice_reference_dto_i_read_only_list_envelope_t*
InvoicesAPI_getInvoiceReferences(apiClient_t *apiClient, char *tenantId, char *invoiceId);


// Get the count of invoice references.
//
// Retrieves the total count of references for the specified invoice.
//
int32_envelope_t*
InvoicesAPI_getInvoiceReferencesCount(apiClient_t *apiClient, char *tenantId, char *invoiceId);


// Get a list of invoices.
//
// Retrieves a list of invoices for the specified tenant.
//
invoice_dto_list_envelope_t*
InvoicesAPI_getInvoices(apiClient_t *apiClient, char *tenantId);


// Get the count of invoices.
//
// Retrieves the total count of invoices for the specified tenant.
//
int32_envelope_t*
InvoicesAPI_getInvoicesCount(apiClient_t *apiClient, char *tenantId);


// Preview the rendered email for an invoice.
//
// This action is only available for users with the 'send_email' permission.
//
void
InvoicesAPI_previewInvoiceEmail(apiClient_t *apiClient, char *invoiceId, char *tenantId, email_dispatch_request_t *email_dispatch_request);


// Send an invoice transactional email to recipients.
//
// This action is only available for users with the 'send_email' permission.
//
envelope_t*
InvoicesAPI_sendInvoiceEmail(apiClient_t *apiClient, char *tenantId, char *invoiceId, email_dispatch_request_t *email_dispatch_request);


// Update an invoice.
//
// Updates the specified invoice for the tenant.
//
empty_envelope_t*
InvoicesAPI_updateInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId, invoice_update_dto_t *invoice_update_dto);


// Update an invoice adjustment.
//
// Updates the specified adjustment for the invoice.
//
empty_envelope_t*
InvoicesAPI_updateInvoiceAdjustment(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceAdjustmentId, invoice_adjustment_update_dto_t *invoice_adjustment_update_dto);


// Update an invoice line.
//
// Updates the specified invoice line.
//
invoice_line_dto_envelope_t*
InvoicesAPI_updateInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId, invoice_line_update_dto_t *invoice_line_update_dto);


// Update a tax for an invoice line.
//
// Updates the specified tax entry for the invoice line.
//
empty_envelope_t*
InvoicesAPI_updateInvoiceLineTax(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId, char *invoiceLineTaxId, invoice_line_applied_tax_update_dto_t *invoice_line_applied_tax_update_dto);


// Update an invoice reference.
//
// Updates the specified reference for the invoice.
//
empty_envelope_t*
InvoicesAPI_updateInvoiceReference(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceReferenceId, invoice_reference_update_dto_t *invoice_reference_update_dto);


