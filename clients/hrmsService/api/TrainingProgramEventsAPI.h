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
#include "../model/patch_operation.h"
#include "../model/training_program_event_create_dto.h"
#include "../model/training_program_event_dto_collection_query_parameters.h"
#include "../model/training_program_event_dto_envelope.h"
#include "../model/training_program_event_dto_list_envelope.h"
#include "../model/training_program_event_update_dto.h"


// Create a training program event
//
// Creates a new training program event for the specified tenant.
//
empty_envelope_t*
TrainingProgramEventsAPI_createTrainingProgramEventAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, training_program_event_create_dto_t *training_program_event_create_dto);


// Delete a training program event
//
// Deletes a training program event for the specified tenant.
//
empty_envelope_t*
TrainingProgramEventsAPI_deleteTrainingProgramEventAsync(apiClient_t *apiClient, char *tenantId, char *eventId, char *api_version, char *x_api_version);


// Get training program event by ID
//
// Retrieves a specific training program event by its identifier.
//
training_program_event_dto_envelope_t*
TrainingProgramEventsAPI_getTrainingProgramEventByIdAsync(apiClient_t *apiClient, char *tenantId, char *eventId, char *api_version, char *x_api_version);


// Get training program events
//
// Retrieves training program events for the specified tenant.
//
training_program_event_dto_list_envelope_t*
TrainingProgramEventsAPI_getTrainingProgramEventsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, training_program_event_dto_collection_query_parameters_t *training_program_event_dto_collection_query_parameters);


// Count training program events
//
// Counts training program events for the specified tenant.
//
int32_envelope_t*
TrainingProgramEventsAPI_getTrainingProgramEventsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, training_program_event_dto_collection_query_parameters_t *training_program_event_dto_collection_query_parameters);


// Patch a training program event
//
// Partially updates an existing training program event for the specified tenant.
//
empty_envelope_t*
TrainingProgramEventsAPI_patchTrainingProgramEventAsync(apiClient_t *apiClient, char *tenantId, char *eventId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a training program event
//
// Updates an existing training program event for the specified tenant.
//
empty_envelope_t*
TrainingProgramEventsAPI_updateTrainingProgramEventAsync(apiClient_t *apiClient, char *tenantId, char *eventId, char *api_version, char *x_api_version, training_program_event_update_dto_t *training_program_event_update_dto);


