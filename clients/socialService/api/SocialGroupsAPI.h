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
#include "../model/social_group_create_dto.h"
#include "../model/social_group_dto_envelope.h"
#include "../model/social_group_dto_list_envelope.h"
#include "../model/social_group_update_dto.h"


// Count social groups
//
// Counts all social groups for the specified tenant.
//
int32_envelope_t*
SocialGroupsAPI_countSocialGroupsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a social group
//
// Creates a new social group for the specified tenant.
//
empty_envelope_t*
SocialGroupsAPI_createSocialGroupAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, social_group_create_dto_t *social_group_create_dto);


// Delete a social group
//
// Deletes a social group for the specified tenant.
//
empty_envelope_t*
SocialGroupsAPI_deleteSocialGroupAsync(apiClient_t *apiClient, char *tenantId, char *socialGroupId, char *api_version, char *x_api_version);


// Get social group by ID
//
// Retrieves a specific social group by its ID.
//
social_group_dto_envelope_t*
SocialGroupsAPI_getSocialGroupByIdAsync(apiClient_t *apiClient, char *tenantId, char *socialGroupId, char *api_version, char *x_api_version);


// Get social groups
//
// Retrieves all social groups for the specified tenant.
//
social_group_dto_list_envelope_t*
SocialGroupsAPI_getSocialGroupsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a social group
//
// Updates an existing social group for the specified tenant.
//
empty_envelope_t*
SocialGroupsAPI_updateSocialGroupAsync(apiClient_t *apiClient, char *tenantId, char *socialGroupId, char *api_version, char *x_api_version, social_group_update_dto_t *social_group_update_dto);


