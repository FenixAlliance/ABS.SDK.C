#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/contact_dto_list_envelope.h"
#include "../model/error_envelope.h"


// Get all stock-related contacts
//
// Retrieves all business-owned contacts related to stock and logistics for the specified tenant.
//
contact_dto_list_envelope_t*
StockAPI_getContactsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


