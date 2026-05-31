#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/average_dto_envelope.h"
#include "../model/count_dto_envelope.h"
#include "../model/course_completion_certificate_dto_i_read_only_list_envelope.h"
#include "../model/course_dto_i_read_only_list_envelope.h"
#include "../model/course_enrollment_dto_i_read_only_list_envelope.h"
#include "../model/error_envelope.h"
#include "../model/instructor_profile_dto_i_read_only_list_envelope.h"
#include "../model/student_profile_dto_i_read_only_list_envelope.h"


// Get current user's average score
//
average_dto_envelope_t*
MeAPI_getMyAverageScoreAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's completion certificates
//
course_completion_certificate_dto_i_read_only_list_envelope_t*
MeAPI_getMyCertificatesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's certificates count
//
int*
MeAPI_getMyCertificatesCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's course enrollments
//
course_enrollment_dto_i_read_only_list_envelope_t*
MeAPI_getMyEnrollmentsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's enrollment count
//
int*
MeAPI_getMyEnrollmentsCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's completed hours
//
count_dto_envelope_t*
MeAPI_getMyHoursCompletedAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's instructor courses
//
course_dto_i_read_only_list_envelope_t*
MeAPI_getMyInstructorCoursesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's instructor courses count
//
int*
MeAPI_getMyInstructorCoursesCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's instructor profiles
//
instructor_profile_dto_i_read_only_list_envelope_t*
MeAPI_getMyInstructorProfilesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's instructor profiles count
//
int*
MeAPI_getMyInstructorProfilesCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's pending task count
//
count_dto_envelope_t*
MeAPI_getMyPendingTaskCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's enrolled courses
//
course_dto_i_read_only_list_envelope_t*
MeAPI_getMyStudentCoursesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's enrolled courses count
//
int*
MeAPI_getMyStudentCoursesCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's student profiles
//
student_profile_dto_i_read_only_list_envelope_t*
MeAPI_getMyStudentProfilesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get current user's student profiles count
//
int*
MeAPI_getMyStudentProfilesCountAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


