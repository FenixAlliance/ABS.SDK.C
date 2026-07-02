#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/curriculum_create_dto.h"
#include "../model/curriculum_dto_envelope.h"
#include "../model/curriculum_dto_list_envelope.h"
#include "../model/curriculum_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/operation.h"


// Create a curriculum
//
// Creates a curriculum (CV) on the specified social profile.
//
empty_envelope_t*
CurriculumsAPI_createCurriculumAsync(apiClient_t *apiClient, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_create_dto_t *curriculum_create_dto);


// Delete a curriculum
//
// Deletes a curriculum authored on the specified social profile.
//
empty_envelope_t*
CurriculumsAPI_deleteCurriculumAsync(apiClient_t *apiClient, char *socialProfileId, char *curriculumId, char *tenantId, char *api_version, char *x_api_version);


// Get curriculum by ID
//
// Retrieves a specific curriculum authored on the specified social profile.
//
curriculum_dto_envelope_t*
CurriculumsAPI_getCurriculumAsync(apiClient_t *apiClient, char *socialProfileId, char *curriculumId, char *tenantId, char *api_version, char *x_api_version);


// Get curricula
//
// Retrieves the curricula (CVs) authored on the specified social profile.
//
curriculum_dto_list_envelope_t*
CurriculumsAPI_getCurriculumsAsync(apiClient_t *apiClient, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version);


// Count curricula
//
// Returns the count of curricula authored on the specified social profile.
//
int32_envelope_t*
CurriculumsAPI_getCurriculumsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version);


// Patch a curriculum
//
// Partially updates an existing curriculum authored on the specified social profile.
//
empty_envelope_t*
CurriculumsAPI_patchCurriculumAsync(apiClient_t *apiClient, char *socialProfileId, char *curriculumId, char *tenantId, char *api_version, char *x_api_version, list_t *operation);


// Update a curriculum
//
// Updates an existing curriculum authored on the specified social profile.
//
empty_envelope_t*
CurriculumsAPI_updateCurriculumAsync(apiClient_t *apiClient, char *socialProfileId, char *curriculumId, char *tenantId, char *api_version, char *x_api_version, curriculum_update_dto_t *curriculum_update_dto);


