#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/appraisal_workflow_create_dto.h"
#include "../model/appraisal_workflow_dto_collection_query_parameters.h"
#include "../model/appraisal_workflow_dto_envelope.h"
#include "../model/appraisal_workflow_dto_list_envelope.h"
#include "../model/appraisal_workflow_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create an appraisal workflow
//
// Creates a new appraisal workflow for the specified tenant.
//
empty_envelope_t*
AppraisalWorkflowsAPI_createAppraisalWorkflowAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, appraisal_workflow_create_dto_t *appraisal_workflow_create_dto);


// Delete an appraisal workflow
//
// Deletes an appraisal workflow for the specified tenant.
//
empty_envelope_t*
AppraisalWorkflowsAPI_deleteAppraisalWorkflowAsync(apiClient_t *apiClient, char *tenantId, char *workflowId, char *api_version, char *x_api_version);


// Get appraisal workflow by ID
//
// Retrieves a specific appraisal workflow by its identifier.
//
appraisal_workflow_dto_envelope_t*
AppraisalWorkflowsAPI_getAppraisalWorkflowByIdAsync(apiClient_t *apiClient, char *tenantId, char *workflowId, char *api_version, char *x_api_version);


// Get appraisal workflows
//
// Retrieves appraisal workflows for the specified tenant.
//
appraisal_workflow_dto_list_envelope_t*
AppraisalWorkflowsAPI_getAppraisalWorkflowsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, appraisal_workflow_dto_collection_query_parameters_t *appraisal_workflow_dto_collection_query_parameters);


// Count appraisal workflows
//
// Counts appraisal workflows for the specified tenant.
//
int32_envelope_t*
AppraisalWorkflowsAPI_getAppraisalWorkflowsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, appraisal_workflow_dto_collection_query_parameters_t *appraisal_workflow_dto_collection_query_parameters);


// Update an appraisal workflow
//
// Updates an existing appraisal workflow for the specified tenant.
//
empty_envelope_t*
AppraisalWorkflowsAPI_updateAppraisalWorkflowAsync(apiClient_t *apiClient, char *tenantId, char *workflowId, char *api_version, char *x_api_version, appraisal_workflow_update_dto_t *appraisal_workflow_update_dto);


