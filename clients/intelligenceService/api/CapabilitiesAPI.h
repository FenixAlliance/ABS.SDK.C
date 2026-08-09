#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/capability_dto_envelope.h"
#include "../model/capability_dto_list_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"

// Enum SURFACE for CapabilitiesAPI_getCapabilitiesAsync
typedef enum  { intelligenceservice_getCapabilitiesAsync_SURFACE_NULL = 0, intelligenceservice_getCapabilitiesAsync_SURFACE_None, intelligenceservice_getCapabilitiesAsync_SURFACE_Workflow, intelligenceservice_getCapabilitiesAsync_SURFACE_AI, intelligenceservice_getCapabilitiesAsync_SURFACE_Mcp, intelligenceservice_getCapabilitiesAsync_SURFACE_Job, intelligenceservice_getCapabilitiesAsync_SURFACE_Integration, intelligenceservice_getCapabilitiesAsync_SURFACE_Webhook, intelligenceservice_getCapabilitiesAsync_SURFACE_Admin } intelligenceservice_getCapabilitiesAsync_surface_e;

// Enum SURFACE for CapabilitiesAPI_getCapabilitiesCountAsync
typedef enum  { intelligenceservice_getCapabilitiesCountAsync_SURFACE_NULL = 0, intelligenceservice_getCapabilitiesCountAsync_SURFACE_None, intelligenceservice_getCapabilitiesCountAsync_SURFACE_Workflow, intelligenceservice_getCapabilitiesCountAsync_SURFACE_AI, intelligenceservice_getCapabilitiesCountAsync_SURFACE_Mcp, intelligenceservice_getCapabilitiesCountAsync_SURFACE_Job, intelligenceservice_getCapabilitiesCountAsync_SURFACE_Integration, intelligenceservice_getCapabilitiesCountAsync_SURFACE_Webhook, intelligenceservice_getCapabilitiesCountAsync_SURFACE_Admin } intelligenceservice_getCapabilitiesCountAsync_surface_e;


// Get the annotated capability catalog
//
// Retrieves the full governed-capability catalog for the specified tenant, optionally narrowed to a single execution surface. Every capability is returned with an Available flag (and a DeniedReason when not available) so callers render disabled-with-reason instead of hiding; entitlement is computed server-side.
//
capability_dto_list_envelope_t*
CapabilitiesAPI_getCapabilitiesAsync(apiClient_t *apiClient, char *tenantId, intelligenceservice_getCapabilitiesAsync_surface_e surface, char *api_version, char *x_api_version);


// Get the capability catalog count
//
// Returns the number of governed capabilities in the catalog for the specified tenant — the surface-matching total that mirrors the list route's returned-set size (entitled or not), honouring the same optional surface narrowing.
//
int32_envelope_t*
CapabilitiesAPI_getCapabilitiesCountAsync(apiClient_t *apiClient, char *tenantId, intelligenceservice_getCapabilitiesCountAsync_surface_e surface, char *api_version, char *x_api_version);


// Get a capability by key
//
// Retrieves a single governed capability by its stable, dotted key, stamped with the Available / DeniedReason entitlement flag. Returns 404 only when the capability does not exist; an existing capability the actor is not entitled to run is returned annotated as unavailable, not hidden.
//
capability_dto_envelope_t*
CapabilitiesAPI_getCapabilityByKeyAsync(apiClient_t *apiClient, char *tenantId, char *key, char *api_version, char *x_api_version);


