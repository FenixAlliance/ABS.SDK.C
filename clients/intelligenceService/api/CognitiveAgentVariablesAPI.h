#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cognitive_agent_variable_create_dto.h"
#include "../model/cognitive_agent_variable_dto_collection_query_parameters.h"
#include "../model/cognitive_agent_variable_dto_envelope.h"
#include "../model/cognitive_agent_variable_dto_list_envelope.h"
#include "../model/cognitive_agent_variable_update_dto.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Add a variable to a cognitive agent
//
// Adds a key/value variable to the specified cognitive agent and tenant.
//
void
CognitiveAgentVariablesAPI_createCognitiveAgentVariableAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_variable_create_dto_t *cognitive_agent_variable_create_dto);


// Remove a variable from a cognitive agent
//
// Removes a variable from the specified cognitive agent and tenant.
//
void
CognitiveAgentVariablesAPI_deleteCognitiveAgentVariableAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version);


// Get a cognitive agent variable by ID
//
// Retrieves a specific variable of a cognitive agent by its identifier.
//
cognitive_agent_variable_dto_envelope_t*
CognitiveAgentVariablesAPI_getCognitiveAgentVariableByIdAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version);


// Get all variables for a cognitive agent
//
// Retrieves all key/value variables for the specified cognitive agent and tenant.
//
cognitive_agent_variable_dto_list_envelope_t*
CognitiveAgentVariablesAPI_getCognitiveAgentVariablesAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_variable_dto_collection_query_parameters_t *cognitive_agent_variable_dto_collection_query_parameters);


// Get variable count for a cognitive agent
//
// Returns the count of variables for the specified cognitive agent and tenant.
//
int32_envelope_t*
CognitiveAgentVariablesAPI_getCognitiveAgentVariablesCountAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *api_version, char *x_api_version, cognitive_agent_variable_dto_collection_query_parameters_t *cognitive_agent_variable_dto_collection_query_parameters);


// Update a cognitive agent variable
//
// Updates the value of a variable for the specified agent and tenant.
//
void
CognitiveAgentVariablesAPI_updateCognitiveAgentVariableAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *id, char *api_version, char *x_api_version, cognitive_agent_variable_update_dto_t *cognitive_agent_variable_update_dto);


