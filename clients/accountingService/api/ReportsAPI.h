#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/trial_balance_dto_envelope.h"


// Trial balance for a fiscal period
//
// Returns the per-account posted debit/credit totals for the given fiscal period (optionally scoped to a single financial book), plus grand totals and the Σdebits == Σcredits balanced flag. Amounts are normalized to the target currency (default USD) from the stored USD reporting amounts.
//
trial_balance_dto_envelope_t*
ReportsAPI_getTrialBalanceAsync(apiClient_t *apiClient, char *tenantId, char *fiscalPeriodId, char *financialBookId, char *currencyId, char *api_version, char *x_api_version);


