#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/gig_create_dto.h"
#include "../model/gig_dto_collection_query_parameters.h"
#include "../model/gig_dto_envelope.h"
#include "../model/gig_dto_list_envelope.h"
#include "../model/gig_update_dto.h"
#include "../model/int32_envelope.h"
#include "../model/patch_operation.h"


// Create a gig
//
// Creates a new gig for the specified tenant.
//
empty_envelope_t*
GigsAPI_createGigAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, gig_create_dto_t *gig_create_dto);


// Delete a gig
//
// Deletes a gig for the specified tenant.
//
empty_envelope_t*
GigsAPI_deleteGigAsync(apiClient_t *apiClient, char *tenantId, char *gigId, char *api_version, char *x_api_version);


// Get gig by ID
//
// Retrieves a specific gig by its identifier.
//
gig_dto_envelope_t*
GigsAPI_getGigByIdAsync(apiClient_t *apiClient, char *tenantId, char *gigId, char *api_version, char *x_api_version);


// Get gigs
//
// Retrieves gigs for the specified tenant.
//
gig_dto_list_envelope_t*
GigsAPI_getGigsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, gig_dto_collection_query_parameters_t *gig_dto_collection_query_parameters);


// Count gigs
//
// Counts gigs for the specified tenant.
//
int32_envelope_t*
GigsAPI_getGigsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, gig_dto_collection_query_parameters_t *gig_dto_collection_query_parameters);


// Patch a gig
//
// Partially updates an existing gig for the specified tenant.
//
empty_envelope_t*
GigsAPI_patchGigAsync(apiClient_t *apiClient, char *tenantId, char *gigId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a gig
//
// Updates an existing gig for the specified tenant.
//
empty_envelope_t*
GigsAPI_updateGigAsync(apiClient_t *apiClient, char *tenantId, char *gigId, char *api_version, char *x_api_version, gig_update_dto_t *gig_update_dto);


