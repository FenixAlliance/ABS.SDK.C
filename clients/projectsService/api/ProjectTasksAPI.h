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
#include "../model/operation.h"
#include "../model/project_task_create_dto.h"
#include "../model/project_task_dto_envelope.h"
#include "../model/project_task_dto_list_envelope.h"
#include "../model/project_task_update_dto.h"


// Create a project task
//
// Creates a new project task.
//
empty_envelope_t*
ProjectTasksAPI_createProjectTaskAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, project_task_create_dto_t *project_task_create_dto);


// Delete a project task
//
// Deletes a project task.
//
empty_envelope_t*
ProjectTasksAPI_deleteProjectTaskAsync(apiClient_t *apiClient, char *tenantId, char *projectTaskId, char *api_version, char *x_api_version);


// Get project task by ID
//
// Retrieves a specific project task.
//
project_task_dto_envelope_t*
ProjectTasksAPI_getProjectTaskByIdAsync(apiClient_t *apiClient, char *tenantId, char *projectTaskId, char *api_version, char *x_api_version);


// Get all project tasks
//
// Retrieves all project tasks for the specified tenant.
//
project_task_dto_list_envelope_t*
ProjectTasksAPI_getProjectTasksAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get project tasks count
//
// Returns the count of project tasks for the specified tenant.
//
int32_envelope_t*
ProjectTasksAPI_getProjectTasksCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a project task
//
// Partially updates an existing project task.
//
empty_envelope_t*
ProjectTasksAPI_patchProjectTaskAsync(apiClient_t *apiClient, char *tenantId, char *projectTaskId, char *api_version, char *x_api_version, list_t *operation);


// Update a project task
//
// Updates an existing project task.
//
empty_envelope_t*
ProjectTasksAPI_updateProjectTaskAsync(apiClient_t *apiClient, char *tenantId, char *projectTaskId, char *api_version, char *x_api_version, project_task_update_dto_t *project_task_update_dto);


