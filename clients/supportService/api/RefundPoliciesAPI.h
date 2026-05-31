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
#include "../model/item_refund_policy_create_dto.h"
#include "../model/item_refund_policy_dto_envelope.h"
#include "../model/item_refund_policy_dto_list_envelope.h"
#include "../model/item_refund_policy_update_dto.h"


// Create a new refund policy
//
empty_envelope_t*
RefundPoliciesAPI_createRefundPolicyAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_refund_policy_create_dto_t *item_refund_policy_create_dto);


// Delete a refund policy
//
empty_envelope_t*
RefundPoliciesAPI_deleteRefundPolicyAsync(apiClient_t *apiClient, char *tenantId, char *refundPolicyId, char *api_version, char *x_api_version);


// Retrieve a list of refund policies
//
item_refund_policy_dto_list_envelope_t*
RefundPoliciesAPI_getRefundPoliciesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of refund policies
//
int32_envelope_t*
RefundPoliciesAPI_getRefundPoliciesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Retrieve a refund policy by ID
//
item_refund_policy_dto_envelope_t*
RefundPoliciesAPI_getRefundPolicyAsync(apiClient_t *apiClient, char *tenantId, char *refundPolicyId, char *api_version, char *x_api_version);


// Update a refund policy
//
empty_envelope_t*
RefundPoliciesAPI_updateRefundPolicyAsync(apiClient_t *apiClient, char *tenantId, char *refundPolicyId, char *api_version, char *x_api_version, item_refund_policy_update_dto_t *item_refund_policy_update_dto);


