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
#include "../model/shipping_method_create_dto.h"
#include "../model/shipping_method_dto_collection_query_parameters.h"
#include "../model/shipping_method_dto_envelope.h"
#include "../model/shipping_method_dto_list_envelope.h"
#include "../model/shipping_method_update_dto.h"


// Create a shipping method
//
// Creates a new shipping method.
//
void
ShippingMethodsAPI_createShippingMethodAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_method_create_dto_t *shipping_method_create_dto);


// Delete a shipping method
//
// Deletes a shipping method.
//
void
ShippingMethodsAPI_deleteShippingMethodAsync(apiClient_t *apiClient, char *tenantId, char *methodId, char *api_version, char *x_api_version);


// Get shipping method by ID
//
// Retrieves a specific shipping method.
//
shipping_method_dto_envelope_t*
ShippingMethodsAPI_getShippingMethodByIdAsync(apiClient_t *apiClient, char *tenantId, char *methodId, char *api_version, char *x_api_version);


// Get all shipping methods
//
// Retrieves all shipping methods for the specified tenant.
//
shipping_method_dto_list_envelope_t*
ShippingMethodsAPI_getShippingMethodsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_method_dto_collection_query_parameters_t *shipping_method_dto_collection_query_parameters);


// Get shipping methods count
//
// Returns the count of shipping methods.
//
int32_envelope_t*
ShippingMethodsAPI_getShippingMethodsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_method_dto_collection_query_parameters_t *shipping_method_dto_collection_query_parameters);


// Patch a shipping method
//
// Partially updates an existing shipping method using JSON Patch.
//
empty_envelope_t*
ShippingMethodsAPI_patchShippingMethodAsync(apiClient_t *apiClient, char *tenantId, char *methodId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a shipping method
//
// Updates an existing shipping method.
//
void
ShippingMethodsAPI_updateShippingMethodAsync(apiClient_t *apiClient, char *tenantId, char *methodId, char *api_version, char *x_api_version, shipping_method_update_dto_t *shipping_method_update_dto);


