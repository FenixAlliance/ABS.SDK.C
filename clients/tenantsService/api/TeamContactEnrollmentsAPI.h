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
#include "../model/tenant_team_contact_enrollment_create_dto.h"
#include "../model/tenant_team_contact_enrollment_dto_envelope.h"
#include "../model/tenant_team_contact_enrollment_dto_list_envelope.h"
#include "../model/tenant_team_contact_enrollment_update_dto.h"


// Create a new tenant team contact enrollment
//
// Create a new tenant team contact enrollment
//
empty_envelope_t*
TeamContactEnrollmentsAPI_createTenantTeamContactEnrollment(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_team_contact_enrollment_create_dto_t *tenant_team_contact_enrollment_create_dto);


// Delete a tenant team contact enrollment
//
// Delete a tenant team contact enrollment
//
empty_envelope_t*
TeamContactEnrollmentsAPI_deleteTenantTeamContactEnrollment(apiClient_t *apiClient, char *tenantId, char *tenantTeamContactEnrollmentId, char *api_version, char *x_api_version);


// Retrieve a single tenant team contact enrollment by its ID
//
// Retrieve a single tenant team contact enrollment by its ID
//
tenant_team_contact_enrollment_dto_envelope_t*
TeamContactEnrollmentsAPI_getTenantTeamContactEnrollmentById(apiClient_t *apiClient, char *tenantId, char *tenantTeamContactEnrollmentId, char *api_version, char *x_api_version);


// Retrieve a list of tenant team contact enrollments
//
// Retrieve a list of tenant team contact enrollments
//
tenant_team_contact_enrollment_dto_list_envelope_t*
TeamContactEnrollmentsAPI_getTenantTeamContactEnrollments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant team contact enrollments
//
// Get the count of tenant team contact enrollments
//
int32_envelope_t*
TeamContactEnrollmentsAPI_getTenantTeamContactEnrollmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tenant team contact enrollment
//
// Update a tenant team contact enrollment
//
empty_envelope_t*
TeamContactEnrollmentsAPI_updateTenantTeamContactEnrollment(apiClient_t *apiClient, char *tenantId, char *tenantTeamContactEnrollmentId, char *api_version, char *x_api_version, tenant_team_contact_enrollment_update_dto_t *tenant_team_contact_enrollment_update_dto);


