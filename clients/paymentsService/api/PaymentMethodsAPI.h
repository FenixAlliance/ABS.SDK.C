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
#include "../model/payment_method_create_dto.h"
#include "../model/payment_method_dto_envelope.h"
#include "../model/payment_method_dto_i_read_only_list_envelope.h"
#include "../model/payment_method_update_dto.h"


// Creates a new payment method
//
// Creates a new payment method for the current tenant.
//
empty_envelope_t*
PaymentMethodsAPI_createPaymentMethodAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, payment_method_create_dto_t *payment_method_create_dto);


// Deletes a payment method
//
// Deletes the specified payment method.
//
empty_envelope_t*
PaymentMethodsAPI_deletePaymentMethodAsync(apiClient_t *apiClient, char *tenantId, char *paymentMethodId, char *api_version, char *x_api_version);


// Gets a payment method by ID
//
// Retrieves the details of a payment method using its unique ID.
//
payment_method_dto_envelope_t*
PaymentMethodsAPI_getPaymentMethodDetailsAsync(apiClient_t *apiClient, char *tenantId, char *paymentMethodId, char *api_version, char *x_api_version);


// Retrieves all payment methods
//
// Gets all payment methods for the current tenant with OData support.
//
payment_method_dto_i_read_only_list_envelope_t*
PaymentMethodsAPI_getPaymentMethodsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Counts payment methods
//
// Gets the count of payment methods for the current tenant.
//
int32_envelope_t*
PaymentMethodsAPI_getPaymentMethodsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates a payment method
//
// Updates the specified payment method.
//
empty_envelope_t*
PaymentMethodsAPI_updatePaymentMethodAsync(apiClient_t *apiClient, char *tenantId, char *paymentMethodId, char *api_version, char *x_api_version, payment_method_update_dto_t *payment_method_update_dto);


