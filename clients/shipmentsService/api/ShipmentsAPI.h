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
#include "../model/patch_operation.h"
#include "../model/shipment_create_dto.h"
#include "../model/shipment_dto_collection_query_parameters.h"
#include "../model/shipment_dto_envelope.h"
#include "../model/shipment_dto_list_envelope.h"
#include "../model/shipment_update_dto.h"


// Create a shipment
//
// Creates a new shipment for the specified tenant.
//
void
ShipmentsAPI_createShipmentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipment_create_dto_t *shipment_create_dto);


// Delete a shipment
//
// Deletes a shipment.
//
void
ShipmentsAPI_deleteShipmentAsync(apiClient_t *apiClient, char *tenantId, char *shipmentId, char *api_version, char *x_api_version);


// Get shipment by ID
//
// Retrieves a specific shipment by its ID.
//
shipment_dto_envelope_t*
ShipmentsAPI_getShipmentByIdAsync(apiClient_t *apiClient, char *tenantId, char *shipmentId, char *api_version, char *x_api_version);


// Get all shipments
//
// Retrieves all shipments for the specified tenant.
//
shipment_dto_list_envelope_t*
ShipmentsAPI_getShipmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipment_dto_collection_query_parameters_t *shipment_dto_collection_query_parameters);


// Get shipments count
//
// Returns the count of shipments for the specified tenant.
//
int32_envelope_t*
ShipmentsAPI_getShipmentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipment_dto_collection_query_parameters_t *shipment_dto_collection_query_parameters);


// Patch a shipment
//
// Partially updates an existing shipment using JSON Patch.
//
empty_envelope_t*
ShipmentsAPI_patchShipmentAsync(apiClient_t *apiClient, char *tenantId, char *shipmentId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a shipment
//
// Updates an existing shipment.
//
void
ShipmentsAPI_updateShipmentAsync(apiClient_t *apiClient, char *tenantId, char *shipmentId, char *api_version, char *x_api_version, shipment_update_dto_t *shipment_update_dto);


