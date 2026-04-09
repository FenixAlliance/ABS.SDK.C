#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/journal_type_create_dto.h"
#include "../model/journal_type_dto_envelope.h"
#include "../model/journal_type_dto_i_read_only_list_envelope.h"
#include "../model/journal_type_update_dto.h"


// Creates a new journal type
//
// Adds a new journal type to the tenant's catalog.
//
empty_envelope_t*
JournalTypesAPI_createJournalTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, journal_type_create_dto_t *journal_type_create_dto);


// Deletes a journal type
//
// Removes a journal type from the tenant's configuration.
//
empty_envelope_t*
JournalTypesAPI_deleteJournalTypeAsync(apiClient_t *apiClient, char *tenantId, char *journalTypeId, char *api_version, char *x_api_version);


// Retrieves a journal type by ID
//
// Fetches the journal type matching the specified ID.
//
journal_type_dto_envelope_t*
JournalTypesAPI_getJournalTypeDetailsAsync(apiClient_t *apiClient, char *tenantId, char *journalTypeId, char *api_version, char *x_api_version);


// Retrieves all journal types
//
// Fetches all journal types for the current tenant with OData support.
//
journal_type_dto_i_read_only_list_envelope_t*
JournalTypesAPI_getJournalTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Counts journal types
//
// Returns the total number of journal types available for the tenant.
//
int32_envelope_t*
JournalTypesAPI_getJournalTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates an existing journal type
//
// Modifies the details of a specific journal type.
//
empty_envelope_t*
JournalTypesAPI_updateJournalTypeAsync(apiClient_t *apiClient, char *tenantId, char *journalTypeId, char *api_version, char *x_api_version, journal_type_update_dto_t *journal_type_update_dto);


