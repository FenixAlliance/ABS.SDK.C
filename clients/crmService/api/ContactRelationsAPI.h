#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/contact_relation_create_dto.h"
#include "../model/contact_relation_dto.h"
#include "../model/contact_relation_dto_collection_query_parameters.h"
#include "../model/contact_relation_dto_list_envelope.h"
#include "../model/contact_relation_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/patch_operation.h"


// Create a new contact relation
//
// Creates a new contact relation for the specified tenant.
//
void
ContactRelationsAPI_createContactRelationAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_relation_create_dto_t *contact_relation_create_dto);


// Delete a contact relation
//
// Deletes a contact relation for the specified tenant.
//
void
ContactRelationsAPI_deleteContactRelationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get contact relation by ID
//
// Retrieves a specific contact relation by its identifier.
//
contact_relation_dto_t*
ContactRelationsAPI_getContactRelationByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all contact relations
//
// Retrieves all contact relations for the specified tenant.
//
contact_relation_dto_list_envelope_t*
ContactRelationsAPI_getContactRelationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_relation_dto_collection_query_parameters_t *contact_relation_dto_collection_query_parameters);


// Get contact relations count
//
// Returns the count of contact relations for the specified tenant.
//
int32_envelope_t*
ContactRelationsAPI_getContactRelationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_relation_dto_collection_query_parameters_t *contact_relation_dto_collection_query_parameters);


// Patch a contact relation
//
// Patch a contact relation
//
empty_envelope_t*
ContactRelationsAPI_patchContactRelationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a contact relation
//
// Updates an existing contact relation for the specified tenant.
//
void
ContactRelationsAPI_updateContactRelationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, contact_relation_update_dto_t *contact_relation_update_dto);


