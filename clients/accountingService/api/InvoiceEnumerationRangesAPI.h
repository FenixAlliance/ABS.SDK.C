#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/invoice_enumeration_range_create_dto.h"
#include "../model/invoice_enumeration_range_dto_envelope.h"
#include "../model/invoice_enumeration_range_dto_list_envelope.h"
#include "../model/invoice_enumeration_range_update_dto.h"


// Create a new invoice enumeration range
//
// Creates a new invoice enumeration range for the tenant.
//
empty_envelope_t*
InvoiceEnumerationRangesAPI_createInvoiceEnumerationRangeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, invoice_enumeration_range_create_dto_t *invoice_enumeration_range_create_dto);


// Delete an invoice enumeration range
//
// Deletes an invoice enumeration range by its identifier.
//
empty_envelope_t*
InvoiceEnumerationRangesAPI_deleteInvoiceEnumerationRangeAsync(apiClient_t *apiClient, char *tenantId, char *rangeId, char *api_version, char *x_api_version);


// Get invoice enumeration range by ID
//
// Retrieves the details of a specific invoice enumeration range.
//
invoice_enumeration_range_dto_envelope_t*
InvoiceEnumerationRangesAPI_getInvoiceEnumerationRangeDetailsAsync(apiClient_t *apiClient, char *tenantId, char *rangeId, char *api_version, char *x_api_version);


// Get all invoice enumeration ranges
//
// Retrieves all invoice enumeration ranges for the specified tenant.
//
invoice_enumeration_range_dto_list_envelope_t*
InvoiceEnumerationRangesAPI_getInvoiceEnumerationRangesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an invoice enumeration range
//
// Updates an existing invoice enumeration range with the provided data.
//
empty_envelope_t*
InvoiceEnumerationRangesAPI_updateInvoiceEnumerationRangeAsync(apiClient_t *apiClient, char *tenantId, char *rangeId, char *api_version, char *x_api_version, invoice_enumeration_range_update_dto_t *invoice_enumeration_range_update_dto);


