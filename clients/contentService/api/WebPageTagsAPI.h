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
#include "../model/web_page_tag_create_dto.h"
#include "../model/web_page_tag_dto_envelope.h"
#include "../model/web_page_tag_dto_list_envelope.h"
#include "../model/web_page_tag_update_dto.h"


// Count web page tags
//
// Counts all web page tags for the specified tenant.
//
int32_envelope_t*
WebPageTagsAPI_countWebPageTagsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a web page tag
//
// Creates a new web page tag for the specified tenant.
//
empty_envelope_t*
WebPageTagsAPI_createWebPageTagAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, web_page_tag_create_dto_t *web_page_tag_create_dto);


// Delete a web page tag
//
// Deletes a web page tag for the specified tenant.
//
empty_envelope_t*
WebPageTagsAPI_deleteWebPageTagAsync(apiClient_t *apiClient, char *tenantId, char *webPageTagId, char *api_version, char *x_api_version);


// Get web page tag by ID
//
// Retrieves a specific web page tag by its ID.
//
web_page_tag_dto_envelope_t*
WebPageTagsAPI_getWebPageTagByIdAsync(apiClient_t *apiClient, char *tenantId, char *webPageTagId, char *api_version, char *x_api_version);


// Get web page tags
//
// Retrieves all web page tags for the specified tenant.
//
web_page_tag_dto_list_envelope_t*
WebPageTagsAPI_getWebPageTagsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a web page tag
//
// Updates an existing web page tag for the specified tenant.
//
empty_envelope_t*
WebPageTagsAPI_updateWebPageTagAsync(apiClient_t *apiClient, char *tenantId, char *webPageTagId, char *api_version, char *x_api_version, web_page_tag_update_dto_t *web_page_tag_update_dto);


