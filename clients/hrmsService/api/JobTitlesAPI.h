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
#include "../model/job_title_create_dto.h"
#include "../model/job_title_dto_envelope.h"
#include "../model/job_title_dto_list_envelope.h"
#include "../model/job_title_update_dto.h"


// Create a job title
//
// Creates a new job title for the specified tenant.
//
empty_envelope_t*
JobTitlesAPI_createJobTitleAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_title_create_dto_t *job_title_create_dto);


// Delete a job title
//
// Deletes a job title for the specified tenant.
//
empty_envelope_t*
JobTitlesAPI_deleteJobTitleAsync(apiClient_t *apiClient, char *tenantId, char *jobTitleId, char *api_version, char *x_api_version);


// Get job title by ID
//
// Retrieves a specific job title by its identifier.
//
job_title_dto_envelope_t*
JobTitlesAPI_getJobTitleByIdAsync(apiClient_t *apiClient, char *tenantId, char *jobTitleId, char *api_version, char *x_api_version);


// Get job titles
//
// Retrieves job titles for the specified tenant.
//
job_title_dto_list_envelope_t*
JobTitlesAPI_getJobTitlesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count job titles
//
// Counts job titles for the specified tenant.
//
int32_envelope_t*
JobTitlesAPI_getJobTitlesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a job title
//
// Updates an existing job title for the specified tenant.
//
empty_envelope_t*
JobTitlesAPI_updateJobTitleAsync(apiClient_t *apiClient, char *tenantId, char *jobTitleId, char *api_version, char *x_api_version, job_title_update_dto_t *job_title_update_dto);


