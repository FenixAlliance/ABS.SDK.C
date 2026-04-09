#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/applied_tax_policy_record_create_dto.h"
#include "../model/applied_tax_policy_record_dto_envelope.h"
#include "../model/applied_tax_policy_record_dto_list_envelope.h"
#include "../model/applied_tax_policy_record_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/item_tax_policy_record_create_dto.h"
#include "../model/item_tax_policy_record_dto_envelope.h"
#include "../model/item_tax_policy_record_dto_list_envelope.h"
#include "../model/item_tax_policy_record_update_dto.h"
#include "../model/tax_policy_create_dto.h"
#include "../model/tax_policy_dto_envelope.h"
#include "../model/tax_policy_dto_list_envelope.h"
#include "../model/tax_policy_update_dto.h"


// Create an applied tax policy record
//
// Creates a new applied tax policy record for the specified tax policy.
//
empty_envelope_t*
TaxPoliciesAPI_createAppliedTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *api_version, char *x_api_version, applied_tax_policy_record_create_dto_t *applied_tax_policy_record_create_dto);


// Create an item tax policy record
//
// Creates a new item tax policy record for the specified tax policy.
//
empty_envelope_t*
TaxPoliciesAPI_createItemTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *api_version, char *x_api_version, item_tax_policy_record_create_dto_t *item_tax_policy_record_create_dto);


// Create a tax policy
//
// Creates a new tax policy for the specified tenant.
//
empty_envelope_t*
TaxPoliciesAPI_createTaxPolicy(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tax_policy_create_dto_t *tax_policy_create_dto);


// Delete an applied tax policy record
//
// Deletes an applied tax policy record identified by its unique identifier.
//
empty_envelope_t*
TaxPoliciesAPI_deleteAppliedTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *appliedTaxPolicyRecordId, char *api_version, char *x_api_version);


// Delete an item tax policy record
//
// Deletes an item tax policy record identified by its unique identifier.
//
empty_envelope_t*
TaxPoliciesAPI_deleteItemTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *itemTaxPolicyRecordId, char *api_version, char *x_api_version);


// Delete a tax policy
//
// Deletes a tax policy identified by its unique identifier.
//
empty_envelope_t*
TaxPoliciesAPI_deleteTaxPolicy(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get applied tax policy record by ID
//
// Retrieves a specific applied tax policy record by its unique identifier.
//
applied_tax_policy_record_dto_envelope_t*
TaxPoliciesAPI_getAppliedTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *appliedTaxPolicyRecordId, char *api_version, char *x_api_version);


// Get applied tax policy records
//
// Retrieves all applied tax policy records for the specified tax policy.
//
applied_tax_policy_record_dto_list_envelope_t*
TaxPoliciesAPI_getAppliedTaxPolicyRecords(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *api_version, char *x_api_version);


// Get applied tax policy records count
//
// Returns the total count of applied tax policy records for the specified tax policy.
//
int32_envelope_t*
TaxPoliciesAPI_getAppliedTaxPolicyRecordsCount(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *api_version, char *x_api_version);


// Get item tax policy record by ID
//
// Retrieves a specific item tax policy record by its unique identifier.
//
item_tax_policy_record_dto_envelope_t*
TaxPoliciesAPI_getItemTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *itemTaxPolicyRecordId, char *api_version, char *x_api_version);


// Get item tax policy records
//
// Retrieves all item tax policy records for the specified tax policy.
//
item_tax_policy_record_dto_list_envelope_t*
TaxPoliciesAPI_getItemTaxPolicyRecords(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *api_version, char *x_api_version);


// Get all tax policies for a tenant
//
// Retrieves all tax policies for the specified tenant using OData query options.
//
tax_policy_dto_list_envelope_t*
TaxPoliciesAPI_getTaxPolicies(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get tax policies by fiscal authority
//
// Retrieves all tax policies associated with the specified fiscal authority.
//
tax_policy_dto_list_envelope_t*
TaxPoliciesAPI_getTaxPoliciesByAuthority(apiClient_t *apiClient, char *tenantId, char *authorityId, char *api_version, char *x_api_version);


// Get tax policies count
//
// Returns the count of tax policies for the specified tenant.
//
int32_envelope_t*
TaxPoliciesAPI_getTaxPoliciesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get tax policy by ID
//
// Retrieves a specific tax policy by its unique identifier.
//
tax_policy_dto_envelope_t*
TaxPoliciesAPI_getTaxPolicy(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Update an applied tax policy record
//
// Updates an existing applied tax policy record identified by its unique identifier.
//
empty_envelope_t*
TaxPoliciesAPI_updateAppliedTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *appliedTaxPolicyRecordId, char *api_version, char *x_api_version, applied_tax_policy_record_update_dto_t *applied_tax_policy_record_update_dto);


// Update an item tax policy record
//
// Updates an existing item tax policy record identified by its unique identifier.
//
empty_envelope_t*
TaxPoliciesAPI_updateItemTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *itemTaxPolicyRecordId, char *api_version, char *x_api_version, item_tax_policy_record_update_dto_t *item_tax_policy_record_update_dto);


// Update a tax policy
//
// Updates an existing tax policy identified by its unique identifier.
//
empty_envelope_t*
TaxPoliciesAPI_updateTaxPolicy(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, tax_policy_update_dto_t *tax_policy_update_dto);


