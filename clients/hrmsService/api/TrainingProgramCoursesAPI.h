#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/operation.h"
#include "../model/training_program_course_create_dto.h"
#include "../model/training_program_course_dto_envelope.h"
#include "../model/training_program_course_dto_list_envelope.h"
#include "../model/training_program_course_update_dto.h"


// Create a training program course
//
// Creates a new training program course for the specified tenant.
//
empty_envelope_t*
TrainingProgramCoursesAPI_createTrainingProgramCourseAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, training_program_course_create_dto_t *training_program_course_create_dto);


// Delete a training program course
//
// Deletes a training program course for the specified tenant.
//
empty_envelope_t*
TrainingProgramCoursesAPI_deleteTrainingProgramCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version);


// Get training program course by ID
//
// Retrieves a specific training program course by its identifier.
//
training_program_course_dto_envelope_t*
TrainingProgramCoursesAPI_getTrainingProgramCourseByIdAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version);


// Get training program courses
//
// Retrieves training program courses for the specified tenant.
//
training_program_course_dto_list_envelope_t*
TrainingProgramCoursesAPI_getTrainingProgramCoursesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count training program courses
//
// Counts training program courses for the specified tenant.
//
int32_envelope_t*
TrainingProgramCoursesAPI_getTrainingProgramCoursesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a training program course
//
// Partially updates an existing training program course for the specified tenant.
//
empty_envelope_t*
TrainingProgramCoursesAPI_patchTrainingProgramCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version, list_t *operation);


// Update a training program course
//
// Updates an existing training program course for the specified tenant.
//
empty_envelope_t*
TrainingProgramCoursesAPI_updateTrainingProgramCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version, training_program_course_update_dto_t *training_program_course_update_dto);


