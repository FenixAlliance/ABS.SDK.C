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
#include "../model/shipping_class_create_dto.h"
#include "../model/shipping_class_dto_collection_query_parameters.h"
#include "../model/shipping_class_dto_envelope.h"
#include "../model/shipping_class_dto_list_envelope.h"
#include "../model/shipping_class_update_dto.h"


// Create a shipping class
//
// Creates a new shipping class.
//
void
ShippingClassesAPI_createShippingClassAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_class_create_dto_t *shipping_class_create_dto);


// Delete a shipping class
//
// Deletes a shipping class.
//
void
ShippingClassesAPI_deleteShippingClassAsync(apiClient_t *apiClient, char *tenantId, char *classId, char *api_version, char *x_api_version);


// Get shipping class by ID
//
// Retrieves a specific shipping class.
//
shipping_class_dto_envelope_t*
ShippingClassesAPI_getShippingClassByIdAsync(apiClient_t *apiClient, char *tenantId, char *classId, char *api_version, char *x_api_version);


// Get all shipping classes
//
// Retrieves all shipping classes for the specified tenant.
//
shipping_class_dto_list_envelope_t*
ShippingClassesAPI_getShippingClassesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_class_dto_collection_query_parameters_t *shipping_class_dto_collection_query_parameters);


// Get shipping classes count
//
// Returns the count of shipping classes.
//
int32_envelope_t*
ShippingClassesAPI_getShippingClassesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_class_dto_collection_query_parameters_t *shipping_class_dto_collection_query_parameters);


// Patch a shipping class
//
// Partially updates an existing shipping class using JSON Patch.
//
empty_envelope_t*
ShippingClassesAPI_patchShippingClassAsync(apiClient_t *apiClient, char *tenantId, char *classId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a shipping class
//
// Updates an existing shipping class.
//
void
ShippingClassesAPI_updateShippingClassAsync(apiClient_t *apiClient, char *tenantId, char *classId, char *api_version, char *x_api_version, shipping_class_update_dto_t *shipping_class_update_dto);


