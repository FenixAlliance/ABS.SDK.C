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
#include "../model/workstation_create_dto.h"
#include "../model/workstation_dto.h"
#include "../model/workstation_dto_list_envelope.h"
#include "../model/workstation_update_dto.h"


// Create a new workstation
//
// Creates a new workstation for the specified tenant.
//
void
WorkstationsAPI_createWorkstationAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, workstation_create_dto_t *workstation_create_dto);


// Delete a workstation
//
// Deletes a workstation for the specified tenant.
//
void
WorkstationsAPI_deleteWorkstationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get workstation by ID
//
// Retrieves a specific workstation by its identifier.
//
workstation_dto_t*
WorkstationsAPI_getWorkstationByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all workstations
//
// Retrieves all workstations for the specified tenant.
//
workstation_dto_list_envelope_t*
WorkstationsAPI_getWorkstationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get workstations count
//
// Returns the count of workstations for the specified tenant.
//
int32_envelope_t*
WorkstationsAPI_getWorkstationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a workstation
//
// Patch a workstation
//
empty_envelope_t*
WorkstationsAPI_patchWorkstationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);


// Update a workstation
//
// Updates an existing workstation for the specified tenant.
//
void
WorkstationsAPI_updateWorkstationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, workstation_update_dto_t *workstation_update_dto);


