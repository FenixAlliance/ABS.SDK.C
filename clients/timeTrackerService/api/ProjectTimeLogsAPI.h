#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/project_time_log_create_dto.h"
#include "../model/project_time_log_dto_envelope.h"
#include "../model/project_time_log_dto_list_envelope.h"
#include "../model/project_time_log_update_dto.h"


// Get the count of project period time logs
//
// Returns the total count of time logs for a specific project period with OData query support.
//
int32_envelope_t*
ProjectTimeLogsAPI_countProjectPeriodTimeLogsAsync(apiClient_t *apiClient, char *tenantId, char *projectPeriodId, char *api_version, char *x_api_version);


// Create a new project time log
//
// Creates a new project time log entry.
//
void
ProjectTimeLogsAPI_createProjectTimeLogAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, project_time_log_create_dto_t *project_time_log_create_dto);


// Delete a project time log
//
// Deletes a project time log entry.
//
void
ProjectTimeLogsAPI_deleteProjectTimeLogAsync(apiClient_t *apiClient, char *tenantId, char *timeLogId, char *api_version, char *x_api_version);


// Retrieve project period time logs
//
// Retrieves a list of time logs for a specific project period with OData query support.
//
project_time_log_dto_list_envelope_t*
ProjectTimeLogsAPI_getProjectPeriodTimeLogsAsync(apiClient_t *apiClient, char *tenantId, char *projectPeriodId, char *api_version, char *x_api_version);


// Retrieve a project time log by ID
//
// Retrieves a single project time log by its unique identifier.
//
project_time_log_dto_envelope_t*
ProjectTimeLogsAPI_getProjectTimeLogByIdAsync(apiClient_t *apiClient, char *timeLogId, char *tenantId, char *api_version, char *x_api_version);


// Retrieve time logs for a project
//
// Retrieves all time logs associated with the specified project.
//
project_time_log_dto_list_envelope_t*
ProjectTimeLogsAPI_getProjectTimeLogsAsync(apiClient_t *apiClient, char *projectId, char *tenantId, char *api_version, char *x_api_version);


// Retrieve time logs by responsible contact
//
// Retrieves time logs where the specified contact is the responsible party.
//
project_time_log_dto_list_envelope_t*
ProjectTimeLogsAPI_getProjectTimeLogsByResponsibleContactAsync(apiClient_t *apiClient, char *contactId, char *tenantId, char *api_version, char *x_api_version);


// Retrieve time logs created by a contact
//
// Retrieves time logs that were created by the specified contact.
//
project_time_log_dto_list_envelope_t*
ProjectTimeLogsAPI_getProjectTimeLogsCreatedByContactAsync(apiClient_t *apiClient, char *contactId, char *tenantId, char *api_version, char *x_api_version);


// Update a project time log
//
// Updates an existing project time log entry.
//
void
ProjectTimeLogsAPI_updateProjectTimeLogAsync(apiClient_t *apiClient, char *timeLogId, char *tenantId, char *api_version, char *x_api_version, project_time_log_update_dto_t *project_time_log_update_dto);


