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
#include "../model/training_program_create_dto.h"
#include "../model/training_program_dto_envelope.h"
#include "../model/training_program_dto_list_envelope.h"
#include "../model/training_program_update_dto.h"


// Create a training program
//
// Creates a new training program for the specified tenant.
//
empty_envelope_t*
TrainingProgramsAPI_createTrainingProgramAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, training_program_create_dto_t *training_program_create_dto);


// Delete a training program
//
// Deletes a training program for the specified tenant.
//
empty_envelope_t*
TrainingProgramsAPI_deleteTrainingProgramAsync(apiClient_t *apiClient, char *tenantId, char *programId, char *api_version, char *x_api_version);


// Get training program by ID
//
// Retrieves a specific training program by its identifier.
//
training_program_dto_envelope_t*
TrainingProgramsAPI_getTrainingProgramByIdAsync(apiClient_t *apiClient, char *tenantId, char *programId, char *api_version, char *x_api_version);


// Get training programs
//
// Retrieves training programs for the specified tenant.
//
training_program_dto_list_envelope_t*
TrainingProgramsAPI_getTrainingProgramsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count training programs
//
// Counts training programs for the specified tenant.
//
int32_envelope_t*
TrainingProgramsAPI_getTrainingProgramsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a training program
//
// Updates an existing training program for the specified tenant.
//
empty_envelope_t*
TrainingProgramsAPI_updateTrainingProgramAsync(apiClient_t *apiClient, char *tenantId, char *programId, char *api_version, char *x_api_version, training_program_update_dto_t *training_program_update_dto);


