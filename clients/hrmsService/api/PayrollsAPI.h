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
#include "../model/payroll_create_dto.h"
#include "../model/payroll_dto_envelope.h"
#include "../model/payroll_dto_list_envelope.h"
#include "../model/payroll_update_dto.h"


// Create a payroll
//
// Creates a new payroll for the specified tenant.
//
empty_envelope_t*
PayrollsAPI_createPayrollAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, payroll_create_dto_t *payroll_create_dto);


// Delete a payroll
//
// Deletes a payroll for the specified tenant.
//
empty_envelope_t*
PayrollsAPI_deletePayrollAsync(apiClient_t *apiClient, char *tenantId, char *payrollId, char *api_version, char *x_api_version);


// Get payroll by ID
//
// Retrieves a specific payroll by its identifier.
//
payroll_dto_envelope_t*
PayrollsAPI_getPayrollByIdAsync(apiClient_t *apiClient, char *tenantId, char *payrollId, char *api_version, char *x_api_version);


// Get payrolls
//
// Retrieves payrolls for the specified tenant.
//
payroll_dto_list_envelope_t*
PayrollsAPI_getPayrollsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count payrolls
//
// Counts payrolls for the specified tenant.
//
int32_envelope_t*
PayrollsAPI_getPayrollsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a payroll
//
// Updates an existing payroll for the specified tenant.
//
empty_envelope_t*
PayrollsAPI_updatePayrollAsync(apiClient_t *apiClient, char *tenantId, char *payrollId, char *api_version, char *x_api_version, payroll_update_dto_t *payroll_update_dto);


