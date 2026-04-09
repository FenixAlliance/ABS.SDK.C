#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_cohort_create_dto.h"
#include "../model/course_cohort_dto.h"
#include "../model/course_cohort_update_dto.h"
#include "../model/error_envelope.h"


// Create a new course cohort
//
// Creates a new course cohort for the specified tenant.
//
void
CourseCohortsAPI_createCourseCohortAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_cohort_create_dto_t *course_cohort_create_dto);


// Delete a course cohort
//
// Deletes a course cohort for the specified tenant.
//
void
CourseCohortsAPI_deleteCourseCohortAsync(apiClient_t *apiClient, char *tenantId, char *cohortId, char *api_version, char *x_api_version);


// Get course cohort by ID
//
// Retrieves a specific course cohort by its ID.
//
course_cohort_dto_t*
CourseCohortsAPI_getCourseCohortByIdAsync(apiClient_t *apiClient, char *cohortId, char *api_version, char *x_api_version);


// Get all course cohorts
//
// Retrieves all course cohorts for the specified tenant.
//
list_t*
CourseCohortsAPI_getCourseCohortsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course cohorts count
//
// Returns the count of course cohorts for the specified tenant.
//
int*
CourseCohortsAPI_getCourseCohortsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course cohort
//
// Updates an existing course cohort for the specified tenant.
//
void
CourseCohortsAPI_updateCourseCohortAsync(apiClient_t *apiClient, char *tenantId, char *cohortId, char *api_version, char *x_api_version, course_cohort_update_dto_t *course_cohort_update_dto);


