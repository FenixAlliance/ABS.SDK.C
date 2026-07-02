#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/decimal_envelope.h"
#include "../model/error_envelope.h"


// Sum tenant accounting-entry credits
//
// Returns SUM(AccountingEntry.Credit) for the tenant, filtered by the supplied OData date range.
//
decimal_envelope_t*
AccountingEntriesAPI_getCreditsSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Sum tenant accounting-entry debits
//
// Returns SUM(AccountingEntry.Debit) for the tenant, filtered by the supplied OData date range.
//
decimal_envelope_t*
AccountingEntriesAPI_getDebitsSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


