#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cognitive_skill_create_dto.h"
#include "../model/cognitive_skill_dto_collection_query_parameters.h"
#include "../model/cognitive_skill_dto_envelope.h"
#include "../model/cognitive_skill_dto_list_envelope.h"
#include "../model/cognitive_skill_update_dto.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create a new cognitive skill
//
// Creates a new reusable cognitive skill for the specified tenant.
//
void
CognitiveSkillsAPI_createCognitiveSkillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, cognitive_skill_create_dto_t *cognitive_skill_create_dto);


// Delete a cognitive skill
//
// Deletes a reusable cognitive skill for the specified tenant.
//
void
CognitiveSkillsAPI_deleteCognitiveSkillAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get cognitive skill by ID
//
// Retrieves a specific reusable cognitive skill by its identifier.
//
cognitive_skill_dto_envelope_t*
CognitiveSkillsAPI_getCognitiveSkillByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all cognitive skills
//
// Retrieves all reusable cognitive skills for the specified tenant.
//
cognitive_skill_dto_list_envelope_t*
CognitiveSkillsAPI_getCognitiveSkillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, cognitive_skill_dto_collection_query_parameters_t *cognitive_skill_dto_collection_query_parameters);


// Get cognitive skills count
//
// Returns the count of reusable cognitive skills for the specified tenant.
//
int32_envelope_t*
CognitiveSkillsAPI_getCognitiveSkillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, cognitive_skill_dto_collection_query_parameters_t *cognitive_skill_dto_collection_query_parameters);


// Update a cognitive skill
//
// Updates an existing reusable cognitive skill for the specified tenant.
//
void
CognitiveSkillsAPI_updateCognitiveSkillAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, cognitive_skill_update_dto_t *cognitive_skill_update_dto);


