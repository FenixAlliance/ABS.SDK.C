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
#include "../model/support_entitlement_create_dto.h"
#include "../model/support_entitlement_dto_envelope.h"
#include "../model/support_entitlement_dto_list_envelope.h"
#include "../model/support_entitlement_update_dto.h"


// Create a new support entitlement
//
// Creates a new support entitlement for the specified tenant.
//
empty_envelope_t*
SupportEntitlementsAPI_createSupportEntitlementAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, support_entitlement_create_dto_t *support_entitlement_create_dto);


// Delete a support entitlement
//
// Deletes a support entitlement by its unique identifier.
//
empty_envelope_t*
SupportEntitlementsAPI_deleteSupportEntitlementAsync(apiClient_t *apiClient, char *tenantId, char *supportEntitlementId, char *api_version, char *x_api_version);


// Retrieve a support entitlement by ID
//
// Retrieves a single support entitlement by its unique identifier.
//
support_entitlement_dto_envelope_t*
SupportEntitlementsAPI_getSupportEntitlementAsync(apiClient_t *apiClient, char *tenantId, char *supportEntitlementId, char *api_version, char *x_api_version);


// Retrieve a list of support entitlements
//
// Retrieves a list of support entitlements for the specified tenant with OData query support.
//
support_entitlement_dto_list_envelope_t*
SupportEntitlementsAPI_getSupportEntitlementsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of support entitlements
//
// Returns the total count of support entitlements for the specified tenant with OData query support.
//
int32_envelope_t*
SupportEntitlementsAPI_getSupportEntitlementsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a support entitlement
//
// Updates an existing support entitlement by its unique identifier.
//
empty_envelope_t*
SupportEntitlementsAPI_updateSupportEntitlementAsync(apiClient_t *apiClient, char *tenantId, char *supportEntitlementId, char *api_version, char *x_api_version, support_entitlement_update_dto_t *support_entitlement_update_dto);


