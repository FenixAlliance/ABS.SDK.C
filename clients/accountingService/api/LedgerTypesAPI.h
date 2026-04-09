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
#include "../model/ledger_type_create_dto.h"
#include "../model/ledger_type_dto_envelope.h"
#include "../model/ledger_type_dto_i_read_only_list_envelope.h"
#include "../model/ledger_type_update_dto.h"


// Creates a new ledger type
//
// Creates a new ledger type for the current tenant.
//
empty_envelope_t*
LedgerTypesAPI_createLedgerTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, ledger_type_create_dto_t *ledger_type_create_dto);


// Deletes a ledger type
//
// Deletes the specified ledger type.
//
empty_envelope_t*
LedgerTypesAPI_deleteLedgerTypeAsync(apiClient_t *apiClient, char *tenantId, char *ledgerTypeId, char *api_version, char *x_api_version);


// Gets a ledger type by ID
//
// Retrieves the details of a ledger type using its unique ID.
//
ledger_type_dto_envelope_t*
LedgerTypesAPI_getLedgerTypeDetailsAsync(apiClient_t *apiClient, char *tenantId, char *ledgerTypeId, char *api_version, char *x_api_version);


// Retrieves all ledger types
//
// Gets all ledger types for the current tenant with OData support.
//
ledger_type_dto_i_read_only_list_envelope_t*
LedgerTypesAPI_getLedgerTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Counts ledger types
//
// Gets the count of ledger types for the current tenant.
//
int32_envelope_t*
LedgerTypesAPI_getLedgerTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates a ledger type
//
// Updates the specified ledger type.
//
empty_envelope_t*
LedgerTypesAPI_updateLedgerTypeAsync(apiClient_t *apiClient, char *tenantId, char *ledgerTypeId, char *api_version, char *x_api_version, ledger_type_update_dto_t *ledger_type_update_dto);


