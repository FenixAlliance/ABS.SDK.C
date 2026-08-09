#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/gig_application_create_dto.h"
#include "../model/gig_application_dto_collection_query_parameters.h"
#include "../model/gig_application_dto_envelope.h"
#include "../model/gig_application_dto_list_envelope.h"
#include "../model/gig_application_update_dto.h"
#include "../model/int32_envelope.h"
#include "../model/patch_operation.h"


// Accept a gig application
//
// Accepts the candidate's gig proposal, forming an engagement (raises GigApplicationAccepted). A proposal cannot be accepted twice.
//
empty_envelope_t*
GigApplicationsAPI_acceptGigApplicationAsync(apiClient_t *apiClient, char *tenantId, char *gigApplicationId, char *api_version, char *x_api_version);


// Create a gig application
//
// Records a candidate's proposal against one of the tenant's gigs. The targeted gig must belong to the tenant.
//
empty_envelope_t*
GigApplicationsAPI_createGigApplicationAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, gig_application_create_dto_t *gig_application_create_dto);


// Delete a gig application
//
// Removes a proposal submitted against one of the tenant's gigs.
//
empty_envelope_t*
GigApplicationsAPI_deleteGigApplicationAsync(apiClient_t *apiClient, char *tenantId, char *gigApplicationId, char *api_version, char *x_api_version);


// Get gig application by ID
//
// Retrieves a specific proposal submitted against one of the tenant's gigs.
//
gig_application_dto_envelope_t*
GigApplicationsAPI_getGigApplicationByIdAsync(apiClient_t *apiClient, char *tenantId, char *gigApplicationId, char *api_version, char *x_api_version);


// Get gig applications
//
// Retrieves proposals submitted against the tenant's gigs. Filter with `$filter=GigId eq '...'` or `JobApplicantProfileId eq '...'`.
//
gig_application_dto_list_envelope_t*
GigApplicationsAPI_getGigApplicationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, gig_application_dto_collection_query_parameters_t *gig_application_dto_collection_query_parameters);


// Count gig applications
//
// Counts proposals submitted against the tenant's gigs.
//
int32_envelope_t*
GigApplicationsAPI_getGigApplicationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, gig_application_dto_collection_query_parameters_t *gig_application_dto_collection_query_parameters);


// Patch a gig application
//
// Partially updates an existing proposal submitted against one of the tenant's gigs.
//
empty_envelope_t*
GigApplicationsAPI_patchGigApplicationAsync(apiClient_t *apiClient, char *tenantId, char *gigApplicationId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a gig application
//
// Updates an existing proposal submitted against one of the tenant's gigs (e.g. accept it).
//
empty_envelope_t*
GigApplicationsAPI_updateGigApplicationAsync(apiClient_t *apiClient, char *tenantId, char *gigApplicationId, char *api_version, char *x_api_version, gig_application_update_dto_t *gig_application_update_dto);


