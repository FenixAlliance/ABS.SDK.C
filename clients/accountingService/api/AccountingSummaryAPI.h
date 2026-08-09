#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/accounting_entry_dto_collection_query_parameters.h"
#include "../model/decimal_envelope.h"
#include "../model/error_envelope.h"
#include "../model/journal_entry_dto_collection_query_parameters.h"
#include "../model/money_envelope.h"


// Sum tenant accounting-entry credits
//
// Returns SUM(AccountingEntry.Credit) for the tenant, filtered by the supplied OData date range.
//
decimal_envelope_t*
AccountingSummaryAPI_getCreditsSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, accounting_entry_dto_collection_query_parameters_t *accounting_entry_dto_collection_query_parameters);


// Sum tenant accounting-entry debits
//
// Returns SUM(AccountingEntry.Debit) for the tenant, filtered by the supplied OData date range.
//
decimal_envelope_t*
AccountingSummaryAPI_getDebitsSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, accounting_entry_dto_collection_query_parameters_t *accounting_entry_dto_collection_query_parameters);


// Sum tenant expenses
//
// Returns SUM(JournalEntry.Debit) for Debit-direction journal entries in the tenant, filtered by the supplied OData date range.
//
money_envelope_t*
AccountingSummaryAPI_getExpensesSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, journal_entry_dto_collection_query_parameters_t *journal_entry_dto_collection_query_parameters);


// Sum tenant incomes
//
// Returns SUM(JournalEntry.Credit) for Credit-direction journal entries in the tenant, filtered by the supplied OData date range.
//
money_envelope_t*
AccountingSummaryAPI_getIncomesSumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, journal_entry_dto_collection_query_parameters_t *journal_entry_dto_collection_query_parameters);


