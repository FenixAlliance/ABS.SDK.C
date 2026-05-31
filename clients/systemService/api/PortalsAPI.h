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
#include "../model/web_portal_create_dto.h"
#include "../model/web_portal_dto_envelope.h"
#include "../model/web_portal_dto_list_envelope.h"
#include "../model/web_portal_update_dto.h"


// Create a new system portal
//
// Create a new web portal in the system
//
empty_envelope_t*
PortalsAPI_createSystemPortal(apiClient_t *apiClient, char *api_version, char *x_api_version, web_portal_create_dto_t *web_portal_create_dto);


// Delete a system portal
//
// Delete a web portal from the system
//
empty_envelope_t*
PortalsAPI_deleteSystemPortal(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);


// Retrieve a single system portal by its ID
//
// Retrieve a single system portal by its ID
//
web_portal_dto_envelope_t*
PortalsAPI_getSystemPortalById(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);


// Retrieve a list of system portals
//
// Retrieve a list of all web portals in the system
//
web_portal_dto_list_envelope_t*
PortalsAPI_getSystemPortals(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the count of system portals
//
// Get the count of all web portals in the system
//
int32_envelope_t*
PortalsAPI_getSystemPortalsCount(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Update a system portal
//
// Update an existing web portal in the system
//
empty_envelope_t*
PortalsAPI_updateSystemPortal(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version, web_portal_update_dto_t *web_portal_update_dto);


