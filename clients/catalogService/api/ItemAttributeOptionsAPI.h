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
#include "../model/item_attribute_option_create_dto.h"
#include "../model/item_attribute_option_dto_collection_query_parameters.h"
#include "../model/item_attribute_option_dto_envelope.h"
#include "../model/item_attribute_option_dto_list_envelope.h"
#include "../model/item_attribute_option_update_dto.h"
#include "../model/patch_operation.h"


// Create a new item attribute option
//
// Creates a new item attribute option for the specified tenant.
//
item_attribute_option_dto_envelope_t*
ItemAttributeOptionsAPI_createItemAttributeOptionAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_attribute_option_create_dto_t *item_attribute_option_create_dto);


// Delete an item attribute option
//
// Deletes an item attribute option for the specified tenant.
//
void
ItemAttributeOptionsAPI_deleteItemAttributeOptionAsync(apiClient_t *apiClient, char *tenantId, char *itemAttributeOptionId, char *api_version, char *x_api_version);


// Get item attribute option by ID
//
// Retrieves a specific item attribute option by its ID.
//
item_attribute_option_dto_envelope_t*
ItemAttributeOptionsAPI_getItemAttributeOptionByIdAsync(apiClient_t *apiClient, char *itemAttributeOptionId, char *tenantId, char *api_version, char *x_api_version);


// Get all item attribute options
//
// Retrieves all item attribute options for the specified tenant using OData query options.
//
item_attribute_option_dto_list_envelope_t*
ItemAttributeOptionsAPI_getItemAttributeOptionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_attribute_option_dto_collection_query_parameters_t *item_attribute_option_dto_collection_query_parameters);


// Get item attribute options count
//
// Returns the count of item attribute options for the specified tenant.
//
int32_envelope_t*
ItemAttributeOptionsAPI_getItemAttributeOptionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_attribute_option_dto_collection_query_parameters_t *item_attribute_option_dto_collection_query_parameters);


// Patch an item attribute option
//
// Partially updates an existing item attribute option for the specified tenant using a JSON Patch document.
//
empty_envelope_t*
ItemAttributeOptionsAPI_patchItemAttributeOptionAsync(apiClient_t *apiClient, char *tenantId, char *itemAttributeOptionId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update an item attribute option
//
// Updates an existing item attribute option for the specified tenant.
//
item_attribute_option_dto_envelope_t*
ItemAttributeOptionsAPI_updateItemAttributeOptionAsync(apiClient_t *apiClient, char *tenantId, char *itemAttributeOptionId, char *api_version, char *x_api_version, item_attribute_option_update_dto_t *item_attribute_option_update_dto);


