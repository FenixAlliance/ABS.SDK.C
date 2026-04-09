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
#include "../model/tax_rate_create_dto.h"
#include "../model/tax_rate_dto_envelope.h"
#include "../model/tax_rate_dto_list_envelope.h"
#include "../model/tax_rate_update_dto.h"


// Create a tax rate
//
// Creates a new tax rate for the specified tenant.
//
empty_envelope_t*
TaxRatesAPI_createTaxRate(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tax_rate_create_dto_t *tax_rate_create_dto);


// Delete a tax rate
//
// Deletes a tax rate identified by its unique identifier.
//
empty_envelope_t*
TaxRatesAPI_deleteTaxRate(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get tax rate by ID
//
// Retrieves a specific tax rate by its unique identifier.
//
tax_rate_dto_envelope_t*
TaxRatesAPI_getTaxRate(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all tax rates for a tenant
//
// Retrieves all tax rates for the specified tenant using OData query options.
//
tax_rate_dto_list_envelope_t*
TaxRatesAPI_getTaxRates(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get tax rates count
//
// Returns the count of tax rates for the specified tenant.
//
int32_envelope_t*
TaxRatesAPI_getTaxRatesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tax rate
//
// Updates an existing tax rate identified by its unique identifier.
//
empty_envelope_t*
TaxRatesAPI_updateTaxRate(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, tax_rate_update_dto_t *tax_rate_update_dto);


