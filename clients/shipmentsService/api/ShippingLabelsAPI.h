#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/shipping_label_create_dto.h"
#include "../model/shipping_label_dto_envelope.h"
#include "../model/shipping_label_dto_list_envelope.h"
#include "../model/shipping_label_update_dto.h"


// Create a shipping label
//
// Creates a new shipping label.
//
void
ShippingLabelsAPI_createShippingLabelAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_label_create_dto_t *shipping_label_create_dto);


// Delete a shipping label
//
// Deletes a shipping label.
//
void
ShippingLabelsAPI_deleteShippingLabelAsync(apiClient_t *apiClient, char *tenantId, char *labelId, char *api_version, char *x_api_version);


// Get shipping label by ID
//
// Retrieves a specific shipping label.
//
shipping_label_dto_envelope_t*
ShippingLabelsAPI_getShippingLabelByIdAsync(apiClient_t *apiClient, char *tenantId, char *labelId, char *api_version, char *x_api_version);


// Get all shipping labels
//
// Retrieves all shipping labels for the specified tenant.
//
shipping_label_dto_list_envelope_t*
ShippingLabelsAPI_getShippingLabelsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get shipping labels count
//
// Returns the count of shipping labels.
//
int32_envelope_t*
ShippingLabelsAPI_getShippingLabelsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a shipping label
//
// Updates an existing shipping label.
//
void
ShippingLabelsAPI_updateShippingLabelAsync(apiClient_t *apiClient, char *tenantId, char *labelId, char *api_version, char *x_api_version, shipping_label_update_dto_t *shipping_label_update_dto);


