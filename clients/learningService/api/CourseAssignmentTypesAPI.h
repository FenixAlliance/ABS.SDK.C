#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_assignment_type_create_dto.h"
#include "../model/course_assignment_type_dto.h"
#include "../model/course_assignment_type_dto_collection_query_parameters.h"
#include "../model/course_assignment_type_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/patch_operation.h"


// Create a course assignment type
//
// Creates a new course assignment type for the specified tenant.
//
void
CourseAssignmentTypesAPI_createCourseAssignmentTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_assignment_type_create_dto_t *course_assignment_type_create_dto);


// Delete a course assignment type
//
// Deletes a course assignment type by its ID.
//
void
CourseAssignmentTypesAPI_deleteCourseAssignmentTypeAsync(apiClient_t *apiClient, char *tenantId, char *assignmentTypeId, char *api_version, char *x_api_version);


// Get course assignment type by ID
//
// Retrieves a specific course assignment type by its ID.
//
course_assignment_type_dto_t*
CourseAssignmentTypesAPI_getCourseAssignmentTypeByIdAsync(apiClient_t *apiClient, char *assignmentTypeId, char *api_version, char *x_api_version);


// Get all course assignment types
//
// Retrieves all course assignment types for the specified tenant.
//
list_t*
CourseAssignmentTypesAPI_getCourseAssignmentTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_assignment_type_dto_collection_query_parameters_t *course_assignment_type_dto_collection_query_parameters);


// Get course assignment types count
//
// Returns the count of course assignment types for the specified tenant.
//
int*
CourseAssignmentTypesAPI_getCourseAssignmentTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_assignment_type_dto_collection_query_parameters_t *course_assignment_type_dto_collection_query_parameters);


// Patch a course assignment type
//
// Partially updates a course assignment type for the specified tenant.
//
empty_envelope_t*
CourseAssignmentTypesAPI_patchCourseAssignmentTypeAsync(apiClient_t *apiClient, char *tenantId, char *assignmentTypeId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a course assignment type
//
// Updates an existing course assignment type.
//
void
CourseAssignmentTypesAPI_updateCourseAssignmentTypeAsync(apiClient_t *apiClient, char *tenantId, char *assignmentTypeId, char *api_version, char *x_api_version, course_assignment_type_update_dto_t *course_assignment_type_update_dto);


