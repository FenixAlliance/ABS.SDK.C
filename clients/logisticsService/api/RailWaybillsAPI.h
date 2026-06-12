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
#include "../model/operation.h"
#include "../model/rail_waybill_create_dto.h"
#include "../model/rail_waybill_dto_envelope.h"
#include "../model/rail_waybill_dto_list_envelope.h"
#include "../model/rail_waybill_update_dto.h"
#include "../model/waybill_line_create_dto.h"
#include "../model/waybill_line_dto_list_envelope.h"
#include "../model/waybill_line_update_dto.h"


// Add a line to rail waybill
//
// Adds a new line to a rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_addRailWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, waybill_line_create_dto_t *waybill_line_create_dto);


// Cancel a rail waybill
//
// Cancels a rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_cancelRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Create a rail waybill
//
// Creates a new rail waybill for the specified tenant.
//
empty_envelope_t*
RailWaybillsAPI_createRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, rail_waybill_create_dto_t *rail_waybill_create_dto);


// Delete a rail waybill
//
// Deletes a rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_deleteRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Get rail waybill by ID
//
// Retrieves a specific rail waybill by its identifier.
//
rail_waybill_dto_envelope_t*
RailWaybillsAPI_getRailWaybillByIdAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Get rail waybill lines
//
// Retrieves all lines for a specific rail waybill.
//
waybill_line_dto_list_envelope_t*
RailWaybillsAPI_getRailWaybillLinesAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Get rail waybill lines count
//
// Returns the count of lines for a specific rail waybill.
//
int32_envelope_t*
RailWaybillsAPI_getRailWaybillLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Get all rail waybills
//
// Retrieves all rail waybills for the specified tenant.
//
rail_waybill_dto_list_envelope_t*
RailWaybillsAPI_getRailWaybillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get rail waybills count
//
// Returns the count of rail waybills for the specified tenant.
//
int32_envelope_t*
RailWaybillsAPI_getRailWaybillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Issue a rail waybill
//
// Issues a rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_issueRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Mark rail waybill delivered
//
// Marks a rail waybill as delivered.
//
empty_envelope_t*
RailWaybillsAPI_markRailWaybillDeliveredAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Mark rail waybill in transit
//
// Marks a rail waybill as in transit.
//
empty_envelope_t*
RailWaybillsAPI_markRailWaybillInTransitAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Patch a rail waybill
//
// Partially updates an existing rail waybill using a JSON Patch document.
//
empty_envelope_t*
RailWaybillsAPI_patchRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, list_t *operation);


// Patch a rail waybill line
//
// Partially updates a line on a rail waybill using a JSON Patch document.
//
empty_envelope_t*
RailWaybillsAPI_patchRailWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version, list_t *operation);


// Remove a rail waybill line
//
// Removes a line from a rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_removeRailWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version);


// Update a rail waybill
//
// Updates an existing rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_updateRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, rail_waybill_update_dto_t *rail_waybill_update_dto);


// Update a rail waybill line
//
// Updates an existing line on a rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_updateRailWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version, waybill_line_update_dto_t *waybill_line_update_dto);


