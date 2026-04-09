#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/item_attachment_create_dto.h"
#include "../model/item_attachment_dto_envelope.h"
#include "../model/item_attachment_dto_list_envelope.h"
#include "../model/item_attachment_update_dto.h"


// Create a new item attachment
//
// Creates a new item attachment for the specified tenant.
//
item_attachment_dto_envelope_t*
ItemAttachmentsAPI_createItemAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_attachment_create_dto_t *item_attachment_create_dto);


// Delete an item attachment
//
// Deletes an item attachment for the specified tenant.
//
empty_envelope_t*
ItemAttachmentsAPI_deleteItemAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *itemAttachmentId, char *api_version, char *x_api_version);


// Get item attachment by ID
//
// Retrieves a specific item attachment by its ID.
//
item_attachment_dto_envelope_t*
ItemAttachmentsAPI_getItemAttachmentByIdAsync(apiClient_t *apiClient, char *itemAttachmentId, char *api_version, char *x_api_version);


// Get all item attachments
//
// Retrieves all item attachments for the specified tenant using OData query options.
//
item_attachment_dto_list_envelope_t*
ItemAttachmentsAPI_getItemAttachmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an item attachment
//
// Updates an existing item attachment for the specified tenant.
//
empty_envelope_t*
ItemAttachmentsAPI_updateItemAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *itemAttachmentId, char *api_version, char *x_api_version, item_attachment_update_dto_t *item_attachment_update_dto);


