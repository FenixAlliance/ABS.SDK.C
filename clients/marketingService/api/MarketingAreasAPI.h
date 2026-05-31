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
#include "../model/marketing_area_create_dto.h"
#include "../model/marketing_area_dto_envelope.h"
#include "../model/marketing_area_dto_list_envelope.h"
#include "../model/marketing_area_update_dto.h"


// Create a marketing area
//
// Creates a new marketing area for the specified tenant.
//
empty_envelope_t*
MarketingAreasAPI_createMarketingAreaAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, marketing_area_create_dto_t *marketing_area_create_dto);


// Delete a marketing area
//
// Deletes a marketing area for the specified tenant.
//
empty_envelope_t*
MarketingAreasAPI_deleteMarketingAreaAsync(apiClient_t *apiClient, char *tenantId, char *marketingAreaId, char *api_version, char *x_api_version);


// Get marketing area by ID
//
// Retrieves a specific marketing area by its identifier.
//
marketing_area_dto_envelope_t*
MarketingAreasAPI_getMarketingAreaByIdAsync(apiClient_t *apiClient, char *tenantId, char *marketingAreaId, char *api_version, char *x_api_version);


// Get marketing areas
//
// Retrieves marketing areas for the specified tenant.
//
marketing_area_dto_list_envelope_t*
MarketingAreasAPI_getMarketingAreasAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count marketing areas
//
// Counts marketing areas for the specified tenant.
//
int32_envelope_t*
MarketingAreasAPI_getMarketingAreasCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a marketing area
//
// Updates an existing marketing area for the specified tenant.
//
empty_envelope_t*
MarketingAreasAPI_updateMarketingAreaAsync(apiClient_t *apiClient, char *tenantId, char *marketingAreaId, char *api_version, char *x_api_version, marketing_area_update_dto_t *marketing_area_update_dto);


