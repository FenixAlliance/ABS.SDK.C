#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/contacts_group_create_dto.h"
#include "../model/contacts_group_dto.h"
#include "../model/contacts_group_dto_collection_query_parameters.h"
#include "../model/contacts_group_dto_list_envelope.h"
#include "../model/contacts_group_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/patch_operation.h"


// Create a new contact group
//
// Creates a new contact group for the specified tenant.
//
void
ContactGroupsAPI_createContactGroupAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contacts_group_create_dto_t *contacts_group_create_dto);


// Delete a contact group
//
// Deletes a contact group for the specified tenant.
//
void
ContactGroupsAPI_deleteContactGroupAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get contact group by ID
//
// Retrieves a specific contact group by its identifier.
//
contacts_group_dto_t*
ContactGroupsAPI_getContactGroupByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all contact groups
//
// Retrieves all contact groups for the specified tenant.
//
contacts_group_dto_list_envelope_t*
ContactGroupsAPI_getContactGroupsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contacts_group_dto_collection_query_parameters_t *contacts_group_dto_collection_query_parameters);


// Get contact groups count
//
// Returns the count of contact groups for the specified tenant.
//
int32_envelope_t*
ContactGroupsAPI_getContactGroupsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contacts_group_dto_collection_query_parameters_t *contacts_group_dto_collection_query_parameters);


// Patch a contact group
//
// Patch a contact group
//
empty_envelope_t*
ContactGroupsAPI_patchContactGroupAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a contact group
//
// Updates an existing contact group for the specified tenant.
//
void
ContactGroupsAPI_updateContactGroupAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, contacts_group_update_dto_t *contacts_group_update_dto);


