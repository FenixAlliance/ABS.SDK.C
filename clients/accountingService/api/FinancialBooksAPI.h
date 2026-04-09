#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/financial_book_create_dto.h"
#include "../model/financial_book_dto_envelope.h"
#include "../model/financial_book_dto_list_envelope.h"
#include "../model/financial_book_update_dto.h"
#include "../model/int32_envelope.h"


// Creates a new financial book
//
// Creates a new financial book.
//
empty_envelope_t*
FinancialBooksAPI_createFinancialBookAsync(apiClient_t *apiClient, char *tenantId, financial_book_create_dto_t *financial_book_create_dto, char *api_version, char *x_api_version);


// Deletes an existing financial book
//
// Deletes an existing financial book.
//
empty_envelope_t*
FinancialBooksAPI_deleteFinancialBookAsync(apiClient_t *apiClient, char *tenantId, char *financialBookId, char *api_version, char *x_api_version);


// Gets the details of a specific financial book
//
// Gets the details of a specific financial book.
//
financial_book_dto_envelope_t*
FinancialBooksAPI_getFinancialBookDetailsAsync(apiClient_t *apiClient, char *tenantId, char *financialBookId, char *api_version, char *x_api_version);


// Get all financial books for a tenant
//
// Retrieves all financial books for the specified tenant using OData query options.
//
financial_book_dto_list_envelope_t*
FinancialBooksAPI_getFinancialBooksAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of financial books
//
// Get the count of financial books.
//
int32_envelope_t*
FinancialBooksAPI_getFinancialBooksCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates an existing financial book
//
// Updates an existing financial book.
//
empty_envelope_t*
FinancialBooksAPI_updateFinancialBookAsync(apiClient_t *apiClient, char *tenantId, char *financialBookId, financial_book_update_dto_t *financial_book_update_dto, char *api_version, char *x_api_version);


