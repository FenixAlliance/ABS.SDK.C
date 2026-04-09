#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/webhook_request_dto_list_envelope.h"


// Get all webhook requests
//
// Retrieves all webhook requests for the specified tenant.
//
webhook_request_dto_list_envelope_t*
WebhooksAPI_getWebhookRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get webhook requests count
//
// Retrieves the count of webhook requests for the specified tenant.
//
int32_envelope_t*
WebhooksAPI_getWebhookRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


