#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/email_template_create_dto.h"
#include "../model/email_template_dto_envelope.h"
#include "../model/email_template_dto_list_envelope.h"
#include "../model/email_template_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create an email template
//
// Creates a new email template for the specified tenant.
//
empty_envelope_t*
EmailTemplatesAPI_createEmailTemplateAsync(apiClient_t *apiClient, char *tenantId, email_template_create_dto_t *email_template_create_dto, char *api_version, char *x_api_version);


// Delete an email template
//
// Deletes an email template by its ID.
//
empty_envelope_t*
EmailTemplatesAPI_deleteEmailTemplateAsync(apiClient_t *apiClient, char *tenantId, char *emailTemplateId, char *api_version, char *x_api_version);


// Get email template by ID
//
// Retrieves the details of a specific email template by its ID.
//
email_template_dto_envelope_t*
EmailTemplatesAPI_getEmailTemplateDetailsAsync(apiClient_t *apiClient, char *tenantId, char *emailTemplateId, char *api_version, char *x_api_version);


// Get email templates count
//
// Returns the count of email templates for the specified tenant using OData query options.
//
int32_envelope_t*
EmailTemplatesAPI_getEmailTemplatesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get email templates
//
// Retrieves a collection of email templates for the specified tenant using OData query options.
//
email_template_dto_list_envelope_t*
EmailTemplatesAPI_getEmailTemplatesODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an email template
//
// Updates an existing email template by its ID.
//
empty_envelope_t*
EmailTemplatesAPI_updateEmailTemplateAsync(apiClient_t *apiClient, char *tenantId, char *emailTemplateId, email_template_update_dto_t *email_template_update_dto, char *api_version, char *x_api_version);


