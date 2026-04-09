#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/fiscal_year_create_dto.h"
#include "../model/fiscal_year_dto_envelope.h"
#include "../model/fiscal_year_dto_i_read_only_list_envelope.h"
#include "../model/fiscal_year_update_dto.h"
#include "../model/int32_envelope.h"


// Create fiscal year
//
// Creates a new fiscal year entry for a tenant.
//
empty_envelope_t*
FiscalYearsAPI_createFiscalYearAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, fiscal_year_create_dto_t *fiscal_year_create_dto);


// Delete fiscal year
//
// Deletes a fiscal year identified by its ID.
//
empty_envelope_t*
FiscalYearsAPI_deleteFiscalYearAsync(apiClient_t *apiClient, char *tenantId, char *fiscalYearId, char *api_version, char *x_api_version);


// Get fiscal year by ID
//
// Gets details for a specific fiscal year.
//
fiscal_year_dto_envelope_t*
FiscalYearsAPI_getFiscalYearDetailsAsync(apiClient_t *apiClient, char *tenantId, char *fiscalYearId, char *api_version, char *x_api_version);


// Get all fiscal years
//
// Retrieves a list of fiscal years for the specified tenant.
//
fiscal_year_dto_i_read_only_list_envelope_t*
FiscalYearsAPI_getFiscalYearsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count fiscal years
//
// Returns the number of fiscal years for a tenant.
//
int32_envelope_t*
FiscalYearsAPI_getFiscalYearsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update fiscal year
//
// Updates an existing fiscal year identified by its ID.
//
empty_envelope_t*
FiscalYearsAPI_updateFiscalYearAsync(apiClient_t *apiClient, char *tenantId, char *fiscalYearId, char *api_version, char *x_api_version, fiscal_year_update_dto_t *fiscal_year_update_dto);


