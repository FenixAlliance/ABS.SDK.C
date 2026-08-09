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
#include "../model/web_component_create_dto.h"
#include "../model/web_component_dto_collection_query_parameters.h"
#include "../model/web_component_dto_envelope.h"
#include "../model/web_component_dto_list_envelope.h"
#include "../model/web_component_update_dto.h"


// Count web components
//
// Counts all web components for the specified tenant.
//
int32_envelope_t*
WebComponentsAPI_countWebComponentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_component_dto_collection_query_parameters_t *web_component_dto_collection_query_parameters);


// Create a web component
//
// Creates a new web component for the specified tenant.
//
empty_envelope_t*
WebComponentsAPI_createWebComponentAsync(apiClient_t *apiClient, char *tenantId, web_component_create_dto_t *web_component_create_dto, char *api_version, char *x_api_version);


// Delete a web component
//
// Deletes a web component for the specified tenant.
//
empty_envelope_t*
WebComponentsAPI_deleteWebComponentAsync(apiClient_t *apiClient, char *tenantId, char *webComponentId, char *api_version, char *x_api_version);


// Get web component by ID
//
// Retrieves a specific web component by its identifier.
//
web_component_dto_envelope_t*
WebComponentsAPI_getWebComponentByIdAsync(apiClient_t *apiClient, char *tenantId, char *webComponentId, char *api_version, char *x_api_version);


// Get web components
//
// Retrieves all web components for the specified tenant.
//
web_component_dto_list_envelope_t*
WebComponentsAPI_getWebComponentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_component_dto_collection_query_parameters_t *web_component_dto_collection_query_parameters);


// Update a web component
//
// Updates an existing web component for the specified tenant.
//
empty_envelope_t*
WebComponentsAPI_updateWebComponentAsync(apiClient_t *apiClient, char *tenantId, char *webComponentId, web_component_update_dto_t *web_component_update_dto, char *api_version, char *x_api_version);


