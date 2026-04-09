#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_unit_create_dto.h"
#include "../model/course_unit_dto.h"
#include "../model/course_unit_update_dto.h"
#include "../model/error_envelope.h"


// Create a new course unit
//
// Creates a new course unit for the specified tenant.
//
void
CourseUnitsAPI_createCourseUnitAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_unit_create_dto_t *course_unit_create_dto);


// Delete a course unit
//
// Deletes a course unit for the specified tenant.
//
void
CourseUnitsAPI_deleteCourseUnitAsync(apiClient_t *apiClient, char *tenantId, char *unitId, char *api_version, char *x_api_version);


// Get course unit by ID
//
// Retrieves a specific course unit by its ID.
//
course_unit_dto_t*
CourseUnitsAPI_getCourseUnitByIdAsync(apiClient_t *apiClient, char *unitId, char *api_version, char *x_api_version);


// Get all course units
//
// Retrieves all course units for the specified tenant.
//
list_t*
CourseUnitsAPI_getCourseUnitsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course units count
//
// Returns the count of course units for the specified tenant.
//
int*
CourseUnitsAPI_getCourseUnitsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course unit
//
// Updates an existing course unit for the specified tenant.
//
void
CourseUnitsAPI_updateCourseUnitAsync(apiClient_t *apiClient, char *tenantId, char *unitId, char *api_version, char *x_api_version, course_unit_update_dto_t *course_unit_update_dto);


