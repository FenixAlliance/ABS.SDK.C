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
#include "../model/service_level_create_dto.h"
#include "../model/service_level_dto_envelope.h"
#include "../model/service_level_dto_i_read_only_list_envelope.h"
#include "../model/service_level_update_dto.h"


// Get all service levels count
//
// Returns the count of all service levels for the specified tenant.
//
int32_envelope_t*
ServiceLevelsAPI_countAllServiceLevelsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a service level
//
// Creates a new service level for the specified service.
//
envelope_t*
ServiceLevelsAPI_createServiceLevelAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *api_version, char *x_api_version, service_level_create_dto_t *service_level_create_dto);


// Delete a service level
//
// Deletes a service level by its identifier.
//
envelope_t*
ServiceLevelsAPI_deleteServiceLevelAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *serviceLevelId, char *api_version, char *x_api_version);


// Get all service levels
//
// Retrieves all service levels for the specified tenant.
//
service_level_dto_i_read_only_list_envelope_t*
ServiceLevelsAPI_getAllServiceLevelsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get a service level by ID
//
// Retrieves a service level by its identifier.
//
service_level_dto_envelope_t*
ServiceLevelsAPI_getServiceLevelByIdAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *serviceLevelId, char *api_version, char *x_api_version);


// Get all service levels
//
// Retrieves all service levels for the specified service.
//
service_level_dto_i_read_only_list_envelope_t*
ServiceLevelsAPI_getServiceLevelsAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *api_version, char *x_api_version);


// Get service levels count
//
// Returns the count of service levels for the specified service.
//
int32_envelope_t*
ServiceLevelsAPI_getServiceLevelsCountAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *api_version, char *x_api_version);


// Update a service level
//
// Updates an existing service level.
//
envelope_t*
ServiceLevelsAPI_updateServiceLevelAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *serviceLevelId, char *api_version, char *x_api_version, service_level_update_dto_t *service_level_update_dto);


