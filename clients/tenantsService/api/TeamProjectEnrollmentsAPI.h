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
#include "../model/tenant_team_project_enrollment_create_dto.h"
#include "../model/tenant_team_project_enrollment_dto_envelope.h"
#include "../model/tenant_team_project_enrollment_dto_list_envelope.h"
#include "../model/tenant_team_project_enrollment_update_dto.h"


// Create a new tenant team project enrollment
//
// Create a new tenant team project enrollment
//
empty_envelope_t*
TeamProjectEnrollmentsAPI_createTenantTeamProjectEnrollment(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_team_project_enrollment_create_dto_t *tenant_team_project_enrollment_create_dto);


// Delete a tenant team project enrollment
//
// Delete a tenant team project enrollment
//
empty_envelope_t*
TeamProjectEnrollmentsAPI_deleteTenantTeamProjectEnrollment(apiClient_t *apiClient, char *tenantId, char *tenantTeamProjectEnrollmentId, char *api_version, char *x_api_version);


// Retrieve a single tenant team project enrollment by its ID
//
// Retrieve a single tenant team project enrollment by its ID
//
tenant_team_project_enrollment_dto_envelope_t*
TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollmentById(apiClient_t *apiClient, char *tenantId, char *tenantTeamProjectEnrollmentId, char *api_version, char *x_api_version);


// Retrieve a list of tenant team project enrollments
//
// Retrieve a list of tenant team project enrollments
//
tenant_team_project_enrollment_dto_list_envelope_t*
TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant team project enrollments
//
// Get the count of tenant team project enrollments
//
int32_envelope_t*
TeamProjectEnrollmentsAPI_getTenantTeamProjectEnrollmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tenant team project enrollment
//
// Update a tenant team project enrollment
//
empty_envelope_t*
TeamProjectEnrollmentsAPI_updateTenantTeamProjectEnrollment(apiClient_t *apiClient, char *tenantId, char *tenantTeamProjectEnrollmentId, char *api_version, char *x_api_version, tenant_team_project_enrollment_update_dto_t *tenant_team_project_enrollment_update_dto);


