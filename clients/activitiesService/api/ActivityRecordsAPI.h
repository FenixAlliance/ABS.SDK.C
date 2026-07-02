#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Count activity records
//
// Returns the tenant-wide count of activity records across all feeds owned by the tenant.
//
int32_envelope_t*
ActivityRecordsAPI_getActivityRecordsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


