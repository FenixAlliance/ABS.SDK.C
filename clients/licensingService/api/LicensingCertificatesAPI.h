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
#include "../model/licensing_certificate_create_dto.h"
#include "../model/licensing_certificate_dto.h"
#include "../model/licensing_certificate_dto_list_envelope.h"
#include "../model/licensing_certificate_update_dto.h"
#include "../model/operation.h"


// Create a new licensing certificate
//
// Creates a new licensing certificate for the specified tenant.
//
void
LicensingCertificatesAPI_createLicensingCertificateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, licensing_certificate_create_dto_t *licensing_certificate_create_dto);


// Delete a licensing certificate
//
// Deletes a licensing certificate for the specified tenant.
//
void
LicensingCertificatesAPI_deleteLicensingCertificateAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get licensing certificate by ID
//
// Retrieves a specific licensing certificate by its identifier.
//
licensing_certificate_dto_t*
LicensingCertificatesAPI_getLicensingCertificateByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all licensing certificates
//
// Retrieves all licensing certificates for the specified tenant.
//
licensing_certificate_dto_list_envelope_t*
LicensingCertificatesAPI_getLicensingCertificatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get licensing certificates count
//
// Returns the count of licensing certificates for the specified tenant.
//
int32_envelope_t*
LicensingCertificatesAPI_getLicensingCertificatesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a licensing certificate
//
// Patch a licensing certificate for the specified tenant.
//
empty_envelope_t*
LicensingCertificatesAPI_patchLicensingCertificateAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);


// Update a licensing certificate
//
// Updates an existing licensing certificate for the specified tenant.
//
void
LicensingCertificatesAPI_updateLicensingCertificateAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, licensing_certificate_update_dto_t *licensing_certificate_update_dto);


