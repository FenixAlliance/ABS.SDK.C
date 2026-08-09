#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/appraisal_stage_create_dto.h"
#include "../model/appraisal_stage_dto_collection_query_parameters.h"
#include "../model/appraisal_stage_dto_envelope.h"
#include "../model/appraisal_stage_dto_list_envelope.h"
#include "../model/appraisal_stage_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create an appraisal stage
//
// Creates a new appraisal stage for the specified tenant.
//
empty_envelope_t*
AppraisalStagesAPI_createAppraisalStageAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, appraisal_stage_create_dto_t *appraisal_stage_create_dto);


// Delete an appraisal stage
//
// Deletes an appraisal stage for the specified tenant.
//
empty_envelope_t*
AppraisalStagesAPI_deleteAppraisalStageAsync(apiClient_t *apiClient, char *tenantId, char *stageId, char *api_version, char *x_api_version);


// Get appraisal stage by ID
//
// Retrieves a specific appraisal stage by its identifier.
//
appraisal_stage_dto_envelope_t*
AppraisalStagesAPI_getAppraisalStageByIdAsync(apiClient_t *apiClient, char *tenantId, char *stageId, char *api_version, char *x_api_version);


// Get appraisal stages
//
// Retrieves appraisal stages for the specified tenant.
//
appraisal_stage_dto_list_envelope_t*
AppraisalStagesAPI_getAppraisalStagesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, appraisal_stage_dto_collection_query_parameters_t *appraisal_stage_dto_collection_query_parameters);


// Count appraisal stages
//
// Counts appraisal stages for the specified tenant.
//
int32_envelope_t*
AppraisalStagesAPI_getAppraisalStagesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, appraisal_stage_dto_collection_query_parameters_t *appraisal_stage_dto_collection_query_parameters);


// Update an appraisal stage
//
// Updates an existing appraisal stage for the specified tenant.
//
empty_envelope_t*
AppraisalStagesAPI_updateAppraisalStageAsync(apiClient_t *apiClient, char *tenantId, char *stageId, char *api_version, char *x_api_version, appraisal_stage_update_dto_t *appraisal_stage_update_dto);


