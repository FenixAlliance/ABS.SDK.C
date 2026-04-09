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
#include "../model/marketing_campaign_create_dto.h"
#include "../model/marketing_campaign_dto_envelope.h"
#include "../model/marketing_campaign_update_dto.h"


// Create a marketing campaign
//
// Creates a new marketing campaign for the specified tenant.
//
empty_envelope_t*
MarketingCampaignsAPI_createMarketingCampaignAsync(apiClient_t *apiClient, char *tenantId, marketing_campaign_create_dto_t *marketing_campaign_create_dto, char *api_version, char *x_api_version);


// Delete a marketing campaign
//
// Deletes a marketing campaign by its ID.
//
empty_envelope_t*
MarketingCampaignsAPI_deleteMarketingCampaignAsync(apiClient_t *apiClient, char *tenantId, char *marketingcampaignId, char *api_version, char *x_api_version);


// Get marketing campaign by ID
//
// Retrieves the details of a specific marketing campaign by its ID.
//
marketing_campaign_dto_envelope_t*
MarketingCampaignsAPI_getMarketingCampaignDetailsAsync(apiClient_t *apiClient, char *tenantId, char *marketingcampaignId, char *api_version, char *x_api_version);


// Get marketing campaigns
//
// Retrieves a collection of marketing campaigns for the specified tenant using OData query options.
//
void
MarketingCampaignsAPI_getMarketingCampaignODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get marketing campaigns count
//
// Returns the count of marketing campaigns for the specified tenant using OData query options.
//
int32_envelope_t*
MarketingCampaignsAPI_getMarketingCampaignsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a marketing campaign
//
// Updates an existing marketing campaign by its ID.
//
empty_envelope_t*
MarketingCampaignsAPI_updateMarketingCampaignAsync(apiClient_t *apiClient, char *tenantId, char *marketingcampaignId, marketing_campaign_update_dto_t *marketing_campaign_update_dto, char *api_version, char *x_api_version);


