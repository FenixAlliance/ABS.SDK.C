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
#include "../model/license_type_create_dto.h"
#include "../model/license_type_dto.h"
#include "../model/license_type_dto_collection_query_parameters.h"
#include "../model/license_type_dto_list_envelope.h"
#include "../model/license_type_update_dto.h"
#include "../model/patch_operation.h"


// Create a new license type
//
// Creates a new license type for the specified tenant.
//
void
LicenseTypesAPI_createLicenseTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_type_create_dto_t *license_type_create_dto);


// Delete a license type
//
// Deletes a license type for the specified tenant.
//
void
LicenseTypesAPI_deleteLicenseTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get license type by ID
//
// Retrieves a specific license type by its identifier.
//
license_type_dto_t*
LicenseTypesAPI_getLicenseTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all license types
//
// Retrieves all license types for the specified tenant.
//
license_type_dto_list_envelope_t*
LicenseTypesAPI_getLicenseTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_type_dto_collection_query_parameters_t *license_type_dto_collection_query_parameters);


// Get license types count
//
// Returns the count of license types for the specified tenant.
//
int32_envelope_t*
LicenseTypesAPI_getLicenseTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_type_dto_collection_query_parameters_t *license_type_dto_collection_query_parameters);


// Patch a license type
//
// Patch a license type for the specified tenant.
//
empty_envelope_t*
LicenseTypesAPI_patchLicenseTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a license type
//
// Updates an existing license type for the specified tenant.
//
void
LicenseTypesAPI_updateLicenseTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, license_type_update_dto_t *license_type_update_dto);


