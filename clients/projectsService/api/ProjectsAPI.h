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
#include "../model/project_create_dto.h"
#include "../model/project_dto_envelope.h"
#include "../model/project_dto_list_envelope.h"
#include "../model/project_period_create_dto.h"
#include "../model/project_period_dto_list_envelope.h"
#include "../model/project_period_update_dto.h"
#include "../model/project_task_create_dto.h"
#include "../model/project_task_dto_list_envelope.h"
#include "../model/project_task_update_dto.h"
#include "../model/project_time_log_dto_list_envelope.h"
#include "../model/project_update_dto.h"
#include "../model/task_category_dto_list_envelope.h"


// Creates a new project
//
// Creates a new project for the current tenant.
//
empty_envelope_t*
ProjectsAPI_createProjectAsync(apiClient_t *apiClient, char *tenantId, project_create_dto_t *project_create_dto);


// Creates a project period
//
// Creates a new period for the specified project.
//
empty_envelope_t*
ProjectsAPI_createProjectPeriodAsync(apiClient_t *apiClient, char *projectId, char *tenantId, project_period_create_dto_t *project_period_create_dto);


// Creates a project task
//
// Creates a new task for the specified project.
//
empty_envelope_t*
ProjectsAPI_createProjectTaskAsync(apiClient_t *apiClient, char *projectId, char *tenantId, project_task_create_dto_t *project_task_create_dto);


// Deletes a project
//
// Deletes the specified project.
//
empty_envelope_t*
ProjectsAPI_deleteProjectAsync(apiClient_t *apiClient, char *projectId, char *tenantId);


// Deletes a project period
//
// Deletes the specified period from a project.
//
empty_envelope_t*
ProjectsAPI_deleteProjectPeriodAsync(apiClient_t *apiClient, char *projectId, char *projectPeriodId, char *tenantId);


// Deletes a project task
//
// Deletes the specified task from a project.
//
empty_envelope_t*
ProjectsAPI_deleteProjectTaskAsync(apiClient_t *apiClient, char *tenantId, char *projectId, char *projectTaskId);


// Gets a project by ID
//
// Retrieves the details of a project using its unique identifier.
//
project_dto_envelope_t*
ProjectsAPI_getProjectByIdAsync(apiClient_t *apiClient, char *projectId, char *tenantId);


// Retrieves project periods
//
// Gets all periods for a specific project.
//
project_period_dto_list_envelope_t*
ProjectsAPI_getProjectPeriodsAsync(apiClient_t *apiClient, char *projectId, char *tenantId);


// Retrieves project task categories
//
// Gets all task categories for a specific project with OData support.
//
task_category_dto_list_envelope_t*
ProjectsAPI_getProjectTaskCategoriesAsync(apiClient_t *apiClient, char *projectId, char *tenantId);


// Counts project task categories
//
// Gets the count of task categories for a specific project.
//
int32_envelope_t*
ProjectsAPI_getProjectTaskCategoriesCountAsync(apiClient_t *apiClient, char *projectId, char *tenantId);


// Retrieves project tasks
//
// Gets all tasks for a specific project with OData support.
//
project_task_dto_list_envelope_t*
ProjectsAPI_getProjectTasksAsync(apiClient_t *apiClient, char *projectId, char *tenantId);


// Counts project tasks
//
// Gets the count of tasks for a specific project.
//
int32_envelope_t*
ProjectsAPI_getProjectTasksCountAsync(apiClient_t *apiClient, char *projectId, char *tenantId);


// Retrieves project time logs
//
// Gets all time log entries for a specific project with OData support.
//
project_time_log_dto_list_envelope_t*
ProjectsAPI_getProjectTimeLogsAsync(apiClient_t *apiClient, char *projectId, char *tenantId);


// Counts project time logs
//
// Gets the count of time log entries for a specific project.
//
int32_envelope_t*
ProjectsAPI_getProjectTimeLogsCountAsync(apiClient_t *apiClient, char *projectId, char *tenantId);


// Retrieves all projects
//
// Gets all projects for the current tenant with OData support.
//
project_dto_list_envelope_t*
ProjectsAPI_getProjectsByTenantIdAsync(apiClient_t *apiClient, char *tenantId);


// Counts projects
//
// Gets the count of projects for the current tenant.
//
int32_envelope_t*
ProjectsAPI_getProjectsCountByTenantIdAsync(apiClient_t *apiClient, char *tenantId);


// Updates a project
//
// Updates the specified project.
//
empty_envelope_t*
ProjectsAPI_updateProjectAsync(apiClient_t *apiClient, char *projectId, char *tenantId, project_update_dto_t *project_update_dto);


// Updates a project period
//
// Updates the specified period for a project.
//
empty_envelope_t*
ProjectsAPI_updateProjectPeriodAsync(apiClient_t *apiClient, char *projectId, char *projectPeriodId, char *tenantId, project_period_update_dto_t *project_period_update_dto);


// Updates a project task
//
// Updates the specified task in a project.
//
empty_envelope_t*
ProjectsAPI_updateProjectTaskAsync(apiClient_t *apiClient, char *projectId, char *projectTaskId, char *tenantId, project_task_update_dto_t *project_task_update_dto);


