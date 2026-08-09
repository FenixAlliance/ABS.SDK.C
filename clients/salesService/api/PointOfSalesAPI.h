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
#include "../model/point_of_sale_create_dto.h"
#include "../model/point_of_sale_dto_collection_query_parameters.h"
#include "../model/point_of_sale_dto_envelope.h"
#include "../model/point_of_sale_dto_list_envelope.h"
#include "../model/point_of_sale_update_dto.h"


// Get point of sales count
//
// Returns the total count of point of sales for the specified tenant with OData filter support.
//
int32_envelope_t*
PointOfSalesAPI_countPointOfSalesAsync(apiClient_t *apiClient, char *tenantId, point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters);


// Create a point of sale
//
// Creates a new point of sale for the specified tenant.
//
empty_envelope_t*
PointOfSalesAPI_createPointOfSaleAsync(apiClient_t *apiClient, char *tenantId, point_of_sale_create_dto_t *point_of_sale_create_dto);


// Delete a point of sale
//
// Deletes an existing point of sale by its unique identifier.
//
empty_envelope_t*
PointOfSalesAPI_deletePointOfSaleAsync(apiClient_t *apiClient, char *tenantId, char *pointOfSaleId);


// Get point of sale by ID
//
// Retrieves a single point of sale by its unique identifier.
//
point_of_sale_dto_envelope_t*
PointOfSalesAPI_getPointOfSaleAsync(apiClient_t *apiClient, char *tenantId, char *pointOfSaleId);


// Get point of sales
//
// Retrieves a list of point of sales for the specified tenant with OData query support.
//
point_of_sale_dto_list_envelope_t*
PointOfSalesAPI_getPointOfSalesAsync(apiClient_t *apiClient, char *tenantId, point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters);


// Patch a point of sale
//
// Partially updates an existing point of sale using a JSON Patch document.
//
empty_envelope_t*
PointOfSalesAPI_patchPointOfSaleAsync(apiClient_t *apiClient, char *tenantId, char *pointOfSaleId, list_t *patch_operation);


// Update a point of sale
//
// Updates an existing point of sale by its unique identifier.
//
empty_envelope_t*
PointOfSalesAPI_updatePointOfSaleAsync(apiClient_t *apiClient, char *tenantId, char *pointOfSaleId, point_of_sale_update_dto_t *point_of_sale_update_dto);


