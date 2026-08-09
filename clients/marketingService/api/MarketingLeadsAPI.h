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
#include "../model/marketing_lead_create_dto.h"
#include "../model/marketing_lead_dto_collection_query_parameters.h"
#include "../model/marketing_lead_dto_envelope.h"
#include "../model/marketing_lead_dto_list_envelope.h"
#include "../model/marketing_lead_update_dto.h"
#include "../model/patch_operation.h"


// Create a marketing lead
//
empty_envelope_t*
MarketingLeadsAPI_createMarketingLeadAsync(apiClient_t *apiClient, char *tenantId, marketing_lead_create_dto_t *marketing_lead_create_dto, char *api_version, char *x_api_version);


// Delete a marketing lead
//
empty_envelope_t*
MarketingLeadsAPI_deleteMarketingLeadAsync(apiClient_t *apiClient, char *tenantId, char *marketingLeadId, char *api_version, char *x_api_version);


// Get marketing lead by ID
//
marketing_lead_dto_envelope_t*
MarketingLeadsAPI_getMarketingLeadDetailsAsync(apiClient_t *apiClient, char *tenantId, char *marketingLeadId, char *api_version, char *x_api_version);


// Get marketing leads count
//
int32_envelope_t*
MarketingLeadsAPI_getMarketingLeadsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, marketing_lead_dto_collection_query_parameters_t *marketing_lead_dto_collection_query_parameters);


// Get marketing leads
//
// Retrieves a collection of marketing leads for the specified tenant using OData query options.
//
marketing_lead_dto_list_envelope_t*
MarketingLeadsAPI_getMarketingLeadsODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, marketing_lead_dto_collection_query_parameters_t *marketing_lead_dto_collection_query_parameters);


// Patch a marketing lead
//
// Partially updates a marketing lead by its ID using JSON Patch.
//
empty_envelope_t*
MarketingLeadsAPI_patchMarketingLeadAsync(apiClient_t *apiClient, char *tenantId, char *marketingLeadId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a marketing lead
//
empty_envelope_t*
MarketingLeadsAPI_updateMarketingLeadAsync(apiClient_t *apiClient, char *tenantId, char *marketingLeadId, marketing_lead_update_dto_t *marketing_lead_update_dto, char *api_version, char *x_api_version);


