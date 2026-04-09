#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/employee_profile_create_dto.h"
#include "../model/employee_profile_dto_envelope.h"
#include "../model/employee_profile_dto_list_envelope.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/object.h"


// Create an employee
//
// Creates a new employee for the specified tenant.
//
empty_envelope_t*
EmployeesAPI_createEmployeeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, employee_profile_create_dto_t *employee_profile_create_dto);


// Delete an employee
//
// Deletes an employee for the specified tenant.
//
empty_envelope_t*
EmployeesAPI_deleteEmployeeAsync(apiClient_t *apiClient, char *tenantId, char *employeeId, char *api_version, char *x_api_version);


// Get employee by ID
//
// Retrieves a specific employee by its identifier.
//
employee_profile_dto_envelope_t*
EmployeesAPI_getEmployeeByIdAsync(apiClient_t *apiClient, char *tenantId, char *employeeId, char *api_version, char *x_api_version);


// Get employees
//
// Retrieves employees for the specified tenant.
//
employee_profile_dto_list_envelope_t*
EmployeesAPI_getEmployeesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count employees
//
// Counts employees for the specified tenant.
//
int32_envelope_t*
EmployeesAPI_getEmployeesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an employee
//
// Updates an existing employee for the specified tenant.
//
empty_envelope_t*
EmployeesAPI_updateEmployeeAsync(apiClient_t *apiClient, char *tenantId, char *employeeId, char *api_version, char *x_api_version, object_t *body);


