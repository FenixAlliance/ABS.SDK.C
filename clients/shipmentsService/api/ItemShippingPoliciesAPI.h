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
#include "../model/item_shipping_policy_create_dto.h"
#include "../model/item_shipping_policy_dto_collection_query_parameters.h"
#include "../model/item_shipping_policy_dto_envelope.h"
#include "../model/item_shipping_policy_dto_list_envelope.h"
#include "../model/item_shipping_policy_update_dto.h"
#include "../model/patch_operation.h"


// Create an item shipping policy
//
// Creates a new item shipping policy.
//
void
ItemShippingPoliciesAPI_createItemShippingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_shipping_policy_create_dto_t *item_shipping_policy_create_dto);


// Delete an item shipping policy
//
// Deletes an item shipping policy.
//
void
ItemShippingPoliciesAPI_deleteItemShippingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *policyId, char *api_version, char *x_api_version);


// Get all item shipping policies
//
// Retrieves all item shipping policies for the specified tenant.
//
item_shipping_policy_dto_list_envelope_t*
ItemShippingPoliciesAPI_getItemShippingPoliciesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_shipping_policy_dto_collection_query_parameters_t *item_shipping_policy_dto_collection_query_parameters);


// Get item shipping policies count
//
// Returns the count of item shipping policies.
//
int32_envelope_t*
ItemShippingPoliciesAPI_getItemShippingPoliciesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_shipping_policy_dto_collection_query_parameters_t *item_shipping_policy_dto_collection_query_parameters);


// Get item shipping policy by ID
//
// Retrieves a specific item shipping policy.
//
item_shipping_policy_dto_envelope_t*
ItemShippingPoliciesAPI_getItemShippingPolicyByIdAsync(apiClient_t *apiClient, char *tenantId, char *policyId, char *api_version, char *x_api_version);


// Patch an item shipping policy
//
// Partially updates an existing item shipping policy using JSON Patch.
//
empty_envelope_t*
ItemShippingPoliciesAPI_patchItemShippingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *policyId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update an item shipping policy
//
// Updates an existing item shipping policy.
//
void
ItemShippingPoliciesAPI_updateItemShippingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *policyId, char *api_version, char *x_api_version, item_shipping_policy_update_dto_t *item_shipping_policy_update_dto);


