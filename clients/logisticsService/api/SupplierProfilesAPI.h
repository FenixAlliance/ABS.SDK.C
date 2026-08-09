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
#include "../model/supplier_profile_create_dto.h"
#include "../model/supplier_profile_dto_collection_query_parameters.h"
#include "../model/supplier_profile_dto_envelope.h"
#include "../model/supplier_profile_dto_list_envelope.h"
#include "../model/supplier_profile_update_dto.h"


// Create a supplier profile
//
// Creates a new supplier profile for the specified tenant.
//
empty_envelope_t*
SupplierProfilesAPI_createSupplierProfileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, supplier_profile_create_dto_t *supplier_profile_create_dto);


// Delete a supplier profile
//
// Deletes a supplier profile.
//
empty_envelope_t*
SupplierProfilesAPI_deleteSupplierProfileAsync(apiClient_t *apiClient, char *tenantId, char *supplierProfileId, char *api_version, char *x_api_version);


// Get supplier profile by ID
//
// Retrieves a specific supplier profile by its identifier.
//
supplier_profile_dto_envelope_t*
SupplierProfilesAPI_getSupplierProfileByIdAsync(apiClient_t *apiClient, char *tenantId, char *supplierProfileId, char *api_version, char *x_api_version);


// Get all supplier profiles
//
// Retrieves all supplier profiles for the specified tenant.
//
supplier_profile_dto_list_envelope_t*
SupplierProfilesAPI_getSupplierProfilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, supplier_profile_dto_collection_query_parameters_t *supplier_profile_dto_collection_query_parameters);


// Get supplier profiles count
//
// Returns the count of supplier profiles for the specified tenant.
//
int32_envelope_t*
SupplierProfilesAPI_getSupplierProfilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, supplier_profile_dto_collection_query_parameters_t *supplier_profile_dto_collection_query_parameters);


// Patch a supplier profile
//
// Applies a JSON Patch document to a supplier profile.
//
empty_envelope_t*
SupplierProfilesAPI_patchSupplierProfileAsync(apiClient_t *apiClient, char *tenantId, char *supplierProfileId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a supplier profile
//
// Updates an existing supplier profile.
//
empty_envelope_t*
SupplierProfilesAPI_updateSupplierProfileAsync(apiClient_t *apiClient, char *tenantId, char *supplierProfileId, char *api_version, char *x_api_version, supplier_profile_update_dto_t *supplier_profile_update_dto);


