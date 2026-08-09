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
#include "../model/shipping_region_create_dto.h"
#include "../model/shipping_region_dto_collection_query_parameters.h"
#include "../model/shipping_region_dto_envelope.h"
#include "../model/shipping_region_dto_list_envelope.h"
#include "../model/shipping_region_update_dto.h"


// Create a shipping region
//
// Creates a new shipping region.
//
void
ShippingRegionsAPI_createShippingRegionAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_region_create_dto_t *shipping_region_create_dto);


// Delete a shipping region
//
// Deletes a shipping region.
//
void
ShippingRegionsAPI_deleteShippingRegionAsync(apiClient_t *apiClient, char *tenantId, char *regionId, char *api_version, char *x_api_version);


// Get shipping region by ID
//
// Retrieves a specific shipping region.
//
shipping_region_dto_envelope_t*
ShippingRegionsAPI_getShippingRegionByIdAsync(apiClient_t *apiClient, char *tenantId, char *regionId, char *api_version, char *x_api_version);


// Get all shipping regions
//
// Retrieves all shipping regions for the specified tenant.
//
shipping_region_dto_list_envelope_t*
ShippingRegionsAPI_getShippingRegionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_region_dto_collection_query_parameters_t *shipping_region_dto_collection_query_parameters);


// Get shipping regions count
//
// Returns the count of shipping regions.
//
int32_envelope_t*
ShippingRegionsAPI_getShippingRegionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_region_dto_collection_query_parameters_t *shipping_region_dto_collection_query_parameters);


// Patch a shipping region
//
// Partially updates an existing shipping region using JSON Patch.
//
empty_envelope_t*
ShippingRegionsAPI_patchShippingRegionAsync(apiClient_t *apiClient, char *tenantId, char *regionId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a shipping region
//
// Updates an existing shipping region.
//
void
ShippingRegionsAPI_updateShippingRegionAsync(apiClient_t *apiClient, char *tenantId, char *regionId, char *api_version, char *x_api_version, shipping_region_update_dto_t *shipping_region_update_dto);


