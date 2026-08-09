#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/create_signing_participant_dto.h"
#include "../model/create_signing_request_dto.h"
#include "../model/error_envelope.h"
#include "../model/execute_signing_request_dto.h"
#include "../model/finalize_signing_request_dto.h"
#include "../model/int32_envelope.h"
#include "../model/signing_participant_dto.h"
#include "../model/signing_participant_dto_list_envelope.h"
#include "../model/signing_request_dto.h"
#include "../model/signing_request_dto_collection_query_parameters.h"
#include "../model/signing_request_dto_list_envelope.h"
#include "../model/void_signing_request_dto.h"

// Enum ROUTINGMODE for SigningRequestsAPI_prepareAndCreateAsync
typedef enum  { trustservice_prepareAndCreateAsync_ROUTINGMODE_NULL = 0, trustservice_prepareAndCreateAsync_ROUTINGMODE_Parallel, trustservice_prepareAndCreateAsync_ROUTINGMODE_Sequential } trustservice_prepareAndCreateAsync_routingMode_e;


// Add a participant to a signing request
//
signing_participant_dto_t*
SigningRequestsAPI_addParticipantAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, create_signing_participant_dto_t *create_signing_participant_dto);


// Create a signing request from a frozen document
//
signing_request_dto_t*
SigningRequestsAPI_createFromDocumentAsync(apiClient_t *apiClient, char *tenantId, char *signedDocumentId, char *api_version, char *x_api_version, create_signing_request_dto_t *create_signing_request_dto);


// Run a signing provider to produce + finalize the signed artifact
//
void
SigningRequestsAPI_executeProviderAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, execute_signing_request_dto_t *execute_signing_request_dto);


// Expire a signing request
//
void
SigningRequestsAPI_expireAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Finalize a completed request into a signed artifact
//
void
SigningRequestsAPI_finalizeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, finalize_signing_request_dto_t *finalize_signing_request_dto);


// Get signing request by ID
//
signing_request_dto_t*
SigningRequestsAPI_getSigningRequestByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get participants of a signing request
//
signing_participant_dto_list_envelope_t*
SigningRequestsAPI_getSigningRequestParticipantsAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all signing requests
//
signing_request_dto_list_envelope_t*
SigningRequestsAPI_getSigningRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_request_dto_collection_query_parameters_t *signing_request_dto_collection_query_parameters);


// Get signing requests count
//
int32_envelope_t*
SigningRequestsAPI_getSigningRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_request_dto_collection_query_parameters_t *signing_request_dto_collection_query_parameters);


// Create, store, freeze a document and open a signing request in one call
//
// Server-owned flow (T-UX4): creates a SignedDocument from the uploaded source, stores it, freezes it, then creates a signing request over the frozen artifact and attaches its signers — all in one unit of work. Evidence truth (status/hashes/ids/tokens) is server-produced; the caller supplies intent only. The server generates the new document id.
//
signing_request_dto_t*
SigningRequestsAPI_prepareAndCreateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file, char *title, char *contactId, trustservice_prepareAndCreateAsync_routingMode_e routingMode, char expiresAtUtc, char *message, char *correlationId, char *externalReference, char *signers);


// Send a signing request
//
void
SigningRequestsAPI_sendAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Void a signing request
//
void
SigningRequestsAPI_voidAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, void_signing_request_dto_t *void_signing_request_dto);


