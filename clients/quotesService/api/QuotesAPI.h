#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/boolean_envelope.h"
#include "../model/email_dispatch_request.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/extended_quote_dto_list_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/quote_create_dto.h"
#include "../model/quote_dto_envelope.h"
#include "../model/quote_dto_list_envelope.h"
#include "../model/quote_line_create_dto.h"
#include "../model/quote_line_dto_envelope.h"
#include "../model/quote_line_dto_list_envelope.h"
#include "../model/quote_line_update_dto.h"
#include "../model/quote_line_upsert_dto.h"
#include "../model/quote_update_dto.h"


// Calculate a quote.
//
// Performs calculation logic for the specified quote.
//
empty_envelope_t*
QuotesAPI_calculateQuote(apiClient_t *apiClient, char *tenantId, char *quoteId);


// Calculate a quote line.
//
// Performs calculation logic for the specified quote line.
//
empty_envelope_t*
QuotesAPI_calculateQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId);


// Close a quote.
//
// Closes the specified quote for the tenant.
//
empty_envelope_t*
QuotesAPI_closeQuote(apiClient_t *apiClient, char *tenantId, char *quoteId);


// Create an order from a quote.
//
// Creates an order based on the specified quote for the tenant.
//
empty_envelope_t*
QuotesAPI_createOrderFromQuote(apiClient_t *apiClient, char *tenantId, char *quoteId);


// Create a new quote.
//
// Creates a new quote for the specified tenant.
//
empty_envelope_t*
QuotesAPI_createQuote(apiClient_t *apiClient, char *tenantId, quote_create_dto_t *quote_create_dto);


// Create a new quote line.
//
// Creates a new quote line for the specified quote and tenant.
//
empty_envelope_t*
QuotesAPI_createQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, quote_line_create_dto_t *quote_line_create_dto);


// Delete a quote.
//
// Deletes the specified quote for the tenant.
//
empty_envelope_t*
QuotesAPI_deleteQuote(apiClient_t *apiClient, char *quoteId, char *tenantId);


// Delete a quote line.
//
// Deletes the specified quote line for the quote and tenant.
//
empty_envelope_t*
QuotesAPI_deleteQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId);


// Get a list of extended quotes.
//
// Retrieves a list of extended quotes for the specified tenant, supporting OData query options.
//
extended_quote_dto_list_envelope_t*
QuotesAPI_getExtendedQuotes(apiClient_t *apiClient, char *tenantId);


// Get a quote by ID.
//
// Retrieves a single quote by its unique identifier for the specified tenant.
//
quote_dto_envelope_t*
QuotesAPI_getQuote(apiClient_t *apiClient, char *tenantId, char *quoteId);


// Get a quote line by ID.
//
// Retrieves a single quote line by its unique identifier for the specified quote and tenant.
//
quote_line_dto_envelope_t*
QuotesAPI_getQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId);


// Get quote lines for a quote.
//
// Retrieves all quote lines for the specified quote and tenant.
//
quote_line_dto_list_envelope_t*
QuotesAPI_getQuoteLines(apiClient_t *apiClient, char *tenantId, char *quoteId, char *itemId);


// Get the count of quote lines.
//
// Retrieves the total count of quote lines for the specified quote and tenant.
//
int32_envelope_t*
QuotesAPI_getQuoteLinesCount(apiClient_t *apiClient, char *tenantId, char *quoteId);


// Get a list of quotes.
//
// Retrieves a list of quotes for the specified tenant, supporting OData query options.
//
quote_dto_list_envelope_t*
QuotesAPI_getQuotes(apiClient_t *apiClient, char *tenantId);


// Get the count of quotes.
//
// Retrieves the total count of quotes for the specified tenant, supporting OData query options.
//
int32_envelope_t*
QuotesAPI_getQuotesCount(apiClient_t *apiClient, char *tenantId);


// Preview the rendered email for an invoice.
//
// This action is only available for users with the 'send_email' permission.
//
void
QuotesAPI_previewQuoteEmailTemplate(apiClient_t *apiClient, char *quoteId, char *tenantId, email_dispatch_request_t *email_dispatch_request);


// Check if a quote line exists.
//
// Checks if a quote line exists for the specified quote and tenant, by quote line ID or item ID.
//
boolean_envelope_t*
QuotesAPI_quoteLineExists(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId, char *itemId);


// Reopen a closed quote.
//
// Reopens a previously closed quote for the tenant.
//
empty_envelope_t*
QuotesAPI_reopenQuote(apiClient_t *apiClient, char *tenantId, char *quoteId);


// Send a quote transactional email to recipients.
//
// This action is only available for users with the 'send_email' permission.
//
empty_envelope_t*
QuotesAPI_sendQuoteEmail(apiClient_t *apiClient, char *tenantId, char *quoteId, email_dispatch_request_t *email_dispatch_request);


// Update an existing quote.
//
// Updates an existing quote for the specified tenant and quote ID.
//
empty_envelope_t*
QuotesAPI_updateQuote(apiClient_t *apiClient, char *tenantId, char *quoteId, quote_update_dto_t *quote_update_dto);


// Update a quote line.
//
// Updates an existing quote line for the specified quote and tenant.
//
empty_envelope_t*
QuotesAPI_updateQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId, quote_line_update_dto_t *quote_line_update_dto);


// Upsert a quote line.
//
// Creates or updates a quote line for the specified quote and tenant.
//
empty_envelope_t*
QuotesAPI_upsertQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId, quote_line_upsert_dto_t *quote_line_upsert_dto);


