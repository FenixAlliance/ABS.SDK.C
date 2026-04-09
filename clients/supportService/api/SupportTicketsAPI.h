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
#include "../model/private_message_dto_list_envelope.h"
#include "../model/support_ticket_conversation_create_dto.h"
#include "../model/support_ticket_conversation_dto_envelope.h"
#include "../model/support_ticket_conversation_dto_list_envelope.h"
#include "../model/support_ticket_create_dto.h"
#include "../model/support_ticket_dto_envelope.h"
#include "../model/support_ticket_dto_list_envelope.h"
#include "../model/support_ticket_update_dto.h"


// Create a new support ticket
//
// Creates a new support ticket for the specified tenant.
//
empty_envelope_t*
SupportTicketsAPI_createSupportTicketAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, support_ticket_create_dto_t *support_ticket_create_dto);


// Delete a support ticket
//
// Deletes a support ticket by its unique identifier.
//
empty_envelope_t*
SupportTicketsAPI_deleteSupportTicketAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *api_version, char *x_api_version);


// Delete a conversation from a support ticket
//
// Deletes a specific conversation from a support ticket.
//
empty_envelope_t*
SupportTicketsAPI_deleteSupportTicketConversationAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *supportTicketConversationId, char *api_version, char *x_api_version);


// Retrieve a support ticket by ID
//
// Retrieves a single support ticket by its unique identifier.
//
support_ticket_dto_envelope_t*
SupportTicketsAPI_getSupportTicketAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *api_version, char *x_api_version);


// Retrieve a specific conversation for a support ticket
//
// Retrieves a single conversation by its ID for a specific support ticket.
//
support_ticket_conversation_dto_envelope_t*
SupportTicketsAPI_getSupportTicketConversationAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *supportTicketConversationId, char *api_version, char *x_api_version);


// Retrieve messages for a support ticket conversation
//
// Retrieves the list of messages within a specific conversation of a support ticket.
//
private_message_dto_list_envelope_t*
SupportTicketsAPI_getSupportTicketConversationMessagesAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *supportTicketConversationId, int *pageNumber, int *pageSize, char *api_version, char *x_api_version);


// Retrieve conversations for a support ticket
//
// Retrieves the list of conversations associated with a specific support ticket.
//
support_ticket_conversation_dto_list_envelope_t*
SupportTicketsAPI_getSupportTicketConversationsAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *api_version, char *x_api_version);


// Retrieve a list of support tickets
//
// Retrieves a list of support tickets for the specified tenant with OData query support.
//
support_ticket_dto_list_envelope_t*
SupportTicketsAPI_getSupportTicketsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of support tickets
//
// Returns the total count of support tickets for the specified tenant with OData query support.
//
int32_envelope_t*
SupportTicketsAPI_getSupportTicketsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a conversation for a support ticket
//
// Creates a new conversation and associates it with the specified support ticket.
//
empty_envelope_t*
SupportTicketsAPI_relateSupportTicketToConversationAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *api_version, char *x_api_version, support_ticket_conversation_create_dto_t *support_ticket_conversation_create_dto);


// Update a support ticket
//
// Updates an existing support ticket by its unique identifier.
//
empty_envelope_t*
SupportTicketsAPI_updateSupportTicketAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketId, char *api_version, char *x_api_version, support_ticket_update_dto_t *support_ticket_update_dto);


