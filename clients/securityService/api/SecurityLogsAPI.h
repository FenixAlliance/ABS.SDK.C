#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/business_security_log_dto_list_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Get business security logs
//
// Retrieves security logs for the specified tenant.
//
business_security_log_dto_list_envelope_t*
SecurityLogsAPI_getSecurityLogsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get business security logs count
//
// Retrieves the count of security logs for the specified tenant.
//
int32_envelope_t*
SecurityLogsAPI_getSecurityLogsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


