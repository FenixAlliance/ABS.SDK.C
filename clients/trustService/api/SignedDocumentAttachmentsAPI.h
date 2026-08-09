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
#include "../model/signed_document_attachment_create_dto.h"
#include "../model/signed_document_attachment_dto.h"
#include "../model/signed_document_attachment_dto_collection_query_parameters.h"
#include "../model/signed_document_attachment_dto_list_envelope.h"
#include "../model/signed_document_attachment_update_dto.h"


// Create a new signed document attachment
//
// Links an already-stored file to a SignedDocument (metadata + Storage pointer; no bytes).
//
void
SignedDocumentAttachmentsAPI_createSignedDocumentAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signed_document_attachment_create_dto_t *signed_document_attachment_create_dto);


// Delete a signed document attachment
//
// Deletes a signed document attachment link for the specified tenant.
//
void
SignedDocumentAttachmentsAPI_deleteSignedDocumentAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get signed document attachment by ID
//
// Retrieves a specific signed document attachment by its identifier.
//
signed_document_attachment_dto_t*
SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all signed document attachments
//
// Retrieves all signed document attachments for the specified tenant.
//
signed_document_attachment_dto_list_envelope_t*
SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signed_document_attachment_dto_collection_query_parameters_t *signed_document_attachment_dto_collection_query_parameters);


// Get signed document attachments count
//
// Returns the count of signed document attachments for the specified tenant.
//
int32_envelope_t*
SignedDocumentAttachmentsAPI_getSignedDocumentAttachmentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signed_document_attachment_dto_collection_query_parameters_t *signed_document_attachment_dto_collection_query_parameters);


// Patch a signed document attachment
//
// Patch a signed document attachment
//
empty_envelope_t*
SignedDocumentAttachmentsAPI_patchSignedDocumentAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a signed document attachment
//
// Updates signed document attachment metadata for the specified tenant.
//
void
SignedDocumentAttachmentsAPI_updateSignedDocumentAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, signed_document_attachment_update_dto_t *signed_document_attachment_update_dto);


