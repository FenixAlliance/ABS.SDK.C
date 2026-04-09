#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"


// Get margin details by ID
//
// Retrieves the details of a specific sales margin by its ID.
//
void
MarginsAPI_getQuoteAsync(apiClient_t *apiClient, char *marginId, char *api_version, char *x_api_version);


