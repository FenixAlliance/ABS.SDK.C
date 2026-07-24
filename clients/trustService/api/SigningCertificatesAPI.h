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
#include "../model/operation.h"
#include "../model/signing_certificate_create_dto.h"
#include "../model/signing_certificate_dto.h"
#include "../model/signing_certificate_dto_list_envelope.h"
#include "../model/signing_certificate_update_dto.h"


// Create a new signing certificate
//
// Creates a new signing certificate for the specified tenant.
//
void
SigningCertificatesAPI_createSigningCertificateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_certificate_create_dto_t *signing_certificate_create_dto);


// Delete a signing certificate
//
// Deletes a signing certificate for the specified tenant.
//
void
SigningCertificatesAPI_deleteSigningCertificateAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get signing certificate by ID
//
// Retrieves a specific signing certificate by its identifier.
//
signing_certificate_dto_t*
SigningCertificatesAPI_getSigningCertificateByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all signing certificates
//
// Retrieves all signing certificates for the specified tenant.
//
signing_certificate_dto_list_envelope_t*
SigningCertificatesAPI_getSigningCertificatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get signing certificates count
//
// Returns the count of signing certificates for the specified tenant.
//
int32_envelope_t*
SigningCertificatesAPI_getSigningCertificatesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Import a PFX/P12 signing certificate into custody
//
// Parses the uploaded PFX/P12, imports the private material into the configured signing custody, and creates the certificate metadata record. The PFX and password are used only for the request — never returned or stored.
//
void
SigningCertificatesAPI_importSigningCertificateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, char *id, binary_t* file, char *password, char *title, char *contactId);


// Patch a signing certificate
//
// Patch a signing certificate
//
empty_envelope_t*
SigningCertificatesAPI_patchSigningCertificateAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);


// Update a signing certificate
//
// Updates an existing signing certificate for the specified tenant.
//
void
SigningCertificatesAPI_updateSigningCertificateAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, signing_certificate_update_dto_t *signing_certificate_update_dto);


