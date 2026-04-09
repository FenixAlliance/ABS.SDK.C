#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/deal_unit_create_dto.h"
#include "../model/deal_unit_dto_envelope.h"
#include "../model/deal_unit_dto_list_envelope.h"
#include "../model/deal_unit_line_create_dto.h"
#include "../model/deal_unit_line_dto_envelope.h"
#include "../model/deal_unit_line_dto_list_envelope.h"
#include "../model/deal_unit_line_update_dto.h"
#include "../model/deal_unit_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/extended_deal_unit_dto_envelope.h"
#include "../model/extended_deal_unit_dto_list_envelope.h"
#include "../model/int32_envelope.h"


// Calculate a deal unit
//
// Triggers recalculation of totals and derived values for a specific deal unit.
//
empty_envelope_t*
DealUnitsAPI_calculateDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId);


// Calculate a deal unit line
//
// Triggers recalculation of totals and derived values for a specific deal unit line.
//
empty_envelope_t*
DealUnitsAPI_calculateDealUnitLineAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *dealUnitLineId);


// Create a deal unit
//
// Creates a new deal unit for the specified tenant.
//
empty_envelope_t*
DealUnitsAPI_createDealUnitAsync(apiClient_t *apiClient, char *tenantId, deal_unit_create_dto_t *deal_unit_create_dto);


// Create a deal unit line
//
// Creates a new line within a specific deal unit.
//
empty_envelope_t*
DealUnitsAPI_createGetDealUnitLinesAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, deal_unit_line_create_dto_t *deal_unit_line_create_dto);


// Delete a deal unit
//
// Deletes an existing deal unit by its unique identifier.
//
empty_envelope_t*
DealUnitsAPI_deleteDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId);


// Delete a deal unit line
//
// Deletes an existing line from a specific deal unit.
//
empty_envelope_t*
DealUnitsAPI_deleteDealUnitPriceAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *dealUnitLineId);


// Get deal unit by ID
//
// Retrieves a single deal unit by its unique identifier.
//
deal_unit_dto_envelope_t*
DealUnitsAPI_getDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId);


// Get deal unit lines
//
// Retrieves a list of lines for a specific deal unit with OData query support.
//
deal_unit_line_dto_list_envelope_t*
DealUnitsAPI_getDealUnitLinesAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *itemId);


// Get deal unit lines count
//
// Returns the total count of lines for a specific deal unit with OData filter support.
//
int32_envelope_t*
DealUnitsAPI_getDealUnitLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId);


// Get a deal unit line by ID
//
// Retrieves a single deal unit line by its unique identifier.
//
deal_unit_line_dto_envelope_t*
DealUnitsAPI_getDealUnitPriceAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *dealUnitLineId);


// Get deal units
//
// Retrieves a list of deal units for the specified tenant with OData query support.
//
deal_unit_dto_list_envelope_t*
DealUnitsAPI_getDealUnitsAsync(apiClient_t *apiClient, char *tenantId);


// Get deal units count
//
// Returns the total count of deal units for the specified tenant with OData filter support.
//
int32_envelope_t*
DealUnitsAPI_getDealUnitsCountAsync(apiClient_t *apiClient, char *tenantId);


// Get extended deal unit by ID
//
// Retrieves a single deal unit with extended details by its unique identifier.
//
extended_deal_unit_dto_envelope_t*
DealUnitsAPI_getExtendedDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId);


// Get extended deal units
//
// Retrieves a list of deal units with extended details for the specified tenant with OData query support.
//
extended_deal_unit_dto_list_envelope_t*
DealUnitsAPI_getExtendedDealUnitsAsync(apiClient_t *apiClient, char *tenantId);


// Update a deal unit
//
// Updates an existing deal unit by its unique identifier.
//
empty_envelope_t*
DealUnitsAPI_updateDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, deal_unit_update_dto_t *deal_unit_update_dto);


// Update a deal unit line
//
// Updates an existing line within a specific deal unit.
//
empty_envelope_t*
DealUnitsAPI_updateDealUnitPriceAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *dealUnitLineId, deal_unit_line_update_dto_t *deal_unit_line_update_dto);


