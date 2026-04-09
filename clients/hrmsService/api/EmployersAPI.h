#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/employer_profile_create_dto.h"
#include "../model/employer_profile_dto_envelope.h"
#include "../model/employer_profile_dto_list_envelope.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/object.h"


// Create an employer
//
// Creates a new employer for the specified tenant.
//
empty_envelope_t*
EmployersAPI_createEmployerAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, employer_profile_create_dto_t *employer_profile_create_dto);


// Delete an employer
//
// Deletes an employer for the specified tenant.
//
empty_envelope_t*
EmployersAPI_deleteEmployerAsync(apiClient_t *apiClient, char *tenantId, char *employerId, char *api_version, char *x_api_version);


// Get employer by ID
//
// Retrieves a specific employer by its identifier.
//
employer_profile_dto_envelope_t*
EmployersAPI_getEmployerByIdAsync(apiClient_t *apiClient, char *tenantId, char *employerId, char *api_version, char *x_api_version);


// Get employers
//
// Retrieves employers for the specified tenant.
//
employer_profile_dto_list_envelope_t*
EmployersAPI_getEmployersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count employers
//
// Counts employers for the specified tenant.
//
int32_envelope_t*
EmployersAPI_getEmployersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an employer
//
// Updates an existing employer for the specified tenant.
//
empty_envelope_t*
EmployersAPI_updateEmployerAsync(apiClient_t *apiClient, char *tenantId, char *employerId, char *api_version, char *x_api_version, object_t *body);


