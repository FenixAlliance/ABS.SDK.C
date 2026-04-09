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
#include "../model/subscription_create_dto.h"
#include "../model/subscription_dto_envelope.h"
#include "../model/subscription_dto_i_read_only_list_envelope.h"
#include "../model/subscription_update_dto.h"


// Create a subscription
//
// Creates a new subscription for the specified tenant.
//
envelope_t*
SubscriptionsAPI_createSubscriptionAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, subscription_create_dto_t *subscription_create_dto);


// Delete a subscription
//
// Deletes a subscription by its identifier.
//
envelope_t*
SubscriptionsAPI_deleteSubscriptionAsync(apiClient_t *apiClient, char *tenantId, char *subscriptionId, char *api_version, char *x_api_version);


// Get a subscription by ID
//
// Retrieves a subscription by its identifier.
//
subscription_dto_envelope_t*
SubscriptionsAPI_getSubscriptionByIdAsync(apiClient_t *apiClient, char *tenantId, char *subscriptionId, char *api_version, char *x_api_version);


// Get all subscriptions
//
// Retrieves all subscriptions for the specified tenant.
//
subscription_dto_i_read_only_list_envelope_t*
SubscriptionsAPI_getSubscriptionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get subscriptions count
//
// Returns the count of subscriptions for the specified tenant.
//
int32_envelope_t*
SubscriptionsAPI_getSubscriptionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a subscription
//
// Updates an existing subscription.
//
envelope_t*
SubscriptionsAPI_updateSubscriptionAsync(apiClient_t *apiClient, char *tenantId, char *subscriptionId, char *api_version, char *x_api_version, subscription_update_dto_t *subscription_update_dto);


