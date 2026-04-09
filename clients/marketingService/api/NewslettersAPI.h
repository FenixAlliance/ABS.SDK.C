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
#include "../model/newsletter_create_dto.h"
#include "../model/newsletter_dto_envelope.h"
#include "../model/newsletter_update_dto.h"


// Create a newsletter
//
// Creates a new newsletter for the specified tenant.
//
empty_envelope_t*
NewslettersAPI_createNewsletterAsync(apiClient_t *apiClient, char *tenantId, newsletter_create_dto_t *newsletter_create_dto, char *api_version, char *x_api_version);


// Delete a newsletter
//
// Deletes a newsletter by its ID.
//
empty_envelope_t*
NewslettersAPI_deleteNewsletterAsync(apiClient_t *apiClient, char *tenantId, char *newsletterId, char *api_version, char *x_api_version);


// Get newsletter by ID
//
// Retrieves the details of a specific newsletter by its ID.
//
newsletter_dto_envelope_t*
NewslettersAPI_getNewsletterDetailsAsync(apiClient_t *apiClient, char *tenantId, char *newsletterId, char *api_version, char *x_api_version);


// Get newsletters
//
// Retrieves a collection of newsletters for the specified tenant using OData query options.
//
void
NewslettersAPI_getNewsletterODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get newsletters count
//
// Returns the count of newsletters for the specified tenant using OData query options.
//
int32_envelope_t*
NewslettersAPI_getNewslettersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a newsletter
//
// Updates an existing newsletter by its ID.
//
empty_envelope_t*
NewslettersAPI_updateNewsletterAsync(apiClient_t *apiClient, char *tenantId, char *newsletterId, newsletter_update_dto_t *newsletter_update_dto, char *api_version, char *x_api_version);


