#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/budget_account_entry_create_dto.h"
#include "../model/budget_account_entry_dto_envelope.h"
#include "../model/budget_account_entry_dto_i_read_only_list_envelope.h"
#include "../model/budget_account_entry_update_dto.h"
#include "../model/budget_create_dto.h"
#include "../model/budget_dto_envelope.h"
#include "../model/budget_dto_i_read_only_list_envelope.h"
#include "../model/budget_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"


// Creates a budget account entry
//
// Create a budget account entry
//
empty_envelope_t*
BudgetsAPI_createBudgetAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, budget_account_entry_create_dto_t *budget_account_entry_create_dto, char *api_version, char *x_api_version);


// Creates a budget
//
// Create a budget
//
empty_envelope_t*
BudgetsAPI_createBudgetAsync(apiClient_t *apiClient, char *tenantId, budget_create_dto_t *budget_create_dto, char *api_version, char *x_api_version);


// Deletes a budget account entry
//
// Delete a budget account entry
//
empty_envelope_t*
BudgetsAPI_deleteBudgetAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, char *entryId, char *api_version, char *x_api_version);


// Deletes a budget
//
// Delete a budget
//
empty_envelope_t*
BudgetsAPI_deleteBudgetAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, char *api_version, char *x_api_version);


// Gets all budget account entries
//
// Get all budget account entries
//
budget_account_entry_dto_i_read_only_list_envelope_t*
BudgetsAPI_getBudgetAccountEntriesCollectionAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, char *api_version, char *x_api_version);


// Gets a budget account entry by id
//
// Get a budget account entry by id
//
budget_account_entry_dto_envelope_t*
BudgetsAPI_getBudgetAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, char *entryId, char *api_version, char *x_api_version);


// Gets a budget by id
//
// Get a budget by id
//
budget_dto_envelope_t*
BudgetsAPI_getBudgetDetailsAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, char *api_version, char *x_api_version);


// Gets all budgets
//
// Get all budgets
//
budget_dto_i_read_only_list_envelope_t*
BudgetsAPI_getBudgetsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates a budget account entry
//
// Update a budget account entry
//
empty_envelope_t*
BudgetsAPI_updateBudgetAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, char *entryId, budget_account_entry_update_dto_t *budget_account_entry_update_dto, char *api_version, char *x_api_version);


// Updates a budget
//
// Update a budget
//
empty_envelope_t*
BudgetsAPI_updateBudgetAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, budget_update_dto_t *budget_update_dto, char *api_version, char *x_api_version);


