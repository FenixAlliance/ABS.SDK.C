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
#include "../model/patch_operation.h"
#include "../model/tax_class_create_dto.h"
#include "../model/tax_class_dto_collection_query_parameters.h"
#include "../model/tax_class_dto_envelope.h"
#include "../model/tax_class_dto_list_envelope.h"
#include "../model/tax_class_update_dto.h"


// Create a tax class
//
// Creates a new tax class for the specified tenant.
//
empty_envelope_t*
TaxClassesAPI_createTaxClass(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tax_class_create_dto_t *tax_class_create_dto);


// Delete a tax class
//
// Deletes a tax class identified by its unique identifier.
//
empty_envelope_t*
TaxClassesAPI_deleteTaxClass(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get tax class by ID
//
// Retrieves a specific tax class by its unique identifier.
//
tax_class_dto_envelope_t*
TaxClassesAPI_getTaxClass(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all tax classes for a tenant
//
// Retrieves all tax classes for the specified tenant using OData query options.
//
tax_class_dto_list_envelope_t*
TaxClassesAPI_getTaxClasses(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tax_class_dto_collection_query_parameters_t *tax_class_dto_collection_query_parameters);


// Get tax classes count
//
// Returns the count of tax classes for the specified tenant.
//
int32_envelope_t*
TaxClassesAPI_getTaxClassesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tax_class_dto_collection_query_parameters_t *tax_class_dto_collection_query_parameters);


// Patch a tax class
//
// Partially updates an existing tax class identified by its unique identifier.
//
empty_envelope_t*
TaxClassesAPI_patchTaxClass(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a tax class
//
// Updates an existing tax class identified by its unique identifier.
//
empty_envelope_t*
TaxClassesAPI_updateTaxClass(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, tax_class_update_dto_t *tax_class_update_dto);


