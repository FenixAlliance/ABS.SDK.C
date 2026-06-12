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
#include "../model/road_waybill_create_dto.h"
#include "../model/road_waybill_dto_envelope.h"
#include "../model/road_waybill_dto_list_envelope.h"
#include "../model/road_waybill_update_dto.h"
#include "../model/waybill_line_create_dto.h"
#include "../model/waybill_line_dto_list_envelope.h"
#include "../model/waybill_line_update_dto.h"


// Add a line to road waybill
//
// Adds a new line to a road waybill.
//
empty_envelope_t*
RoadWaybillsAPI_addRoadWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, waybill_line_create_dto_t *waybill_line_create_dto);


// Cancel a road waybill
//
// Cancels a road waybill.
//
empty_envelope_t*
RoadWaybillsAPI_cancelRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Create a road waybill
//
// Creates a new road waybill for the specified tenant.
//
empty_envelope_t*
RoadWaybillsAPI_createRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, road_waybill_create_dto_t *road_waybill_create_dto);


// Delete a road waybill
//
// Deletes a road waybill.
//
empty_envelope_t*
RoadWaybillsAPI_deleteRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Dispute a road waybill
//
// Disputes a road waybill.
//
empty_envelope_t*
RoadWaybillsAPI_disputeRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Get road waybill by ID
//
// Retrieves a specific road waybill by its identifier.
//
road_waybill_dto_envelope_t*
RoadWaybillsAPI_getRoadWaybillByIdAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Get road waybill lines
//
// Retrieves all lines for a specific road waybill.
//
waybill_line_dto_list_envelope_t*
RoadWaybillsAPI_getRoadWaybillLinesAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Get road waybill lines count
//
// Returns the count of lines for a specific road waybill.
//
int32_envelope_t*
RoadWaybillsAPI_getRoadWaybillLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Get all road waybills
//
// Retrieves all road waybills for the specified tenant.
//
road_waybill_dto_list_envelope_t*
RoadWaybillsAPI_getRoadWaybillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get road waybills count
//
// Returns the count of road waybills for the specified tenant.
//
int32_envelope_t*
RoadWaybillsAPI_getRoadWaybillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Issue a road waybill
//
// Issues a road waybill.
//
empty_envelope_t*
RoadWaybillsAPI_issueRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Mark road waybill delivered
//
// Marks a road waybill as delivered.
//
empty_envelope_t*
RoadWaybillsAPI_markRoadWaybillDeliveredAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Mark road waybill in transit
//
// Marks a road waybill as in transit.
//
empty_envelope_t*
RoadWaybillsAPI_markRoadWaybillInTransitAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);


// Patch a road waybill
//
// Partially updates an existing road waybill using a JSON Patch document.
//
empty_envelope_t*
RoadWaybillsAPI_patchRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, list_t *operation);


// Patch a road waybill line
//
// Partially updates a line on a road waybill using a JSON Patch document.
//
empty_envelope_t*
RoadWaybillsAPI_patchRoadWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version, list_t *operation);


// Remove a road waybill line
//
// Removes a line from a road waybill.
//
empty_envelope_t*
RoadWaybillsAPI_removeRoadWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version);


// Update a road waybill
//
// Updates an existing road waybill.
//
empty_envelope_t*
RoadWaybillsAPI_updateRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, road_waybill_update_dto_t *road_waybill_update_dto);


// Update a road waybill line
//
// Updates an existing line on a road waybill.
//
empty_envelope_t*
RoadWaybillsAPI_updateRoadWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version, waybill_line_update_dto_t *waybill_line_update_dto);


