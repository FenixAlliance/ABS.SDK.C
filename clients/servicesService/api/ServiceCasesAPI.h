#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/service_case_create_dto.h"
#include "../model/service_case_dto_envelope.h"
#include "../model/service_case_dto_i_read_only_list_envelope.h"
#include "../model/service_case_update_dto.h"


// Create a service case
//
// Creates a new service case for the specified tenant.
//
envelope_t*
ServiceCasesAPI_createServiceCaseAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, service_case_create_dto_t *service_case_create_dto);


// Delete a service case
//
// Deletes a service case by its identifier.
//
envelope_t*
ServiceCasesAPI_deleteServiceCaseAsync(apiClient_t *apiClient, char *tenantId, char *serviceCaseId, char *api_version, char *x_api_version);


// Get a service case by ID
//
// Retrieves a service case by its identifier.
//
service_case_dto_envelope_t*
ServiceCasesAPI_getServiceCaseByIdAsync(apiClient_t *apiClient, char *tenantId, char *serviceCaseId, char *api_version, char *x_api_version);


// Get all service cases
//
// Retrieves all service cases for the specified tenant.
//
service_case_dto_i_read_only_list_envelope_t*
ServiceCasesAPI_getServiceCasesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get service cases count
//
// Returns the count of service cases for the specified tenant.
//
int32_envelope_t*
ServiceCasesAPI_getServiceCasesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a service case
//
// Updates an existing service case.
//
envelope_t*
ServiceCasesAPI_updateServiceCaseAsync(apiClient_t *apiClient, char *tenantId, char *serviceCaseId, char *api_version, char *x_api_version, service_case_update_dto_t *service_case_update_dto);


