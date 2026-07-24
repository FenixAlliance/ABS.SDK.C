#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/contact_source_create_dto.h"
#include "../model/contact_source_dto.h"
#include "../model/contact_source_dto_list_envelope.h"
#include "../model/contact_source_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/operation.h"


// Create a new contact source
//
// Creates a new contact source for the specified tenant.
//
void
ContactSourcesAPI_createContactSourceAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_source_create_dto_t *contact_source_create_dto);


// Delete a contact source
//
// Deletes a contact source for the specified tenant.
//
void
ContactSourcesAPI_deleteContactSourceAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get contact source by ID
//
// Retrieves a specific contact source by its identifier.
//
contact_source_dto_t*
ContactSourcesAPI_getContactSourceByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all contact sources
//
// Retrieves all contact sources for the specified tenant.
//
contact_source_dto_list_envelope_t*
ContactSourcesAPI_getContactSourcesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get contact sources count
//
// Returns the count of contact sources for the specified tenant.
//
int32_envelope_t*
ContactSourcesAPI_getContactSourcesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a contact source
//
// Patch a contact source
//
empty_envelope_t*
ContactSourcesAPI_patchContactSourceAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);


// Update a contact source
//
// Updates an existing contact source for the specified tenant.
//
void
ContactSourcesAPI_updateContactSourceAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, contact_source_update_dto_t *contact_source_update_dto);


