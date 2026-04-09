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
#include "../model/support_request_attachment_create_dto.h"
#include "../model/support_request_attachment_dto_envelope.h"
#include "../model/support_request_attachment_dto_list_envelope.h"
#include "../model/support_request_create_dto.h"
#include "../model/support_request_dto_envelope.h"
#include "../model/support_request_dto_list_envelope.h"
#include "../model/support_request_update_dto.h"
#include "../model/support_ticket_dto_list_envelope.h"


// Create a new support request
//
// Creates a new support request for the specified tenant.
//
empty_envelope_t*
SupportRequestsAPI_createSupportRequestAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, support_request_create_dto_t *support_request_create_dto);


// Delete a support request
//
// Deletes a support request by its unique identifier.
//
empty_envelope_t*
SupportRequestsAPI_deleteSupportRequestAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version);


// Retrieve a support request by ID
//
// Retrieves a single support request by its unique identifier.
//
support_request_dto_envelope_t*
SupportRequestsAPI_getSupportRequestAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version);


// Retrieve a specific attachment for a support request
//
// Retrieves a single attachment by its ID for a specific support request.
//
support_request_attachment_dto_envelope_t*
SupportRequestsAPI_getSupportRequestAttachmentByRequest(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *attachmentId, char *api_version, char *x_api_version);


// Retrieve attachments for a support request
//
// Retrieves the list of attachments associated with a specific support request.
//
support_request_attachment_dto_list_envelope_t*
SupportRequestsAPI_getSupportRequestAttachmentsByRequest(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version);


// Get the count of attachments for a support request
//
// Returns the total count of attachments for a specific support request.
//
int32_envelope_t*
SupportRequestsAPI_getSupportRequestAttachmentsCountByRequest(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version);


// Retrieve tickets for a support request
//
// Retrieves the list of support tickets associated with a specific support request.
//
support_ticket_dto_list_envelope_t*
SupportRequestsAPI_getSupportRequestTicketsAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version);


// Retrieve a list of support requests
//
// Retrieves a list of support requests for the specified tenant with OData query support.
//
support_request_dto_list_envelope_t*
SupportRequestsAPI_getSupportRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of support requests
//
// Returns the total count of support requests for the specified tenant with OData query support.
//
int32_envelope_t*
SupportRequestsAPI_getSupportRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Add an attachment to a support request
//
// Creates a new attachment and associates it with the specified support request.
//
empty_envelope_t*
SupportRequestsAPI_relateSupportRequestToAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version, support_request_attachment_create_dto_t *support_request_attachment_create_dto);


// Update a support request
//
// Updates an existing support request by its unique identifier.
//
empty_envelope_t*
SupportRequestsAPI_updateSupportRequestAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestId, char *api_version, char *x_api_version, support_request_update_dto_t *support_request_update_dto);


