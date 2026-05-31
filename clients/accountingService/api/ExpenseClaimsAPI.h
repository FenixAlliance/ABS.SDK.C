#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/expense_claim_create_dto.h"
#include "../model/expense_claim_dto_envelope.h"
#include "../model/expense_claim_dto_list_envelope.h"
#include "../model/expense_claim_update_dto.h"
#include "../model/int32_envelope.h"


// Create an expense claim
//
// Creates a new expense claim.
//
empty_envelope_t*
ExpenseClaimsAPI_createExpenseClaim(apiClient_t *apiClient, char *tenantId, expense_claim_create_dto_t *expense_claim_create_dto, char *api_version, char *x_api_version);


// Delete an expense claim
//
// Deletes an expense claim.
//
empty_envelope_t*
ExpenseClaimsAPI_deleteExpenseClaim(apiClient_t *apiClient, char *tenantId, char *expenseClaimId, char *api_version, char *x_api_version);


// Get an expense claim by id
//
// Retrieves an expense claim by its identifier.
//
expense_claim_dto_envelope_t*
ExpenseClaimsAPI_getExpenseClaim(apiClient_t *apiClient, char *tenantId, char *expenseClaimId, char *api_version, char *x_api_version);


// Get all expense claims for a tenant
//
// Retrieves all expense claims for the specified tenant using OData query options.
//
expense_claim_dto_list_envelope_t*
ExpenseClaimsAPI_getExpenseClaims(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of expense claims for a tenant
//
// Retrieves the count of expense claims for the specified tenant using OData query options.
//
int32_envelope_t*
ExpenseClaimsAPI_getExpenseClaimsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an expense claim
//
// Updates an existing expense claim.
//
empty_envelope_t*
ExpenseClaimsAPI_updateExpenseClaim(apiClient_t *apiClient, char *tenantId, char *expenseClaimId, expense_claim_update_dto_t *expense_claim_update_dto, char *api_version, char *x_api_version);


