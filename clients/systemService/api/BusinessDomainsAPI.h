#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/business_domain_dto_collection_query_parameters.h"
#include "../model/business_domain_dto_envelope.h"
#include "../model/business_domain_dto_list_envelope.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Delete a business domain
//
// Removes any business domain from the system, regardless of owning tenant.
//
empty_envelope_t*
BusinessDomainsAPI_deleteSystemBusinessDomain(apiClient_t *apiClient, char *businessDomainId, char *api_version, char *x_api_version);


// Retrieve a business domain by its ID
//
// Retrieve any business domain by its ID, regardless of owning tenant.
//
business_domain_dto_envelope_t*
BusinessDomainsAPI_getSystemBusinessDomainById(apiClient_t *apiClient, char *businessDomainId, char *api_version, char *x_api_version);


// Retrieve all business domains in the system
//
// Retrieve all registered business domains across every tenant (global administrators only).
//
business_domain_dto_list_envelope_t*
BusinessDomainsAPI_getSystemBusinessDomains(apiClient_t *apiClient, char *api_version, char *x_api_version, business_domain_dto_collection_query_parameters_t *business_domain_dto_collection_query_parameters);


// Get the count of all business domains in the system
//
// Get the count of all registered business domains across every tenant.
//
int32_envelope_t*
BusinessDomainsAPI_getSystemBusinessDomainsCount(apiClient_t *apiClient, char *api_version, char *x_api_version, business_domain_dto_collection_query_parameters_t *business_domain_dto_collection_query_parameters);


// Verify a business domain
//
// Checks the domain's DNS TXT records for the verification token and marks it verified.
//
empty_envelope_t*
BusinessDomainsAPI_verifySystemBusinessDomain(apiClient_t *apiClient, char *businessDomainId, char *api_version, char *x_api_version);


