#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Get newsletter subscriptions count
//
// Returns the count of newsletter subscriptions for the specified tenant using OData query options.
//
int32_envelope_t*
NewsletterSubscriptionsAPI_getNewsletterSubscriptionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


