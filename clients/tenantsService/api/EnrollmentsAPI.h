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
#include "../model/tenant_enrollment_create_dto.h"
#include "../model/tenant_enrollment_dto_envelope.h"
#include "../model/tenant_enrollment_dto_list_envelope.h"
#include "../model/tenant_enrollment_update_dto.h"


// Create a new tenant enrollment
//
// Create a new tenant enrollment
//
empty_envelope_t*
EnrollmentsAPI_createTenantEnrollment(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_enrollment_create_dto_t *tenant_enrollment_create_dto);


// Delete a tenant enrollment
//
// Delete a tenant enrollment
//
empty_envelope_t*
EnrollmentsAPI_deleteTenantEnrollment(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);


// Retrieve a list of tenant enrollments
//
// Retrieve a list of tenant enrollments
//
tenant_enrollment_dto_list_envelope_t*
EnrollmentsAPI_getExtendedTenantEnrollments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant enrollments
//
// Get the count of tenant enrollments
//
int32_envelope_t*
EnrollmentsAPI_getExtendedTenantEnrollmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Retrieve a single tenant enrollment by its ID
//
// Retrieve a single tenant enrollment by its ID
//
tenant_enrollment_dto_envelope_t*
EnrollmentsAPI_getTenantEnrollmentById(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *userId, char *api_version, char *x_api_version);


// Retrieve a list of tenant enrollments
//
// Retrieve a list of tenant enrollments
//
tenant_enrollment_dto_list_envelope_t*
EnrollmentsAPI_getTenantEnrollments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant enrollments
//
// Get the count of tenant enrollments
//
int32_envelope_t*
EnrollmentsAPI_getTenantEnrollmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tenant enrollment
//
// Update a tenant enrollment
//
empty_envelope_t*
EnrollmentsAPI_updateTenantEnrollment(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version, tenant_enrollment_update_dto_t *tenant_enrollment_update_dto);


