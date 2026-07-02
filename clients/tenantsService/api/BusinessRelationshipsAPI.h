#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Get business relationships count
//
// Returns the count of child business relationships owned by the specified parent tenant.
//
int32_envelope_t*
BusinessRelationshipsAPI_getBusinessRelationshipsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


