#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/system_overview_dto_envelope.h"


// Get system overview information
//
// Returns runtime, memory, and entity count information for the system
//
system_overview_dto_envelope_t*
OverviewAPI_getSystemOverview(apiClient_t *apiClient, char *api_version, char *x_api_version);


