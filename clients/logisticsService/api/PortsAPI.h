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
#include "../model/operation.h"
#include "../model/port_create_dto.h"
#include "../model/port_dto_envelope.h"
#include "../model/port_dto_list_envelope.h"
#include "../model/port_update_dto.h"


// Create a port
//
// Creates a new port for the specified tenant.
//
empty_envelope_t*
PortsAPI_createPortAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, port_create_dto_t *port_create_dto);


// Delete a port
//
// Deletes a port.
//
empty_envelope_t*
PortsAPI_deletePortAsync(apiClient_t *apiClient, char *tenantId, char *portId, char *api_version, char *x_api_version);


// Get port by ID
//
// Retrieves a specific port by its identifier.
//
port_dto_envelope_t*
PortsAPI_getPortByIdAsync(apiClient_t *apiClient, char *tenantId, char *portId, char *api_version, char *x_api_version);


// Get all ports
//
// Retrieves all ports for the specified tenant.
//
port_dto_list_envelope_t*
PortsAPI_getPortsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get ports count
//
// Returns the count of ports for the specified tenant.
//
int32_envelope_t*
PortsAPI_getPortsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a port
//
// Partially updates an existing port using JSON Patch.
//
empty_envelope_t*
PortsAPI_patchPortAsync(apiClient_t *apiClient, char *tenantId, char *portId, char *api_version, char *x_api_version, list_t *operation);


// Update a port
//
// Updates an existing port.
//
empty_envelope_t*
PortsAPI_updatePortAsync(apiClient_t *apiClient, char *tenantId, char *portId, char *api_version, char *x_api_version, port_update_dto_t *port_update_dto);


