#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/license_create_dto.h"
#include "../model/license_dto.h"
#include "../model/license_dto_list_envelope.h"
#include "../model/license_update_dto.h"


// Create a new license
//
// Creates a new license instance for the specified tenant.
//
void
LicensesAPI_createLicenseAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_create_dto_t *license_create_dto);


// Delete a license
//
// Deletes a license instance for the specified tenant.
//
void
LicensesAPI_deleteLicenseAsync(apiClient_t *apiClient, char *tenantId, char *licenseId, char *api_version, char *x_api_version);


// Get license by ID
//
// Retrieves a specific license instance by its identifier.
//
license_dto_t*
LicensesAPI_getLicenseByIdAsync(apiClient_t *apiClient, char *tenantId, char *licenseId, char *api_version, char *x_api_version);


// Get licenses
//
// Retrieves the license instances owned by the specified tenant, filtered via OData query options.
//
license_dto_list_envelope_t*
LicensesAPI_getLicensesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get licenses count
//
// Returns the count of license instances owned by the specified tenant.
//
int32_envelope_t*
LicensesAPI_getLicensesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a license
//
// Updates an existing license instance for the specified tenant.
//
void
LicensesAPI_updateLicenseAsync(apiClient_t *apiClient, char *tenantId, char *licenseId, char *api_version, char *x_api_version, license_update_dto_t *license_update_dto);


