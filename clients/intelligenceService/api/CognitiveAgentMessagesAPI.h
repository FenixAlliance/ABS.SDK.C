#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cognitive_agent_message_dto_collection_query_parameters.h"
#include "../model/cognitive_agent_message_dto_envelope.h"
#include "../model/cognitive_agent_message_dto_list_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Get a cognitive agent conversation message by ID
//
// Retrieves a specific durable message of a conversation by its identifier.
//
cognitive_agent_message_dto_envelope_t*
CognitiveAgentMessagesAPI_getCognitiveAgentMessageByIdAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *conversationId, char *id, char *api_version, char *x_api_version);


// Get all messages for a cognitive agent conversation
//
// Retrieves all durable messages for the specified conversation, agent and tenant.
//
cognitive_agent_message_dto_list_envelope_t*
CognitiveAgentMessagesAPI_getCognitiveAgentMessagesAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *conversationId, char *api_version, char *x_api_version, cognitive_agent_message_dto_collection_query_parameters_t *cognitive_agent_message_dto_collection_query_parameters);


// Get message count for a cognitive agent conversation
//
// Returns the count of durable messages for the specified conversation, agent and tenant.
//
int32_envelope_t*
CognitiveAgentMessagesAPI_getCognitiveAgentMessagesCountAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *conversationId, char *api_version, char *x_api_version, cognitive_agent_message_dto_collection_query_parameters_t *cognitive_agent_message_dto_collection_query_parameters);


