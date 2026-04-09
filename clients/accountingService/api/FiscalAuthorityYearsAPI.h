#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/fiscal_year_create_dto.h"
#include "../model/fiscal_year_dto_envelope.h"
#include "../model/fiscal_year_dto_list_envelope.h"
#include "../model/fiscal_year_update_dto.h"
#include "../model/int32_envelope.h"


// Create a fiscal year
//
// Creates a new fiscal year associated with a fiscal authority.
//
empty_envelope_t*
FiscalAuthorityYearsAPI_createFiscalYear(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, fiscal_year_create_dto_t *fiscal_year_create_dto);


// Delete a fiscal year
//
// Deletes a fiscal year identified by its unique identifier.
//
empty_envelope_t*
FiscalAuthorityYearsAPI_deleteFiscalYear(apiClient_t *apiClient, tenantId, char *fiscalYearId, char *api_version, char *x_api_version);


// Get fiscal year by ID for an authority
//
// Retrieves a specific fiscal year by its unique identifier within a fiscal authority.
//
fiscal_year_dto_envelope_t*
FiscalAuthorityYearsAPI_getFiscalYear(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalYearId, char *api_version, char *x_api_version);


// Get fiscal years for an authority
//
// Retrieves all fiscal years associated with the specified fiscal authority.
//
fiscal_year_dto_list_envelope_t*
FiscalAuthorityYearsAPI_getFiscalYears(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *authorityId, char *api_version, char *x_api_version);


// Get fiscal years count for an authority
//
// Returns the total count of fiscal years for the specified fiscal authority.
//
int32_envelope_t*
FiscalAuthorityYearsAPI_getFiscalYearsCount(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *api_version, char *x_api_version);


// Update a fiscal year
//
// Updates an existing fiscal year identified by its unique identifier.
//
empty_envelope_t*
FiscalAuthorityYearsAPI_updateFiscalYear(apiClient_t *apiClient, tenantId, char *fiscalYearId, char *api_version, char *x_api_version, fiscal_year_update_dto_t *fiscal_year_update_dto);


