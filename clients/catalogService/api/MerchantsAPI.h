#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/merchant_dto_envelope.h"
#include "../model/merchant_dto_list_envelope.h"


// Get merchant by ID
//
// Retrieves a merchant by its unique identifier.
//
merchant_dto_envelope_t*
MerchantsAPI_getMerchantById(apiClient_t *apiClient, char *merchantId, char *api_version, char *x_api_version);


// Get all merchants
//
// Retrieves all merchants, optionally filtered by OData query options.
//
merchant_dto_list_envelope_t*
MerchantsAPI_getMerchants(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Count merchants
//
// Counts the number of merchants, optionally filtered by OData query options.
//
int32_envelope_t*
MerchantsAPI_getMerchantsCount(apiClient_t *apiClient, char *api_version, char *x_api_version);


