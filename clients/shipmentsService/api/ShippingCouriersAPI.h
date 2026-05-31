#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/shipping_courier_create_dto.h"
#include "../model/shipping_courier_dto_envelope.h"
#include "../model/shipping_courier_dto_list_envelope.h"
#include "../model/shipping_courier_update_dto.h"


// Create a shipping courier
//
// Creates a new shipping courier.
//
void
ShippingCouriersAPI_createShippingCourierAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_courier_create_dto_t *shipping_courier_create_dto);


// Delete a shipping courier
//
// Deletes a shipping courier.
//
void
ShippingCouriersAPI_deleteShippingCourierAsync(apiClient_t *apiClient, char *tenantId, char *courierId, char *api_version, char *x_api_version);


// Get shipping courier by ID
//
// Retrieves a specific shipping courier by its ID.
//
shipping_courier_dto_envelope_t*
ShippingCouriersAPI_getShippingCourierByIdAsync(apiClient_t *apiClient, char *tenantId, char *courierId, char *api_version, char *x_api_version);


// Get all shipping couriers
//
// Retrieves all shipping couriers for the specified tenant.
//
shipping_courier_dto_list_envelope_t*
ShippingCouriersAPI_getShippingCouriersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get shipping couriers count
//
// Returns the count of shipping couriers for the specified tenant.
//
int32_envelope_t*
ShippingCouriersAPI_getShippingCouriersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a shipping courier
//
// Updates an existing shipping courier.
//
void
ShippingCouriersAPI_updateShippingCourierAsync(apiClient_t *apiClient, char *tenantId, char *courierId, char *api_version, char *x_api_version, shipping_courier_update_dto_t *shipping_courier_update_dto);


