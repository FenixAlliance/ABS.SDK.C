#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/decimal_envelope.h"
#include "../model/error_envelope.h"


// Sum tenant expenses
//
// Returns SUM(JournalEntry.Debit) for Debit-direction journal entries in the tenant, filtered by the supplied OData date range.
//
decimal_envelope_t*
JournalEntriesAPI_getExpensesSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Sum tenant incomes
//
// Returns SUM(JournalEntry.Credit) for Credit-direction journal entries in the tenant, filtered by the supplied OData date range.
//
decimal_envelope_t*
JournalEntriesAPI_getIncomesSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


