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
#include "../model/job_offer_application_create_dto.h"
#include "../model/job_offer_application_dto_collection_query_parameters.h"
#include "../model/job_offer_application_dto_envelope.h"
#include "../model/job_offer_application_dto_list_envelope.h"
#include "../model/job_offer_application_update_dto.h"
#include "../model/patch_operation.h"

// Enum STATUS for JobApplicationsAPI_changeJobApplicationStatusAsync
typedef enum  { hrmsservice_changeJobApplicationStatusAsync_STATUS_NULL = 0, hrmsservice_changeJobApplicationStatusAsync_STATUS_Submitted, hrmsservice_changeJobApplicationStatusAsync_STATUS_UnderReview, hrmsservice_changeJobApplicationStatusAsync_STATUS_Interviewing, hrmsservice_changeJobApplicationStatusAsync_STATUS_Offered, hrmsservice_changeJobApplicationStatusAsync_STATUS_Hired, hrmsservice_changeJobApplicationStatusAsync_STATUS_Rejected, hrmsservice_changeJobApplicationStatusAsync_STATUS_Withdrawn } hrmsservice_changeJobApplicationStatusAsync_status_e;


// Change job application status
//
// Transitions the application to a new funnel status (e.g. UnderReview, Interviewing, Offered, Hired, Rejected). Raises JobApplicationStatusChanged; terminal statuses are immutable.
//
empty_envelope_t*
JobApplicationsAPI_changeJobApplicationStatusAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicationId, hrmsservice_changeJobApplicationStatusAsync_status_e status, char *api_version, char *x_api_version);


// Create a job application
//
// Records a candidate's application against one of the tenant's job offers. The targeted job offer must belong to the tenant.
//
empty_envelope_t*
JobApplicationsAPI_createJobApplicationAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_offer_application_create_dto_t *job_offer_application_create_dto);


// Delete a job application
//
// Removes an application submitted against one of the tenant's job offers.
//
empty_envelope_t*
JobApplicationsAPI_deleteJobApplicationAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicationId, char *api_version, char *x_api_version);


// Get job application by ID
//
// Retrieves a specific application submitted against one of the tenant's job offers.
//
job_offer_application_dto_envelope_t*
JobApplicationsAPI_getJobApplicationByIdAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicationId, char *api_version, char *x_api_version);


// Get job applications
//
// Retrieves applications submitted against the tenant's job offers. Filter with `$filter=JobOfferId eq '...'` or `JobApplicantProfileId eq '...'`.
//
job_offer_application_dto_list_envelope_t*
JobApplicationsAPI_getJobApplicationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_offer_application_dto_collection_query_parameters_t *job_offer_application_dto_collection_query_parameters);


// Count job applications
//
// Counts applications submitted against the tenant's job offers.
//
int32_envelope_t*
JobApplicationsAPI_getJobApplicationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_offer_application_dto_collection_query_parameters_t *job_offer_application_dto_collection_query_parameters);


// Patch a job application
//
// Partially updates an existing application submitted against one of the tenant's job offers.
//
empty_envelope_t*
JobApplicationsAPI_patchJobApplicationAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicationId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a job application
//
// Updates an existing application submitted against one of the tenant's job offers.
//
empty_envelope_t*
JobApplicationsAPI_updateJobApplicationAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicationId, char *api_version, char *x_api_version, job_offer_application_update_dto_t *job_offer_application_update_dto);


