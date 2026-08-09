#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/fiscal_responsibility_create_dto.h"
#include "../model/fiscal_responsibility_dto_collection_query_parameters.h"
#include "../model/fiscal_responsibility_dto_envelope.h"
#include "../model/fiscal_responsibility_dto_list_envelope.h"
#include "../model/fiscal_responsibility_update_dto.h"
#include "../model/int32_envelope.h"
#include "../model/patch_operation.h"


// Create a fiscal responsibility
//
// Creates a new fiscal responsibility for a fiscal authority.
//
empty_envelope_t*
FiscalResponsibilitiesAPI_createFiscalResponsibility(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, fiscal_responsibility_create_dto_t *fiscal_responsibility_create_dto);


// Delete a fiscal responsibility
//
// Deletes a fiscal responsibility identified by its unique identifier.
//
empty_envelope_t*
FiscalResponsibilitiesAPI_deleteFiscalResponsibility(apiClient_t *apiClient, char *tenantId, char *fiscalResponsibilityId, char *api_version, char *x_api_version);


// Get fiscal responsibilities for an authority
//
// Retrieves all fiscal responsibilities for the specified fiscal authority.
//
fiscal_responsibility_dto_list_envelope_t*
FiscalResponsibilitiesAPI_getFiscalResponsibilities(apiClient_t *apiClient, char *tenantId, char *fiscalAuthorityId, char *authorityId, char *api_version, char *x_api_version, fiscal_responsibility_dto_collection_query_parameters_t *fiscal_responsibility_dto_collection_query_parameters);


// Get fiscal responsibilities count
//
// Returns the total count of fiscal responsibilities for the specified fiscal authority.
//
int32_envelope_t*
FiscalResponsibilitiesAPI_getFiscalResponsibilitiesCount(apiClient_t *apiClient, char *tenantId, char *fiscalAuthorityId, char *api_version, char *x_api_version, fiscal_responsibility_dto_collection_query_parameters_t *fiscal_responsibility_dto_collection_query_parameters);


// Get fiscal responsibility by ID
//
// Retrieves a specific fiscal responsibility by its unique identifier.
//
fiscal_responsibility_dto_envelope_t*
FiscalResponsibilitiesAPI_getFiscalResponsibility(apiClient_t *apiClient, char *tenantId, char *fiscalAuthorityId, char *fiscalResponsibilityId, char *api_version, char *x_api_version);


// Patch a fiscal responsibility
//
// Partially updates a fiscal responsibility.
//
empty_envelope_t*
FiscalResponsibilitiesAPI_patchFiscalResponsibilityAsync(apiClient_t *apiClient, char *tenantId, char *fiscalResponsibilityId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a fiscal responsibility
//
// Updates an existing fiscal responsibility identified by its unique identifier.
//
empty_envelope_t*
FiscalResponsibilitiesAPI_updateFiscalResponsibility(apiClient_t *apiClient, char *tenantId, char *fiscalResponsibilityId, char *api_version, char *x_api_version, fiscal_responsibility_update_dto_t *fiscal_responsibility_update_dto);


