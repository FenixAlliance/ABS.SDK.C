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
#include "../model/vessel_create_dto.h"
#include "../model/vessel_dto_collection_query_parameters.h"
#include "../model/vessel_dto_envelope.h"
#include "../model/vessel_dto_list_envelope.h"
#include "../model/vessel_update_dto.h"


// Create a vessel
//
// Creates a new vessel for the specified tenant.
//
empty_envelope_t*
VesselsAPI_createVesselAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, vessel_create_dto_t *vessel_create_dto);


// Delete a vessel
//
// Deletes a vessel.
//
empty_envelope_t*
VesselsAPI_deleteVesselAsync(apiClient_t *apiClient, char *tenantId, char *vesselId, char *api_version, char *x_api_version);


// Get vessel by ID
//
// Retrieves a specific vessel by its identifier.
//
vessel_dto_envelope_t*
VesselsAPI_getVesselByIdAsync(apiClient_t *apiClient, char *tenantId, char *vesselId, char *api_version, char *x_api_version);


// Get all vessels
//
// Retrieves all vessels for the specified tenant.
//
vessel_dto_list_envelope_t*
VesselsAPI_getVesselsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, vessel_dto_collection_query_parameters_t *vessel_dto_collection_query_parameters);


// Get vessels count
//
// Returns the count of vessels for the specified tenant.
//
int32_envelope_t*
VesselsAPI_getVesselsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, vessel_dto_collection_query_parameters_t *vessel_dto_collection_query_parameters);


// Patch a vessel
//
// Partially updates an existing vessel using JSON Patch.
//
empty_envelope_t*
VesselsAPI_patchVesselAsync(apiClient_t *apiClient, char *tenantId, char *vesselId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a vessel
//
// Updates an existing vessel.
//
empty_envelope_t*
VesselsAPI_updateVesselAsync(apiClient_t *apiClient, char *tenantId, char *vesselId, char *api_version, char *x_api_version, vessel_update_dto_t *vessel_update_dto);


