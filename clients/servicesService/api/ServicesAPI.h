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
#include "../model/service_create_dto.h"
#include "../model/service_dto_envelope.h"
#include "../model/service_dto_i_read_only_list_envelope.h"
#include "../model/service_update_dto.h"


// Create a service
//
// Creates a new service for the specified tenant.
//
envelope_t*
ServicesAPI_createServiceAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, service_create_dto_t *service_create_dto);


// Delete a service
//
// Deletes a service by its identifier.
//
envelope_t*
ServicesAPI_deleteServiceAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *api_version, char *x_api_version);


// Get a service by ID
//
// Retrieves a service by its identifier.
//
service_dto_envelope_t*
ServicesAPI_getServiceByIdAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *api_version, char *x_api_version);


// Get all services
//
// Retrieves all services for the specified tenant.
//
service_dto_i_read_only_list_envelope_t*
ServicesAPI_getServicesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get services count
//
// Returns the count of services for the specified tenant.
//
int32_envelope_t*
ServicesAPI_getServicesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a service
//
// Updates an existing service.
//
envelope_t*
ServicesAPI_updateServiceAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *api_version, char *x_api_version, service_update_dto_t *service_update_dto);


