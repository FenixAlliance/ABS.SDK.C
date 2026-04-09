#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_handout_create_dto.h"
#include "../model/course_handout_dto.h"
#include "../model/course_handout_update_dto.h"
#include "../model/error_envelope.h"


// Create a course handout
//
// Creates a new course handout for the specified tenant.
//
course_handout_dto_t*
CourseHandoutsAPI_createCourseHandoutAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_handout_create_dto_t *course_handout_create_dto);


// Delete a course handout
//
// Deletes a course handout by its ID.
//
void
CourseHandoutsAPI_deleteCourseHandoutAsync(apiClient_t *apiClient, char *tenantId, char *handoutId, char *api_version, char *x_api_version);


// Get course handout by ID
//
// Retrieves a specific course handout by its ID.
//
course_handout_dto_t*
CourseHandoutsAPI_getCourseHandoutByIdAsync(apiClient_t *apiClient, char *handoutId, char *api_version, char *x_api_version);


// Get all course handouts
//
// Retrieves all course handouts for the specified tenant.
//
list_t*
CourseHandoutsAPI_getCourseHandoutsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course handouts count
//
// Returns the count of course handouts for the specified tenant.
//
int*
CourseHandoutsAPI_getCourseHandoutsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course handout
//
// Updates an existing course handout.
//
course_handout_dto_t*
CourseHandoutsAPI_updateCourseHandoutAsync(apiClient_t *apiClient, char *tenantId, char *handoutId, char *api_version, char *x_api_version, course_handout_update_dto_t *course_handout_update_dto);


