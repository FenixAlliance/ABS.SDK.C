#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/contact_relation_type_create_dto.h"
#include "../model/contact_relation_type_dto.h"
#include "../model/contact_relation_type_dto_list_envelope.h"
#include "../model/contact_relation_type_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/operation.h"


// Create a new contact relation type
//
// Creates a new contact relation type for the specified tenant.
//
void
ContactRelationTypesAPI_createContactRelationTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_relation_type_create_dto_t *contact_relation_type_create_dto);


// Delete a contact relation type
//
// Deletes a contact relation type for the specified tenant.
//
void
ContactRelationTypesAPI_deleteContactRelationTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get contact relation type by ID
//
// Retrieves a specific contact relation type by its identifier.
//
contact_relation_type_dto_t*
ContactRelationTypesAPI_getContactRelationTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all contact relation types
//
// Retrieves all contact relation types for the specified tenant.
//
contact_relation_type_dto_list_envelope_t*
ContactRelationTypesAPI_getContactRelationTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get contact relation types count
//
// Returns the count of contact relation types for the specified tenant.
//
int32_envelope_t*
ContactRelationTypesAPI_getContactRelationTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a contact relation type
//
// Patch a contact relation type
//
empty_envelope_t*
ContactRelationTypesAPI_patchContactRelationTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);


// Update a contact relation type
//
// Updates an existing contact relation type for the specified tenant.
//
void
ContactRelationTypesAPI_updateContactRelationTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, contact_relation_type_update_dto_t *contact_relation_type_update_dto);


