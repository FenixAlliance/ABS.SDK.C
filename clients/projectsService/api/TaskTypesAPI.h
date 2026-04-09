#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/task_type_create_dto.h"
#include "../model/task_type_dto.h"
#include "../model/task_type_update_dto.h"


// Creates a new task type
//
// Creates a new task type for the current tenant.
//
task_type_dto_t*
TaskTypesAPI_createTaskTypeAsync(apiClient_t *apiClient, char *tenantId, task_type_create_dto_t *task_type_create_dto);


// Deletes a task type
//
// Deletes the specified task type.
//
task_type_dto_t*
TaskTypesAPI_deleteTaskTypeAsync(apiClient_t *apiClient, char *taskTypeId, char *tenantId);


// Gets a task type by ID
//
// Retrieves the details of a task type using its unique identifier.
//
task_type_dto_t*
TaskTypesAPI_getTaskTypeByIdAsync(apiClient_t *apiClient, char *taskTypeId, char *tenantId);


// Updates a task type
//
// Updates the specified task type.
//
task_type_dto_t*
TaskTypesAPI_updateTaskTypeAsync(apiClient_t *apiClient, char *taskTypeId, char *tenantId, task_type_update_dto_t *task_type_update_dto);


