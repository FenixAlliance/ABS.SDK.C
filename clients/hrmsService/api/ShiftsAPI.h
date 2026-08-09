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
#include "../model/shift_create_dto.h"
#include "../model/shift_dto_collection_query_parameters.h"
#include "../model/shift_dto_envelope.h"
#include "../model/shift_dto_list_envelope.h"
#include "../model/shift_update_dto.h"


// Create a shift
//
// Creates a new shift for the specified tenant.
//
empty_envelope_t*
ShiftsAPI_createShiftAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shift_create_dto_t *shift_create_dto);


// Delete a shift
//
// Deletes a shift for the specified tenant.
//
empty_envelope_t*
ShiftsAPI_deleteShiftAsync(apiClient_t *apiClient, char *tenantId, char *shiftId, char *api_version, char *x_api_version);


// Get shift by ID
//
// Retrieves a specific shift by its identifier.
//
shift_dto_envelope_t*
ShiftsAPI_getShiftByIdAsync(apiClient_t *apiClient, char *tenantId, char *shiftId, char *api_version, char *x_api_version);


// Get shifts
//
// Retrieves shifts for the specified tenant.
//
shift_dto_list_envelope_t*
ShiftsAPI_getShiftsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shift_dto_collection_query_parameters_t *shift_dto_collection_query_parameters);


// Count shifts
//
// Counts shifts for the specified tenant.
//
int32_envelope_t*
ShiftsAPI_getShiftsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shift_dto_collection_query_parameters_t *shift_dto_collection_query_parameters);


// Patch a shift
//
// Partially updates an existing shift for the specified tenant.
//
empty_envelope_t*
ShiftsAPI_patchShiftAsync(apiClient_t *apiClient, char *tenantId, char *shiftId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a shift
//
// Updates an existing shift for the specified tenant.
//
empty_envelope_t*
ShiftsAPI_updateShiftAsync(apiClient_t *apiClient, char *tenantId, char *shiftId, char *api_version, char *x_api_version, shift_update_dto_t *shift_update_dto);


