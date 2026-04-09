#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/log_dto_list_envelope.h"


// Get tenant logs
//
// Retrieves logs for the specified tenant.
//
log_dto_list_envelope_t*
LogsAPI_getLogsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get tenant logs count
//
// Retrieves the count of logs for the specified tenant.
//
int32_envelope_t*
LogsAPI_getLogsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


