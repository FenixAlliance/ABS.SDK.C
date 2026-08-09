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
#include "../model/newsletter_subscription_create_dto.h"
#include "../model/newsletter_subscription_dto_collection_query_parameters.h"
#include "../model/newsletter_subscription_dto_envelope.h"
#include "../model/newsletter_subscription_dto_list_envelope.h"
#include "../model/newsletter_subscription_update_dto.h"


// Create a newsletter subscription
//
// Creates a new newsletter subscription for the specified tenant.
//
empty_envelope_t*
NewsletterSubscriptionsAPI_createNewsletterSubscriptionAsync(apiClient_t *apiClient, char *tenantId, newsletter_subscription_create_dto_t *newsletter_subscription_create_dto, char *api_version, char *x_api_version);


// Delete a newsletter subscription
//
// Deletes a newsletter subscription by its ID.
//
empty_envelope_t*
NewsletterSubscriptionsAPI_deleteNewsletterSubscriptionAsync(apiClient_t *apiClient, char *tenantId, char *newsletterSubscriptionId, char *api_version, char *x_api_version);


// Get newsletter subscription by ID
//
// Retrieves the details of a specific newsletter subscription by its ID.
//
newsletter_subscription_dto_envelope_t*
NewsletterSubscriptionsAPI_getNewsletterSubscriptionByIdAsync(apiClient_t *apiClient, char *tenantId, char *newsletterSubscriptionId, char *api_version, char *x_api_version);


// Get newsletter subscriptions
//
// Retrieves a collection of newsletter subscriptions for the specified tenant using OData query options.
//
newsletter_subscription_dto_list_envelope_t*
NewsletterSubscriptionsAPI_getNewsletterSubscriptionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, newsletter_subscription_dto_collection_query_parameters_t *newsletter_subscription_dto_collection_query_parameters);


// Get newsletter subscriptions count
//
// Returns the count of newsletter subscriptions for the specified tenant using OData query options.
//
int32_envelope_t*
NewsletterSubscriptionsAPI_getNewsletterSubscriptionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, newsletter_subscription_dto_collection_query_parameters_t *newsletter_subscription_dto_collection_query_parameters);


// Update a newsletter subscription
//
// Updates an existing newsletter subscription by its ID.
//
empty_envelope_t*
NewsletterSubscriptionsAPI_updateNewsletterSubscriptionAsync(apiClient_t *apiClient, char *tenantId, char *newsletterSubscriptionId, newsletter_subscription_update_dto_t *newsletter_subscription_update_dto, char *api_version, char *x_api_version);


