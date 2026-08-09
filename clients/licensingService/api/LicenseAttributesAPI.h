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
#include "../model/license_attribute_create_dto.h"
#include "../model/license_attribute_dto.h"
#include "../model/license_attribute_dto_collection_query_parameters.h"
#include "../model/license_attribute_dto_list_envelope.h"
#include "../model/license_attribute_update_dto.h"
#include "../model/patch_operation.h"


// Create a new license attribute
//
// Creates a new license attribute for the specified tenant.
//
void
LicenseAttributesAPI_createLicenseAttributeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_attribute_create_dto_t *license_attribute_create_dto);


// Delete a license attribute
//
// Deletes a license attribute for the specified tenant.
//
void
LicenseAttributesAPI_deleteLicenseAttributeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get license attribute by ID
//
// Retrieves a specific license attribute by its identifier.
//
license_attribute_dto_t*
LicenseAttributesAPI_getLicenseAttributeByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all license attributes
//
// Retrieves all license attributes for the specified tenant.
//
license_attribute_dto_list_envelope_t*
LicenseAttributesAPI_getLicenseAttributesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_attribute_dto_collection_query_parameters_t *license_attribute_dto_collection_query_parameters);


// Get license attributes count
//
// Returns the count of license attributes for the specified tenant.
//
int32_envelope_t*
LicenseAttributesAPI_getLicenseAttributesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_attribute_dto_collection_query_parameters_t *license_attribute_dto_collection_query_parameters);


// Patch a license attribute
//
// Patch a license attribute for the specified tenant.
//
empty_envelope_t*
LicenseAttributesAPI_patchLicenseAttributeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a license attribute
//
// Updates an existing license attribute for the specified tenant.
//
void
LicenseAttributesAPI_updateLicenseAttributeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, license_attribute_update_dto_t *license_attribute_update_dto);


