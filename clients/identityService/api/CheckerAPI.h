#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"


// Check if user is authenticated
//
// Returns whether the current user is authenticated.
//
int*
CheckerAPI_isAuthenticated(apiClient_t *apiClient, char *api_version, char *x_api_version);


