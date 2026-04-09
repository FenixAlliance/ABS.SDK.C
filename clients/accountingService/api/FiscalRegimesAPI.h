#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/fiscal_regime_create_dto.h"
#include "../model/fiscal_regime_dto_envelope.h"
#include "../model/fiscal_regime_dto_list_envelope.h"
#include "../model/fiscal_regime_update_dto.h"
#include "../model/int32_envelope.h"


// Create a fiscal regime
//
// Creates a new fiscal regime for a fiscal authority.
//
empty_envelope_t*
FiscalRegimesAPI_createFiscalRegime(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, fiscal_regime_create_dto_t *fiscal_regime_create_dto);


// Delete a fiscal regime
//
// Deletes a fiscal regime identified by its unique identifier.
//
empty_envelope_t*
FiscalRegimesAPI_deleteFiscalRegime(apiClient_t *apiClient, tenantId, char *regimeId, char *api_version, char *x_api_version);


// Get fiscal regime by ID
//
// Retrieves a specific fiscal regime by its unique identifier.
//
fiscal_regime_dto_envelope_t*
FiscalRegimesAPI_getFiscalRegime(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *regimeId, char *api_version, char *x_api_version);


// Get fiscal regimes for an authority
//
// Retrieves all fiscal regimes for the specified fiscal authority.
//
fiscal_regime_dto_list_envelope_t*
FiscalRegimesAPI_getFiscalRegimes(apiClient_t *apiClient, char *fiscalAuthorityId, char *authorityId, char *api_version, char *x_api_version);


// Get fiscal regimes count
//
// Returns the total count of fiscal regimes for the specified fiscal authority.
//
int32_envelope_t*
FiscalRegimesAPI_getFiscalRegimesCount(apiClient_t *apiClient, char *fiscalAuthorityId, char *api_version, char *x_api_version);


// Update a fiscal regime
//
// Updates an existing fiscal regime identified by its unique identifier.
//
empty_envelope_t*
FiscalRegimesAPI_updateFiscalRegime(apiClient_t *apiClient, tenantId, char *regimeId, char *api_version, char *x_api_version, fiscal_regime_update_dto_t *fiscal_regime_update_dto);


