#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/email_signature_create_dto.h"
#include "../model/email_signature_dto_envelope.h"
#include "../model/email_signature_dto_list_envelope.h"
#include "../model/email_signature_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create an email signature
//
// Creates a new email signature for the specified tenant.
//
empty_envelope_t*
EmailSignaturesAPI_createEmailSignatureAsync(apiClient_t *apiClient, char *tenantId, email_signature_create_dto_t *email_signature_create_dto, char *api_version, char *x_api_version);


// Delete an email signature
//
// Deletes an email signature by its ID.
//
empty_envelope_t*
EmailSignaturesAPI_deleteEmailSignatureAsync(apiClient_t *apiClient, char *tenantId, char *emailsignatureId, char *api_version, char *x_api_version);


// Get email signature by ID
//
// Retrieves the details of a specific email signature by its ID.
//
email_signature_dto_envelope_t*
EmailSignaturesAPI_getEmailSignatureDetailsAsync(apiClient_t *apiClient, char *tenantId, char *emailsignatureId, char *api_version, char *x_api_version);


// Get email signatures count
//
// Returns the count of email signatures for the specified tenant using OData query options.
//
int32_envelope_t*
EmailSignaturesAPI_getEmailSignaturesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get email signatures
//
// Retrieves a collection of email signatures for the specified tenant using OData query options.
//
email_signature_dto_list_envelope_t*
EmailSignaturesAPI_getEmailSignaturesODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an email signature
//
// Updates an existing email signature by its ID.
//
empty_envelope_t*
EmailSignaturesAPI_updateEmailSignatureAsync(apiClient_t *apiClient, char *tenantId, char *emailsignatureId, email_signature_update_dto_t *email_signature_update_dto, char *api_version, char *x_api_version);


