#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"


// Get and store antiforgery tokens
//
// Generates antiforgery tokens and stores them in the current HTTP context.
//
void
AntiforgeryAPI_getAndStoreTokens(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Validate antiforgery request
//
// Validates whether the current HTTP request contains a valid antiforgery token.
//
void
AntiforgeryAPI_isRequestValidAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


