#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/fiscal_responsibility_record_create_dto.h"
#include "../model/fiscal_responsibility_record_dto_envelope.h"
#include "../model/fiscal_responsibility_record_dto_list_envelope.h"
#include "../model/fiscal_responsibility_record_update_dto.h"
#include "../model/int32_envelope.h"


// Create a fiscal responsibility record
//
// Creates a new fiscal responsibility record for a fiscal responsibility.
//
empty_envelope_t*
FiscalResponsibilityRecordsAPI_createFiscalResponsibilityRecord(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, fiscal_responsibility_record_create_dto_t *fiscal_responsibility_record_create_dto);


// Delete a fiscal responsibility record
//
// Deletes a fiscal responsibility record identified by its unique identifier.
//
empty_envelope_t*
FiscalResponsibilityRecordsAPI_deleteFiscalResponsibilityRecord(apiClient_t *apiClient, tenantId, char *fiscalResponsibilityRecordId, char *api_version, char *x_api_version);


// Get fiscal responsibility record by ID
//
// Retrieves a specific fiscal responsibility record by its unique identifier.
//
fiscal_responsibility_record_dto_envelope_t*
FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecord(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalResponsibilityId, char *fiscalResponsibilityRecordId, char *api_version, char *x_api_version);


// Get fiscal responsibility records
//
// Retrieves all fiscal responsibility records for the specified fiscal responsibility.
//
fiscal_responsibility_record_dto_list_envelope_t*
FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecords(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalResponsibilityId, char *api_version, char *x_api_version);


// Get fiscal responsibility records count
//
// Returns the total count of fiscal responsibility records for the specified fiscal responsibility.
//
int32_envelope_t*
FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecordsCount(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalResponsibilityId, char *api_version, char *x_api_version);


// Update a fiscal responsibility record
//
// Updates an existing fiscal responsibility record identified by its unique identifier.
//
empty_envelope_t*
FiscalResponsibilityRecordsAPI_updateFiscalResponsibilityRecord(apiClient_t *apiClient, tenantId, char *fiscalResponsibilityRecordId, char *api_version, char *x_api_version, fiscal_responsibility_record_update_dto_t *fiscal_responsibility_record_update_dto);


