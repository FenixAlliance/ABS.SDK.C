#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_assignment_create_dto.h"
#include "../model/course_assignment_dto.h"
#include "../model/course_assignment_update_dto.h"
#include "../model/error_envelope.h"


// Create a new course assignment
//
// Creates a new course assignment for the specified tenant.
//
void
CourseAssignmentsAPI_createCourseAssignmentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_assignment_create_dto_t *course_assignment_create_dto);


// Delete a course assignment
//
// Deletes a course assignment for the specified tenant.
//
void
CourseAssignmentsAPI_deleteCourseAssignmentAsync(apiClient_t *apiClient, char *tenantId, char *assignmentId, char *api_version, char *x_api_version);


// Get course assignment by ID
//
// Retrieves a specific course assignment by its ID.
//
course_assignment_dto_t*
CourseAssignmentsAPI_getCourseAssignmentByIdAsync(apiClient_t *apiClient, char *assignmentId, char *api_version, char *x_api_version);


// Get all course assignments
//
// Retrieves all course assignments for the specified tenant.
//
list_t*
CourseAssignmentsAPI_getCourseAssignmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course assignments count
//
// Returns the count of course assignments for the specified tenant.
//
int*
CourseAssignmentsAPI_getCourseAssignmentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course assignment
//
// Updates an existing course assignment for the specified tenant.
//
void
CourseAssignmentsAPI_updateCourseAssignmentAsync(apiClient_t *apiClient, char *tenantId, char *assignmentId, char *api_version, char *x_api_version, course_assignment_update_dto_t *course_assignment_update_dto);


