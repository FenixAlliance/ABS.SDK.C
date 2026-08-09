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
#include "../model/patch_operation.h"
#include "../model/salary_create_dto.h"
#include "../model/salary_dto_collection_query_parameters.h"
#include "../model/salary_dto_envelope.h"
#include "../model/salary_dto_list_envelope.h"
#include "../model/salary_update_dto.h"


// Create a salary
//
// Creates a new salary for the specified tenant.
//
empty_envelope_t*
SalariesAPI_createSalaryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, salary_create_dto_t *salary_create_dto);


// Delete a salary
//
// Deletes a salary for the specified tenant.
//
empty_envelope_t*
SalariesAPI_deleteSalaryAsync(apiClient_t *apiClient, char *tenantId, char *salaryId, char *api_version, char *x_api_version);


// Get salaries
//
// Retrieves salaries for the specified tenant.
//
salary_dto_list_envelope_t*
SalariesAPI_getSalariesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, salary_dto_collection_query_parameters_t *salary_dto_collection_query_parameters);


// Count salaries
//
// Counts salaries for the specified tenant.
//
int32_envelope_t*
SalariesAPI_getSalariesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, salary_dto_collection_query_parameters_t *salary_dto_collection_query_parameters);


// Get salary by ID
//
// Retrieves a specific salary by its identifier.
//
salary_dto_envelope_t*
SalariesAPI_getSalaryByIdAsync(apiClient_t *apiClient, char *tenantId, char *salaryId, char *api_version, char *x_api_version);


// Patch a salary
//
// Partially updates an existing salary for the specified tenant.
//
empty_envelope_t*
SalariesAPI_patchSalaryAsync(apiClient_t *apiClient, char *tenantId, char *salaryId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a salary
//
// Updates an existing salary for the specified tenant.
//
empty_envelope_t*
SalariesAPI_updateSalaryAsync(apiClient_t *apiClient, char *tenantId, char *salaryId, char *api_version, char *x_api_version, salary_update_dto_t *salary_update_dto);


