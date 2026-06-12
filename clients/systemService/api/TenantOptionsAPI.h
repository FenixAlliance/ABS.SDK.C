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
#include "../model/operation.h"
#include "../model/option_create_dto.h"
#include "../model/option_dto_envelope.h"
#include "../model/option_dto_list_envelope.h"
#include "../model/option_update_dto.h"


// Create a new tenant option (admin)
//
// Admin endpoint to create an option for any tenant
//
empty_envelope_t*
TenantOptionsAPI_createSystemTenantOption(apiClient_t *apiClient, char *tenantId, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);


// Delete a tenant option (admin)
//
// Admin endpoint to delete an option for any tenant
//
empty_envelope_t*
TenantOptionsAPI_deleteSystemTenantOption(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version);


// Retrieve a single tenant option by its ID (admin)
//
// Admin endpoint to retrieve a single option for any tenant
//
option_dto_envelope_t*
TenantOptionsAPI_getSystemTenantOptionById(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version);


// Retrieve a list of tenant options (admin)
//
// Admin endpoint to retrieve options for any tenant
//
option_dto_list_envelope_t*
TenantOptionsAPI_getSystemTenantOptions(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version);


// Get the count of tenant options (admin)
//
// Admin endpoint to get the count of options for any tenant
//
int32_envelope_t*
TenantOptionsAPI_getSystemTenantOptionsCount(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version);


// Partially update a tenant option (admin)
//
// Admin endpoint to partially update an option for any tenant using a JSON Patch document
//
empty_envelope_t*
TenantOptionsAPI_patchSystemTenantOption(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version, list_t *operation);


// Update a tenant option (admin)
//
// Admin endpoint to update an option for any tenant
//
empty_envelope_t*
TenantOptionsAPI_updateSystemTenantOption(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);


