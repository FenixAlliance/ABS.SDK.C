#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/envelope.h"
#include "../model/error_envelope.h"


// Sync the current user into the current tenant's contact list
//
// Synchronizes the currently authenticated user into the current tenant's CRM contact list.
//
envelope_t*
SyncAPI_syncCurrentHolderToCurrentTenantCrm(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Sync the current user into a tenant's contact list
//
// Synchronizes the currently authenticated user into the specified tenant's CRM contact list.
//
envelope_t*
SyncAPI_syncCurrentHolderToTenantCrm(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Sync a user into a tenant's contact list
//
// Synchronizes a specified user into the tenant's CRM contact list.
//
envelope_t*
SyncAPI_syncHolderToTenantCrmAsync(apiClient_t *apiClient, char *tenantId, char *relatedUserId, char *api_version, char *x_api_version);


// Sync a tenant into another tenant's contact list
//
// Synchronizes a tenant into another tenant's CRM contact list.
//
empty_envelope_t*
SyncAPI_syncTenantToTenantCrm(apiClient_t *apiClient, char *tenantId, char *relatedTenantId, char *api_version, char *x_api_version);


