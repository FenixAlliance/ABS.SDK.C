#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/item_tax_policy_dto_envelope.h"
#include "../model/item_tax_policy_dto_list_envelope.h"


// Count item tax policies
//
// Counts all tax policies for a specific item.
//
int32_envelope_t*
ItemTaxPoliciesAPI_countItemTaxPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get item tax policies
//
// Retrieves all tax policies for a specific item.
//
item_tax_policy_dto_list_envelope_t*
ItemTaxPoliciesAPI_getItemTaxPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get item tax policy by ID
//
// Retrieves a specific tax policy for an item.
//
item_tax_policy_dto_envelope_t*
ItemTaxPoliciesAPI_getItemTaxPolicyByIdAsync(apiClient_t *apiClient, char *itemTaxPolicyId, char *itemId, char *api_version, char *x_api_version);


// Relate item to tax policy
//
// Relates an item to an existing tax policy.
//
void
ItemTaxPoliciesAPI_relateItemToTaxPolicyAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *taxPolicyId, char *api_version, char *x_api_version);


// Remove tax policy from item
//
// Removes a tax policy from an item.
//
void
ItemTaxPoliciesAPI_removeTaxPolicyFromItemAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTaxPolicyId, char *api_version, char *x_api_version);


