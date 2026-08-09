#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/fiscal_period_create_dto.h"
#include "../model/fiscal_period_dto_collection_query_parameters.h"
#include "../model/fiscal_period_dto_envelope.h"
#include "../model/fiscal_period_dto_list_envelope.h"
#include "../model/fiscal_period_update_dto.h"
#include "../model/int32_envelope.h"
#include "../model/patch_operation.h"


// Close a fiscal period
//
// Closes a fiscal period so no further journal entries can post into it. Rejects closing a locked (hard-sealed) period.
//
empty_envelope_t*
FiscalPeriodsAPI_closeFiscalPeriod(apiClient_t *apiClient, char *tenantId, char *fiscalPeriodId, char *api_version, char *x_api_version);


// Create a fiscal period
//
// Creates a new fiscal period associated with a fiscal year.
//
empty_envelope_t*
FiscalPeriodsAPI_createFiscalPeriod(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, fiscal_period_create_dto_t *fiscal_period_create_dto);


// Delete a fiscal period
//
// Deletes a fiscal period identified by its unique identifier.
//
empty_envelope_t*
FiscalPeriodsAPI_deleteFiscalPeriod(apiClient_t *apiClient, char *tenantId, char *fiscalPeriodId, char *api_version, char *x_api_version);


// Get fiscal period by ID
//
// Retrieves a specific fiscal period by its unique identifier within a fiscal year.
//
fiscal_period_dto_envelope_t*
FiscalPeriodsAPI_getFiscalPeriod(apiClient_t *apiClient, char *tenantId, char *fiscalAuthorityId, char *fiscalYearId, char *fiscalPeriodId, char *api_version, char *x_api_version);


// Get fiscal periods for a fiscal year
//
// Retrieves all fiscal periods for the specified fiscal year within a fiscal authority.
//
fiscal_period_dto_list_envelope_t*
FiscalPeriodsAPI_getFiscalPeriods(apiClient_t *apiClient, char *tenantId, char *fiscalAuthorityId, char *fiscalYearId, char *authorityId, char *api_version, char *x_api_version, fiscal_period_dto_collection_query_parameters_t *fiscal_period_dto_collection_query_parameters);


// Get fiscal periods count
//
// Returns the total count of fiscal periods for the specified fiscal year.
//
int32_envelope_t*
FiscalPeriodsAPI_getFiscalPeriodsCount(apiClient_t *apiClient, char *tenantId, char *fiscalAuthorityId, char *fiscalYearId, char *api_version, char *x_api_version, fiscal_period_dto_collection_query_parameters_t *fiscal_period_dto_collection_query_parameters);


// Open a fiscal period
//
// Opens a closed fiscal period so journal entries can post into it. Rejects reopening a locked or an already-open period.
//
empty_envelope_t*
FiscalPeriodsAPI_openFiscalPeriod(apiClient_t *apiClient, char *tenantId, char *fiscalPeriodId, char *api_version, char *x_api_version);


// Patch a fiscal period
//
// Partially updates a fiscal period.
//
empty_envelope_t*
FiscalPeriodsAPI_patchFiscalPeriodAsync(apiClient_t *apiClient, char *tenantId, char *fiscalPeriodId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a fiscal period
//
// Updates an existing fiscal period identified by its unique identifier.
//
empty_envelope_t*
FiscalPeriodsAPI_updateFiscalPeriod(apiClient_t *apiClient, char *tenantId, char *fiscalPeriodId, char *api_version, char *x_api_version, fiscal_period_update_dto_t *fiscal_period_update_dto);


