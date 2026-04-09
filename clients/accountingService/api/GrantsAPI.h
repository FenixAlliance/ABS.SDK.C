#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/grant_create_dto.h"
#include "../model/grant_dto_envelope.h"
#include "../model/grant_dto_i_read_only_list_envelope.h"
#include "../model/grant_update_dto.h"
#include "../model/int32_envelope.h"


// Create grant
//
// Creates a new grant entry.
//
empty_envelope_t*
GrantsAPI_createGrantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, grant_create_dto_t *grant_create_dto);


// Delete grant
//
// Deletes a grant identified by its ID.
//
empty_envelope_t*
GrantsAPI_deleteGrantAsync(apiClient_t *apiClient, char *tenantId, char *grantId, char *api_version, char *x_api_version);


// Get grant by ID
//
// Gets detailed information for a specific grant.
//
grant_dto_envelope_t*
GrantsAPI_getGrantDetailsAsync(apiClient_t *apiClient, char *tenantId, char *grantId, char *api_version, char *x_api_version);


// Get all grants
//
// Retrieves a list of grants associated with the tenant.
//
grant_dto_i_read_only_list_envelope_t*
GrantsAPI_getGrantsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count grants
//
// Returns the number of grants for the tenant.
//
int32_envelope_t*
GrantsAPI_getGrantsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update grant
//
// Updates an existing grant identified by its ID.
//
empty_envelope_t*
GrantsAPI_updateGrantAsync(apiClient_t *apiClient, char *tenantId, char *grantId, char *api_version, char *x_api_version, grant_update_dto_t *grant_update_dto);


