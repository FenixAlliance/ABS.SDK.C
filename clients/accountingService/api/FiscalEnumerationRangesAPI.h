#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/invoice_enumeration_range_create_dto.h"
#include "../model/invoice_enumeration_range_dto_envelope.h"
#include "../model/invoice_enumeration_range_dto_list_envelope.h"
#include "../model/invoice_enumeration_range_update_dto.h"


// Create an invoice enumeration range
//
// Creates a new invoice enumeration range for a fiscal authority.
//
empty_envelope_t*
FiscalEnumerationRangesAPI_createInvoiceEnumerationRange(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, invoice_enumeration_range_create_dto_t *invoice_enumeration_range_create_dto);


// Delete an invoice enumeration range
//
// Deletes an invoice enumeration range identified by its unique identifier.
//
empty_envelope_t*
FiscalEnumerationRangesAPI_deleteInvoiceEnumerationRange(apiClient_t *apiClient, tenantId, char *enumerationRangeId, char *api_version, char *x_api_version);


// Get invoice enumeration range by ID
//
// Retrieves a specific invoice enumeration range by its unique identifier.
//
invoice_enumeration_range_dto_envelope_t*
FiscalEnumerationRangesAPI_getInvoiceEnumerationRange(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *enumerationRangeId, char *api_version, char *x_api_version);


// Get invoice enumeration ranges for an authority
//
// Retrieves all invoice enumeration ranges for the specified fiscal authority.
//
invoice_enumeration_range_dto_list_envelope_t*
FiscalEnumerationRangesAPI_getInvoiceEnumerationRanges(apiClient_t *apiClient, char *fiscalAuthorityId, char *authorityId, char *api_version, char *x_api_version);


// Get invoice enumeration ranges count
//
// Returns the total count of invoice enumeration ranges for the specified fiscal authority.
//
int32_envelope_t*
FiscalEnumerationRangesAPI_getInvoiceEnumerationRangesCount(apiClient_t *apiClient, char *fiscalAuthorityId, char *api_version, char *x_api_version);


// Update an invoice enumeration range
//
// Updates an existing invoice enumeration range identified by its unique identifier.
//
empty_envelope_t*
FiscalEnumerationRangesAPI_updateInvoiceEnumerationRange(apiClient_t *apiClient, tenantId, char *enumerationRangeId, char *api_version, char *x_api_version, invoice_enumeration_range_update_dto_t *invoice_enumeration_range_update_dto);


