#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/shipping_zone_create_dto.h"
#include "../model/shipping_zone_dto_envelope.h"
#include "../model/shipping_zone_dto_list_envelope.h"
#include "../model/shipping_zone_update_dto.h"


// Create a shipping zone
//
// Creates a new shipping zone.
//
void
ShippingZonesAPI_createShippingZoneAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_zone_create_dto_t *shipping_zone_create_dto);


// Delete a shipping zone
//
// Deletes a shipping zone.
//
void
ShippingZonesAPI_deleteShippingZoneAsync(apiClient_t *apiClient, char *tenantId, char *zoneId, char *api_version, char *x_api_version);


// Get shipping zone by ID
//
// Retrieves a specific shipping zone.
//
shipping_zone_dto_envelope_t*
ShippingZonesAPI_getShippingZoneByIdAsync(apiClient_t *apiClient, char *tenantId, char *zoneId, char *api_version, char *x_api_version);


// Get all shipping zones
//
// Retrieves all shipping zones for the specified tenant.
//
shipping_zone_dto_list_envelope_t*
ShippingZonesAPI_getShippingZonesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get shipping zones count
//
// Returns the count of shipping zones.
//
int32_envelope_t*
ShippingZonesAPI_getShippingZonesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a shipping zone
//
// Updates an existing shipping zone.
//
void
ShippingZonesAPI_updateShippingZoneAsync(apiClient_t *apiClient, char *tenantId, char *zoneId, char *api_version, char *x_api_version, shipping_zone_update_dto_t *shipping_zone_update_dto);


