#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_enrollment_create_dto.h"
#include "../model/course_enrollment_dto.h"
#include "../model/course_enrollment_update_dto.h"
#include "../model/error_envelope.h"


// Create a new course enrollment
//
// Creates a new course enrollment for the specified tenant.
//
void
CourseEnrollmentsAPI_createCourseEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_enrollment_create_dto_t *course_enrollment_create_dto);


// Delete a course enrollment
//
// Deletes a course enrollment for the specified tenant.
//
void
CourseEnrollmentsAPI_deleteCourseEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *courseEnrollmentId, char *api_version, char *x_api_version);


// Get course enrollment by ID
//
// Retrieves a specific course enrollment by its ID.
//
course_enrollment_dto_t*
CourseEnrollmentsAPI_getCourseEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *courseEnrollmentId, char *api_version, char *x_api_version);


// Get all course enrollments
//
// Retrieves all course enrollments for the specified tenant.
//
list_t*
CourseEnrollmentsAPI_getEnrollmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course enrollments count
//
// Returns the count of course enrollments for the specified tenant.
//
int*
CourseEnrollmentsAPI_getEnrollmentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get enrollments by student
//
// Retrieves all enrollments for a specific student.
//
list_t*
CourseEnrollmentsAPI_getStudentCourseEnrollmentsAsync(apiClient_t *apiClient, char *tenantId, char *studentProfileId, char *api_version, char *x_api_version);


// Update a course enrollment
//
// Updates an existing course enrollment for the specified tenant.
//
void
CourseEnrollmentsAPI_updateCourseEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *courseEnrollmentId, char *api_version, char *x_api_version, course_enrollment_update_dto_t *course_enrollment_update_dto);


