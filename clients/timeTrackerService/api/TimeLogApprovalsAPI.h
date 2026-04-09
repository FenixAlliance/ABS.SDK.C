#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/project_hours_approval_approver_update_dto.h"
#include "../model/project_hours_approval_create_dto.h"
#include "../model/project_hours_approval_status_update_dto.h"


// Request project hours approval
//
// Creates a new project hours approval request.
//
void
TimeLogApprovalsAPI_requestProjectHoursApprovalAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, project_hours_approval_create_dto_t *project_hours_approval_create_dto);


// Update approval approver
//
// Updates the approver of an existing project hours approval.
//
void
TimeLogApprovalsAPI_updateProjectHoursApprovalApproverAsync(apiClient_t *apiClient, char *approvalId, char *tenantId, char *api_version, char *x_api_version, project_hours_approval_approver_update_dto_t *project_hours_approval_approver_update_dto);


// Update approval status
//
// Updates the status of an existing project hours approval.
//
void
TimeLogApprovalsAPI_updateProjectHoursApprovalStatusAsync(apiClient_t *apiClient, char *tenantId, char *approvalId, char *api_version, char *x_api_version, project_hours_approval_status_update_dto_t *project_hours_approval_status_update_dto);


