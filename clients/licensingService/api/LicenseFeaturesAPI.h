#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/license_feature_create_dto.h"
#include "../model/license_feature_dto.h"
#include "../model/license_feature_dto_list_envelope.h"
#include "../model/license_feature_update_dto.h"
#include "../model/operation.h"


// Create a new license feature
//
// Creates a new license feature for the specified tenant.
//
void
LicenseFeaturesAPI_createLicenseFeatureAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_feature_create_dto_t *license_feature_create_dto);


// Delete a license feature
//
// Deletes a license feature for the specified tenant.
//
void
LicenseFeaturesAPI_deleteLicenseFeatureAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get license feature by ID
//
// Retrieves a specific license feature by its identifier.
//
license_feature_dto_t*
LicenseFeaturesAPI_getLicenseFeatureByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all license features
//
// Retrieves all license features for the specified tenant.
//
license_feature_dto_list_envelope_t*
LicenseFeaturesAPI_getLicenseFeaturesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get license features count
//
// Returns the count of license features for the specified tenant.
//
int32_envelope_t*
LicenseFeaturesAPI_getLicenseFeaturesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a license feature
//
// Patch a license feature for the specified tenant.
//
empty_envelope_t*
LicenseFeaturesAPI_patchLicenseFeatureAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);


// Update a license feature
//
// Updates an existing license feature for the specified tenant.
//
void
LicenseFeaturesAPI_updateLicenseFeatureAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, license_feature_update_dto_t *license_feature_update_dto);


