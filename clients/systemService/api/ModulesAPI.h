#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/module_list_envelope.h"
#include "../model/studio_module_list_envelope.h"


// Get all modules available on this suite server instance.
//
studio_module_list_envelope_t*
ModulesAPI_getAllModules(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get all modules available to a tenant user.
//
module_list_envelope_t*
ModulesAPI_getAvailableModules(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


