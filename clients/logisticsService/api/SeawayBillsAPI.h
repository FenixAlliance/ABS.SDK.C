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
#include "../model/seaway_bill_create_dto.h"
#include "../model/seaway_bill_dto_envelope.h"
#include "../model/seaway_bill_dto_list_envelope.h"
#include "../model/seaway_bill_update_dto.h"
#include "../model/waybill_line_create_dto.h"
#include "../model/waybill_line_dto_list_envelope.h"
#include "../model/waybill_line_update_dto.h"


// Add a line to seaway bill
//
// Adds a new line to a seaway bill.
//
empty_envelope_t*
SeawayBillsAPI_addSeawayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, waybill_line_create_dto_t *waybill_line_create_dto);


// Cancel a seaway bill
//
// Cancels a seaway bill.
//
empty_envelope_t*
SeawayBillsAPI_cancelSeawayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Create a seaway bill
//
// Creates a new seaway bill for the specified tenant.
//
empty_envelope_t*
SeawayBillsAPI_createSeawayBillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, seaway_bill_create_dto_t *seaway_bill_create_dto);


// Delete a seaway bill
//
// Deletes a seaway bill.
//
empty_envelope_t*
SeawayBillsAPI_deleteSeawayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Get seaway bill by ID
//
// Retrieves a specific seaway bill by its identifier.
//
seaway_bill_dto_envelope_t*
SeawayBillsAPI_getSeawayBillByIdAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Get seaway bill lines
//
// Retrieves all lines for a specific seaway bill.
//
waybill_line_dto_list_envelope_t*
SeawayBillsAPI_getSeawayBillLinesAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Get seaway bill lines count
//
// Returns the count of lines for a specific seaway bill.
//
int32_envelope_t*
SeawayBillsAPI_getSeawayBillLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Get all seaway bills
//
// Retrieves all seaway bills for the specified tenant.
//
seaway_bill_dto_list_envelope_t*
SeawayBillsAPI_getSeawayBillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get seaway bills count
//
// Returns the count of seaway bills for the specified tenant.
//
int32_envelope_t*
SeawayBillsAPI_getSeawayBillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Issue a seaway bill
//
// Issues a seaway bill.
//
empty_envelope_t*
SeawayBillsAPI_issueSeawayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Mark seaway bill arrived
//
// Marks a seaway bill as arrived.
//
empty_envelope_t*
SeawayBillsAPI_markSeawayBillArrivedAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Mark seaway bill in transit
//
// Marks a seaway bill as in transit.
//
empty_envelope_t*
SeawayBillsAPI_markSeawayBillInTransitAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Release a seaway bill
//
// Releases a seaway bill.
//
empty_envelope_t*
SeawayBillsAPI_releaseSeawayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Remove a seaway bill line
//
// Removes a line from a seaway bill.
//
empty_envelope_t*
SeawayBillsAPI_removeSeawayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *lineId, char *api_version, char *x_api_version);


// Update a seaway bill
//
// Updates an existing seaway bill.
//
empty_envelope_t*
SeawayBillsAPI_updateSeawayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, seaway_bill_update_dto_t *seaway_bill_update_dto);


// Update a seaway bill line
//
// Updates an existing line on a seaway bill.
//
empty_envelope_t*
SeawayBillsAPI_updateSeawayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *lineId, char *api_version, char *x_api_version, waybill_line_update_dto_t *waybill_line_update_dto);


