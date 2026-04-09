#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/object_email_dispatch_request.h"
#include "../model/tenant_dto_list_envelope.h"


// Preview a rendered basic email template.
//
// This action is only available for global administrators (business_owner role).
//
void
EmailsAPI_adminPreviewBasicEmailTemplate(apiClient_t *apiClient, char *api_version, char *x_api_version, object_email_dispatch_request_t *object_email_dispatch_request);


// Send a basic transactional email to recipients.
//
// This action is only available for global administrators (business_owner role).
//
tenant_dto_list_envelope_t*
EmailsAPI_adminSendBasicEmail(apiClient_t *apiClient, char *api_version, char *x_api_version, object_email_dispatch_request_t *object_email_dispatch_request);


