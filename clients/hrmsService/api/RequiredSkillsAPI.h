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
#include "../model/patch_operation.h"
#include "../model/required_skill_record_create_dto.h"
#include "../model/required_skill_record_dto_collection_query_parameters.h"
#include "../model/required_skill_record_dto_envelope.h"
#include "../model/required_skill_record_dto_list_envelope.h"
#include "../model/required_skill_record_update_dto.h"


// Create a required skill
//
// Creates a new required-skill record for the specified tenant.
//
empty_envelope_t*
RequiredSkillsAPI_createRequiredSkillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, required_skill_record_create_dto_t *required_skill_record_create_dto);


// Delete a required skill
//
// Deletes a required-skill record for the specified tenant.
//
empty_envelope_t*
RequiredSkillsAPI_deleteRequiredSkillAsync(apiClient_t *apiClient, char *tenantId, char *requiredSkillId, char *api_version, char *x_api_version);


// Get required skill by ID
//
// Retrieves a specific required-skill record by its identifier.
//
required_skill_record_dto_envelope_t*
RequiredSkillsAPI_getRequiredSkillByIdAsync(apiClient_t *apiClient, char *tenantId, char *requiredSkillId, char *api_version, char *x_api_version);


// Get required skills
//
// Retrieves required-skill records for the specified tenant. Filter by `$filter=JobOfferId eq '...'` or `EmployerProfileId eq '...'`.
//
required_skill_record_dto_list_envelope_t*
RequiredSkillsAPI_getRequiredSkillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, required_skill_record_dto_collection_query_parameters_t *required_skill_record_dto_collection_query_parameters);


// Count required skills
//
// Counts required-skill records for the specified tenant.
//
int32_envelope_t*
RequiredSkillsAPI_getRequiredSkillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, required_skill_record_dto_collection_query_parameters_t *required_skill_record_dto_collection_query_parameters);


// Patch a required skill
//
// Partially updates an existing required-skill record for the specified tenant.
//
empty_envelope_t*
RequiredSkillsAPI_patchRequiredSkillAsync(apiClient_t *apiClient, char *tenantId, char *requiredSkillId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a required skill
//
// Updates an existing required-skill record for the specified tenant.
//
empty_envelope_t*
RequiredSkillsAPI_updateRequiredSkillAsync(apiClient_t *apiClient, char *tenantId, char *requiredSkillId, char *api_version, char *x_api_version, required_skill_record_update_dto_t *required_skill_record_update_dto);


