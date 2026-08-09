#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cognitive_agent_conversation_create_dto.h"
#include "../model/cognitive_agent_conversation_dto_collection_query_parameters.h"
#include "../model/cognitive_agent_conversation_dto_envelope.h"
#include "../model/cognitive_agent_conversation_dto_list_envelope.h"
#include "../model/cognitive_agent_conversation_update_dto.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create a new cognitive agent conversation
//
// Creates a new managed conversation for the specified cognitive agent and tenant.
//
void
CognitiveAgentConversationsAPI_createCognitiveAgentConversationAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_conversation_create_dto_t *cognitive_agent_conversation_create_dto);


// Delete a cognitive agent conversation
//
// Deletes a managed conversation for the specified cognitive agent and tenant.
//
void
CognitiveAgentConversationsAPI_deleteCognitiveAgentConversationAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version);


// Get a cognitive agent conversation by ID
//
// Retrieves a specific managed conversation of a cognitive agent by its identifier.
//
cognitive_agent_conversation_dto_envelope_t*
CognitiveAgentConversationsAPI_getCognitiveAgentConversationByIdAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version);


// Get all conversations for a cognitive agent
//
// Retrieves all managed conversations for the specified cognitive agent and tenant.
//
cognitive_agent_conversation_dto_list_envelope_t*
CognitiveAgentConversationsAPI_getCognitiveAgentConversationsAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters);


// Get conversation count for a cognitive agent
//
// Returns the count of managed conversations for the specified cognitive agent and tenant.
//
int32_envelope_t*
CognitiveAgentConversationsAPI_getCognitiveAgentConversationsCountAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters);


// Update a cognitive agent conversation
//
// Updates an existing managed conversation for the specified cognitive agent and tenant.
//
void
CognitiveAgentConversationsAPI_updateCognitiveAgentConversationAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version, cognitive_agent_conversation_update_dto_t *cognitive_agent_conversation_update_dto);


