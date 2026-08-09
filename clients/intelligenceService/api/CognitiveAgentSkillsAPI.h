#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cognitive_agent_skill_create_dto.h"
#include "../model/cognitive_agent_skill_dto_collection_query_parameters.h"
#include "../model/cognitive_agent_skill_dto_envelope.h"
#include "../model/cognitive_agent_skill_dto_list_envelope.h"
#include "../model/cognitive_agent_skill_update_dto.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Assign a skill to a cognitive agent
//
// Assigns a reusable catalog skill to the specified cognitive agent and tenant.
//
void
CognitiveAgentSkillsAPI_createCognitiveAgentSkillAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_skill_create_dto_t *cognitive_agent_skill_create_dto);


// Remove a skill assignment from a cognitive agent
//
// Removes a skill assignment from the specified cognitive agent and tenant.
//
void
CognitiveAgentSkillsAPI_deleteCognitiveAgentSkillAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version);


// Get a cognitive agent skill assignment by ID
//
// Retrieves a specific skill assignment of a cognitive agent by its identifier.
//
cognitive_agent_skill_dto_envelope_t*
CognitiveAgentSkillsAPI_getCognitiveAgentSkillByIdAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version);


// Get all skill assignments for a cognitive agent
//
// Retrieves all skill assignments for the specified cognitive agent and tenant.
//
cognitive_agent_skill_dto_list_envelope_t*
CognitiveAgentSkillsAPI_getCognitiveAgentSkillsAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_skill_dto_collection_query_parameters_t *cognitive_agent_skill_dto_collection_query_parameters);


// Get skill assignment count for a cognitive agent
//
// Returns the count of skill assignments for the specified cognitive agent and tenant.
//
int32_envelope_t*
CognitiveAgentSkillsAPI_getCognitiveAgentSkillsCountAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_skill_dto_collection_query_parameters_t *cognitive_agent_skill_dto_collection_query_parameters);


// Update a cognitive agent skill assignment
//
// Updates the per-assignment overrides of a skill assignment for the specified agent and tenant.
//
void
CognitiveAgentSkillsAPI_updateCognitiveAgentSkillAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version, cognitive_agent_skill_update_dto_t *cognitive_agent_skill_update_dto);


