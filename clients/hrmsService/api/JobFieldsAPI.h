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
#include "../model/job_field_create_dto.h"
#include "../model/job_field_dto_envelope.h"
#include "../model/job_field_dto_list_envelope.h"
#include "../model/job_field_update_dto.h"
#include "../model/operation.h"


// Create a job field
//
// Creates a new job field (role domain) for the specified tenant.
//
empty_envelope_t*
JobFieldsAPI_createJobFieldAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_field_create_dto_t *job_field_create_dto);


// Delete a job field
//
// Deletes a job field for the specified tenant.
//
empty_envelope_t*
JobFieldsAPI_deleteJobFieldAsync(apiClient_t *apiClient, char *tenantId, char *jobFieldId, char *api_version, char *x_api_version);


// Get job field by ID
//
// Retrieves a specific job field by its identifier.
//
job_field_dto_envelope_t*
JobFieldsAPI_getJobFieldByIdAsync(apiClient_t *apiClient, char *tenantId, char *jobFieldId, char *api_version, char *x_api_version);


// Get job fields
//
// Retrieves job field (role domain) taxonomy entries for the specified tenant.
//
job_field_dto_list_envelope_t*
JobFieldsAPI_getJobFieldsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count job fields
//
// Counts job field taxonomy entries for the specified tenant.
//
int32_envelope_t*
JobFieldsAPI_getJobFieldsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a job field
//
// Partially updates an existing job field for the specified tenant.
//
empty_envelope_t*
JobFieldsAPI_patchJobFieldAsync(apiClient_t *apiClient, char *tenantId, char *jobFieldId, char *api_version, char *x_api_version, list_t *operation);


// Update a job field
//
// Updates an existing job field for the specified tenant.
//
empty_envelope_t*
JobFieldsAPI_updateJobFieldAsync(apiClient_t *apiClient, char *tenantId, char *jobFieldId, char *api_version, char *x_api_version, job_field_update_dto_t *job_field_update_dto);


