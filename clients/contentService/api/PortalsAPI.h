#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/business_domain_dto_list_envelope.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/operation.h"
#include "../model/portal_options_envelope.h"
#include "../model/portal_settings.h"
#include "../model/portal_settings_envelope.h"
#include "../model/web_portal_create_dto.h"
#include "../model/web_portal_dto_envelope.h"
#include "../model/web_portal_dto_list_envelope.h"
#include "../model/web_portal_update_dto.h"


// Bind a domain to a web portal
//
// Bind a verified BusinessDomain to a web portal
//
empty_envelope_t*
PortalsAPI_bindWebPortalDomainAsync(apiClient_t *apiClient, char *tenantId, char *portalId, char *businessDomainId, char *api_version, char *x_api_version);


// Count portals
//
// Counts all portals for the specified tenant.
//
int32_envelope_t*
PortalsAPI_countPortalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a new web portal
//
// Create a new web portal
//
empty_envelope_t*
PortalsAPI_createWebPortalAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_portal_create_dto_t *web_portal_create_dto);


// Delete a web portal
//
// Delete a web portal
//
empty_envelope_t*
PortalsAPI_deleteWebPortalAsync(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version);


// Get the current portal
//
// Get the current portal of the this server instance
//
web_portal_dto_envelope_t*
PortalsAPI_getCurrentWebPortalAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the current portal's options
//
// Get the current portal's options for the current user.
//
portal_options_envelope_t*
PortalsAPI_getCurrentWebPortalOptionsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get portals
//
// Retrieves all portals for the specified tenant.
//
web_portal_dto_list_envelope_t*
PortalsAPI_getPortalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the root portal
//
// Get the root portal of the this server instance
//
web_portal_dto_envelope_t*
PortalsAPI_getRootWebPortalAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get a web portal by its ID
//
// Get a web portal by its ID
//
web_portal_dto_envelope_t*
PortalsAPI_getWebPortalByIdAsync(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);


// Get a web portal's bound domains
//
// Get the BusinessDomains bound to a web portal
//
business_domain_dto_list_envelope_t*
PortalsAPI_getWebPortalDomainBindingsAsync(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version);


// Get a web portal's options by its ID
//
// Get a web portal's options by its ID
//
portal_options_envelope_t*
PortalsAPI_getWebPortalOptionsAsync(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);


// Get a web portal's settings by its ID
//
// Get a web portal's settings by its ID
//
portal_settings_envelope_t*
PortalsAPI_getWebPortalSettingsAsync(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);


// Initialize the current portal
//
// Initialize the current portal for the current user.
//
web_portal_dto_envelope_t*
PortalsAPI_initializeCurrentWebPortalAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Partially update a web portal
//
// Partially update a web portal
//
empty_envelope_t*
PortalsAPI_patchWebPortalAsync(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version, list_t *operation);


// Search for a portal by its domain
//
// Search for a portal by its domain
//
web_portal_dto_envelope_t*
PortalsAPI_searchWebPortalAsync(apiClient_t *apiClient, char *domain, char *api_version, char *x_api_version);


// Unbind a domain from a web portal
//
// Unbind a BusinessDomain from a web portal
//
empty_envelope_t*
PortalsAPI_unbindWebPortalDomainAsync(apiClient_t *apiClient, char *tenantId, char *portalId, char *businessDomainId, char *api_version, char *x_api_version);


// Update an existing web portal
//
// Update an existing web portal
//
empty_envelope_t*
PortalsAPI_updateWebPortalAsync(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version, web_portal_update_dto_t *web_portal_update_dto);


// Update a web portal's settings
//
// Update a web portal's settings (Options) by its ID
//
empty_envelope_t*
PortalsAPI_updateWebPortalSettingsAsync(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version, portal_settings_t *portal_settings);


