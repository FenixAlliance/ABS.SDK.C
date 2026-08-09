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
#include "../model/signing_profile_create_dto.h"
#include "../model/signing_profile_dto.h"
#include "../model/signing_profile_dto_collection_query_parameters.h"
#include "../model/signing_profile_dto_list_envelope.h"
#include "../model/signing_profile_update_dto.h"


// Create a new signing profile
//
// Creates a new signing profile for the specified tenant (supports inline contact creation).
//
void
SigningProfilesAPI_createSigningProfileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_profile_create_dto_t *signing_profile_create_dto);


// Delete a signing profile
//
// Deletes a signing profile for the specified tenant.
//
void
SigningProfilesAPI_deleteSigningProfileAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get signing profile by ID
//
// Retrieves a specific signing profile by its identifier.
//
signing_profile_dto_t*
SigningProfilesAPI_getSigningProfileByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all signing profiles
//
// Retrieves all signing profiles for the specified tenant.
//
signing_profile_dto_list_envelope_t*
SigningProfilesAPI_getSigningProfilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_profile_dto_collection_query_parameters_t *signing_profile_dto_collection_query_parameters);


// Get signing profiles count
//
// Returns the count of signing profiles for the specified tenant.
//
int32_envelope_t*
SigningProfilesAPI_getSigningProfilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_profile_dto_collection_query_parameters_t *signing_profile_dto_collection_query_parameters);


// Patch a signing profile
//
// Patch a signing profile
//
empty_envelope_t*
SigningProfilesAPI_patchSigningProfileAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a signing profile
//
// Updates an existing signing profile for the specified tenant.
//
void
SigningProfilesAPI_updateSigningProfileAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, signing_profile_update_dto_t *signing_profile_update_dto);


