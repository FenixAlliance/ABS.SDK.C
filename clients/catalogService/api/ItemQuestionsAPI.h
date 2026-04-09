#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/item_question_create_dto.h"
#include "../model/item_question_dto_envelope.h"
#include "../model/item_question_dto_list_envelope.h"
#include "../model/item_question_update_dto.h"


// Create a new item question
//
// Creates a new item question for the specified tenant.
//
item_question_dto_envelope_t*
ItemQuestionsAPI_createItemQuestionAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_question_create_dto_t *item_question_create_dto);


// Delete an item question
//
// Deletes an item question for the specified tenant.
//
void
ItemQuestionsAPI_deleteItemQuestionAsync(apiClient_t *apiClient, char *tenantId, char *itemQuestionId, char *api_version, char *x_api_version);


// Get item question by ID
//
// Retrieves a specific item question by its ID.
//
item_question_dto_envelope_t*
ItemQuestionsAPI_getItemQuestionByIdAsync(apiClient_t *apiClient, char *itemQuestionId, char *api_version, char *x_api_version);


// Get all item questions
//
// Retrieves all item questions for the specified tenant using OData query options.
//
item_question_dto_list_envelope_t*
ItemQuestionsAPI_getItemQuestionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an item question
//
// Updates an existing item question for the specified tenant.
//
void
ItemQuestionsAPI_updateItemQuestionAsync(apiClient_t *apiClient, char *tenantId, char *itemQuestionId, char *api_version, char *x_api_version, item_question_update_dto_t *item_question_update_dto);


