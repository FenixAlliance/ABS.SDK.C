#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/item_tag_create_dto.h"
#include "../model/item_tag_dto_envelope.h"
#include "../model/item_tag_dto_list_envelope.h"
#include "../model/item_tag_update_dto.h"


// Create a new item tag
//
// Creates a new item tag for the specified tenant.
//
item_tag_dto_envelope_t*
ItemTagsAPI_createItemTagAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_tag_create_dto_t *item_tag_create_dto);


// Delete an item tag
//
// Deletes an item tag for the specified tenant.
//
void
ItemTagsAPI_deleteItemTagAsync(apiClient_t *apiClient, char *tenantId, char *itemTagId, char *api_version, char *x_api_version);


// Get item tag by ID
//
// Retrieves a specific item tag by its ID.
//
item_tag_dto_envelope_t*
ItemTagsAPI_getItemTagByIdAsync(apiClient_t *apiClient, char *itemTagId, char *api_version, char *x_api_version);


// Get all item tags
//
// Retrieves all item tags for the specified tenant using OData query options.
//
item_tag_dto_list_envelope_t*
ItemTagsAPI_getItemTagsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an item tag
//
// Updates an existing item tag for the specified tenant.
//
void
ItemTagsAPI_updateItemTagAsync(apiClient_t *apiClient, char *tenantId, char *itemTagId, char *api_version, char *x_api_version, item_tag_update_dto_t *item_tag_update_dto);


