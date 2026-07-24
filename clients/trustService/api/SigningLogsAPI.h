#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/signing_log_dto.h"
#include "../model/signing_log_dto_list_envelope.h"


// Get signing log by ID
//
// Retrieves a specific signing log by its identifier.
//
signing_log_dto_t*
SigningLogsAPI_getSigningLogByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all signing logs
//
// Retrieves all signing logs for the specified tenant.
//
signing_log_dto_list_envelope_t*
SigningLogsAPI_getSigningLogsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get signing logs count
//
// Returns the count of signing logs for the specified tenant.
//
int32_envelope_t*
SigningLogsAPI_getSigningLogsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


