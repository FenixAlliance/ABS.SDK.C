#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/signature_dto.h"
#include "../model/signature_dto_list_envelope.h"


// Get signature by ID
//
// Retrieves a specific signature by its identifier.
//
signature_dto_t*
SignaturesAPI_getSignatureByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all signatures
//
// Retrieves all signatures for the specified tenant.
//
signature_dto_list_envelope_t*
SignaturesAPI_getSignaturesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get signatures count
//
// Returns the count of signatures for the specified tenant.
//
int32_envelope_t*
SignaturesAPI_getSignaturesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


