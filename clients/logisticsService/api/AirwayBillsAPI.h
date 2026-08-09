#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/airway_bill_create_dto.h"
#include "../model/airway_bill_dto_collection_query_parameters.h"
#include "../model/airway_bill_dto_envelope.h"
#include "../model/airway_bill_dto_list_envelope.h"
#include "../model/airway_bill_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/patch_operation.h"
#include "../model/waybill_line_create_dto.h"
#include "../model/waybill_line_dto_collection_query_parameters.h"
#include "../model/waybill_line_dto_list_envelope.h"
#include "../model/waybill_line_update_dto.h"


// Add a line to airway bill
//
// Adds a new line to an airway bill.
//
empty_envelope_t*
AirwayBillsAPI_addAirwayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, waybill_line_create_dto_t *waybill_line_create_dto);


// Cancel an airway bill
//
// Cancels an airway bill.
//
empty_envelope_t*
AirwayBillsAPI_cancelAirwayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Create an airway bill
//
// Creates a new airway bill for the specified tenant.
//
empty_envelope_t*
AirwayBillsAPI_createAirwayBillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, airway_bill_create_dto_t *airway_bill_create_dto);


// Delete an airway bill
//
// Deletes an airway bill.
//
empty_envelope_t*
AirwayBillsAPI_deleteAirwayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Get airway bill by ID
//
// Retrieves a specific airway bill by its identifier.
//
airway_bill_dto_envelope_t*
AirwayBillsAPI_getAirwayBillByIdAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Get airway bill lines
//
// Retrieves all lines for a specific airway bill.
//
waybill_line_dto_list_envelope_t*
AirwayBillsAPI_getAirwayBillLinesAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters);


// Get airway bill lines count
//
// Returns the count of lines for a specific airway bill.
//
int32_envelope_t*
AirwayBillsAPI_getAirwayBillLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters);


// Get all airway bills
//
// Retrieves all airway bills for the specified tenant.
//
airway_bill_dto_list_envelope_t*
AirwayBillsAPI_getAirwayBillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, airway_bill_dto_collection_query_parameters_t *airway_bill_dto_collection_query_parameters);


// Get airway bills count
//
// Returns the count of airway bills for the specified tenant.
//
int32_envelope_t*
AirwayBillsAPI_getAirwayBillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, airway_bill_dto_collection_query_parameters_t *airway_bill_dto_collection_query_parameters);


// Issue an airway bill
//
// Issues an airway bill.
//
empty_envelope_t*
AirwayBillsAPI_issueAirwayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Mark airway bill arrived
//
// Marks an airway bill as arrived.
//
empty_envelope_t*
AirwayBillsAPI_markAirwayBillArrivedAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Mark airway bill delivered
//
// Marks an airway bill as delivered.
//
empty_envelope_t*
AirwayBillsAPI_markAirwayBillDeliveredAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Mark airway bill in transit
//
// Marks an airway bill as in transit.
//
empty_envelope_t*
AirwayBillsAPI_markAirwayBillInTransitAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);


// Patch an airway bill
//
// Partially updates an existing airway bill using a JSON Patch document.
//
empty_envelope_t*
AirwayBillsAPI_patchAirwayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, list_t *patch_operation);


// Patch an airway bill line
//
// Partially updates a line on an airway bill using a JSON Patch document.
//
empty_envelope_t*
AirwayBillsAPI_patchAirwayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *lineId, char *api_version, char *x_api_version, list_t *patch_operation);


// Remove an airway bill line
//
// Removes a line from an airway bill.
//
empty_envelope_t*
AirwayBillsAPI_removeAirwayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *lineId, char *api_version, char *x_api_version);


// Update an airway bill
//
// Updates an existing airway bill.
//
empty_envelope_t*
AirwayBillsAPI_updateAirwayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, airway_bill_update_dto_t *airway_bill_update_dto);


// Update an airway bill line
//
// Updates an existing line on an airway bill.
//
empty_envelope_t*
AirwayBillsAPI_updateAirwayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *lineId, char *api_version, char *x_api_version, waybill_line_update_dto_t *waybill_line_update_dto);


