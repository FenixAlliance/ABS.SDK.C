#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/ip_lookup_dto_envelope.h"
#include "../model/ip_lookup_dto_list_envelope.h"


// Delete a system IP lookup
//
// Delete a system IP lookup by its ID
//
empty_envelope_t*
IPLookupsAPI_deleteSystemIPLookup(apiClient_t *apiClient, char *ipLookupId, char *api_version, char *x_api_version);


// Retrieve a single system IP lookup by its ID
//
// Retrieve a single system IP lookup by its ID
//
ip_lookup_dto_envelope_t*
IPLookupsAPI_getSystemIPLookupById(apiClient_t *apiClient, char *ipLookupId, char *api_version, char *x_api_version);


// Retrieve a list of system IP lookups
//
// Retrieve a list of all IP lookups in the system
//
ip_lookup_dto_list_envelope_t*
IPLookupsAPI_getSystemIPLookups(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the count of system IP lookups
//
// Get the count of all IP lookups in the system
//
int32_envelope_t*
IPLookupsAPI_getSystemIPLookupsCount(apiClient_t *apiClient, char *api_version, char *x_api_version);


