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
#include "../model/job_offer_create_dto.h"
#include "../model/job_offer_dto_envelope.h"
#include "../model/job_offer_dto_list_envelope.h"
#include "../model/object.h"


// Create a job offer
//
// Creates a new job offer for the specified tenant.
//
empty_envelope_t*
JobOffersAPI_createJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_offer_create_dto_t *job_offer_create_dto);


// Delete a job offer
//
// Deletes a job offer for the specified tenant.
//
empty_envelope_t*
JobOffersAPI_deleteJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version);


// Get job offer by ID
//
// Retrieves a specific job offer by its identifier.
//
job_offer_dto_envelope_t*
JobOffersAPI_getJobOfferByIdAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version);


// Get job offers
//
// Retrieves job offers for the specified tenant.
//
job_offer_dto_list_envelope_t*
JobOffersAPI_getJobOffersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count job offers
//
// Counts job offers for the specified tenant.
//
int32_envelope_t*
JobOffersAPI_getJobOffersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a job offer
//
// Updates an existing job offer for the specified tenant.
//
empty_envelope_t*
JobOffersAPI_updateJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version, object_t *body);


