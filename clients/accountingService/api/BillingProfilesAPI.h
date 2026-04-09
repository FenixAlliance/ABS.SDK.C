#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/billing_profile_create_dto.h"
#include "../model/billing_profile_dto_envelope.h"
#include "../model/billing_profile_dto_i_read_only_list_envelope.h"
#include "../model/billing_profile_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/int32_envelope.h"


// Creates a new billing profile
//
// Adds a new billing profile record for the specified tenant.
//
empty_envelope_t*
BillingProfilesAPI_createBillingProfileAsync(apiClient_t *apiClient, char *tenantId, billing_profile_create_dto_t *billing_profile_create_dto, char *api_version, char *x_api_version);


// Deletes a billing profile
//
// Removes a billing profile from the system using its unique identifier.
//
empty_envelope_t*
BillingProfilesAPI_deleteBillingProfileAsync(apiClient_t *apiClient, char *tenantId, char *billingProfileId, char *api_version, char *x_api_version);


// Gets a billing profile by id
//
// Retrieves a specific billing profile using its unique identifier.
//
billing_profile_dto_envelope_t*
BillingProfilesAPI_getBillingProfileByIdAsync(apiClient_t *apiClient, char *tenantId, char *billingProfileId, char *api_version, char *x_api_version);


// Gets all billing profiles
//
// Fetches all billing profiles for a tenant with support for OData queries.
//
billing_profile_dto_i_read_only_list_envelope_t*
BillingProfilesAPI_getBillingProfilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Gets the count of billing profiles
//
// Returns the number of billing profiles for a tenant, supporting OData filtering.
//
int32_envelope_t*
BillingProfilesAPI_getBillingProfilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates an existing billing profile
//
// Modifies an existing billing profile using the provided data.
//
empty_envelope_t*
BillingProfilesAPI_updateBillingProfileAsync(apiClient_t *apiClient, char *tenantId, char *billingProfileId, billing_profile_update_dto_t *billing_profile_update_dto, char *api_version, char *x_api_version);


