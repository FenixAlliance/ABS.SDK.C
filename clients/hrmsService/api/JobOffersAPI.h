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
#include "../model/job_offer_update_dto.h"
#include "../model/operation.h"


// Close a job offer
//
// Closes the job offer without a hire and removes it from the public board (raises JobOfferClosed).
//
empty_envelope_t*
JobOffersAPI_closeJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version);


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


// Mark a job offer filled
//
// Marks the offer filled — converted to a hire — and removes it from the public board (raises JobOfferFilled).
//
empty_envelope_t*
JobOffersAPI_fillJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version);


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


// Get public job offer by ID
//
// Retrieves a published job offer by its identifier for the Talent Portal. Anonymous; optionally scoped to a tenant.
//
job_offer_dto_envelope_t*
JobOffersAPI_getPublicJobOfferByIdAsync(apiClient_t *apiClient, char *jobOfferId, char *tenantId, char *api_version, char *x_api_version);


// Get public job offers
//
// Retrieves published job offers for the Talent Portal. Anonymous; optionally scoped to a single tenant.
//
job_offer_dto_list_envelope_t*
JobOffersAPI_getPublicJobOffersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count public job offers
//
// Counts published job offers for the Talent Portal. Anonymous; optionally scoped to a single tenant.
//
int32_envelope_t*
JobOffersAPI_getPublicJobOffersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a job offer
//
// Partially updates an existing job offer for the specified tenant.
//
empty_envelope_t*
JobOffersAPI_patchJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version, list_t *operation);


// Publish a job offer
//
// Publishes the job offer to the public Talent Portal (raises JobOfferPublished).
//
empty_envelope_t*
JobOffersAPI_publishJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version);


// Update a job offer
//
// Updates an existing job offer for the specified tenant.
//
empty_envelope_t*
JobOffersAPI_updateJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version, job_offer_update_dto_t *job_offer_update_dto);


