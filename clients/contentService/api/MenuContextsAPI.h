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
#include "../model/menu_context_create_dto.h"
#include "../model/menu_context_dto_envelope.h"
#include "../model/menu_context_dto_list_envelope.h"
#include "../model/menu_context_update_dto.h"


// Count menu contexts
//
// Counts all menu contexts for the specified tenant.
//
int32_envelope_t*
MenuContextsAPI_countMenuContextsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a menu context
//
// Creates a new menu context for the specified tenant.
//
empty_envelope_t*
MenuContextsAPI_createMenuContextAsync(apiClient_t *apiClient, char *tenantId, menu_context_create_dto_t *menu_context_create_dto, char *api_version, char *x_api_version);


// Delete a menu context
//
// Deletes a menu context for the specified tenant.
//
empty_envelope_t*
MenuContextsAPI_deleteMenuContextAsync(apiClient_t *apiClient, char *tenantId, char *menuContextId, char *api_version, char *x_api_version);


// Get menu context by ID
//
// Retrieves a specific menu context by its identifier.
//
menu_context_dto_envelope_t*
MenuContextsAPI_getMenuContextByIdAsync(apiClient_t *apiClient, char *tenantId, char *menuContextId, char *api_version, char *x_api_version);


// Get menu contexts
//
// Retrieves all menu contexts for the specified tenant.
//
menu_context_dto_list_envelope_t*
MenuContextsAPI_getMenuContextsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a menu context
//
// Updates an existing menu context for the specified tenant.
//
empty_envelope_t*
MenuContextsAPI_updateMenuContextAsync(apiClient_t *apiClient, char *tenantId, char *menuContextId, menu_context_update_dto_t *menu_context_update_dto, char *api_version, char *x_api_version);


