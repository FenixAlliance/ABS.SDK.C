#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/subscription_plan_create_dto.h"
#include "../model/subscription_plan_dto_envelope.h"
#include "../model/subscription_plan_dto_i_read_only_list_envelope.h"
#include "../model/subscription_plan_update_dto.h"


// Create a subscription plan
//
// Creates a new subscription plan for the specified tenant.
//
envelope_t*
SubscriptionPlansAPI_createSubscriptionPlanAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, subscription_plan_create_dto_t *subscription_plan_create_dto);


// Delete a subscription plan
//
// Deletes a subscription plan by its identifier.
//
envelope_t*
SubscriptionPlansAPI_deleteSubscriptionPlanAsync(apiClient_t *apiClient, char *tenantId, char *planId, char *api_version, char *x_api_version);


// Get a subscription plan by ID
//
// Retrieves a subscription plan by its identifier.
//
subscription_plan_dto_envelope_t*
SubscriptionPlansAPI_getSubscriptionPlanByIdAsync(apiClient_t *apiClient, char *tenantId, char *planId, char *api_version, char *x_api_version);


// Get all subscription plans
//
// Retrieves all subscription plans for the specified tenant.
//
subscription_plan_dto_i_read_only_list_envelope_t*
SubscriptionPlansAPI_getSubscriptionPlansAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get subscription plans count
//
// Returns the count of subscription plans for the specified tenant.
//
int32_envelope_t*
SubscriptionPlansAPI_getSubscriptionPlansCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a subscription plan
//
// Updates an existing subscription plan.
//
envelope_t*
SubscriptionPlansAPI_updateSubscriptionPlanAsync(apiClient_t *apiClient, char *tenantId, char *planId, char *api_version, char *x_api_version, subscription_plan_update_dto_t *subscription_plan_update_dto);


