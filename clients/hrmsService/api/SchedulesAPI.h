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
#include "../model/schedule_create_dto.h"
#include "../model/schedule_dto_collection_query_parameters.h"
#include "../model/schedule_dto_envelope.h"
#include "../model/schedule_dto_list_envelope.h"
#include "../model/schedule_update_dto.h"


// Create a schedule
//
// Creates a new schedule for the specified tenant.
//
empty_envelope_t*
SchedulesAPI_createScheduleAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, schedule_create_dto_t *schedule_create_dto);


// Delete a schedule
//
// Deletes a schedule for the specified tenant.
//
empty_envelope_t*
SchedulesAPI_deleteScheduleAsync(apiClient_t *apiClient, char *tenantId, char *scheduleId, char *api_version, char *x_api_version);


// Get schedule by ID
//
// Retrieves a specific schedule by its identifier.
//
schedule_dto_envelope_t*
SchedulesAPI_getScheduleByIdAsync(apiClient_t *apiClient, char *tenantId, char *scheduleId, char *api_version, char *x_api_version);


// Get schedules
//
// Retrieves schedules for the specified tenant.
//
schedule_dto_list_envelope_t*
SchedulesAPI_getSchedulesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, schedule_dto_collection_query_parameters_t *schedule_dto_collection_query_parameters);


// Count schedules
//
// Counts schedules for the specified tenant.
//
int32_envelope_t*
SchedulesAPI_getSchedulesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, schedule_dto_collection_query_parameters_t *schedule_dto_collection_query_parameters);


// Patch a schedule
//
// Partially updates an existing schedule for the specified tenant.
//
empty_envelope_t*
SchedulesAPI_patchScheduleAsync(apiClient_t *apiClient, char *tenantId, char *scheduleId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a schedule
//
// Updates an existing schedule for the specified tenant.
//
empty_envelope_t*
SchedulesAPI_updateScheduleAsync(apiClient_t *apiClient, char *tenantId, char *scheduleId, char *api_version, char *x_api_version, schedule_update_dto_t *schedule_update_dto);


