#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/item_image_create_dto.h"
#include "../model/item_image_dto_envelope.h"
#include "../model/item_image_dto_list_envelope.h"
#include "../model/item_image_update_dto.h"


// Create a new item image
//
// Creates a new item image for the specified tenant.
//
item_image_dto_envelope_t*
ItemImagesAPI_createItemImageAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_image_create_dto_t *item_image_create_dto);


// Delete an item image
//
// Deletes an item image for the specified tenant.
//
void
ItemImagesAPI_deleteItemImageAsync(apiClient_t *apiClient, char *tenantId, char *itemImageId, char *api_version, char *x_api_version);


// Get item image by ID
//
// Retrieves a specific item image by its ID.
//
item_image_dto_envelope_t*
ItemImagesAPI_getItemImageByIdAsync(apiClient_t *apiClient, char *itemImageId, char *api_version, char *x_api_version);


// Get all item images
//
// Retrieves all item images for the specified tenant using OData query options.
//
item_image_dto_list_envelope_t*
ItemImagesAPI_getItemImagesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an item image
//
// Updates an existing item image for the specified tenant.
//
void
ItemImagesAPI_updateItemImageAsync(apiClient_t *apiClient, char *tenantId, char *itemImageId, char *api_version, char *x_api_version, item_image_update_dto_t *item_image_update_dto);


