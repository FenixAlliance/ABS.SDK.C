#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cognitive_agent_create_dto.h"
#include "../model/cognitive_agent_dto_collection_query_parameters.h"
#include "../model/cognitive_agent_dto_envelope.h"
#include "../model/cognitive_agent_dto_list_envelope.h"
#include "../model/cognitive_agent_update_dto.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create a new cognitive agent
//
// Creates a new managed cognitive agent for the specified tenant.
//
void
CognitiveAgentsAPI_createCognitiveAgentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, cognitive_agent_create_dto_t *cognitive_agent_create_dto);


// Delete a cognitive agent
//
// Deletes a managed cognitive agent for the specified tenant.
//
void
CognitiveAgentsAPI_deleteCognitiveAgentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get cognitive agent by ID
//
// Retrieves a specific managed cognitive agent by its identifier.
//
cognitive_agent_dto_envelope_t*
CognitiveAgentsAPI_getCognitiveAgentByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all cognitive agents
//
// Retrieves all managed cognitive agents for the specified tenant.
//
cognitive_agent_dto_list_envelope_t*
CognitiveAgentsAPI_getCognitiveAgentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, cognitive_agent_dto_collection_query_parameters_t *cognitive_agent_dto_collection_query_parameters);


// Get cognitive agents count
//
// Returns the count of managed cognitive agents for the specified tenant.
//
int32_envelope_t*
CognitiveAgentsAPI_getCognitiveAgentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, cognitive_agent_dto_collection_query_parameters_t *cognitive_agent_dto_collection_query_parameters);


// Update a cognitive agent
//
// Updates an existing managed cognitive agent for the specified tenant.
//
void
CognitiveAgentsAPI_updateCognitiveAgentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, cognitive_agent_update_dto_t *cognitive_agent_update_dto);


