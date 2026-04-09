#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"


// Get authenticated resource message
//
// Returns a message confirming the authenticated user's identity. Requires the 'abs_api' scope.
//
void
ResourceAPI_getMessage(apiClient_t *apiClient, char *api_version, char *x_api_version);


