#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/fiscal_authority_create_dto.h"
#include "../model/fiscal_authority_dto_envelope.h"
#include "../model/fiscal_authority_dto_list_envelope.h"
#include "../model/fiscal_authority_update_dto.h"
#include "../model/int32_envelope.h"


// Create a fiscal authority
//
// Creates a new fiscal authority for the specified tenant.
//
empty_envelope_t*
FiscalAuthoritiesAPI_createFiscalAuthority(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, fiscal_authority_create_dto_t *fiscal_authority_create_dto);


// Delete a fiscal authority
//
// Deletes a fiscal authority identified by its unique identifier.
//
empty_envelope_t*
FiscalAuthoritiesAPI_deleteFiscalAuthority(apiClient_t *apiClient, char *tenantId, char *authorityId, char *api_version, char *x_api_version);


// Get fiscal authorities
//
// Retrieves all fiscal authorities for the specified tenant using OData query options.
//
fiscal_authority_dto_list_envelope_t*
FiscalAuthoritiesAPI_getFiscalAuthorities(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get fiscal authorities count
//
// Returns the total count of fiscal authorities for the specified tenant.
//
int32_envelope_t*
FiscalAuthoritiesAPI_getFiscalAuthoritiesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get fiscal authority by ID
//
// Retrieves a specific fiscal authority by its unique identifier.
//
fiscal_authority_dto_envelope_t*
FiscalAuthoritiesAPI_getFiscalAuthority(apiClient_t *apiClient, char *tenantId, char *authorityId, char *api_version, char *x_api_version);


// Update a fiscal authority
//
// Updates an existing fiscal authority identified by its unique identifier.
//
empty_envelope_t*
FiscalAuthoritiesAPI_updateFiscalAuthority(apiClient_t *apiClient, char *tenantId, char *authorityId, char *api_version, char *x_api_version, fiscal_authority_update_dto_t *fiscal_authority_update_dto);


