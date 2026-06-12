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
#include "../model/leave_application_create_dto.h"
#include "../model/leave_application_dto_envelope.h"
#include "../model/leave_application_dto_list_envelope.h"
#include "../model/leave_application_update_dto.h"
#include "../model/operation.h"


// Create a leave application
//
// Creates a new leave application for the specified tenant.
//
empty_envelope_t*
LeaveApplicationsAPI_createLeaveApplicationAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, leave_application_create_dto_t *leave_application_create_dto);


// Delete a leave application
//
// Deletes a leave application for the specified tenant.
//
empty_envelope_t*
LeaveApplicationsAPI_deleteLeaveApplicationAsync(apiClient_t *apiClient, char *tenantId, char *leaveApplicationId, char *api_version, char *x_api_version);


// Get leave application by ID
//
// Retrieves a specific leave application by its identifier.
//
leave_application_dto_envelope_t*
LeaveApplicationsAPI_getLeaveApplicationByIdAsync(apiClient_t *apiClient, char *tenantId, char *leaveApplicationId, char *api_version, char *x_api_version);


// Get leave applications
//
// Retrieves leave applications for the specified tenant.
//
leave_application_dto_list_envelope_t*
LeaveApplicationsAPI_getLeaveApplicationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count leave applications
//
// Counts leave applications for the specified tenant.
//
int32_envelope_t*
LeaveApplicationsAPI_getLeaveApplicationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a leave application
//
// Partially updates an existing leave application for the specified tenant.
//
empty_envelope_t*
LeaveApplicationsAPI_patchLeaveApplicationAsync(apiClient_t *apiClient, char *tenantId, char *leaveApplicationId, char *api_version, char *x_api_version, list_t *operation);


// Update a leave application
//
// Updates an existing leave application for the specified tenant.
//
empty_envelope_t*
LeaveApplicationsAPI_updateLeaveApplicationAsync(apiClient_t *apiClient, char *tenantId, char *leaveApplicationId, char *api_version, char *x_api_version, leave_application_update_dto_t *leave_application_update_dto);


