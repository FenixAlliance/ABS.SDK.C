#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/receipt_create_dto.h"
#include "../model/receipt_dto_envelope.h"
#include "../model/receipt_dto_i_read_only_list_envelope.h"
#include "../model/receipt_update_dto.h"


// Creates a new receipt
//
// Adds a new receipt record under the specified tenant.
//
empty_envelope_t*
ReceiptsAPI_createReceiptAsync(apiClient_t *apiClient, char *tenantId, receipt_create_dto_t *receipt_create_dto);


// Deletes a receipt
//
// Removes an existing receipt from the tenant’s records.
//
empty_envelope_t*
ReceiptsAPI_deleteReceiptAsync(apiClient_t *apiClient, char *tenantId, char *receiptId);


// Gets details of a receipt
//
// Retrieves a specific receipt by its ID for the given tenant.
//
receipt_dto_envelope_t*
ReceiptsAPI_getReceiptDetailsAsync(apiClient_t *apiClient, char *tenantId, char *receiptId);


// Retrieves tenant receipts
//
// Fetches all receipts for a given tenant with OData support.
//
receipt_dto_i_read_only_list_envelope_t*
ReceiptsAPI_getReceiptsAsync(apiClient_t *apiClient, char *tenantId);


// Gets count of tenant receipts
//
// Returns total number of receipts for the tenant with OData filter support.
//
int32_envelope_t*
ReceiptsAPI_getReceiptsCountAsync(apiClient_t *apiClient, char *tenantId);


// Updates a receipt
//
// Modifies the data of an existing receipt for the given tenant.
//
empty_envelope_t*
ReceiptsAPI_updateReceiptAsync(apiClient_t *apiClient, char *tenantId, char *receiptId, receipt_update_dto_t *receipt_update_dto);


