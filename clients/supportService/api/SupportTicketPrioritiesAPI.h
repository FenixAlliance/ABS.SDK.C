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
#include "../model/support_ticket_priority_create_dto.h"
#include "../model/support_ticket_priority_dto_envelope.h"
#include "../model/support_ticket_priority_dto_list_envelope.h"
#include "../model/support_ticket_priority_update_dto.h"


// Create a new support ticket priority
//
// Creates a new support ticket priority for the specified tenant.
//
empty_envelope_t*
SupportTicketPrioritiesAPI_createSupportTicketPriorityAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, support_ticket_priority_create_dto_t *support_ticket_priority_create_dto);


// Delete a support ticket priority
//
// Deletes a support ticket priority by its unique identifier.
//
empty_envelope_t*
SupportTicketPrioritiesAPI_deleteSupportTicketPriorityAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketPriorityId, char *api_version, char *x_api_version);


// Retrieve a list of support ticket priorities
//
// Retrieves a list of support ticket priorities for the specified tenant with OData query support.
//
support_ticket_priority_dto_list_envelope_t*
SupportTicketPrioritiesAPI_getSupportTicketPrioritiesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of support ticket priorities
//
// Returns the total count of support ticket priorities for the specified tenant with OData query support.
//
int32_envelope_t*
SupportTicketPrioritiesAPI_getSupportTicketPrioritiesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Retrieve a support ticket priority by ID
//
// Retrieves a single support ticket priority by its unique identifier.
//
support_ticket_priority_dto_envelope_t*
SupportTicketPrioritiesAPI_getSupportTicketPriorityAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketPriorityId, char *api_version, char *x_api_version);


// Update a support ticket priority
//
// Updates an existing support ticket priority by its unique identifier.
//
empty_envelope_t*
SupportTicketPrioritiesAPI_updateSupportTicketPriorityAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketPriorityId, char *api_version, char *x_api_version, support_ticket_priority_update_dto_t *support_ticket_priority_update_dto);


