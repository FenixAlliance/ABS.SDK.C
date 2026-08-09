#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/assign_journal_to_book_request.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/journal_create_dto.h"
#include "../model/journal_dto_collection_query_parameters.h"
#include "../model/journal_dto_envelope.h"
#include "../model/journal_dto_i_read_only_list_envelope.h"
#include "../model/journal_entry_create_dto.h"
#include "../model/journal_entry_dto_collection_query_parameters.h"
#include "../model/journal_entry_dto_envelope.h"
#include "../model/journal_entry_dto_i_read_only_list_envelope.h"
#include "../model/journal_entry_update_dto.h"
#include "../model/journal_update_dto.h"
#include "../model/money_envelope.h"
#include "../model/patch_operation.h"
#include "../model/reverse_journal_entry_request.h"


// Aggregate journal entry credits
//
// Returns the sum of all credit amounts for entries in the specified journal, normalized to the target currency.
//
money_envelope_t*
JournalsAPI_aggregateJournalEntryCreditsAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *currencyId, char *api_version, char *x_api_version, journal_entry_dto_collection_query_parameters_t *journal_entry_dto_collection_query_parameters);


// Aggregate journal entry debits
//
// Returns the sum of all debit amounts for entries in the specified journal, normalized to the target currency.
//
money_envelope_t*
JournalsAPI_aggregateJournalEntryDebitsAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *currencyId, char *api_version, char *x_api_version, journal_entry_dto_collection_query_parameters_t *journal_entry_dto_collection_query_parameters);


// Bind a journal to a financial book
//
// Establishes the one-way Journal↔FinancialBook binding (finish-line #5): binds an unbound journal to the supplied book and sets its book-scoped code, enforcing (Tenant, Book, Code) uniqueness. Binding an unbound journal or re-affirming the same book succeeds; a duplicate code in the book is rejected (400), and re-homing an already-bound journal to a DIFFERENT book is rejected by the aggregate. Requires the journals_update permission.
//
empty_envelope_t*
JournalsAPI_assignJournalToBookAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version, assign_journal_to_book_request_t *assign_journal_to_book_request);


// Count journals
//
// Returns the count of journals for the tenant.
//
int32_envelope_t*
JournalsAPI_countJournalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, journal_dto_collection_query_parameters_t *journal_dto_collection_query_parameters);


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
JournalsAPI_getJournalEntriesAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version, journal_entry_dto_collection_query_parameters_t *journal_entry_dto_collection_query_parameters);


// Count journal entries
//
// Returns the number of entries in the specified journal.
//
int32_envelope_t*
JournalsAPI_getJournalEntriesCountAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version, journal_entry_dto_collection_query_parameters_t *journal_entry_dto_collection_query_parameters);


// Get journal entry by ID
//
// Retrieves a single journal entry WITH its hydrated posting lines — each line's account, direction, description and currency facets (transaction / functional / account / USD).
//
journal_entry_dto_envelope_t*
JournalsAPI_getJournalEntryDetailsAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *entryId, char *api_version, char *x_api_version);


// Get all journals
//
// Retrieves all journals for the specified tenant.
//
journal_dto_i_read_only_list_envelope_t*
JournalsAPI_getJournalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, journal_dto_collection_query_parameters_t *journal_dto_collection_query_parameters);


// Patch a journal
//
// Partially updates a journal.
//
empty_envelope_t*
JournalsAPI_patchJournalAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version, list_t *patch_operation);


// Patch a journal entry
//
// Partially updates a journal entry.
//
empty_envelope_t*
JournalsAPI_patchJournalEntryAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *entryId, char *api_version, char *x_api_version, list_t *patch_operation);


// Post a draft journal entry
//
// Posts a DRAFT journal entry into its own open fiscal period. Enforces the balanced-entry invariant and the open-period gate, then seals the entry (immutable — correct via reversal, never edit/delete). An unbalanced draft or a closed period is rejected. Requires the journals_post permission.
//
empty_envelope_t*
JournalsAPI_postJournalEntryAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *entryId, char *api_version, char *x_api_version);


// Reverse a posted journal entry
//
// Reverses a POSTED journal entry by writing a balanced compensating counter-entry into the supplied open fiscal period and marking the original Reversed — one atomic operation (append-only audit trail). Requires the journals_reverse permission.
//
empty_envelope_t*
JournalsAPI_reverseJournalEntryAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *entryId, char *api_version, char *x_api_version, reverse_journal_entry_request_t *reverse_journal_entry_request);


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


