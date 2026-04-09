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
#include "../model/web_content_create_dto.h"
#include "../model/web_content_dto_envelope.h"
#include "../model/web_content_dto_list_envelope.h"
#include "../model/web_content_update_dto.h"


// Count web contents
//
// Counts all web contents for the specified tenant.
//
int32_envelope_t*
WebContentsAPI_countWebContentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a web content
//
// Creates a new web content for the specified tenant.
//
empty_envelope_t*
WebContentsAPI_createWebContentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_content_create_dto_t *web_content_create_dto);


// Delete a web content
//
// Deletes a web content for the specified tenant.
//
empty_envelope_t*
WebContentsAPI_deleteWebContentAsync(apiClient_t *apiClient, char *tenantId, char *webContentId, char *api_version, char *x_api_version);


// Get web content by ID
//
// Retrieves a specific web content by its ID.
//
web_content_dto_envelope_t*
WebContentsAPI_getWebContentByIdAsync(apiClient_t *apiClient, char *tenantId, char *webContentId, char *api_version, char *x_api_version);


// Get web contents
//
// Retrieves all web contents for the specified tenant.
//
web_content_dto_list_envelope_t*
WebContentsAPI_getWebContentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a web content
//
// Updates an existing web content for the specified tenant.
//
empty_envelope_t*
WebContentsAPI_updateWebContentAsync(apiClient_t *apiClient, char *tenantId, char *webContentId, char *api_version, char *x_api_version, web_content_update_dto_t *web_content_update_dto);


