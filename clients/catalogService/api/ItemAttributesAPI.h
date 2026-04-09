#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/item_attribute_create_dto.h"
#include "../model/item_attribute_dto_envelope.h"
#include "../model/item_attribute_dto_list_envelope.h"
#include "../model/item_attribute_update_dto.h"


// Count item attributes
//
// Counts all item attributes for the specified tenant.
//
int32_envelope_t*
ItemAttributesAPI_countItemAttributesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a new item attribute
//
// Creates a new item attribute for the specified tenant.
//
item_attribute_dto_envelope_t*
ItemAttributesAPI_createItemAttributeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_attribute_create_dto_t *item_attribute_create_dto);


// Delete an item attribute
//
// Deletes an item attribute for the specified tenant.
//
void
ItemAttributesAPI_deleteItemAttributeAsync(apiClient_t *apiClient, char *tenantId, char *itemAttributeId, char *api_version, char *x_api_version);


// Get item attribute by ID
//
// Retrieves a specific item attribute by its ID.
//
item_attribute_dto_envelope_t*
ItemAttributesAPI_getItemAttributeByIdAsync(apiClient_t *apiClient, char *itemAttributeId, char *api_version, char *x_api_version);


// Get all item attributes
//
// Retrieves all item attributes for the specified tenant using OData query options.
//
item_attribute_dto_list_envelope_t*
ItemAttributesAPI_getItemAttributesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an item attribute
//
// Updates an existing item attribute for the specified tenant.
//
void
ItemAttributesAPI_updateItemAttributeAsync(apiClient_t *apiClient, char *tenantId, char *itemAttributeId, char *api_version, char *x_api_version, item_attribute_update_dto_t *item_attribute_update_dto);


