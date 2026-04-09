#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/item_review_create_dto.h"
#include "../model/item_review_dto_envelope.h"
#include "../model/item_review_dto_list_envelope.h"
#include "../model/item_review_update_dto.h"


// Create a new item review
//
// Creates a new item review for the specified tenant.
//
item_review_dto_envelope_t*
ItemReviewsAPI_createItemReviewAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_review_create_dto_t *item_review_create_dto);


// Delete an item review
//
// Deletes an item review for the specified tenant.
//
void
ItemReviewsAPI_deleteItemReviewAsync(apiClient_t *apiClient, char *tenantId, char *itemReviewId, char *api_version, char *x_api_version);


// Get item review by ID
//
// Retrieves a specific item review by its ID.
//
item_review_dto_envelope_t*
ItemReviewsAPI_getItemReviewByIdAsync(apiClient_t *apiClient, char *itemReviewId, char *api_version, char *x_api_version);


// Get all item reviews
//
// Retrieves all item reviews for the specified item using OData query options.
//
item_review_dto_list_envelope_t*
ItemReviewsAPI_getItemReviewsAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Update an item review
//
// Updates an existing item review for the specified tenant.
//
void
ItemReviewsAPI_updateItemReviewAsync(apiClient_t *apiClient, char *tenantId, char *itemReviewId, char *api_version, char *x_api_version, item_review_update_dto_t *item_review_update_dto);


