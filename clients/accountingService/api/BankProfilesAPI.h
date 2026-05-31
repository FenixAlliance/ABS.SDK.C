#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/bank_profile_dto_list_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Get all bank profiles for a tenant
//
// Retrieves all bank profiles for the specified tenant using OData query options.
//
bank_profile_dto_list_envelope_t*
BankProfilesAPI_getBankProfiles(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get bank profiles count
//
// Returns the count of bank profiles for the specified tenant.
//
int32_envelope_t*
BankProfilesAPI_getBankProfilesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


