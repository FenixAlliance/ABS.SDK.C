#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/contact_profile_create_dto.h"
#include "../model/contact_profile_dto.h"
#include "../model/contact_profile_dto_collection_query_parameters.h"
#include "../model/contact_profile_dto_list_envelope.h"
#include "../model/contact_profile_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/patch_operation.h"


// Create a new contact profile
//
// Creates a new contact profile for the specified tenant. The ContactId must be provided in the request body.
//
void
ContactProfilesAPI_createContactProfileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_profile_create_dto_t *contact_profile_create_dto);


// Delete a contact profile
//
// Deletes a contact profile for the specified tenant.
//
void
ContactProfilesAPI_deleteContactProfileAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get contact profile by ID
//
// Retrieves a specific contact profile by its identifier.
//
contact_profile_dto_t*
ContactProfilesAPI_getContactProfileByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all contact profiles
//
// Retrieves all contact profiles for the specified tenant.
//
contact_profile_dto_list_envelope_t*
ContactProfilesAPI_getContactProfilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_profile_dto_collection_query_parameters_t *contact_profile_dto_collection_query_parameters);


// Get contact profiles count
//
// Returns the count of contact profiles for the specified tenant.
//
int32_envelope_t*
ContactProfilesAPI_getContactProfilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_profile_dto_collection_query_parameters_t *contact_profile_dto_collection_query_parameters);


// Get partner profiles count
//
// Returns the count of partner contact profiles for the specified tenant.
//
int32_envelope_t*
ContactProfilesAPI_getPartnerProfilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_profile_dto_collection_query_parameters_t *contact_profile_dto_collection_query_parameters);


// Get patient profiles count
//
// Returns the count of patient contact profiles for the specified tenant.
//
int32_envelope_t*
ContactProfilesAPI_getPatientProfilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_profile_dto_collection_query_parameters_t *contact_profile_dto_collection_query_parameters);


// Patch a contact profile
//
// Patch a contact profile
//
empty_envelope_t*
ContactProfilesAPI_patchContactProfileAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a contact profile
//
// Updates an existing contact profile for the specified tenant.
//
void
ContactProfilesAPI_updateContactProfileAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, contact_profile_update_dto_t *contact_profile_update_dto);


