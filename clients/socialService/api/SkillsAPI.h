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
#include "../model/operation.h"
#include "../model/skill_create_dto.h"
#include "../model/skill_dto_envelope.h"
#include "../model/skill_dto_list_envelope.h"
#include "../model/skill_update_dto.h"


// Create a skill
//
// Creates a new skill catalog entry for the specified tenant.
//
empty_envelope_t*
SkillsAPI_createSkillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, skill_create_dto_t *skill_create_dto);


// Delete a skill
//
// Deletes a skill for the specified tenant.
//
empty_envelope_t*
SkillsAPI_deleteSkillAsync(apiClient_t *apiClient, char *tenantId, char *skillId, char *api_version, char *x_api_version);


// Get skill by ID
//
// Retrieves a specific skill by its identifier.
//
skill_dto_envelope_t*
SkillsAPI_getSkillByIdAsync(apiClient_t *apiClient, char *tenantId, char *skillId, char *api_version, char *x_api_version);


// Get skills
//
// Retrieves the skill catalog for the specified tenant.
//
skill_dto_list_envelope_t*
SkillsAPI_getSkillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count skills
//
// Counts skill catalog entries for the specified tenant.
//
int32_envelope_t*
SkillsAPI_getSkillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a skill
//
// Partially updates an existing skill for the specified tenant.
//
empty_envelope_t*
SkillsAPI_patchSkillAsync(apiClient_t *apiClient, char *tenantId, char *skillId, char *api_version, char *x_api_version, list_t *operation);


// Update a skill
//
// Updates an existing skill for the specified tenant.
//
empty_envelope_t*
SkillsAPI_updateSkillAsync(apiClient_t *apiClient, char *tenantId, char *skillId, char *api_version, char *x_api_version, skill_update_dto_t *skill_update_dto);


