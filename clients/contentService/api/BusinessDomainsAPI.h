#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/business_domain_create_dto.h"
#include "../model/business_domain_dto_envelope.h"
#include "../model/business_domain_dto_list_envelope.h"
#include "../model/business_domain_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Register a business domain
//
// Registers a new (unverified) business domain for the tenant and issues a DNS TXT verification token.
//
empty_envelope_t*
BusinessDomainsAPI_createBusinessDomainAsync(apiClient_t *apiClient, char *tenantId, business_domain_create_dto_t *business_domain_create_dto, char *api_version, char *x_api_version);


// Delete a business domain
//
// Removes a business domain from the tenant.
//
empty_envelope_t*
BusinessDomainsAPI_deleteBusinessDomainAsync(apiClient_t *apiClient, char *tenantId, char *businessDomainId, char *api_version, char *x_api_version);


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


// Update a business domain
//
// Updates a business domain. Changing the host re-issues the verification token and clears verification.
//
empty_envelope_t*
BusinessDomainsAPI_updateBusinessDomainAsync(apiClient_t *apiClient, char *tenantId, char *businessDomainId, business_domain_update_dto_t *business_domain_update_dto, char *api_version, char *x_api_version);


// Verify a business domain
//
// Checks the domain's DNS TXT records for the verification token and marks the domain verified.
//
empty_envelope_t*
BusinessDomainsAPI_verifyBusinessDomainAsync(apiClient_t *apiClient, char *tenantId, char *businessDomainId, char *api_version, char *x_api_version);


