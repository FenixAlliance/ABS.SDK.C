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
#include "../model/patch_operation.h"
#include "../model/rounding_policy_create_dto.h"
#include "../model/rounding_policy_dto_collection_query_parameters.h"
#include "../model/rounding_policy_dto_envelope.h"
#include "../model/rounding_policy_dto_list_envelope.h"
#include "../model/rounding_policy_update_dto.h"


// Creates a rounding policy
//
// Creates a new rounding policy for the current tenant.
//
empty_envelope_t*
RoundingPoliciesAPI_createRoundingPolicyAsync(apiClient_t *apiClient, char *tenantId, rounding_policy_create_dto_t *rounding_policy_create_dto, char *api_version, char *x_api_version);


// Deletes a rounding policy
//
// Deletes the specified rounding policy.
//
empty_envelope_t*
RoundingPoliciesAPI_deleteRoundingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *roundingPolicyId, char *api_version, char *x_api_version);


// Gets all rounding policies
//
// Retrieves all rounding policies for the current tenant with OData support.
//
rounding_policy_dto_list_envelope_t*
RoundingPoliciesAPI_getRoundingPoliciesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, rounding_policy_dto_collection_query_parameters_t *rounding_policy_dto_collection_query_parameters);


// Counts rounding policies
//
// Gets the count of rounding policies for the current tenant.
//
int32_envelope_t*
RoundingPoliciesAPI_getRoundingPoliciesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, rounding_policy_dto_collection_query_parameters_t *rounding_policy_dto_collection_query_parameters);


// Gets a rounding policy by ID
//
// Retrieves the details of a rounding policy using its unique ID.
//
rounding_policy_dto_envelope_t*
RoundingPoliciesAPI_getRoundingPolicyByIdAsync(apiClient_t *apiClient, char *tenantId, char *roundingPolicyId, char *api_version, char *x_api_version);


// Patches a rounding policy
//
// Partially updates the specified rounding policy using a JSON Patch document.
//
empty_envelope_t*
RoundingPoliciesAPI_patchRoundingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *roundingPolicyId, char *api_version, char *x_api_version, list_t *patch_operation);


// Updates a rounding policy
//
// Updates the specified rounding policy.
//
empty_envelope_t*
RoundingPoliciesAPI_updateRoundingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *roundingPolicyId, rounding_policy_update_dto_t *rounding_policy_update_dto, char *api_version, char *x_api_version);


