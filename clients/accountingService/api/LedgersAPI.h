#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/create_ledger_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/ledger_dto_envelope.h"
#include "../model/ledger_dto_i_read_only_list_envelope.h"
#include "../model/update_ledger_dto.h"


// Creates a new ledger
//
// Creates a new ledger for the current tenant.
//
empty_envelope_t*
LedgersAPI_createLedgerAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, create_ledger_dto_t *create_ledger_dto);


// Deletes a ledger
//
// Deletes the specified ledger.
//
empty_envelope_t*
LedgersAPI_deleteLedgerAsync(apiClient_t *apiClient, char *tenantId, char *ledgerId, char *api_version, char *x_api_version);


// Gets a ledger by ID
//
// Retrieves the details of a ledger using its unique ID.
//
ledger_dto_envelope_t*
LedgersAPI_getLedgerDetailsAsync(apiClient_t *apiClient, char *tenantId, char *ledgerId, char *api_version, char *x_api_version);


// Retrieves all ledgers
//
// Gets all ledgers for the current tenant with OData support.
//
ledger_dto_i_read_only_list_envelope_t*
LedgersAPI_getLedgersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Counts ledgers
//
// Gets the count of ledgers for the current tenant.
//
int32_envelope_t*
LedgersAPI_getLedgersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates a ledger
//
// Updates the specified ledger.
//
empty_envelope_t*
LedgersAPI_updateLedgerAsync(apiClient_t *apiClient, char *tenantId, char *ledgerId, char *api_version, char *x_api_version, update_ledger_dto_t *update_ledger_dto);


