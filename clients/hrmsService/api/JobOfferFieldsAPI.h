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
#include "../model/job_offer_field_record_create_dto.h"
#include "../model/job_offer_field_record_dto_envelope.h"
#include "../model/job_offer_field_record_dto_list_envelope.h"
#include "../model/job_offer_field_record_update_dto.h"
#include "../model/operation.h"


// Create a job offer field
//
// Links a job field to a job offer for the specified tenant.
//
empty_envelope_t*
JobOfferFieldsAPI_createJobOfferFieldAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_offer_field_record_create_dto_t *job_offer_field_record_create_dto);


// Delete a job offer field
//
// Removes a job-offer field link record for the specified tenant.
//
empty_envelope_t*
JobOfferFieldsAPI_deleteJobOfferFieldAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferFieldId, char *api_version, char *x_api_version);


// Get job offer field by ID
//
// Retrieves a specific job-offer field link record by its identifier.
//
job_offer_field_record_dto_envelope_t*
JobOfferFieldsAPI_getJobOfferFieldByIdAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferFieldId, char *api_version, char *x_api_version);


// Get job offer fields
//
// Retrieves job-offer field link records for the tenant. Filter with `$filter=JobOfferId eq '...'` or `JobFieldId eq '...'`.
//
job_offer_field_record_dto_list_envelope_t*
JobOfferFieldsAPI_getJobOfferFieldsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count job offer fields
//
// Counts job-offer field link records for the specified tenant.
//
int32_envelope_t*
JobOfferFieldsAPI_getJobOfferFieldsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a job offer field
//
// Partially updates an existing job-offer field link record for the specified tenant.
//
empty_envelope_t*
JobOfferFieldsAPI_patchJobOfferFieldAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferFieldId, char *api_version, char *x_api_version, list_t *operation);


// Update a job offer field
//
// Updates an existing job-offer field link record for the specified tenant.
//
empty_envelope_t*
JobOfferFieldsAPI_updateJobOfferFieldAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferFieldId, char *api_version, char *x_api_version, job_offer_field_record_update_dto_t *job_offer_field_record_update_dto);


