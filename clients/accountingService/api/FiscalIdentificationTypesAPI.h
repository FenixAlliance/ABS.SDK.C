#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/fiscal_identification_type_create_dto.h"
#include "../model/fiscal_identification_type_dto_envelope.h"
#include "../model/fiscal_identification_type_dto_list_envelope.h"
#include "../model/fiscal_identification_type_update_dto.h"
#include "../model/int32_envelope.h"


// Create a fiscal identification type
//
// Creates a new fiscal identification type for a fiscal authority.
//
empty_envelope_t*
FiscalIdentificationTypesAPI_createFiscalIdentificationType(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, fiscal_identification_type_create_dto_t *fiscal_identification_type_create_dto);


// Delete a fiscal identification type
//
// Deletes a fiscal identification type identified by its unique identifier.
//
empty_envelope_t*
FiscalIdentificationTypesAPI_deleteFiscalIdentificationType(apiClient_t *apiClient, tenantId, char *identificationTypeId, char *api_version, char *x_api_version);


// Get fiscal identification type by ID
//
// Retrieves a specific fiscal identification type by its unique identifier.
//
fiscal_identification_type_dto_envelope_t*
FiscalIdentificationTypesAPI_getFiscalIdentificationType(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *identificationTypeId, char *api_version, char *x_api_version);


// Get fiscal identification types for an authority
//
// Retrieves all fiscal identification types for the specified fiscal authority.
//
fiscal_identification_type_dto_list_envelope_t*
FiscalIdentificationTypesAPI_getFiscalIdentificationTypes(apiClient_t *apiClient, char *authorityId, char *api_version, char *x_api_version);


// Get fiscal identification types count
//
// Returns the total count of fiscal identification types for the specified fiscal authority.
//
int32_envelope_t*
FiscalIdentificationTypesAPI_getFiscalIdentificationTypesCount(apiClient_t *apiClient, char *authorityId, char *api_version, char *x_api_version);


// Update a fiscal identification type
//
// Updates an existing fiscal identification type identified by its unique identifier.
//
empty_envelope_t*
FiscalIdentificationTypesAPI_updateFiscalIdentificationType(apiClient_t *apiClient, tenantId, char *identificationTypeId, char *api_version, char *x_api_version, fiscal_identification_type_update_dto_t *fiscal_identification_type_update_dto);


