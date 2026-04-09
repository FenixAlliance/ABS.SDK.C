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
#include "../model/tenant_department_create_dto.h"
#include "../model/tenant_department_dto_envelope.h"
#include "../model/tenant_department_dto_list_envelope.h"
#include "../model/tenant_department_update_dto.h"


// Create a new tenant department
//
// Create a new tenant department
//
empty_envelope_t*
DepartmentsAPI_createTenantDepartment(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_department_create_dto_t *tenant_department_create_dto);


// Delete a tenant department
//
// Delete a tenant department
//
empty_envelope_t*
DepartmentsAPI_deleteTenantDepartment(apiClient_t *apiClient, char *tenantId, char *tenantDepartmentId, char *api_version, char *x_api_version);


// Retrieve a single tenant department by its ID
//
// Retrieve a single tenant department by its ID
//
tenant_department_dto_envelope_t*
DepartmentsAPI_getTenantDepartmentById(apiClient_t *apiClient, char *tenantId, char *tenantDepartmentId, char *api_version, char *x_api_version);


// Retrieve a list of tenant departments
//
// Retrieve a list of tenant departments
//
tenant_department_dto_list_envelope_t*
DepartmentsAPI_getTenantDepartments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant departments
//
// Get the count of tenant departments
//
int32_envelope_t*
DepartmentsAPI_getTenantDepartmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tenant department
//
// Update a tenant department
//
empty_envelope_t*
DepartmentsAPI_updateTenantDepartment(apiClient_t *apiClient, char *tenantId, char *tenantDepartmentId, char *api_version, char *x_api_version, tenant_department_update_dto_t *tenant_department_update_dto);


