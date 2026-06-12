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
#include "../model/truck_driver_create_dto.h"
#include "../model/truck_driver_dto_envelope.h"
#include "../model/truck_driver_dto_list_envelope.h"
#include "../model/truck_driver_update_dto.h"


// Activate a truck driver
//
// Activates a truck driver.
//
empty_envelope_t*
TruckDriversAPI_activateTruckDriverAsync(apiClient_t *apiClient, char *tenantId, char *driverId, char *api_version, char *x_api_version);


// Create a truck driver
//
// Creates a new truck driver for the specified tenant.
//
empty_envelope_t*
TruckDriversAPI_createTruckDriverAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, truck_driver_create_dto_t *truck_driver_create_dto);


// Deactivate a truck driver
//
// Deactivates a truck driver.
//
empty_envelope_t*
TruckDriversAPI_deactivateTruckDriverAsync(apiClient_t *apiClient, char *tenantId, char *driverId, char *api_version, char *x_api_version);


// Delete a truck driver
//
// Deletes a truck driver.
//
empty_envelope_t*
TruckDriversAPI_deleteTruckDriverAsync(apiClient_t *apiClient, char *tenantId, char *driverId, char *api_version, char *x_api_version);


// Get truck driver by ID
//
// Retrieves a specific truck driver by its identifier.
//
truck_driver_dto_envelope_t*
TruckDriversAPI_getTruckDriverByIdAsync(apiClient_t *apiClient, char *tenantId, char *driverId, char *api_version, char *x_api_version);


// Get all truck drivers
//
// Retrieves all truck drivers for the specified tenant.
//
truck_driver_dto_list_envelope_t*
TruckDriversAPI_getTruckDriversAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get truck drivers count
//
// Returns the count of truck drivers for the specified tenant.
//
int32_envelope_t*
TruckDriversAPI_getTruckDriversCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a truck driver
//
// Partially updates an existing truck driver using JSON Patch.
//
empty_envelope_t*
TruckDriversAPI_patchTruckDriverAsync(apiClient_t *apiClient, char *tenantId, char *driverId, char *api_version, char *x_api_version, list_t *operation);


// Update a truck driver
//
// Updates an existing truck driver.
//
empty_envelope_t*
TruckDriversAPI_updateTruckDriverAsync(apiClient_t *apiClient, char *tenantId, char *driverId, char *api_version, char *x_api_version, truck_driver_update_dto_t *truck_driver_update_dto);


