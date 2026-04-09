#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/boolean_envelope.h"
#include "../model/error_envelope.h"
#include "../model/i_validation_failure_list_envelope.h"
#include "../model/license_validation_request.h"
#include "../model/suite_license_assignment_dto_list_envelope.h"
#include "../model/suite_license_dto_envelope.h"
#include "../model/suite_license_dto_list_envelope.h"


// Retrieve license assignments
//
// Retrieves all license assignments for a given license.
//
suite_license_assignment_dto_list_envelope_t*
LicensingAPI_getLicenseAssignmentsAsync(apiClient_t *apiClient, char *licenseId, char *tenantId, char *api_version, char *x_api_version);


// Retrieve license attributes
//
// Retrieves all additional attributes for a given license.
//
suite_license_assignment_dto_list_envelope_t*
LicensingAPI_getLicenseAttributesAsync(apiClient_t *apiClient, char *licenseId, char *tenantId, char *api_version, char *x_api_version);


// Retrieve a license by ID
//
// Retrieves a single suite license by its unique identifier.
//
suite_license_dto_envelope_t*
LicensingAPI_getLicenseByIdAsync(apiClient_t *apiClient, char *licenseId, char *api_version, char *x_api_version);


// Retrieve license features
//
// Retrieves all features for a given license.
//
suite_license_assignment_dto_list_envelope_t*
LicensingAPI_getLicenseFeaturesAsync(apiClient_t *apiClient, char *licenseId, char *tenantId, char *api_version, char *x_api_version);


// Retrieve license record quota
//
// Retrieves the record quota for a given license.
//
suite_license_assignment_dto_list_envelope_t*
LicensingAPI_getLicenseRecordsQuotaAsync(apiClient_t *apiClient, char *licenseId, char *tenantId, char *api_version, char *x_api_version);


// Retrieve a list of licenses
//
// Retrieves a list of suite licenses, optionally filtered by tenant.
//
suite_license_dto_list_envelope_t*
LicensingAPI_getLicensesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Redeem a license
//
// Redeems a license for the current tenant user.
//
boolean_envelope_t*
LicensingAPI_redeemLicenseAsync(apiClient_t *apiClient, char *tenantId, license_validation_request_t *license_validation_request, char *api_version, char *x_api_version);


// Validate a license
//
// Validates a license key and returns validation failures if any.
//
i_validation_failure_list_envelope_t*
LicensingAPI_validateLicenseAsync(apiClient_t *apiClient, license_validation_request_t *license_validation_request, char *api_version, char *x_api_version);


