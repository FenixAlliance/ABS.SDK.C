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
#include "../model/payment_term_create_dto.h"
#include "../model/payment_term_dto_envelope.h"
#include "../model/payment_term_dto_i_read_only_list_envelope.h"
#include "../model/payment_term_update_dto.h"


// Creates a new payment term
//
// Creates a new payment term for the current tenant.
//
empty_envelope_t*
PaymentTermsAPI_createPaymentTermAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, payment_term_create_dto_t *payment_term_create_dto);


// Deletes a payment term
//
// Deletes the specified payment term.
//
empty_envelope_t*
PaymentTermsAPI_deletePaymentTermAsync(apiClient_t *apiClient, char *tenantId, char *paymentTermId, char *api_version, char *x_api_version);


// Gets a payment term by ID
//
// Retrieves the details of a payment term using its unique ID.
//
payment_term_dto_envelope_t*
PaymentTermsAPI_getPaymentTermDetailsAsync(apiClient_t *apiClient, char *tenantId, char *paymentTermId, char *api_version, char *x_api_version);


// Retrieves all payment terms
//
// Gets all payment terms for the current tenant with OData support.
//
payment_term_dto_i_read_only_list_envelope_t*
PaymentTermsAPI_getPaymentTermsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Counts payment terms
//
// Gets the count of payment terms for the current tenant.
//
int32_envelope_t*
PaymentTermsAPI_getPaymentTermsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates a payment term
//
// Updates the specified payment term.
//
empty_envelope_t*
PaymentTermsAPI_updatePaymentTermAsync(apiClient_t *apiClient, char *tenantId, char *paymentTermId, char *api_version, char *x_api_version, payment_term_update_dto_t *payment_term_update_dto);


