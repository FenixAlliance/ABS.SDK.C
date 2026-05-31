#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/extended_sales_literature_dto_list_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/sales_literature_create_dto.h"
#include "../model/sales_literature_dto_envelope.h"
#include "../model/sales_literature_dto_list_envelope.h"
#include "../model/sales_literature_update_dto.h"


// Get sales literatures count
//
// Returns the total count of sales literatures for the specified tenant with OData filter support.
//
int32_envelope_t*
SalesLiteraturesAPI_countSalesLiteraturesAsync(apiClient_t *apiClient, char *tenantId);


// Create a sales literature
//
// Creates a new sales literature for the specified tenant.
//
empty_envelope_t*
SalesLiteraturesAPI_createSalesLiteratureAsync(apiClient_t *apiClient, char *tenantId, sales_literature_create_dto_t *sales_literature_create_dto);


// Delete a sales literature
//
// Deletes an existing sales literature by its unique identifier.
//
empty_envelope_t*
SalesLiteraturesAPI_deleteSalesLiteratureAsync(apiClient_t *apiClient, char *tenantId, char *salesLiteratureId);


// Get extended sales literatures
//
// Retrieves a list of sales literatures with extended details for the specified tenant with OData query support.
//
extended_sales_literature_dto_list_envelope_t*
SalesLiteraturesAPI_getExtendedSalesLiteraturesAsync(apiClient_t *apiClient, char *tenantId);


// Get sales literature by ID
//
// Retrieves a single sales literature by its unique identifier.
//
sales_literature_dto_envelope_t*
SalesLiteraturesAPI_getSalesLiteratureAsync(apiClient_t *apiClient, char *tenantId, char *salesLiteratureId);


// Get sales literatures
//
// Retrieves a list of sales literatures for the specified tenant with OData query support.
//
sales_literature_dto_list_envelope_t*
SalesLiteraturesAPI_getSalesLiteraturesAsync(apiClient_t *apiClient, char *tenantId);


// Update a sales literature
//
// Updates an existing sales literature by its unique identifier.
//
empty_envelope_t*
SalesLiteraturesAPI_updateSalesLiteratureAsync(apiClient_t *apiClient, char *tenantId, char *salesLiteratureId, sales_literature_update_dto_t *sales_literature_update_dto);


