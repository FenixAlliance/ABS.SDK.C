#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ai_provider_dto_list_envelope.h"
#include "../model/error_envelope.h"


// Get the available AI providers
//
// Returns every AI provider key this instance has a registered adapter for. The set is a property of the deployment, so it is not tenant-scoped; what varies per tenant is the credential for a provider, which is never returned here.
//
ai_provider_dto_list_envelope_t*
AiProvidersAPI_getAiProvidersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


