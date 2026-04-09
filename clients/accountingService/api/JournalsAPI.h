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
#include "../model/journal_create_dto.h"
#include "../model/journal_dto_envelope.h"
#include "../model/journal_dto_i_read_only_list_envelope.h"
#include "../model/journal_entry_create_dto.h"
#include "../model/journal_entry_dto_i_read_only_list_envelope.h"
#include "../model/journal_entry_update_dto.h"
#include "../model/journal_update_dto.h"


// Count journals
//
// Returns the count of journals for the tenant.
//
int32_envelope_t*
JournalsAPI_countJournalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create journal
//
// Creates a new journal for the tenant.
//
empty_envelope_t*
JournalsAPI_createJournalAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, journal_create_dto_t *journal_create_dto);


// Create journal entry
//
// Creates a new journal entry for a given journal.
//
empty_envelope_t*
JournalsAPI_createJournalEntryAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version, journal_entry_create_dto_t *journal_entry_create_dto);


// Delete journal
//
// Deletes a journal by ID.
//
empty_envelope_t*
JournalsAPI_deleteJournalAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version);


// Delete journal entry
//
// Deletes a specific journal entry.
//
empty_envelope_t*
JournalsAPI_deleteJournalEntryAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *entryId, char *api_version, char *x_api_version);


// Get journal by ID
//
// Retrieves the details of a journal.
//
journal_dto_envelope_t*
JournalsAPI_getJournalDetailsAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version);


// Get journal entries
//
// Gets entries for the specified journal.
//
journal_entry_dto_i_read_only_list_envelope_t*
JournalsAPI_getJournalEntriesAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version);


// Count journal entries
//
// Returns the number of entries in the specified journal.
//
int32_envelope_t*
JournalsAPI_getJournalEntriesCountAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version);


// Get all journals
//
// Retrieves all journals for the specified tenant.
//
journal_dto_i_read_only_list_envelope_t*
JournalsAPI_getJournalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update journal
//
// Updates an existing journal.
//
empty_envelope_t*
JournalsAPI_updateJournalAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version, journal_update_dto_t *journal_update_dto);


// Update journal entry
//
// Updates a specific journal entry.
//
empty_envelope_t*
JournalsAPI_updateJournalEntryAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *entryId, char *api_version, char *x_api_version, journal_entry_update_dto_t *journal_entry_update_dto);


