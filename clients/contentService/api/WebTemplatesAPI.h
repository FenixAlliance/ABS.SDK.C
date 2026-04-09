#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/web_template_create_dto.h"
#include "../model/web_template_dto_envelope.h"
#include "../model/web_template_dto_list_envelope.h"
#include "../model/web_template_update_dto.h"


// Count web templates
//
// Counts all web templates for the specified tenant.
//
int32_envelope_t*
WebTemplatesAPI_countWebTemplatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a web template
//
// Creates a new web template for the specified tenant.
//
void
WebTemplatesAPI_createWebTemplateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_template_create_dto_t *web_template_create_dto);


// Delete a web template
//
// Deletes a web template for the specified tenant.
//
void
WebTemplatesAPI_deleteWebTemplateAsync(apiClient_t *apiClient, char *tenantId, char *webTemplateId, char *api_version, char *x_api_version);


// Get web template by ID
//
// Retrieves a specific web template by its identifier.
//
web_template_dto_envelope_t*
WebTemplatesAPI_getWebTemplateByIdAsync(apiClient_t *apiClient, char *tenantId, char *webTemplateId, char *api_version, char *x_api_version);


// Get web templates
//
// Retrieves all web templates for the specified tenant.
//
web_template_dto_list_envelope_t*
WebTemplatesAPI_getWebTemplatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a web template
//
// Updates an existing web template for the specified tenant.
//
void
WebTemplatesAPI_updateWebTemplateAsync(apiClient_t *apiClient, char *tenantId, char *webTemplateId, char *api_version, char *x_api_version, web_template_update_dto_t *web_template_update_dto);


