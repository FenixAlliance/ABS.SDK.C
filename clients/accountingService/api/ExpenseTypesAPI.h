#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/expense_type_create_dto.h"
#include "../model/expense_type_dto_collection_query_parameters.h"
#include "../model/expense_type_dto_envelope.h"
#include "../model/expense_type_dto_list_envelope.h"
#include "../model/expense_type_update_dto.h"
#include "../model/int32_envelope.h"
#include "../model/patch_operation.h"


// Create an expense type
//
// Creates a new expense type.
//
empty_envelope_t*
ExpenseTypesAPI_createExpenseType(apiClient_t *apiClient, char *tenantId, expense_type_create_dto_t *expense_type_create_dto, char *api_version, char *x_api_version);


// Delete an expense type
//
// Deletes an expense type.
//
empty_envelope_t*
ExpenseTypesAPI_deleteExpenseType(apiClient_t *apiClient, char *tenantId, char *expenseTypeId, char *api_version, char *x_api_version);


// Get an expense type by id
//
// Retrieves an expense type by its identifier.
//
expense_type_dto_envelope_t*
ExpenseTypesAPI_getExpenseType(apiClient_t *apiClient, char *tenantId, char *expenseTypeId, char *api_version, char *x_api_version);


// Get all expense types for a tenant
//
// Retrieves all expense types for the specified tenant using OData query options.
//
expense_type_dto_list_envelope_t*
ExpenseTypesAPI_getExpenseTypes(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, expense_type_dto_collection_query_parameters_t *expense_type_dto_collection_query_parameters);


// Get the count of expense types for a tenant
//
// Retrieves the count of expense types for the specified tenant using OData query options.
//
int32_envelope_t*
ExpenseTypesAPI_getExpenseTypesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, expense_type_dto_collection_query_parameters_t *expense_type_dto_collection_query_parameters);


// Patch an expense type
//
// Partially updates an existing expense type.
//
empty_envelope_t*
ExpenseTypesAPI_patchExpenseType(apiClient_t *apiClient, char *tenantId, char *expenseTypeId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update an expense type
//
// Updates an existing expense type.
//
empty_envelope_t*
ExpenseTypesAPI_updateExpenseType(apiClient_t *apiClient, char *tenantId, char *expenseTypeId, expense_type_update_dto_t *expense_type_update_dto, char *api_version, char *x_api_version);


