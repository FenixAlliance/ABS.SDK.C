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
#include "../model/support_ticket_type_create_dto.h"
#include "../model/support_ticket_type_dto_envelope.h"
#include "../model/support_ticket_type_dto_list_envelope.h"
#include "../model/support_ticket_type_update_dto.h"


// Create a new support ticket type
//
// Creates a new support ticket type for the specified tenant.
//
empty_envelope_t*
SupportTicketTypesAPI_createSupportTicketTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, support_ticket_type_create_dto_t *support_ticket_type_create_dto);


// Delete a support ticket type
//
// Deletes a support ticket type by its unique identifier.
//
empty_envelope_t*
SupportTicketTypesAPI_deleteSupportTicketTypeAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketTypeId, char *api_version, char *x_api_version);


// Retrieve a support ticket type by ID
//
// Retrieves a single support ticket type by its unique identifier.
//
support_ticket_type_dto_envelope_t*
SupportTicketTypesAPI_getSupportTicketTypeAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketTypeId, char *api_version, char *x_api_version);


// Retrieve a list of support ticket types
//
// Retrieves a list of support ticket types for the specified tenant with OData query support.
//
support_ticket_type_dto_list_envelope_t*
SupportTicketTypesAPI_getSupportTicketTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of support ticket types
//
// Returns the total count of support ticket types for the specified tenant with OData query support.
//
int32_envelope_t*
SupportTicketTypesAPI_getSupportTicketTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a support ticket type
//
// Updates an existing support ticket type by its unique identifier.
//
empty_envelope_t*
SupportTicketTypesAPI_updateSupportTicketTypeAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketTypeId, char *api_version, char *x_api_version, support_ticket_type_update_dto_t *support_ticket_type_update_dto);


