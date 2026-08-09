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
#include "../model/payroll_period_create_dto.h"
#include "../model/payroll_period_dto_collection_query_parameters.h"
#include "../model/payroll_period_dto_envelope.h"
#include "../model/payroll_period_dto_list_envelope.h"
#include "../model/payroll_period_update_dto.h"


// Create a payroll period
//
// Creates a new payroll period for the specified tenant.
//
empty_envelope_t*
PayrollPeriodsAPI_createPayrollPeriodAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, payroll_period_create_dto_t *payroll_period_create_dto);


// Delete a payroll period
//
// Deletes a payroll period for the specified tenant.
//
empty_envelope_t*
PayrollPeriodsAPI_deletePayrollPeriodAsync(apiClient_t *apiClient, char *tenantId, char *periodId, char *api_version, char *x_api_version);


// Get payroll period by ID
//
// Retrieves a specific payroll period by its identifier.
//
payroll_period_dto_envelope_t*
PayrollPeriodsAPI_getPayrollPeriodByIdAsync(apiClient_t *apiClient, char *tenantId, char *periodId, char *api_version, char *x_api_version);


// Get payroll periods
//
// Retrieves payroll periods for the specified tenant.
//
payroll_period_dto_list_envelope_t*
PayrollPeriodsAPI_getPayrollPeriodsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, payroll_period_dto_collection_query_parameters_t *payroll_period_dto_collection_query_parameters);


// Count payroll periods
//
// Counts payroll periods for the specified tenant.
//
int32_envelope_t*
PayrollPeriodsAPI_getPayrollPeriodsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, payroll_period_dto_collection_query_parameters_t *payroll_period_dto_collection_query_parameters);


// Update a payroll period
//
// Updates an existing payroll period for the specified tenant.
//
empty_envelope_t*
PayrollPeriodsAPI_updatePayrollPeriodAsync(apiClient_t *apiClient, char *tenantId, char *periodId, char *api_version, char *x_api_version, payroll_period_update_dto_t *payroll_period_update_dto);


