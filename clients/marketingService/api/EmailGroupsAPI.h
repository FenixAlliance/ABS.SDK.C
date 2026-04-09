#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/email_group_create_dto.h"
#include "../model/email_group_dto_envelope.h"
#include "../model/email_group_dto_list_envelope.h"
#include "../model/email_group_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create an email group
//
// Creates a new email group for the specified tenant.
//
empty_envelope_t*
EmailGroupsAPI_createEmailGroupAsync(apiClient_t *apiClient, char *tenantId, email_group_create_dto_t *email_group_create_dto, char *api_version, char *x_api_version);


// Delete an email group
//
// Deletes an email group by its ID.
//
empty_envelope_t*
EmailGroupsAPI_deleteEmailGroupAsync(apiClient_t *apiClient, char *tenantId, char *emailgroupId, char *api_version, char *x_api_version);


// Get email group by ID
//
// Retrieves the details of a specific email group by its ID.
//
email_group_dto_envelope_t*
EmailGroupsAPI_getEmailGroupDetailsAsync(apiClient_t *apiClient, char *tenantId, char *emailgroupId, char *api_version, char *x_api_version);


// Get email groups count
//
// Returns the count of email groups for the specified tenant using OData query options.
//
int32_envelope_t*
EmailGroupsAPI_getEmailGroupsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get email groups
//
// Retrieves a collection of email groups for the specified tenant using OData query options.
//
email_group_dto_list_envelope_t*
EmailGroupsAPI_getEmailGroupsODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an email group
//
// Updates an existing email group by its ID.
//
empty_envelope_t*
EmailGroupsAPI_updateEmailGroupAsync(apiClient_t *apiClient, char *tenantId, char *emailgroupId, email_group_update_dto_t *email_group_update_dto, char *api_version, char *x_api_version);


