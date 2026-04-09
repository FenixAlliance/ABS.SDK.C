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
#include "../model/location_create_dto.h"
#include "../model/location_dto_envelope.h"
#include "../model/location_dto_i_read_only_list_envelope.h"
#include "../model/location_update_dto.h"


// Create Location
//
// Create a new location.
//
empty_envelope_t*
LocationsAPI_createLocationAsync(apiClient_t *apiClient, char *tenantId, location_create_dto_t *location_create_dto);


// Create Wallet Location
//
// Create a new location for a specific wallet.
//
empty_envelope_t*
LocationsAPI_createWalletLocationAsync(apiClient_t *apiClient, char *walletId, location_create_dto_t *location_create_dto);


// Delete Location
//
// Delete a specific location by ID.
//
empty_envelope_t*
LocationsAPI_deleteLocationAsync(apiClient_t *apiClient, char *tenantId, char *locationId);


// Delete Wallet Location
//
// Delete a specific location of a wallet.
//
empty_envelope_t*
LocationsAPI_deleteWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId);


// Get Location
//
// Get details of a specific location by ID.
//
location_dto_envelope_t*
LocationsAPI_getLocationAsync(apiClient_t *apiClient, char *tenantId, char *locationId);


// Get Locations
//
// Get all locations with OData query support.
//
location_dto_i_read_only_list_envelope_t*
LocationsAPI_getLocationsAsync(apiClient_t *apiClient, char *tenantId);


// Get Locations Count
//
// Get the count of locations with OData query support.
//
int32_envelope_t*
LocationsAPI_getLocationsCountAsync(apiClient_t *apiClient, char *tenantId);


// Get Wallet Location
//
// Get a specific location of a wallet by ID.
//
location_dto_envelope_t*
LocationsAPI_getWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId);


// Get Wallet Locations
//
// Get locations for a specific wallet by ID.
//
location_dto_i_read_only_list_envelope_t*
LocationsAPI_getWalletLocationsAsync(apiClient_t *apiClient, char *walletId);


// Get Wallet Locations Count
//
// Get the count of locations for a specific wallet by ID.
//
int32_envelope_t*
LocationsAPI_getWalletLocationsCountAsync(apiClient_t *apiClient, char *walletId);


// Update Location
//
// Update a specific location by ID.
//
empty_envelope_t*
LocationsAPI_updateLocationAsync(apiClient_t *apiClient, char *tenantId, char *locationId, location_update_dto_t *location_update_dto);


// Update Wallet Location
//
// Update a specific location of a wallet.
//
empty_envelope_t*
LocationsAPI_updateWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId, location_update_dto_t *location_update_dto);


