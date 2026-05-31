#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/payment_response.h"
#include "../model/response_status.h"


payment_response_t*
MigrationsAPI_apiV2GlobalSystemMigratePost(apiClient_t *apiClient, char *api_version, char *x_api_version);


