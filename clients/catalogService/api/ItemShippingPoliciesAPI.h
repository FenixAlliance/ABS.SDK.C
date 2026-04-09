#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/item_shipping_policy_dto_envelope.h"
#include "../model/item_shipping_policy_dto_list_envelope.h"


// Count item shipping policies
//
// Counts all shipping policies for a specific item.
//
int32_envelope_t*
ItemShippingPoliciesAPI_countItemShippingPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get item shipping policies
//
// Retrieves all shipping policies for a specific item.
//
item_shipping_policy_dto_list_envelope_t*
ItemShippingPoliciesAPI_getItemShippingPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get item shipping policy by ID
//
// Retrieves a specific shipping policy for an item.
//
item_shipping_policy_dto_envelope_t*
ItemShippingPoliciesAPI_getItemShippingPolicyByIdAsync(apiClient_t *apiClient, char *itemShippingPolicyId, char *itemId, char *api_version, char *x_api_version);


// Relate item to shipping policy
//
// Relates an item to an existing shipping policy.
//
void
ItemShippingPoliciesAPI_relateItemToShippingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *shippingPolicyId, char *api_version, char *x_api_version);


// Remove shipping policy from item
//
// Removes a shipping policy from an item.
//
void
ItemShippingPoliciesAPI_removeShippingPolicyFromItemAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemShippingPolicyId, char *api_version, char *x_api_version);


