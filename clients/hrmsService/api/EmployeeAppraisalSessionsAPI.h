#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/employee_appraisal_session_create_dto.h"
#include "../model/employee_appraisal_session_dto_collection_query_parameters.h"
#include "../model/employee_appraisal_session_dto_envelope.h"
#include "../model/employee_appraisal_session_dto_list_envelope.h"
#include "../model/employee_appraisal_session_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/patch_operation.h"


// Create an employee appraisal session
//
// Creates a new employee appraisal session for the specified tenant.
//
empty_envelope_t*
EmployeeAppraisalSessionsAPI_createEmployeeAppraisalSessionAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, employee_appraisal_session_create_dto_t *employee_appraisal_session_create_dto);


// Delete an employee appraisal session
//
// Deletes an employee appraisal session for the specified tenant.
//
empty_envelope_t*
EmployeeAppraisalSessionsAPI_deleteEmployeeAppraisalSessionAsync(apiClient_t *apiClient, char *tenantId, char *sessionId, char *api_version, char *x_api_version);


// Get employee appraisal session by ID
//
// Retrieves a specific employee appraisal session by its identifier.
//
employee_appraisal_session_dto_envelope_t*
EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionByIdAsync(apiClient_t *apiClient, char *tenantId, char *sessionId, char *api_version, char *x_api_version);


// Get employee appraisal sessions
//
// Retrieves employee appraisal sessions for the specified tenant.
//
employee_appraisal_session_dto_list_envelope_t*
EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, employee_appraisal_session_dto_collection_query_parameters_t *employee_appraisal_session_dto_collection_query_parameters);


// Count employee appraisal sessions
//
// Counts employee appraisal sessions for the specified tenant.
//
int32_envelope_t*
EmployeeAppraisalSessionsAPI_getEmployeeAppraisalSessionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, employee_appraisal_session_dto_collection_query_parameters_t *employee_appraisal_session_dto_collection_query_parameters);


// Patch an employee appraisal session
//
// Partially updates an existing employee appraisal session for the specified tenant.
//
empty_envelope_t*
EmployeeAppraisalSessionsAPI_patchEmployeeAppraisalSessionAsync(apiClient_t *apiClient, char *tenantId, char *sessionId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update an employee appraisal session
//
// Updates an existing employee appraisal session for the specified tenant.
//
empty_envelope_t*
EmployeeAppraisalSessionsAPI_updateEmployeeAppraisalSessionAsync(apiClient_t *apiClient, char *tenantId, char *sessionId, char *api_version, char *x_api_version, employee_appraisal_session_update_dto_t *employee_appraisal_session_update_dto);


