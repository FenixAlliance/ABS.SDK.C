#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/transaction_category_create_dto.h"
#include "../model/transaction_category_dto_envelope.h"
#include "../model/transaction_category_dto_list_envelope.h"
#include "../model/transaction_category_update_dto.h"
#include "../model/transaction_create_dto.h"
#include "../model/transaction_dto_envelope.h"
#include "../model/transaction_dto_list_envelope.h"
#include "../model/transaction_update_dto.h"


// Create a transaction
//
// Creates a new transaction for the specified tenant.
//
transaction_dto_envelope_t*
TransactionsAPI_createTransaction(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, transaction_create_dto_t *transaction_create_dto);


// Create a transaction category
//
// Creates a new transaction category for the specified tenant.
//
transaction_category_dto_envelope_t*
TransactionsAPI_createTransactionCategory(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, transaction_category_create_dto_t *transaction_category_create_dto);


// Delete a transaction
//
// Deletes a transaction by its unique identifier.
//
transaction_dto_envelope_t*
TransactionsAPI_deleteTransaction(apiClient_t *apiClient, char *tenantId, char *transactionId, char *api_version, char *x_api_version);


// Delete a transaction category
//
// Deletes a transaction category by its unique identifier.
//
transaction_category_dto_envelope_t*
TransactionsAPI_deleteTransactionCategory(apiClient_t *apiClient, char *tenantId, char *categoryId, char *api_version, char *x_api_version);


// Get transaction by ID
//
// Retrieves a specific transaction by its unique identifier.
//
transaction_dto_envelope_t*
TransactionsAPI_getTransaction(apiClient_t *apiClient, char *tenantId, char *transactionId, char *api_version, char *x_api_version);


// Get all transaction categories
//
// Retrieves all transaction categories for the specified tenant.
//
transaction_category_dto_list_envelope_t*
TransactionsAPI_getTransactionCategories(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get transaction categories count
//
// Returns total number of transaction categories for the tenant.
//
int32_envelope_t*
TransactionsAPI_getTransactionCategoriesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get transaction category by ID
//
// Retrieves a specific transaction category by its unique identifier.
//
transaction_category_dto_envelope_t*
TransactionsAPI_getTransactionCategory(apiClient_t *apiClient, char *tenantId, char *categoryId, char *api_version, char *x_api_version);


// Get all transactions for a tenant
//
// Retrieves all transactions for the specified tenant using OData query options.
//
transaction_dto_list_envelope_t*
TransactionsAPI_getTransactions(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get transactions count
//
// Returns total number of transactions for the tenant with OData filter support.
//
int32_envelope_t*
TransactionsAPI_getTransactionsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a transaction
//
// Updates an existing transaction with the provided data.
//
transaction_dto_envelope_t*
TransactionsAPI_updateTransaction(apiClient_t *apiClient, char *tenantId, char *transactionId, char *api_version, char *x_api_version, transaction_update_dto_t *transaction_update_dto);


// Update a transaction category
//
// Updates an existing transaction category with the provided data.
//
transaction_category_dto_envelope_t*
TransactionsAPI_updateTransactionCategory(apiClient_t *apiClient, char *tenantId, char *categoryId, char *api_version, char *x_api_version, transaction_category_update_dto_t *transaction_category_update_dto);


