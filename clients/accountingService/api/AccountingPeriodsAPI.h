#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/accounting_period_create_dto.h"
#include "../model/accounting_period_dto_envelope.h"
#include "../model/accounting_period_dto_list_envelope.h"
#include "../model/accounting_period_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Creates a new accounting period
//
// Creates a new accounting period.
//
empty_envelope_t*
AccountingPeriodsAPI_createAccountingPeriod(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, accounting_period_create_dto_t *accounting_period_create_dto);


// Deletes an existing accounting period
//
// Deletes an existing accounting period.
//
empty_envelope_t*
AccountingPeriodsAPI_deleteAccountingPeriod(apiClient_t *apiClient, char *tenantId, char *accountingPeriodId, char *api_version, char *x_api_version);


// Gets the current tenant accounting period
//
// Get the currently acting tenant accounting period.
//
accounting_period_dto_envelope_t*
AccountingPeriodsAPI_getAccountingPeriod(apiClient_t *apiClient, char *tenantId, char *accountingPeriodId, char *api_version, char *x_api_version);


// Get all accounting periods for a tenant
//
// Retrieves all accounting periods for the specified tenant using OData query options.
//
accounting_period_dto_list_envelope_t*
AccountingPeriodsAPI_getAccountingPeriods(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Gets the current tenant accounting periods count
//
// Get the currently acting tenant accounting periods count.
//
int32_envelope_t*
AccountingPeriodsAPI_getAccountingPeriodsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates an existing accounting period
//
// Updates an existing accounting period.
//
empty_envelope_t*
AccountingPeriodsAPI_updateAccountingPeriod(apiClient_t *apiClient, char *tenantId, char *accountingPeriodId, char *api_version, char *x_api_version, accounting_period_update_dto_t *accounting_period_update_dto);


