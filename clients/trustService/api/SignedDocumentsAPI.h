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
#include "../model/patch_operation.h"
#include "../model/quick_sign_signed_document_dto.h"
#include "../model/signature_verification_dto.h"
#include "../model/signed_document_create_dto.h"
#include "../model/signed_document_dto.h"
#include "../model/signed_document_dto_collection_query_parameters.h"
#include "../model/signed_document_dto_list_envelope.h"
#include "../model/signed_document_update_dto.h"


// Create a new signed document
//
// Creates a new signed document for the specified tenant.
//
void
SignedDocumentsAPI_createSignedDocumentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signed_document_create_dto_t *signed_document_create_dto);


// Delete a signed document
//
// Deletes a signed document for the specified tenant.
//
void
SignedDocumentsAPI_deleteSignedDocumentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get signed document by ID
//
// Retrieves a specific signed document by its identifier.
//
signed_document_dto_t*
SignedDocumentsAPI_getSignedDocumentByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all signed documents
//
// Retrieves all signed documents for the specified tenant.
//
signed_document_dto_list_envelope_t*
SignedDocumentsAPI_getSignedDocumentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters);


// Get signed documents count
//
// Returns the count of signed documents for the specified tenant.
//
int32_envelope_t*
SignedDocumentsAPI_getSignedDocumentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters);


// Patch a signed document
//
// Patch a signed document
//
empty_envelope_t*
SignedDocumentsAPI_patchSignedDocumentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);


// Create, freeze, and quick-sign a document in one call
//
// Server-side single-signer flow: creates a SignedDocument from the uploaded source, stores it, freezes it, signs it with the chosen certificate + provider, and seals it — all in one unit of work. Returns the sealed document. Evidence truth (signed/status/hashes/artifact ids) is server-produced and cannot be supplied by the caller.
//
signed_document_dto_t*
SignedDocumentsAPI_prepareAndQuickSignAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, char *id, binary_t* file, char *title, char *contactId, char *signingCertificateId, char *signingProfileId, char *providerName);


// Quick-sign a frozen document
//
// Signs a frozen signed document directly with a chosen certificate + provider (no signing-request workflow) and seals it. Returns the sealed document.
//
void
SignedDocumentsAPI_quickSignSignedDocumentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, quick_sign_signed_document_dto_t *quick_sign_signed_document_dto);


// Update a signed document
//
// Updates an existing signed document for the specified tenant.
//
void
SignedDocumentsAPI_updateSignedDocumentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, signed_document_update_dto_t *signed_document_update_dto);


// Verify a signed document's signature
//
// Re-verifies the document's signature against its stored signed artifact (bytes intact + signed by the embedded certificate; certificate trust is a separate concern).
//
signature_verification_dto_t*
SignedDocumentsAPI_verifySignedDocumentSignatureAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


