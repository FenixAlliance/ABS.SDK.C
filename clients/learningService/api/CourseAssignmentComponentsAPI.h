#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_assignment_component_create_dto.h"
#include "../model/course_assignment_component_dto.h"
#include "../model/course_assignment_component_update_dto.h"
#include "../model/error_envelope.h"


// Create a course assignment component
//
// Creates a new course assignment component for the specified tenant.
//
void
CourseAssignmentComponentsAPI_createCourseAssignmentComponentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_assignment_component_create_dto_t *course_assignment_component_create_dto);


// Delete a course assignment component
//
// Deletes a course assignment component by its ID.
//
void
CourseAssignmentComponentsAPI_deleteCourseAssignmentComponentAsync(apiClient_t *apiClient, char *tenantId, char *componentId, char *api_version, char *x_api_version);


// Get course assignment component by ID
//
// Retrieves a specific course assignment component by its ID.
//
course_assignment_component_dto_t*
CourseAssignmentComponentsAPI_getCourseAssignmentComponentByIdAsync(apiClient_t *apiClient, char *componentId, char *api_version, char *x_api_version);


// Get all course assignment components
//
// Retrieves all course assignment components for the specified tenant.
//
list_t*
CourseAssignmentComponentsAPI_getCourseAssignmentComponentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course assignment components count
//
// Returns the count of course assignment components for the specified tenant.
//
int*
CourseAssignmentComponentsAPI_getCourseAssignmentComponentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course assignment component
//
// Updates an existing course assignment component.
//
void
CourseAssignmentComponentsAPI_updateCourseAssignmentComponentAsync(apiClient_t *apiClient, char *tenantId, char *componentId, char *api_version, char *x_api_version, course_assignment_component_update_dto_t *course_assignment_component_update_dto);


