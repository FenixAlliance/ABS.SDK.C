#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/bill_of_lading_create_dto.h"
#include "../model/bill_of_lading_dto_envelope.h"
#include "../model/bill_of_lading_dto_list_envelope.h"
#include "../model/bill_of_lading_line_create_dto.h"
#include "../model/bill_of_lading_line_dto_envelope.h"
#include "../model/bill_of_lading_line_dto_list_envelope.h"
#include "../model/bill_of_lading_line_update_dto.h"
#include "../model/bill_of_lading_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create a bill of lading
//
// Creates a new bill of lading for the specified tenant.
//
empty_envelope_t*
BillsOfLadingAPI_createBillOfLadingAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, bill_of_lading_create_dto_t *bill_of_lading_create_dto);


// Create a bill of lading line
//
// Creates a new line for a bill of lading.
//
empty_envelope_t*
BillsOfLadingAPI_createBillOfLadingLineAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *api_version, char *x_api_version, bill_of_lading_line_create_dto_t *bill_of_lading_line_create_dto);


// Delete a bill of lading
//
// Deletes a bill of lading.
//
empty_envelope_t*
BillsOfLadingAPI_deleteBillOfLadingAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *api_version, char *x_api_version);


// Delete a bill of lading line
//
// Deletes a line from a bill of lading.
//
empty_envelope_t*
BillsOfLadingAPI_deleteBillOfLadingLineAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *lineId, char *api_version, char *x_api_version);


// Get bill of lading by ID
//
// Retrieves a specific bill of lading by its identifier.
//
bill_of_lading_dto_envelope_t*
BillsOfLadingAPI_getBillOfLadingByIdAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *api_version, char *x_api_version);


// Get bill of lading line by ID
//
// Retrieves a specific line from a bill of lading.
//
bill_of_lading_line_dto_envelope_t*
BillsOfLadingAPI_getBillOfLadingLineByIdAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *lineId, char *api_version, char *x_api_version);


// Get bill of lading lines
//
// Retrieves all lines for a specific bill of lading.
//
bill_of_lading_line_dto_list_envelope_t*
BillsOfLadingAPI_getBillOfLadingLinesAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *api_version, char *x_api_version);


// Get bill of lading lines count
//
// Returns the count of lines for a specific bill of lading.
//
int32_envelope_t*
BillsOfLadingAPI_getBillOfLadingLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *api_version, char *x_api_version);


// Get all bills of lading
//
// Retrieves all bills of lading for the specified tenant.
//
bill_of_lading_dto_list_envelope_t*
BillsOfLadingAPI_getBillsOfLadingAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get bills of lading count
//
// Returns the count of bills of lading for the specified tenant.
//
int32_envelope_t*
BillsOfLadingAPI_getBillsOfLadingCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a bill of lading
//
// Updates an existing bill of lading.
//
empty_envelope_t*
BillsOfLadingAPI_updateBillOfLadingAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *api_version, char *x_api_version, bill_of_lading_update_dto_t *bill_of_lading_update_dto);


// Update a bill of lading line
//
// Updates an existing line on a bill of lading.
//
empty_envelope_t*
BillsOfLadingAPI_updateBillOfLadingLineAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *lineId, char *api_version, char *x_api_version, bill_of_lading_line_update_dto_t *bill_of_lading_line_update_dto);


