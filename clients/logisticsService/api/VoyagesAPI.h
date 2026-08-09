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
#include "../model/voyage_create_dto.h"
#include "../model/voyage_dto_collection_query_parameters.h"
#include "../model/voyage_dto_envelope.h"
#include "../model/voyage_dto_list_envelope.h"
#include "../model/voyage_port_call_create_dto.h"
#include "../model/voyage_port_call_dto_collection_query_parameters.h"
#include "../model/voyage_port_call_dto_list_envelope.h"
#include "../model/voyage_port_call_update_dto.h"
#include "../model/voyage_update_dto.h"


// Cancel a voyage
//
// Cancels a voyage.
//
empty_envelope_t*
VoyagesAPI_cancelVoyageAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version);


// Complete a voyage
//
// Marks a voyage as completed.
//
empty_envelope_t*
VoyagesAPI_completeVoyageAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version);


// Create a voyage
//
// Creates a new voyage for the specified tenant.
//
empty_envelope_t*
VoyagesAPI_createVoyageAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, voyage_create_dto_t *voyage_create_dto);


// Create a port call
//
// Creates a new port call for a voyage.
//
empty_envelope_t*
VoyagesAPI_createVoyagePortCallAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version, voyage_port_call_create_dto_t *voyage_port_call_create_dto);


// Delete a voyage
//
// Deletes a voyage.
//
empty_envelope_t*
VoyagesAPI_deleteVoyageAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version);


// Delete a port call
//
// Deletes a port call.
//
empty_envelope_t*
VoyagesAPI_deleteVoyagePortCallAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *portCallId, char *api_version, char *x_api_version);


// Get voyage by ID
//
// Retrieves a specific voyage by its identifier.
//
voyage_dto_envelope_t*
VoyagesAPI_getVoyageByIdAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version);


// Get voyage port calls
//
// Retrieves all port calls for a specific voyage.
//
voyage_port_call_dto_list_envelope_t*
VoyagesAPI_getVoyagePortCallsAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version, voyage_port_call_dto_collection_query_parameters_t *voyage_port_call_dto_collection_query_parameters);


// Get voyage port calls count
//
// Returns the count of port calls for a specific voyage.
//
int32_envelope_t*
VoyagesAPI_getVoyagePortCallsCountAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version, voyage_port_call_dto_collection_query_parameters_t *voyage_port_call_dto_collection_query_parameters);


// Get all voyages
//
// Retrieves all voyages for the specified tenant.
//
voyage_dto_list_envelope_t*
VoyagesAPI_getVoyagesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, voyage_dto_collection_query_parameters_t *voyage_dto_collection_query_parameters);


// Get voyages count
//
// Returns the count of voyages for the specified tenant.
//
int32_envelope_t*
VoyagesAPI_getVoyagesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, voyage_dto_collection_query_parameters_t *voyage_dto_collection_query_parameters);


// Patch a voyage
//
// Partially updates an existing voyage using JSON Patch.
//
empty_envelope_t*
VoyagesAPI_patchVoyageAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version, list_t *patch_operation);


// Patch a voyage port call
//
// Partially updates an existing voyage port call using JSON Patch.
//
empty_envelope_t*
VoyagesAPI_patchVoyagePortCallAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *portCallId, char *api_version, char *x_api_version, list_t *patch_operation);


// Start a voyage
//
// Starts a voyage.
//
empty_envelope_t*
VoyagesAPI_startVoyageAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version);


// Update a voyage
//
// Updates an existing voyage.
//
empty_envelope_t*
VoyagesAPI_updateVoyageAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version, voyage_update_dto_t *voyage_update_dto);


// Update a port call
//
// Updates an existing port call.
//
empty_envelope_t*
VoyagesAPI_updateVoyagePortCallAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *portCallId, char *api_version, char *x_api_version, voyage_port_call_update_dto_t *voyage_port_call_update_dto);


