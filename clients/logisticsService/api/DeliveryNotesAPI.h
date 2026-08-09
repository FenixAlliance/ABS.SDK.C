#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/delivery_note_create_dto.h"
#include "../model/delivery_note_dto_collection_query_parameters.h"
#include "../model/delivery_note_dto_envelope.h"
#include "../model/delivery_note_dto_list_envelope.h"
#include "../model/delivery_note_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create a delivery note
//
// Creates a new delivery note.
//
empty_envelope_t*
DeliveryNotesAPI_createDeliveryNoteAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, delivery_note_create_dto_t *delivery_note_create_dto);


// Delete a delivery note
//
// Deletes a delivery note.
//
empty_envelope_t*
DeliveryNotesAPI_deleteDeliveryNoteAsync(apiClient_t *apiClient, char *tenantId, char *deliveryNoteId, char *api_version, char *x_api_version);


// Get delivery note by ID
//
// Retrieves a specific delivery note.
//
delivery_note_dto_envelope_t*
DeliveryNotesAPI_getDeliveryNoteByIdAsync(apiClient_t *apiClient, char *tenantId, char *deliveryNoteId, char *api_version, char *x_api_version);


// Get all delivery notes
//
// Retrieves all delivery notes for the specified tenant.
//
delivery_note_dto_list_envelope_t*
DeliveryNotesAPI_getDeliveryNotesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, delivery_note_dto_collection_query_parameters_t *delivery_note_dto_collection_query_parameters);


// Get delivery notes count
//
// Returns the count of delivery notes.
//
int32_envelope_t*
DeliveryNotesAPI_getDeliveryNotesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, delivery_note_dto_collection_query_parameters_t *delivery_note_dto_collection_query_parameters);


// Update a delivery note
//
// Updates an existing delivery note.
//
empty_envelope_t*
DeliveryNotesAPI_updateDeliveryNoteAsync(apiClient_t *apiClient, char *tenantId, char *deliveryNoteId, char *api_version, char *x_api_version, delivery_note_update_dto_t *delivery_note_update_dto);


