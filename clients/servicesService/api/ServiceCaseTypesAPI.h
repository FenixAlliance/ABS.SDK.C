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
#include "../model/service_case_type_create_dto.h"
#include "../model/service_case_type_dto_envelope.h"
#include "../model/service_case_type_dto_i_read_only_list_envelope.h"
#include "../model/service_case_type_update_dto.h"


// Create a service case type
//
// Creates a new service case type for the specified tenant.
//
envelope_t*
ServiceCaseTypesAPI_createServiceCaseTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, service_case_type_create_dto_t *service_case_type_create_dto);


// Delete a service case type
//
// Deletes a service case type by its identifier.
//
envelope_t*
ServiceCaseTypesAPI_deleteServiceCaseTypeAsync(apiClient_t *apiClient, char *tenantId, char *serviceCaseTypeId, char *api_version, char *x_api_version);


// Get a service case type by ID
//
// Retrieves a service case type by its identifier.
//
service_case_type_dto_envelope_t*
ServiceCaseTypesAPI_getServiceCaseTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *serviceCaseTypeId, char *api_version, char *x_api_version);


// Get all service case types
//
// Retrieves all service case types for the specified tenant.
//
service_case_type_dto_i_read_only_list_envelope_t*
ServiceCaseTypesAPI_getServiceCaseTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get service case types count
//
// Returns the count of service case types for the specified tenant.
//
int32_envelope_t*
ServiceCaseTypesAPI_getServiceCaseTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a service case type
//
// Updates an existing service case type.
//
envelope_t*
ServiceCaseTypesAPI_updateServiceCaseTypeAsync(apiClient_t *apiClient, char *tenantId, char *serviceCaseTypeId, char *api_version, char *x_api_version, service_case_type_update_dto_t *service_case_type_update_dto);


