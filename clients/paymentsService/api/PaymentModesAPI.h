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
#include "../model/payment_mode_create_dto.h"
#include "../model/payment_mode_dto_envelope.h"
#include "../model/payment_mode_dto_i_read_only_list_envelope.h"
#include "../model/payment_mode_update_dto.h"


// Creates a new payment mode
//
// Creates a new payment mode for the current tenant.
//
empty_envelope_t*
PaymentModesAPI_createPaymentModeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, payment_mode_create_dto_t *payment_mode_create_dto);


// Deletes a payment mode
//
// Deletes the specified payment mode.
//
empty_envelope_t*
PaymentModesAPI_deletePaymentModeAsync(apiClient_t *apiClient, char *tenantId, char *paymentModeId, char *api_version, char *x_api_version);


// Gets a payment mode by ID
//
// Retrieves the details of a payment mode using its unique ID.
//
payment_mode_dto_envelope_t*
PaymentModesAPI_getPaymentModeDetailsAsync(apiClient_t *apiClient, char *tenantId, char *paymentModeId, char *api_version, char *x_api_version);


// Retrieves all payment modes
//
// Gets all payment modes for the current tenant with OData support.
//
payment_mode_dto_i_read_only_list_envelope_t*
PaymentModesAPI_getPaymentModesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Counts payment modes
//
// Gets the count of payment modes for the current tenant.
//
int32_envelope_t*
PaymentModesAPI_getPaymentModesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates a payment mode
//
// Updates the specified payment mode.
//
empty_envelope_t*
PaymentModesAPI_updatePaymentModeAsync(apiClient_t *apiClient, char *tenantId, char *paymentModeId, char *api_version, char *x_api_version, payment_mode_update_dto_t *payment_mode_update_dto);


