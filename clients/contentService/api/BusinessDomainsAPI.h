#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/business_domain_dto_envelope.h"
#include "../model/business_domain_dto_list_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Get business domain by ID
//
// Retrieves a specific business domain.
//
business_domain_dto_envelope_t*
BusinessDomainsAPI_getBusinessDomainByIdAsync(apiClient_t *apiClient, char *tenantId, char *businessDomainId, char *api_version, char *x_api_version);


// Get business domains
//
// Retrieves business domains for the specified tenant.
//
business_domain_dto_list_envelope_t*
BusinessDomainsAPI_getBusinessDomainsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get business domains count
//
// Retrieves the count of business domains for the specified tenant.
//
int32_envelope_t*
BusinessDomainsAPI_getBusinessDomainsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


