#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/loan_application_create_dto.h"
#include "../model/loan_application_dto_envelope.h"
#include "../model/loan_application_dto_i_read_only_list_envelope.h"
#include "../model/loan_create_dto.h"
#include "../model/loan_dto_envelope.h"
#include "../model/loan_dto_i_read_only_list_envelope.h"
#include "../model/loan_type_create_dto.h"
#include "../model/loan_type_dto_envelope.h"
#include "../model/loan_type_dto_i_read_only_list_envelope.h"
#include "../model/loan_type_update_dto.h"
#include "../model/loan_update_dto.h"
#include "../model/object.h"


// Creates a loan application
//
// Creates a new loan application.
//
empty_envelope_t*
LoansAPI_createLoanApplicationAsync(apiClient_t *apiClient, char *tenantId, loan_application_create_dto_t *loan_application_create_dto, char *api_version, char *x_api_version);


// Creates a new loan
//
// Creates a new loan for the current tenant.
//
empty_envelope_t*
LoansAPI_createLoanAsync(apiClient_t *apiClient, char *tenantId, loan_create_dto_t *loan_create_dto, char *api_version, char *x_api_version);


// Creates a loan type
//
// Creates a new loan type for the current tenant.
//
empty_envelope_t*
LoansAPI_createLoanTypeAsync(apiClient_t *apiClient, char *tenantId, loan_type_create_dto_t *loan_type_create_dto, char *api_version, char *x_api_version);


// Deletes a loan application
//
// Deletes the specified loan application.
//
empty_envelope_t*
LoansAPI_deleteLoanApplicationAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);


// Deletes a loan
//
// Deletes the specified loan.
//
empty_envelope_t*
LoansAPI_deleteLoanAsync(apiClient_t *apiClient, char *tenantId, char *loanId, char *api_version, char *x_api_version);


// Deletes a loan type
//
// Deletes the specified loan type.
//
empty_envelope_t*
LoansAPI_deleteLoanTypeAsync(apiClient_t *apiClient, char *tenantId, char *loanTypeId, char *api_version, char *x_api_version);


// Gets a loan application by ID
//
// Retrieves the details of a loan application.
//
loan_application_dto_envelope_t*
LoansAPI_getLoanApplicationDetailsAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);


// Gets all loan applications
//
// Retrieves all loan applications for the current tenant.
//
loan_application_dto_i_read_only_list_envelope_t*
LoansAPI_getLoanApplicationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Counts loan applications
//
// Gets the count of loan applications for the current tenant.
//
int32_envelope_t*
LoansAPI_getLoanApplicationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Gets a loan by ID
//
// Retrieves the details of a loan using its unique ID.
//
loan_dto_envelope_t*
LoansAPI_getLoanDetailsAsync(apiClient_t *apiClient, char *tenantId, char *loanId, char *api_version, char *x_api_version);


// Gets a loan type by ID
//
// Retrieves the details of a loan type using its unique ID.
//
loan_type_dto_envelope_t*
LoansAPI_getLoanTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *loanTypeId, char *api_version, char *x_api_version);


// Gets all loan types
//
// Retrieves all loan types for the current tenant with OData support.
//
loan_type_dto_i_read_only_list_envelope_t*
LoansAPI_getLoanTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Counts loan types
//
// Gets the count of loan types for the current tenant.
//
int32_envelope_t*
LoansAPI_getLoanTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Gets all loans
//
// Retrieves all loans for the current tenant with OData support.
//
loan_dto_i_read_only_list_envelope_t*
LoansAPI_getLoansAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Counts loans
//
// Gets the count of loans for the current tenant.
//
int32_envelope_t*
LoansAPI_getLoansCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates a loan application
//
// Updates the specified loan application.
//
empty_envelope_t*
LoansAPI_updateLoanApplicationAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, object_t *body, char *api_version, char *x_api_version);


// Updates a loan
//
// Updates the specified loan.
//
empty_envelope_t*
LoansAPI_updateLoanAsync(apiClient_t *apiClient, char *tenantId, char *loanId, loan_update_dto_t *loan_update_dto, char *api_version, char *x_api_version);


// Updates a loan type
//
// Updates the specified loan type.
//
empty_envelope_t*
LoansAPI_updateLoanTypeAsync(apiClient_t *apiClient, char *tenantId, char *loanTypeId, loan_type_update_dto_t *loan_type_update_dto, char *api_version, char *x_api_version);


