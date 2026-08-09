#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_problem_set_create_dto.h"
#include "../model/course_problem_set_dto.h"
#include "../model/course_problem_set_dto_collection_query_parameters.h"
#include "../model/course_problem_set_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/patch_operation.h"


// Create a new course problem set
//
// Creates a new course problem set for the specified tenant.
//
void
CourseProblemSetsAPI_createCourseProblemSetAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_problem_set_create_dto_t *course_problem_set_create_dto);


// Delete a course problem set
//
// Deletes a course problem set for the specified tenant.
//
void
CourseProblemSetsAPI_deleteCourseProblemSetAsync(apiClient_t *apiClient, char *tenantId, char *problemSetId, char *api_version, char *x_api_version);


// Get course problem set by ID
//
// Retrieves a specific course problem set by its ID.
//
course_problem_set_dto_t*
CourseProblemSetsAPI_getCourseProblemSetByIdAsync(apiClient_t *apiClient, char *problemSetId, char *api_version, char *x_api_version);


// Get all course problem sets
//
// Retrieves all course problem sets for the specified tenant.
//
list_t*
CourseProblemSetsAPI_getCourseProblemSetsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_problem_set_dto_collection_query_parameters_t *course_problem_set_dto_collection_query_parameters);


// Get course problem sets count
//
// Returns the count of course problem sets for the specified tenant.
//
int*
CourseProblemSetsAPI_getCourseProblemSetsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_problem_set_dto_collection_query_parameters_t *course_problem_set_dto_collection_query_parameters);


// Patch a course problem set
//
// Partially updates a course problem set for the specified tenant.
//
empty_envelope_t*
CourseProblemSetsAPI_patchCourseProblemSetAsync(apiClient_t *apiClient, char *tenantId, char *problemSetId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a course problem set
//
// Updates an existing course problem set for the specified tenant.
//
void
CourseProblemSetsAPI_updateCourseProblemSetAsync(apiClient_t *apiClient, char *tenantId, char *problemSetId, char *api_version, char *x_api_version, course_problem_set_update_dto_t *course_problem_set_update_dto);


