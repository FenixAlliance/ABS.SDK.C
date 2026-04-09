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
#include "../model/tenant_team_employee_enrollment_create_dto.h"
#include "../model/tenant_team_employee_enrollment_dto_envelope.h"
#include "../model/tenant_team_employee_enrollment_dto_list_envelope.h"
#include "../model/tenant_team_employee_enrollment_update_dto.h"


// Create a new tenant employee enrollment
//
// Create a new tenant employee enrollment
//
empty_envelope_t*
EmployeeEnrollmentsAPI_createTenantEmployeeEnrollment(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_team_employee_enrollment_create_dto_t *tenant_team_employee_enrollment_create_dto);


// Delete a tenant employee enrollment
//
// Delete a tenant employee enrollment
//
empty_envelope_t*
EmployeeEnrollmentsAPI_deleteTenantEmployeeEnrollment(apiClient_t *apiClient, char *tenantId, char *tenantEmployeeEnrollmentId, char *api_version, char *x_api_version);


// Retrieve a single tenant employee enrollment by its ID
//
// Retrieve a single tenant employee enrollment by its ID
//
tenant_team_employee_enrollment_dto_envelope_t*
EmployeeEnrollmentsAPI_getTenantEmployeeEnrollmentById(apiClient_t *apiClient, char *tenantId, char *tenantEmployeeEnrollmentId, char *api_version, char *x_api_version);


// Retrieve a list of tenant employee enrollments
//
// Retrieve a list of tenant employee enrollments
//
tenant_team_employee_enrollment_dto_list_envelope_t*
EmployeeEnrollmentsAPI_getTenantEmployeeEnrollments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant employee enrollments
//
// Get the count of tenant employee enrollments
//
int32_envelope_t*
EmployeeEnrollmentsAPI_getTenantEmployeeEnrollmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tenant employee enrollment
//
// Update a tenant employee enrollment
//
empty_envelope_t*
EmployeeEnrollmentsAPI_updateTenantEmployeeEnrollment(apiClient_t *apiClient, char *tenantId, char *tenantEmployeeEnrollmentId, char *api_version, char *x_api_version, tenant_team_employee_enrollment_update_dto_t *tenant_team_employee_enrollment_update_dto);


