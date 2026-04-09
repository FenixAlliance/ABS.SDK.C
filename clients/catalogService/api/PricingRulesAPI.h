#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/pricing_rule_create_dto.h"
#include "../model/pricing_rule_dto_envelope.h"
#include "../model/pricing_rule_dto_list_envelope.h"
#include "../model/pricing_rule_update_dto.h"


// Create a new pricing rule
//
// Creates a new pricing rule for the specified tenant.
//
pricing_rule_dto_envelope_t*
PricingRulesAPI_createPricingRule(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, pricing_rule_create_dto_t *pricing_rule_create_dto);


// Delete a pricing rule
//
// Deletes a pricing rule for the specified tenant and rule ID.
//
void
PricingRulesAPI_deletePricingRule(apiClient_t *apiClient, char *tenantId, char *pricingRuleId, char *api_version, char *x_api_version);


// Get pricing rule by ID
//
// Retrieves a pricing rule by its unique identifier.
//
pricing_rule_dto_envelope_t*
PricingRulesAPI_getPricingRuleById(apiClient_t *apiClient, char *pricingRuleId, char *api_version, char *x_api_version);


// Get all pricing rules
//
// Retrieves all pricing rules for the specified tenant, with optional OData query options.
//
pricing_rule_dto_list_envelope_t*
PricingRulesAPI_getPricingRules(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a pricing rule
//
// Updates an existing pricing rule for the specified tenant and rule ID.
//
void
PricingRulesAPI_updatePricingRule(apiClient_t *apiClient, char *tenantId, char *pricingRuleId, char *api_version, char *x_api_version, pricing_rule_update_dto_t *pricing_rule_update_dto);


