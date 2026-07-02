#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/curriculum_experience_create_dto.h"
#include "../model/curriculum_experience_dto_envelope.h"
#include "../model/curriculum_experience_dto_list_envelope.h"
#include "../model/curriculum_experience_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/operation.h"


// Create a curriculum experience
//
// Adds a work-experience record to a curriculum authored on the specified social profile.
//
empty_envelope_t*
CurriculumExperiencesAPI_createCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_experience_create_dto_t *curriculum_experience_create_dto);


// Delete a curriculum experience
//
// Removes a work-experience record from a curriculum.
//
empty_envelope_t*
CurriculumExperiencesAPI_deleteCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *experienceId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version);


// Get curriculum experience by ID
//
// Retrieves a specific work-experience record of a curriculum.
//
curriculum_experience_dto_envelope_t*
CurriculumExperiencesAPI_getCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *experienceId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version);


// Get curriculum experiences
//
// Retrieves the work-experience records of a curriculum authored on the specified social profile.
//
curriculum_experience_dto_list_envelope_t*
CurriculumExperiencesAPI_getCurriculumExperiencesAsync(apiClient_t *apiClient, char *curriculumId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version);


// Count curriculum experiences
//
// Returns the count of work-experience records of a curriculum.
//
int32_envelope_t*
CurriculumExperiencesAPI_getCurriculumExperiencesCountAsync(apiClient_t *apiClient, char *curriculumId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version);


// Patch a curriculum experience
//
// Partially updates an existing work-experience record of a curriculum.
//
empty_envelope_t*
CurriculumExperiencesAPI_patchCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *experienceId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, list_t *operation);


// Update a curriculum experience
//
// Updates an existing work-experience record of a curriculum.
//
empty_envelope_t*
CurriculumExperiencesAPI_updateCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *experienceId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_experience_update_dto_t *curriculum_experience_update_dto);


