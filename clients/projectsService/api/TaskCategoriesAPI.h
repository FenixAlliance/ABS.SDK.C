#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/task_category_create_dto.h"
#include "../model/task_category_dto.h"
#include "../model/task_category_dto_list_envelope.h"
#include "../model/task_category_update_dto.h"


// Counts task categories
//
// Gets the count of task categories for the current tenant.
//
int32_envelope_t*
TaskCategoriesAPI_countTenantTaskCategoriesAsync(apiClient_t *apiClient, char *tenantId);


// Creates a new task category
//
// Creates a new task category for the current tenant.
//
task_category_dto_t*
TaskCategoriesAPI_createTaskCategoryAsync(apiClient_t *apiClient, char *tenantId, task_category_create_dto_t *task_category_create_dto);


// Deletes a task category
//
// Deletes the specified task category.
//
task_category_dto_t*
TaskCategoriesAPI_deleteTaskCategoryAsync(apiClient_t *apiClient, char *taskCategoryId, char *tenantId);


// Gets a task category by ID
//
// Retrieves the details of a task category using its unique identifier.
//
task_category_dto_t*
TaskCategoriesAPI_getTaskCategoryByIdAsync(apiClient_t *apiClient, char *taskCategoryId, char *tenantId);


// Retrieves task types for a category
//
// Gets all task types belonging to the specified task category.
//
task_category_dto_t*
TaskCategoriesAPI_getTaskCategoryTaskTypesAsync(apiClient_t *apiClient, char *taskCategoryId, char *tenantId);


// Retrieves all task categories
//
// Gets all task categories for the current tenant with OData support.
//
task_category_dto_list_envelope_t*
TaskCategoriesAPI_getTenantTaskCategoriesAsync(apiClient_t *apiClient, char *tenantId);


// Updates a task category
//
// Updates the specified task category.
//
task_category_dto_t*
TaskCategoriesAPI_updateTaskCategoryAsync(apiClient_t *apiClient, char *taskCategoryId, char *tenantId, task_category_update_dto_t *task_category_update_dto);


