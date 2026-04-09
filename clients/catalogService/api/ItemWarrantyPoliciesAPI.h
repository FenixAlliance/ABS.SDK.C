#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/item_warranty_policy_dto_envelope.h"
#include "../model/item_warranty_policy_dto_list_envelope.h"


// Count item warranty policies
//
// Counts all warranty policies for a specific item.
//
int32_envelope_t*
ItemWarrantyPoliciesAPI_countItemWarrantyPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get item warranty policies
//
// Retrieves all warranty policies for a specific item.
//
item_warranty_policy_dto_list_envelope_t*
ItemWarrantyPoliciesAPI_getItemWarrantyPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get item warranty policy by ID
//
// Retrieves a specific warranty policy for an item.
//
item_warranty_policy_dto_envelope_t*
ItemWarrantyPoliciesAPI_getItemWarrantyPolicyByIdAsync(apiClient_t *apiClient, char *itemWarrantyPolicyId, char *itemId, char *api_version, char *x_api_version);


// Relate item to warranty policy
//
// Relates an item to an existing warranty policy.
//
void
ItemWarrantyPoliciesAPI_relateItemToWarrantyPolicyAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *warrantyPolicyId, char *api_version, char *x_api_version);


// Remove warranty policy from item
//
// Removes a warranty policy from an item.
//
void
ItemWarrantyPoliciesAPI_removeWarrantyPolicyFromItemAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemWarrantyPolicyId, char *api_version, char *x_api_version);


