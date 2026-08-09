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
#include "../model/signing_profile_graphical_representation_create_dto.h"
#include "../model/signing_profile_graphical_representation_dto.h"
#include "../model/signing_profile_graphical_representation_dto_collection_query_parameters.h"
#include "../model/signing_profile_graphical_representation_dto_list_envelope.h"
#include "../model/signing_profile_graphical_representation_update_dto.h"


// Create a new signature representation
//
// Creates a new reusable signature representation for the specified tenant.
//
void
SigningProfileGraphicalRepresentationsAPI_createSigningProfileGraphicalRepresentationAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_profile_graphical_representation_create_dto_t *signing_profile_graphical_representation_create_dto);


// Delete a signature representation
//
// Deletes a signature representation for the specified tenant.
//
void
SigningProfileGraphicalRepresentationsAPI_deleteSigningProfileGraphicalRepresentationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get signature representation by ID
//
// Retrieves a specific signature representation by its identifier.
//
signing_profile_graphical_representation_dto_t*
SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all signature representations
//
// Retrieves all reusable signature representations for the specified tenant.
//
signing_profile_graphical_representation_dto_list_envelope_t*
SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_profile_graphical_representation_dto_collection_query_parameters_t *signing_profile_graphical_representation_dto_collection_query_parameters);


// Get signature representations count
//
// Returns the count of signature representations for the specified tenant.
//
int32_envelope_t*
SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_profile_graphical_representation_dto_collection_query_parameters_t *signing_profile_graphical_representation_dto_collection_query_parameters);


// Patch a signature representation
//
// Patch a signature representation
//
empty_envelope_t*
SigningProfileGraphicalRepresentationsAPI_patchSigningProfileGraphicalRepresentationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a signature representation
//
// Updates an existing signature representation for the specified tenant.
//
void
SigningProfileGraphicalRepresentationsAPI_updateSigningProfileGraphicalRepresentationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, signing_profile_graphical_representation_update_dto_t *signing_profile_graphical_representation_update_dto);


