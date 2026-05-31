#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_grading_rubric_create_dto.h"
#include "../model/course_grading_rubric_dto.h"
#include "../model/course_grading_rubric_update_dto.h"
#include "../model/error_envelope.h"


// Create a course grading rubric
//
// Creates a new course grading rubric for the specified tenant.
//
void
CourseGradingRubricsAPI_createCourseGradingRubricAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_grading_rubric_create_dto_t *course_grading_rubric_create_dto);


// Delete a course grading rubric
//
// Deletes a course grading rubric by its ID.
//
void
CourseGradingRubricsAPI_deleteCourseGradingRubricAsync(apiClient_t *apiClient, char *tenantId, char *rubricId, char *api_version, char *x_api_version);


// Get course grading rubric by ID
//
// Retrieves a specific course grading rubric by its ID.
//
course_grading_rubric_dto_t*
CourseGradingRubricsAPI_getCourseGradingRubricByIdAsync(apiClient_t *apiClient, char *rubricId, char *api_version, char *x_api_version);


// Get all course grading rubrics
//
// Retrieves all course grading rubrics for the specified tenant.
//
list_t*
CourseGradingRubricsAPI_getCourseGradingRubricsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course grading rubrics count
//
// Returns the count of course grading rubrics for the specified tenant.
//
int*
CourseGradingRubricsAPI_getCourseGradingRubricsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course grading rubric
//
// Updates an existing course grading rubric.
//
void
CourseGradingRubricsAPI_updateCourseGradingRubricAsync(apiClient_t *apiClient, char *tenantId, char *rubricId, char *api_version, char *x_api_version, course_grading_rubric_update_dto_t *course_grading_rubric_update_dto);


