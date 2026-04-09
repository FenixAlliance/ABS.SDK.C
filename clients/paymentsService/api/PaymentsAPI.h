#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/payment_create_dto.h"
#include "../model/payment_dto_list_envelope.h"
#include "../model/payment_update_dto.h"


// Creates a new payment
//
// Creates a new payment for the current tenant.
//
empty_envelope_t*
PaymentsAPI_createPaymentAsync(apiClient_t *apiClient, char *tenantId, payment_create_dto_t *payment_create_dto);


// Deletes a payment
//
// Deletes the specified payment.
//
empty_envelope_t*
PaymentsAPI_deletePaymentAsync(apiClient_t *apiClient, char *tenantId, char *paymentId);


// Gets a payment by ID (deprecated)
//
// Retrieves a payment using the deprecated /Details route. Use GET {paymentId} instead.
//
payment_dto_list_envelope_t*
PaymentsAPI_getPaymentAsync(apiClient_t *apiClient, char *paymentId);


// Gets a payment by ID
//
// Retrieves the details of a payment using its unique identifier.
//
payment_dto_list_envelope_t*
PaymentsAPI_getPaymentAsyncV2(apiClient_t *apiClient, char *paymentId);


// Retrieves all payments
//
// Gets all payments for the current tenant with OData support.
//
payment_dto_list_envelope_t*
PaymentsAPI_getPaymentsAsync(apiClient_t *apiClient, char *tenantId);


// Updates a payment
//
// Updates the specified payment.
//
empty_envelope_t*
PaymentsAPI_updatePaymentAsync(apiClient_t *apiClient, char *tenantId, char *paymentId, payment_update_dto_t *payment_update_dto);


