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
#include "../model/marketing_list_create_dto.h"
#include "../model/marketing_list_dto_envelope.h"
#include "../model/marketing_list_dto_list_envelope.h"
#include "../model/marketing_list_update_dto.h"


// Create a marketing list
//
// Creates a new marketing list for the specified tenant.
//
empty_envelope_t*
MarketingListsAPI_createMarketingListAsync(apiClient_t *apiClient, char *tenantId, marketing_list_create_dto_t *marketing_list_create_dto, char *api_version, char *x_api_version);


// Delete a marketing list
//
// Deletes a marketing list by its ID.
//
empty_envelope_t*
MarketingListsAPI_deleteMarketingListAsync(apiClient_t *apiClient, char *tenantId, char *marketinglistId, char *api_version, char *x_api_version);


// Get marketing list by ID
//
// Retrieves the details of a specific marketing list by its ID.
//
marketing_list_dto_envelope_t*
MarketingListsAPI_getMarketingListDetailsAsync(apiClient_t *apiClient, char *tenantId, char *marketinglistId, char *api_version, char *x_api_version);


// Get marketing lists
//
// Retrieves a collection of marketing lists for the specified tenant using OData query options.
//
marketing_list_dto_list_envelope_t*
MarketingListsAPI_getMarketingListODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get marketing lists count
//
// Returns the count of marketing lists for the specified tenant using OData query options.
//
int32_envelope_t*
MarketingListsAPI_getMarketingListsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a marketing list
//
// Updates an existing marketing list by its ID.
//
empty_envelope_t*
MarketingListsAPI_updateMarketingListAsync(apiClient_t *apiClient, char *tenantId, char *marketinglistId, marketing_list_update_dto_t *marketing_list_update_dto, char *api_version, char *x_api_version);


