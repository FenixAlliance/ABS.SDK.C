#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/item_refund_policy_dto_envelope.h"
#include "../model/item_refund_policy_dto_list_envelope.h"


// Count item refund policies
//
// Counts all refund policies for a specific item.
//
int32_envelope_t*
ItemRefundPoliciesAPI_countItemRefundPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get item refund policies
//
// Retrieves all refund policies for a specific item.
//
item_refund_policy_dto_list_envelope_t*
ItemRefundPoliciesAPI_getItemRefundPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get item refund policy by ID
//
// Retrieves a specific refund policy for an item.
//
item_refund_policy_dto_envelope_t*
ItemRefundPoliciesAPI_getItemRefundPolicyByIdAsync(apiClient_t *apiClient, char *itemRefundPolicyId, char *itemId, char *api_version, char *x_api_version);


// Relate item to refund policy
//
// Relates an item to an existing refund policy.
//
void
ItemRefundPoliciesAPI_relateItemToRefundPolicyAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *refundPolicyId, char *api_version, char *x_api_version);


// Remove refund policy from item
//
// Removes a refund policy from an item.
//
void
ItemRefundPoliciesAPI_removeRefundPolicyFromItemAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemRefundPolicyId, char *api_version, char *x_api_version);


