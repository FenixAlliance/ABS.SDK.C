#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_unit_component_create_dto.h"
#include "../model/course_unit_component_dto.h"
#include "../model/course_unit_component_update_dto.h"
#include "../model/error_envelope.h"


// Create a new course unit component
//
// Creates a new course unit component for the specified tenant.
//
void
CourseUnitComponentsAPI_createCourseUnitComponentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_unit_component_create_dto_t *course_unit_component_create_dto);


// Delete a course unit component
//
// Deletes a course unit component for the specified tenant.
//
void
CourseUnitComponentsAPI_deleteCourseUnitComponentAsync(apiClient_t *apiClient, char *tenantId, char *componentId, char *api_version, char *x_api_version);


// Get course unit component by ID
//
// Retrieves a specific course unit component by its ID.
//
course_unit_component_dto_t*
CourseUnitComponentsAPI_getCourseUnitComponentByIdAsync(apiClient_t *apiClient, char *componentId, char *api_version, char *x_api_version);


// Get all course unit components
//
// Retrieves all course unit components for the specified tenant.
//
list_t*
CourseUnitComponentsAPI_getCourseUnitComponentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course unit components count
//
// Returns the count of course unit components for the specified tenant.
//
int*
CourseUnitComponentsAPI_getCourseUnitComponentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course unit component
//
// Updates an existing course unit component for the specified tenant.
//
void
CourseUnitComponentsAPI_updateCourseUnitComponentAsync(apiClient_t *apiClient, char *tenantId, char *componentId, char *api_version, char *x_api_version, course_unit_component_update_dto_t *course_unit_component_update_dto);


