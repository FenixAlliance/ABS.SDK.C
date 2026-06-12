#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/delivery_note_dto_list_envelope.h"
#include "../model/dispute_proof_of_delivery_request.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/operation.h"
#include "../model/proof_of_delivery_create_dto.h"
#include "../model/proof_of_delivery_dto_envelope.h"
#include "../model/proof_of_delivery_dto_list_envelope.h"
#include "../model/proof_of_delivery_line_create_dto.h"
#include "../model/proof_of_delivery_line_dto_list_envelope.h"
#include "../model/proof_of_delivery_line_update_dto.h"
#include "../model/proof_of_delivery_update_dto.h"
#include "../model/reject_proof_of_delivery_request.h"
#include "../model/sign_proof_of_delivery_request.h"


// Add a line to proof of delivery
//
// Adds a new line to a proof of delivery.
//
empty_envelope_t*
ProofsOfDeliveryAPI_addProofOfDeliveryLineAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, proof_of_delivery_line_create_dto_t *proof_of_delivery_line_create_dto);


// Attach a delivery note
//
// Attaches a delivery note to a proof of delivery.
//
empty_envelope_t*
ProofsOfDeliveryAPI_attachDeliveryNoteAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *noteId, char *api_version, char *x_api_version);


// Create a proof of delivery
//
// Creates a new proof of delivery for the specified tenant.
//
empty_envelope_t*
ProofsOfDeliveryAPI_createProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, proof_of_delivery_create_dto_t *proof_of_delivery_create_dto);


// Delete a proof of delivery
//
// Deletes a proof of delivery.
//
empty_envelope_t*
ProofsOfDeliveryAPI_deleteProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version);


// Detach a delivery note
//
// Detaches a delivery note from a proof of delivery.
//
empty_envelope_t*
ProofsOfDeliveryAPI_detachDeliveryNoteAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *noteId, char *api_version, char *x_api_version);


// Dispute a proof of delivery
//
// Disputes a proof of delivery.
//
empty_envelope_t*
ProofsOfDeliveryAPI_disputeProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, dispute_proof_of_delivery_request_t *dispute_proof_of_delivery_request);


// Get proof of delivery by ID
//
// Retrieves a specific proof of delivery by its identifier.
//
proof_of_delivery_dto_envelope_t*
ProofsOfDeliveryAPI_getProofOfDeliveryByIdAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version);


// Get attached delivery notes
//
// Retrieves all delivery notes attached to a proof of delivery.
//
delivery_note_dto_list_envelope_t*
ProofsOfDeliveryAPI_getProofOfDeliveryDeliveryNotesAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version);


// Get delivery notes count
//
// Returns the count of delivery notes attached to a proof of delivery.
//
int32_envelope_t*
ProofsOfDeliveryAPI_getProofOfDeliveryDeliveryNotesCountAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version);


// Get proof of delivery lines
//
// Retrieves all lines for a specific proof of delivery.
//
proof_of_delivery_line_dto_list_envelope_t*
ProofsOfDeliveryAPI_getProofOfDeliveryLinesAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version);


// Get proof of delivery lines count
//
// Returns the count of lines for a specific proof of delivery.
//
int32_envelope_t*
ProofsOfDeliveryAPI_getProofOfDeliveryLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version);


// Get all proofs of delivery
//
// Retrieves all proofs of delivery for the specified tenant.
//
proof_of_delivery_dto_list_envelope_t*
ProofsOfDeliveryAPI_getProofsOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get proofs of delivery count
//
// Returns the count of proofs of delivery for the specified tenant.
//
int32_envelope_t*
ProofsOfDeliveryAPI_getProofsOfDeliveryCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a proof of delivery
//
// Partially updates an existing proof of delivery using JSON Patch.
//
empty_envelope_t*
ProofsOfDeliveryAPI_patchProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, list_t *operation);


// Patch a proof of delivery line
//
// Partially updates an existing proof of delivery line using JSON Patch.
//
empty_envelope_t*
ProofsOfDeliveryAPI_patchProofOfDeliveryLineAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *lineId, char *api_version, char *x_api_version, list_t *operation);


// Reject a proof of delivery
//
// Rejects a proof of delivery.
//
empty_envelope_t*
ProofsOfDeliveryAPI_rejectProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, reject_proof_of_delivery_request_t *reject_proof_of_delivery_request);


// Remove a proof of delivery line
//
// Removes a line from a proof of delivery.
//
empty_envelope_t*
ProofsOfDeliveryAPI_removeProofOfDeliveryLineAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *lineId, char *api_version, char *x_api_version);


// Sign a proof of delivery
//
// Signs a proof of delivery.
//
empty_envelope_t*
ProofsOfDeliveryAPI_signProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, sign_proof_of_delivery_request_t *sign_proof_of_delivery_request);


// Update a proof of delivery
//
// Updates an existing proof of delivery.
//
empty_envelope_t*
ProofsOfDeliveryAPI_updateProofOfDeliveryAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *api_version, char *x_api_version, proof_of_delivery_update_dto_t *proof_of_delivery_update_dto);


// Update a proof of delivery line
//
// Updates an existing line on a proof of delivery.
//
empty_envelope_t*
ProofsOfDeliveryAPI_updateProofOfDeliveryLineAsync(apiClient_t *apiClient, char *tenantId, char *podId, char *lineId, char *api_version, char *x_api_version, proof_of_delivery_line_update_dto_t *proof_of_delivery_line_update_dto);


