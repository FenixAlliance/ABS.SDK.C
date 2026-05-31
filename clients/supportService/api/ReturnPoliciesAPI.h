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
#include "../model/item_return_policy_create_dto.h"
#include "../model/item_return_policy_dto_envelope.h"
#include "../model/item_return_policy_dto_list_envelope.h"
#include "../model/item_return_policy_update_dto.h"


// Create a new return policy
//
empty_envelope_t*
ReturnPoliciesAPI_createReturnPolicyAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_return_policy_create_dto_t *item_return_policy_create_dto);


// Delete a return policy
//
empty_envelope_t*
ReturnPoliciesAPI_deleteReturnPolicyAsync(apiClient_t *apiClient, char *tenantId, char *returnPolicyId, char *api_version, char *x_api_version);


// Retrieve a list of return policies
//
item_return_policy_dto_list_envelope_t*
ReturnPoliciesAPI_getReturnPoliciesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of return policies
//
int32_envelope_t*
ReturnPoliciesAPI_getReturnPoliciesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Retrieve a return policy by ID
//
item_return_policy_dto_envelope_t*
ReturnPoliciesAPI_getReturnPolicyAsync(apiClient_t *apiClient, char *tenantId, char *returnPolicyId, char *api_version, char *x_api_version);


// Update a return policy
//
empty_envelope_t*
ReturnPoliciesAPI_updateReturnPolicyAsync(apiClient_t *apiClient, char *tenantId, char *returnPolicyId, char *api_version, char *x_api_version, item_return_policy_update_dto_t *item_return_policy_update_dto);


