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
#include "../model/knowledge_article_create_dto.h"
#include "../model/knowledge_article_dto_collection_query_parameters.h"
#include "../model/knowledge_article_dto_envelope.h"
#include "../model/knowledge_article_dto_list_envelope.h"
#include "../model/knowledge_article_update_dto.h"
#include "../model/patch_operation.h"


// Create a knowledge article
//
empty_envelope_t*
KnowledgeArticlesAPI_createKnowledgeArticleAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, knowledge_article_create_dto_t *knowledge_article_create_dto);


// Delete a knowledge article
//
empty_envelope_t*
KnowledgeArticlesAPI_deleteKnowledgeArticleAsync(apiClient_t *apiClient, char *tenantId, char *knowledgeArticleId, char *api_version, char *x_api_version);


// Retrieve a knowledge article by ID
//
knowledge_article_dto_envelope_t*
KnowledgeArticlesAPI_getKnowledgeArticleAsync(apiClient_t *apiClient, char *tenantId, char *knowledgeArticleId, char *api_version, char *x_api_version);


// Retrieve knowledge articles
//
knowledge_article_dto_list_envelope_t*
KnowledgeArticlesAPI_getKnowledgeArticlesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, knowledge_article_dto_collection_query_parameters_t *knowledge_article_dto_collection_query_parameters);


// Get knowledge articles count
//
int32_envelope_t*
KnowledgeArticlesAPI_getKnowledgeArticlesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, knowledge_article_dto_collection_query_parameters_t *knowledge_article_dto_collection_query_parameters);


// Patch a knowledge article
//
// Partially updates an existing knowledge article by its unique identifier.
//
empty_envelope_t*
KnowledgeArticlesAPI_patchKnowledgeArticleAsync(apiClient_t *apiClient, char *tenantId, char *knowledgeArticleId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a knowledge article
//
empty_envelope_t*
KnowledgeArticlesAPI_updateKnowledgeArticleAsync(apiClient_t *apiClient, char *tenantId, char *knowledgeArticleId, char *api_version, char *x_api_version, knowledge_article_update_dto_t *knowledge_article_update_dto);


