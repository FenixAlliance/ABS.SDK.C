#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/bank_account_create_dto.h"
#include "../model/bank_account_dto_envelope.h"
#include "../model/bank_account_dto_list_envelope.h"
#include "../model/bank_account_update_dto.h"
#include "../model/bank_create_dto.h"
#include "../model/bank_dto_envelope.h"
#include "../model/bank_dto_list_envelope.h"
#include "../model/bank_guarantee_create_dto.h"
#include "../model/bank_guarantee_dto_envelope.h"
#include "../model/bank_guarantee_dto_list_envelope.h"
#include "../model/bank_guarantee_update_dto.h"
#include "../model/bank_transaction_create_dto.h"
#include "../model/bank_transaction_dto_envelope.h"
#include "../model/bank_transaction_dto_list_envelope.h"
#include "../model/bank_transaction_update_dto.h"
#include "../model/bank_update_dto.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Creates a new bank
//
// Create a new bank.
//
bank_dto_envelope_t*
BankingAPI_createBank(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, bank_create_dto_t *bank_create_dto);


// Creates a new bank account
//
// Create a new bank account.
//
bank_account_dto_envelope_t*
BankingAPI_createBankAccount(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version, bank_account_create_dto_t *bank_account_create_dto);


// Creates a new bank guarantee
//
// Create a new bank guarantee.
//
bank_guarantee_dto_envelope_t*
BankingAPI_createBankGuarantee(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version, bank_guarantee_create_dto_t *bank_guarantee_create_dto);


// Creates a new bank transaction
//
// Create a new bank transaction.
//
bank_transaction_dto_envelope_t*
BankingAPI_createBankTransaction(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version, bank_transaction_create_dto_t *bank_transaction_create_dto);


// Deletes a bank
//
// Delete a bank.
//
void
BankingAPI_deleteBank(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);


// Deletes a bank account
//
// Delete a bank account.
//
void
BankingAPI_deleteBankAccount(apiClient_t *apiClient, char *tenantId, char *bankId, char *accountId, char *api_version, char *x_api_version);


// Deletes a bank guarantee
//
// Delete a bank guarantee.
//
void
BankingAPI_deleteBankGuarantee(apiClient_t *apiClient, char *tenantId, char *bankId, char *guaranteeId, char *api_version, char *x_api_version);


// Deletes a bank transaction
//
// Delete a bank transaction.
//
void
BankingAPI_deleteBankTransaction(apiClient_t *apiClient, char *tenantId, char *bankId, char *transactionId, char *api_version, char *x_api_version);


// Gets the current tenant bank
//
// Get the currently acting tenant bank.
//
bank_dto_envelope_t*
BankingAPI_getBank(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);


// Gets the current tenant bank account
//
// Get the currently acting tenant bank account.
//
bank_account_dto_envelope_t*
BankingAPI_getBankAccount(apiClient_t *apiClient, char *tenantId, char *bankId, char *accountId, char *api_version, char *x_api_version);


// Gets the current tenant bank accounts
//
// Get the currently acting tenant bank accounts.
//
bank_account_dto_list_envelope_t*
BankingAPI_getBankAccounts(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);


// Gets the current tenant bank accounts count
//
// Get the currently acting tenant bank accounts count.
//
int32_envelope_t*
BankingAPI_getBankAccountsCount(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);


// Gets the current tenant bank guarantee
//
// Get the currently acting tenant bank guarantee.
//
bank_guarantee_dto_envelope_t*
BankingAPI_getBankGuarantee(apiClient_t *apiClient, char *tenantId, char *bankId, char *guaranteeId, char *api_version, char *x_api_version);


// Gets the current tenant bank guarantees
//
// Get the currently acting tenant bank guarantees.
//
bank_guarantee_dto_list_envelope_t*
BankingAPI_getBankGuarantees(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);


// Gets the current tenant bank guarantees count
//
// Get the currently acting tenant bank guarantees count.
//
int32_envelope_t*
BankingAPI_getBankGuaranteesCount(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);


// Gets the current tenant bank transaction
//
// Get the currently acting tenant bank transaction.
//
bank_transaction_dto_envelope_t*
BankingAPI_getBankTransaction(apiClient_t *apiClient, char *tenantId, char *bankId, char *transactionId, char *api_version, char *x_api_version);


// Gets the current tenant bank transactions
//
// Get the currently acting tenant bank transactions.
//
bank_transaction_dto_list_envelope_t*
BankingAPI_getBankTransactions(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);


// Gets the current tenant bank transactions count
//
// Get the currently acting tenant bank transactions count.
//
int32_envelope_t*
BankingAPI_getBankTransactionsCount(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version);


// Gets the current tenant banks
//
// Get the currently acting tenant banks.
//
bank_dto_list_envelope_t*
BankingAPI_getBanks(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Gets the current tenant banks count
//
// Get the currently acting tenant banks count.
//
int32_envelope_t*
BankingAPI_getBanksCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates a bank
//
// Update a bank.
//
bank_dto_envelope_t*
BankingAPI_updateBank(apiClient_t *apiClient, char *tenantId, char *bankId, char *api_version, char *x_api_version, bank_update_dto_t *bank_update_dto);


// Updates a bank account
//
// Update a bank account.
//
bank_account_dto_envelope_t*
BankingAPI_updateBankAccount(apiClient_t *apiClient, char *tenantId, char *bankId, char *accountId, char *api_version, char *x_api_version, bank_account_update_dto_t *bank_account_update_dto);


// Updates a bank guarantee
//
// Update a bank guarantee.
//
bank_guarantee_dto_envelope_t*
BankingAPI_updateBankGuarantee(apiClient_t *apiClient, char *tenantId, char *bankId, char *guaranteeId, char *api_version, char *x_api_version, bank_guarantee_update_dto_t *bank_guarantee_update_dto);


// Updates a bank transaction
//
// Update a bank transaction.
//
bank_transaction_dto_envelope_t*
BankingAPI_updateBankTransaction(apiClient_t *apiClient, char *tenantId, char *bankId, char *transactionId, char *api_version, char *x_api_version, bank_transaction_update_dto_t *bank_transaction_update_dto);


