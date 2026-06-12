#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/employee_type_create_dto.h"
#include "../model/employee_type_dto_envelope.h"
#include "../model/employee_type_dto_list_envelope.h"
#include "../model/employee_type_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/operation.h"


// Create an employee type
//
// Creates a new employee type for the specified tenant.
//
empty_envelope_t*
EmployeeTypesAPI_createEmployeeTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, employee_type_create_dto_t *employee_type_create_dto);


// Delete an employee type
//
// Deletes an employee type for the specified tenant.
//
empty_envelope_t*
EmployeeTypesAPI_deleteEmployeeTypeAsync(apiClient_t *apiClient, char *tenantId, char *employeeTypeId, char *api_version, char *x_api_version);


// Get employee type by ID
//
// Retrieves a specific employee type by its identifier.
//
employee_type_dto_envelope_t*
EmployeeTypesAPI_getEmployeeTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *employeeTypeId, char *api_version, char *x_api_version);


// Get employee types
//
// Retrieves employee types for the specified tenant.
//
employee_type_dto_list_envelope_t*
EmployeeTypesAPI_getEmployeeTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count employee types
//
// Counts employee types for the specified tenant.
//
int32_envelope_t*
EmployeeTypesAPI_getEmployeeTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch an employee type
//
// Partially updates an existing employee type for the specified tenant.
//
empty_envelope_t*
EmployeeTypesAPI_patchEmployeeTypeAsync(apiClient_t *apiClient, char *tenantId, char *employeeTypeId, char *api_version, char *x_api_version, list_t *operation);


// Update an employee type
//
// Updates an existing employee type for the specified tenant.
//
empty_envelope_t*
EmployeeTypesAPI_updateEmployeeTypeAsync(apiClient_t *apiClient, char *tenantId, char *employeeTypeId, char *api_version, char *x_api_version, employee_type_update_dto_t *employee_type_update_dto);


