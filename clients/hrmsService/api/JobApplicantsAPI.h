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
#include "../model/job_applicant_profile_create_dto.h"
#include "../model/job_applicant_profile_dto_envelope.h"
#include "../model/job_applicant_profile_dto_list_envelope.h"
#include "../model/job_applicant_profile_update_dto.h"
#include "../model/operation.h"


// Create a job applicant
//
// Creates a new job applicant (candidate) profile for the specified tenant.
//
empty_envelope_t*
JobApplicantsAPI_createJobApplicantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_applicant_profile_create_dto_t *job_applicant_profile_create_dto);


// Delete a job applicant
//
// Deletes a job applicant (candidate) profile for the specified tenant.
//
empty_envelope_t*
JobApplicantsAPI_deleteJobApplicantAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicantId, char *api_version, char *x_api_version);


// Get job applicant by ID
//
// Retrieves a specific job applicant (candidate) profile by its identifier.
//
job_applicant_profile_dto_envelope_t*
JobApplicantsAPI_getJobApplicantByIdAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicantId, char *api_version, char *x_api_version);


// Get job applicants
//
// Retrieves job applicant (candidate) profiles for the specified tenant.
//
job_applicant_profile_dto_list_envelope_t*
JobApplicantsAPI_getJobApplicantsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count job applicants
//
// Counts job applicant profiles for the specified tenant.
//
int32_envelope_t*
JobApplicantsAPI_getJobApplicantsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a job applicant
//
// Partially updates an existing job applicant (candidate) profile for the specified tenant.
//
empty_envelope_t*
JobApplicantsAPI_patchJobApplicantAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicantId, char *api_version, char *x_api_version, list_t *operation);


// Update a job applicant
//
// Updates an existing job applicant (candidate) profile for the specified tenant.
//
empty_envelope_t*
JobApplicantsAPI_updateJobApplicantAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicantId, char *api_version, char *x_api_version, job_applicant_profile_update_dto_t *job_applicant_profile_update_dto);


