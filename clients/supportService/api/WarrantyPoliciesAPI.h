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
#include "../model/item_warranty_policy_create_dto.h"
#include "../model/item_warranty_policy_dto_envelope.h"
#include "../model/item_warranty_policy_dto_list_envelope.h"
#include "../model/item_warranty_policy_update_dto.h"


// Create a new warranty policy
//
empty_envelope_t*
WarrantyPoliciesAPI_createWarrantyPolicyAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_warranty_policy_create_dto_t *item_warranty_policy_create_dto);


// Delete a warranty policy
//
empty_envelope_t*
WarrantyPoliciesAPI_deleteWarrantyPolicyAsync(apiClient_t *apiClient, char *tenantId, char *warrantyPolicyId, char *api_version, char *x_api_version);


// Retrieve a list of warranty policies
//
item_warranty_policy_dto_list_envelope_t*
WarrantyPoliciesAPI_getWarrantyPoliciesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of warranty policies
//
int32_envelope_t*
WarrantyPoliciesAPI_getWarrantyPoliciesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Retrieve a warranty policy by ID
//
item_warranty_policy_dto_envelope_t*
WarrantyPoliciesAPI_getWarrantyPolicyAsync(apiClient_t *apiClient, char *tenantId, char *warrantyPolicyId, char *api_version, char *x_api_version);


// Update a warranty policy
//
empty_envelope_t*
WarrantyPoliciesAPI_updateWarrantyPolicyAsync(apiClient_t *apiClient, char *tenantId, char *warrantyPolicyId, char *api_version, char *x_api_version, item_warranty_policy_update_dto_t *item_warranty_policy_update_dto);


