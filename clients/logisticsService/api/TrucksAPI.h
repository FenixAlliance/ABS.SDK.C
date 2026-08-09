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
#include "../model/truck_create_dto.h"
#include "../model/truck_dto_collection_query_parameters.h"
#include "../model/truck_dto_envelope.h"
#include "../model/truck_dto_list_envelope.h"
#include "../model/truck_trip_create_dto.h"
#include "../model/truck_trip_dto_collection_query_parameters.h"
#include "../model/truck_trip_dto_list_envelope.h"
#include "../model/truck_trip_update_dto.h"
#include "../model/truck_update_dto.h"


// Arrive a trip
//
// Marks a truck trip as arrived.
//
empty_envelope_t*
TrucksAPI_arriveTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version);


// Cancel a trip
//
// Cancels a truck trip.
//
empty_envelope_t*
TrucksAPI_cancelTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version);


// Create a truck
//
// Creates a new truck for the specified tenant.
//
empty_envelope_t*
TrucksAPI_createTruckAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, truck_create_dto_t *truck_create_dto);


// Create a truck trip
//
// Creates a new trip for a truck.
//
empty_envelope_t*
TrucksAPI_createTruckTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version, truck_trip_create_dto_t *truck_trip_create_dto);


// Delete a truck
//
// Deletes a truck.
//
empty_envelope_t*
TrucksAPI_deleteTruckAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version);


// Delete a truck trip
//
// Deletes a truck trip.
//
empty_envelope_t*
TrucksAPI_deleteTruckTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version);


// Deliver a trip
//
// Marks a truck trip as delivered.
//
empty_envelope_t*
TrucksAPI_deliverTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version);


// Depart a trip
//
// Marks a truck trip as departed.
//
empty_envelope_t*
TrucksAPI_departTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version);


// Dispatch a trip
//
// Dispatches a truck trip.
//
empty_envelope_t*
TrucksAPI_dispatchTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version);


// Get truck by ID
//
// Retrieves a specific truck by its identifier.
//
truck_dto_envelope_t*
TrucksAPI_getTruckByIdAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version);


// Get truck trips
//
// Retrieves all trips for a specific truck.
//
truck_trip_dto_list_envelope_t*
TrucksAPI_getTruckTripsAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version, truck_trip_dto_collection_query_parameters_t *truck_trip_dto_collection_query_parameters);


// Get truck trips count
//
// Returns the count of trips for a specific truck.
//
int32_envelope_t*
TrucksAPI_getTruckTripsCountAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version, truck_trip_dto_collection_query_parameters_t *truck_trip_dto_collection_query_parameters);


// Get all trucks
//
// Retrieves all trucks for the specified tenant.
//
truck_dto_list_envelope_t*
TrucksAPI_getTrucksAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, truck_dto_collection_query_parameters_t *truck_dto_collection_query_parameters);


// Get trucks count
//
// Returns the count of trucks for the specified tenant.
//
int32_envelope_t*
TrucksAPI_getTrucksCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, truck_dto_collection_query_parameters_t *truck_dto_collection_query_parameters);


// Patch a truck
//
// Partially updates an existing truck using JSON Patch.
//
empty_envelope_t*
TrucksAPI_patchTruckAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version, list_t *patch_operation);


// Patch a truck trip
//
// Partially updates an existing truck trip using JSON Patch.
//
empty_envelope_t*
TrucksAPI_patchTruckTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a truck
//
// Updates an existing truck.
//
empty_envelope_t*
TrucksAPI_updateTruckAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version, truck_update_dto_t *truck_update_dto);


// Update a truck trip
//
// Updates an existing truck trip.
//
empty_envelope_t*
TrucksAPI_updateTruckTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version, truck_trip_update_dto_t *truck_trip_update_dto);


