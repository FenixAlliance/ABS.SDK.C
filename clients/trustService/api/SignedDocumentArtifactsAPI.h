#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/boolean_envelope.h"
#include "../model/error_envelope.h"
#include "../model/trust_artifact_reference_dto_envelope.h"


// Freeze the source for signature
//
// Copies the primary authoring artifact into a new Sealed frozen-source artifact, hashes it, and binds it to the document (LockState = FrozenForSignature).
//
trust_artifact_reference_dto_envelope_t*
SignedDocumentArtifactsAPI_freezeAsync(apiClient_t *apiClient, char *tenantId, char *signedDocumentId, char *api_version, char *x_api_version);


// Get an artifact reference
//
// Resolves a stored artifact's reference (FileUpload id + key + hash + media hints).
//
trust_artifact_reference_dto_envelope_t*
SignedDocumentArtifactsAPI_getReferenceAsync(apiClient_t *apiClient, char *tenantId, char *fileUploadId, char *api_version, char *x_api_version);


// Set the primary authoring file
//
// Links an existing scan-gated FileUpload as the document's mutable authoring artifact (only while editable).
//
void
SignedDocumentArtifactsAPI_setPrimaryAuthoringFileAsync(apiClient_t *apiClient, char *tenantId, char *signedDocumentId, char *fileUploadId, char *api_version, char *x_api_version);


// Verify an artifact hash
//
// Re-reads the artifact bytes and verifies them against the recorded SHA-256. Returns true on match.
//
boolean_envelope_t*
SignedDocumentArtifactsAPI_verifyAsync(apiClient_t *apiClient, char *tenantId, char *fileUploadId, char *api_version, char *x_api_version);


