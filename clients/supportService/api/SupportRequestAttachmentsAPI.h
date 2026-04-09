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
#include "../model/support_request_attachment_update_dto.h"


// Create a new support request attachment
//
// Creates a new support request attachment for the specified tenant.
//
empty_envelope_t*
SupportRequestAttachmentsAPI_createSupportRequestAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, support_request_attachment_create_dto_t *support_request_attachment_create_dto);


// Delete a support request attachment
//
// Deletes a support request attachment by its unique identifier.
//
empty_envelope_t*
SupportRequestAttachmentsAPI_deleteSupportRequestAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestAttachmentId, char *api_version, char *x_api_version);


// Retrieve a support request attachment by ID
//
// Retrieves a single support request attachment by its unique identifier.
//
support_request_attachment_dto_envelope_t*
SupportRequestAttachmentsAPI_getSupportRequestAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestAttachmentId, char *api_version, char *x_api_version);


// Retrieve a list of support request attachments
//
// Retrieves a list of support request attachments for the specified tenant with OData query support.
//
support_request_attachment_dto_list_envelope_t*
SupportRequestAttachmentsAPI_getSupportRequestAttachmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of support request attachments
//
// Returns the total count of support request attachments for the specified tenant with OData query support.
//
int32_envelope_t*
SupportRequestAttachmentsAPI_getSupportRequestAttachmentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a support request attachment
//
// Updates an existing support request attachment by its unique identifier.
//
empty_envelope_t*
SupportRequestAttachmentsAPI_updateSupportRequestAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *supportRequestAttachmentId, char *api_version, char *x_api_version, support_request_attachment_update_dto_t *support_request_attachment_update_dto);


