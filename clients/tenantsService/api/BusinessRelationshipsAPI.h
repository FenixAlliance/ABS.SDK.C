#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/business_relationship_create_dto.h"
#include "../model/business_relationship_dto_collection_query_parameters.h"
#include "../model/business_relationship_dto_envelope.h"
#include "../model/business_relationship_dto_list_envelope.h"
#include "../model/business_relationship_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create a business relationship
//
// Creates a new business relationship owned by the specified parent tenant.
//
empty_envelope_t*
BusinessRelationshipsAPI_createBusinessRelationshipAsync(apiClient_t *apiClient, char *tenantId, business_relationship_create_dto_t *business_relationship_create_dto, char *api_version, char *x_api_version);


// Delete a business relationship
//
// Deletes a business relationship by its ID.
//
empty_envelope_t*
BusinessRelationshipsAPI_deleteBusinessRelationshipAsync(apiClient_t *apiClient, char *tenantId, char *businessRelationshipId, char *api_version, char *x_api_version);


// Get business relationship by ID
//
// Retrieves the details of a specific business relationship by its ID.
//
business_relationship_dto_envelope_t*
BusinessRelationshipsAPI_getBusinessRelationshipByIdAsync(apiClient_t *apiClient, char *tenantId, char *businessRelationshipId, char *api_version, char *x_api_version);


// Get business relationships
//
// Retrieves the child business relationships owned by the specified parent tenant using OData query options.
//
business_relationship_dto_list_envelope_t*
BusinessRelationshipsAPI_getBusinessRelationshipsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, business_relationship_dto_collection_query_parameters_t *business_relationship_dto_collection_query_parameters);


// Get business relationships count
//
// Returns the count of child business relationships owned by the specified parent tenant.
//
int32_envelope_t*
BusinessRelationshipsAPI_getBusinessRelationshipsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, business_relationship_dto_collection_query_parameters_t *business_relationship_dto_collection_query_parameters);


// Update a business relationship
//
// Updates an existing business relationship by its ID.
//
empty_envelope_t*
BusinessRelationshipsAPI_updateBusinessRelationshipAsync(apiClient_t *apiClient, char *tenantId, char *businessRelationshipId, business_relationship_update_dto_t *business_relationship_update_dto, char *api_version, char *x_api_version);


