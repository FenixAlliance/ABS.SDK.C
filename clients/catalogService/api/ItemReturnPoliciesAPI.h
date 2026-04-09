#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/item_return_policy_dto_envelope.h"
#include "../model/item_return_policy_dto_list_envelope.h"


// Count item return policies
//
// Counts all return policies for a specific item.
//
int32_envelope_t*
ItemReturnPoliciesAPI_countItemReturnPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get item return policies
//
// Retrieves all return policies for a specific item.
//
item_return_policy_dto_list_envelope_t*
ItemReturnPoliciesAPI_getItemReturnPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get item return policy by ID
//
// Retrieves a specific return policy for an item.
//
item_return_policy_dto_envelope_t*
ItemReturnPoliciesAPI_getItemReturnPolicyByIdAsync(apiClient_t *apiClient, char *itemReturnPolicyId, char *itemId, char *api_version, char *x_api_version);


// Relate item to return policy
//
// Relates an item to an existing return policy.
//
void
ItemReturnPoliciesAPI_relateItemToReturnPolicyAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *returnPolicyId, char *api_version, char *x_api_version);


// Remove return policy from item
//
// Removes a return policy from an item.
//
void
ItemReturnPoliciesAPI_removeReturnPolicyFromItemAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemReturnPolicyId, char *api_version, char *x_api_version);


