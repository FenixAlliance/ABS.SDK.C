#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/account_create_dto.h"
#include "../model/account_dto.h"
#include "../model/account_dto_envelope.h"
#include "../model/account_dto_list_envelope.h"
#include "../model/account_relation_create_dto.h"
#include "../model/account_relation_dto_list_envelope.h"
#include "../model/account_relation_update_dto.h"
#include "../model/account_type_create_dto.h"
#include "../model/account_type_dto_list_envelope.h"
#include "../model/account_type_update_dto.h"
#include "../model/account_update_dto.h"
#include "../model/accounting_entry_create_dto.h"
#include "../model/accounting_entry_dto_envelope.h"
#include "../model/accounting_entry_dto_list_envelope.h"
#include "../model/accounting_entry_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/operation.h"


// Balance account
//
// Balance account.
//
account_dto_envelope_t*
AccountsAPI_balanceAccountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);


// Balance root account
//
// Balance root account.
//
account_dto_list_envelope_t*
AccountsAPI_balanceRootAccountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get root accounts
//
// Get root accounts.
//
account_dto_list_envelope_t*
AccountsAPI_createAccountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, account_create_dto_t *account_create_dto);


// Create account credit
//
// Create account credit.
//
accounting_entry_dto_list_envelope_t*
AccountsAPI_createAccountCreditAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, accounting_entry_create_dto_t *accounting_entry_create_dto);


// Create account debit
//
// Create account debit.
//
accounting_entry_dto_list_envelope_t*
AccountsAPI_createAccountDebitAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, accounting_entry_create_dto_t *accounting_entry_create_dto);


// Create account entry
//
// Create account entry.
//
accounting_entry_dto_envelope_t*
AccountsAPI_createAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, accounting_entry_create_dto_t *accounting_entry_create_dto);


// Create account relation
//
// Create account relation.
//
empty_envelope_t*
AccountsAPI_createAccountRelationAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, account_relation_create_dto_t *account_relation_create_dto);


// Create account type
//
// Create account type.
//
empty_envelope_t*
AccountsAPI_createAccountTypeAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, account_type_create_dto_t *account_type_create_dto);


// Delete an account
//
// Delete an account.
//
empty_envelope_t*
AccountsAPI_deleteAccountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);


// Delete account entry
//
// Delete account entry.
//
empty_envelope_t*
AccountsAPI_deleteAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *entryId, char *api_version, char *x_api_version);


// Delete account relation
//
// Delete account relation.
//
empty_envelope_t*
AccountsAPI_deleteAccountRelationAsync(apiClient_t *apiClient, char *tenantId, char *accountRelationId, char *accountId, char *api_version, char *x_api_version);


// Delete account type
//
// Delete account type.
//
empty_envelope_t*
AccountsAPI_deleteAccountTypeAsync(apiClient_t *apiClient, char *tenantId, char *accountTypeId, char *accountId, char *api_version, char *x_api_version);


// Get account aggregate
//
// Get account aggregate.
//
accounting_entry_dto_list_envelope_t*
AccountsAPI_getAccountAggregateAsync(apiClient_t *apiClient, char *tenantId, char *currencyId, char *api_version, char *x_api_version, list_t *account_dto);


// Get account credits
//
// Get account credits.
//
accounting_entry_dto_list_envelope_t*
AccountsAPI_getAccountCreditsAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);


// Get account credits count
//
// Get account credits count.
//
int32_envelope_t*
AccountsAPI_getAccountCreditsCountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);


// Get account debits
//
// Get account debits.
//
accounting_entry_dto_list_envelope_t*
AccountsAPI_getAccountDebitsAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);


// Get account debits count
//
// Get account debits count.
//
int32_envelope_t*
AccountsAPI_getAccountDebitsCountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);


// Get account details
//
// Get account details.
//
account_dto_envelope_t*
AccountsAPI_getAccountDetailsAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);


// Get account entries
//
// Get account entries.
//
accounting_entry_dto_list_envelope_t*
AccountsAPI_getAccountEntriesAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);


// Get account entry
//
// Get account entry.
//
accounting_entry_dto_envelope_t*
AccountsAPI_getAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *entryId, char *api_version, char *x_api_version);


// Get account relations
//
// Get account relations.
//
account_relation_dto_list_envelope_t*
AccountsAPI_getAccountRelationsAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);


// Get account relations count
//
// Get account relations count.
//
int32_envelope_t*
AccountsAPI_getAccountRelationsCountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);


// Get account types
//
// Get account types.
//
account_type_dto_list_envelope_t*
AccountsAPI_getAccountTypesAsync(apiClient_t *apiClient, char *tenantId, char *accountTypeId, char *api_version, char *x_api_version);


// Get account types count
//
// Get account types count.
//
int32_envelope_t*
AccountsAPI_getAccountTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *accountTypeId, char *api_version, char *x_api_version);


// Creates a new account
//
// Creates a new account.
//
account_dto_list_envelope_t*
AccountsAPI_getAccountsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the number of accounts
//
// Get the number of accounts.
//
int32_envelope_t*
AccountsAPI_getAccountsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get child accounts
//
// Get child accounts.
//
account_dto_list_envelope_t*
AccountsAPI_getChildAccountsAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);


// Get credit account entries
//
// Get credit account entries.
//
accounting_entry_dto_list_envelope_t*
AccountsAPI_getCreditAccountEntriesAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);


// Get debit account entries
//
// Get debit account entries.
//
accounting_entry_dto_list_envelope_t*
AccountsAPI_getDebitAccountEntriesAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version);


// Get root accounts
//
// Get root accounts.
//
account_dto_list_envelope_t*
AccountsAPI_getRootAccountsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch an account
//
// Patch an account.
//
empty_envelope_t*
AccountsAPI_patchAccountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, list_t *operation);


// Update an account
//
// Update an account.
//
account_dto_envelope_t*
AccountsAPI_updateAccountAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *api_version, char *x_api_version, account_update_dto_t *account_update_dto);


// Update account entry
//
// Update account entry.
//
empty_envelope_t*
AccountsAPI_updateAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *accountId, char *entryId, char *api_version, char *x_api_version, accounting_entry_update_dto_t *accounting_entry_update_dto);


// Update account relation
//
// Update account relation.
//
empty_envelope_t*
AccountsAPI_updateAccountRelationAsync(apiClient_t *apiClient, char *tenantId, char *accountRelationId, char *accountId, char *api_version, char *x_api_version, account_relation_update_dto_t *account_relation_update_dto);


// Update account type
//
// Update account type.
//
empty_envelope_t*
AccountsAPI_updateAccountTypeAsync(apiClient_t *apiClient, char *tenantId, char *accountTypeId, char *accountId, char *api_version, char *x_api_version, account_type_update_dto_t *account_type_update_dto);


