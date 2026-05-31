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
#include "../model/time_interval_create_dto.h"
#include "../model/time_interval_dto_envelope.h"
#include "../model/time_interval_dto_list_envelope.h"
#include "../model/time_interval_update_dto.h"


// Create a time interval
//
// Creates a new time interval for the specified tenant.
//
empty_envelope_t*
TimeIntervalsAPI_createTimeIntervalAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, time_interval_create_dto_t *time_interval_create_dto);


// Delete a time interval
//
// Deletes a time interval for the specified tenant.
//
empty_envelope_t*
TimeIntervalsAPI_deleteTimeIntervalAsync(apiClient_t *apiClient, char *tenantId, char *timeIntervalId, char *api_version, char *x_api_version);


// Get time interval by ID
//
// Retrieves a specific time interval by its identifier.
//
time_interval_dto_envelope_t*
TimeIntervalsAPI_getTimeIntervalByIdAsync(apiClient_t *apiClient, char *tenantId, char *timeIntervalId, char *api_version, char *x_api_version);


// Get time intervals
//
// Retrieves time intervals for the specified tenant.
//
time_interval_dto_list_envelope_t*
TimeIntervalsAPI_getTimeIntervalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count time intervals
//
// Counts time intervals for the specified tenant.
//
int32_envelope_t*
TimeIntervalsAPI_getTimeIntervalsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a time interval
//
// Updates an existing time interval for the specified tenant.
//
empty_envelope_t*
TimeIntervalsAPI_updateTimeIntervalAsync(apiClient_t *apiClient, char *tenantId, char *timeIntervalId, char *api_version, char *x_api_version, time_interval_update_dto_t *time_interval_update_dto);


